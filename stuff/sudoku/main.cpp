#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;


//структура с судоку - двухмерный массив целых чисел
struct Puzzle
{
    int data[9][9];
} puzzle ;
/*{
    //заполняем его
  {
    { 8, 0, 0,    0, 0, 0,    0, 0, 0 },
    { 0, 0, 3,    6, 0, 0,    0, 0, 0 },
    { 0, 7, 0,    0, 9, 0,    2, 0, 0 },

    { 0, 5, 0,    0, 0, 7,    0, 0, 0 },
    { 0, 0, 0,    0, 4, 5,    7, 0, 0 },
    { 0, 0, 0,    1, 0, 0,    0, 3, 0 },

    { 0, 0, 1,    0, 0, 0,    0, 6, 8 },
    { 0, 0, 8,    5, 0, 0,    0, 1, 0 },
    { 0, 9, 0,    0, 0, 0,    4, 0, 0 },
  }
};*/

//проверка пазла
bool check(const Puzzle &puzzle)
{
    //пробегаемся по всем сточкам
    for (int i = 0; i < 9; i++)   //
        //прбегаемся по всем столбцам
        for (int j = 0; j < 9; j++)  //
            //итератор для прохода по элементам
            for (int k = j + 1; k < 9; k++)  //
            {
                //если число не 0, проверяем что оно больше не всречается в строке
                if (puzzle.data[i][j] != 0 && puzzle.data[i][j] == puzzle.data[i][k])
                    return false;
                //если число не 0, проверяем что оно больше не всречается в столбце
                if (puzzle.data[j][i] != 0 && puzzle.data[j][i] == puzzle.data[k][i])
                    return false;
                //проверка для квадратов 3х3
                if (puzzle.data[j % 3 + (i % 3) * 3][j / 3 + (i / 3) * 3] != 0 &&
                        puzzle.data[j % 3 + (i % 3) * 3][j / 3 + (i / 3) * 3] ==
                        puzzle.data[k % 3 + (i % 3) * 3][k / 3 + (i / 3) * 3])
                    return false;
            }
    //судоку верна
    return true;
}

//ищем решение
bool findSolution(Puzzle &puzzle)
{
//локальные перерменные
    int x = -1;
    int y = -1;
    int min = 10;
    //пробегаемся по судоку
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            //если элемент 0
            if (puzzle.data[i][j] == 0)
            {
                //обнуляем количество решений
                int c = 0;
                //подставляем значения от 1 до 9
                for (int k = 1; k <= 9; k++)
                {
                    puzzle.data[i][j] = k;
                    //проверяем на правильность
                    if (check(puzzle))
                        //увеличиваем количество решений
                        c++;
                    //обнуляем элемент
                    puzzle.data[i][j] = 0;
                }
                //если решение минимально
                if (min > c)
                {
                    //новый минимум и координаты вектора решения
                    min = c;
                    x = i;
                    y = j;
                }
            }
        }
    // все отсеяно возвращаем истину
    if (x == -1)
        return true;

/*
    HANDLE hOutput = ::GetStdHandle(STD_OUTPUT_HANDLE);
     COORD coord = {0,17};
   ::SetConsoleCursorPosition(hOutput, coord);



    for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {

                cout << puzzle.data[i][j] << " ";
                if((j+1) % 3==0) cout<< "   "; //разделяем блоки на 3

            }
            cout << endl;
            if((i+1) % 3==0) cout<< endl; //разделяем блоки на 3
        }
*/
    //для полученных данных запускаем рекурсию глубже
    for (int k = 1; k <= 9; ++k)
    {
        puzzle.data[x][y] = k;
        if (check(puzzle))
            if (findSolution(puzzle))
                return true;
    }
    //решение не найдено, возвращаем ложь
    puzzle.data[x][y] = 0;
    return false;
}

int main()
{
    /*   string line;
       ifstream myfile ("example.txt");
       if (myfile.is_open())
       {
           while ( getline (myfile,line) )
           {
               cout << line << '\n';
           }
           myfile.close();
       }

       else cout << "Unable to open file"
       */

    ifstream myfile ("sudoku.txt");

    if (!(myfile.is_open()))
    {
        cout << "Unable to open file" <<endl;
        return 1;
    }

    cout << "Processing file...\n" <<endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {

            myfile>> puzzle.data[i][j];
            cout << puzzle.data[i][j] << " ";
            if((j+1) % 3==0) cout<< "   "; //разделяем блоки на 3
        }
        cout << endl;
        if((i+1) % 3==0) cout<< endl; //разделяем блоки на 3
    }


    cout << "\nWorking on puzzle...\n\n\n";



    if (findSolution(puzzle))
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {

                cout << puzzle.data[i][j] << " ";
                if((j+1) % 3==0) cout<< "   "; //разделяем блоки на 3

            }
            cout << endl;
            if((i+1) % 3==0) cout<< endl; //разделяем блоки на 3
        }
    }
    else
        cout << "No solution\n";

         myfile.close();
}
