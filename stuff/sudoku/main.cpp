#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;


//��������� � ������ - ���������� ������ ����� �����
struct Puzzle
{
    int data[9][9];
} puzzle ;
/*{
    //��������� ���
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

//�������� �����
bool check(const Puzzle &puzzle)
{
    //����������� �� ���� �������
    for (int i = 0; i < 9; i++)   //
        //���������� �� ���� ��������
        for (int j = 0; j < 9; j++)  //
            //�������� ��� ������� �� ���������
            for (int k = j + 1; k < 9; k++)  //
            {
                //���� ����� �� 0, ��������� ��� ��� ������ �� ���������� � ������
                if (puzzle.data[i][j] != 0 && puzzle.data[i][j] == puzzle.data[i][k])
                    return false;
                //���� ����� �� 0, ��������� ��� ��� ������ �� ���������� � �������
                if (puzzle.data[j][i] != 0 && puzzle.data[j][i] == puzzle.data[k][i])
                    return false;
                //�������� ��� ��������� 3�3
                if (puzzle.data[j % 3 + (i % 3) * 3][j / 3 + (i / 3) * 3] != 0 &&
                        puzzle.data[j % 3 + (i % 3) * 3][j / 3 + (i / 3) * 3] ==
                        puzzle.data[k % 3 + (i % 3) * 3][k / 3 + (i / 3) * 3])
                    return false;
            }
    //������ �����
    return true;
}

//���� �������
bool findSolution(Puzzle &puzzle)
{
//��������� �����������
    int x = -1;
    int y = -1;
    int min = 10;
    //����������� �� ������
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            //���� ������� 0
            if (puzzle.data[i][j] == 0)
            {
                //�������� ���������� �������
                int c = 0;
                //����������� �������� �� 1 �� 9
                for (int k = 1; k <= 9; k++)
                {
                    puzzle.data[i][j] = k;
                    //��������� �� ������������
                    if (check(puzzle))
                        //����������� ���������� �������
                        c++;
                    //�������� �������
                    puzzle.data[i][j] = 0;
                }
                //���� ������� ����������
                if (min > c)
                {
                    //����� ������� � ���������� ������� �������
                    min = c;
                    x = i;
                    y = j;
                }
            }
        }
    // ��� ������� ���������� ������
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
                if((j+1) % 3==0) cout<< "   "; //��������� ����� �� 3

            }
            cout << endl;
            if((i+1) % 3==0) cout<< endl; //��������� ����� �� 3
        }
*/
    //��� ���������� ������ ��������� �������� ������
    for (int k = 1; k <= 9; ++k)
    {
        puzzle.data[x][y] = k;
        if (check(puzzle))
            if (findSolution(puzzle))
                return true;
    }
    //������� �� �������, ���������� ����
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
            if((j+1) % 3==0) cout<< "   "; //��������� ����� �� 3
        }
        cout << endl;
        if((i+1) % 3==0) cout<< endl; //��������� ����� �� 3
    }


    cout << "\nWorking on puzzle...\n\n\n";



    if (findSolution(puzzle))
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {

                cout << puzzle.data[i][j] << " ";
                if((j+1) % 3==0) cout<< "   "; //��������� ����� �� 3

            }
            cout << endl;
            if((i+1) % 3==0) cout<< endl; //��������� ����� �� 3
        }
    }
    else
        cout << "No solution\n";

         myfile.close();
}
