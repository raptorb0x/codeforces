//  ��������? ������ ��������
//  �� ������� ������ �� ������� �����
//  ������ ������ ����� ���������� ������ ����� �������� 1 5 7
//  �������� ������� ���������� ��������������, ����� �������
//  ������ �������� �� ������ ������� ����������� �������
//  �������� ��� 24 - 6 ����� (7+7+7+1+1+1)
//  ���������� ����� 4 ������ (7+7+5+5)

#include <stdio.h>
#include <stdlib.h>

//���������� ���������

void insertSort(int* a, int size)
{
    int i, j, tmp;
    for (i = 1; i < size; ++i)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0 && a[j] < tmp; --j)
            a[j + 1] = a[j];
        a[j + 1] = tmp;
    }
}

//����� �����
int summ(int* a,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++) sum+=a[i];
    return sum;
}

int main()
{
    int in,i,out[3],opt_out[3],temp,num=0;
    int nom[3]= {1,5,6}; // �������� �����
    int start =1; // ������
    int end = 1000000; // �����

    //scanf("%d",&in);

    for(in=start;in<end;in++){
    temp=in;
    insertSort(nom,3); // ����������� �������� �� ��������
    for (i=0; i<3; i++)
    {
        out[i]=temp/nom[i];
        temp%=nom[i];
    }

    //������ ����������� ������ �������� ���������
/*
    printf("\n\tFor %d\n",in);
    puts("Pure greed algorithm\n");
    for (i=0; i<3; i++) printf("Number %d coins = %d\n",nom[i],out[i]);
    printf("\n\tCoin's %d\n",summ(out,3));
*/
/*
    ��� ��������� ��������������
    �������� ����� - ������� ��� ����� � ��������� ������������� ���������� ����
    �������� ������ ������������ ��������
    � �������� � ���� ������ ��������
*/
    opt_out[0]=out[0]-1;
    temp=in-nom[0]*(opt_out[0]);
    for (i=1; i<3; i++)
    {
        opt_out[i]=temp/nom[i];
        temp%=nom[i];
    }

    //������ ����������� ������ ������ ����������������� ���������
/*
    puts("\nOptimized? greed algorithm\n");
    if (summ(out,3)>summ(opt_out,3)) for (i=0; i<3; i++) printf("Number %d coins = %d\n",nom[i],opt_out[i]);
    else for (i=0; i<3; i++) printf("Number %d coins = %d\n",nom[i],out[i]);
    printf("\n\tCoin's %d\n",((summ(out,3)>summ(opt_out,3)))?summ(opt_out,3):summ(out,3));
*/
    //������� ���������� �������, ����� ��������� ��� �������

    (summ(out,3)>summ(opt_out,3))?num++:0;

    }
    printf("\n\tFrom %d to %d Opt in %d cases\n",start,end,num);
    printf("\n\tIt's about %.4f percent of cases", (num*1.0)/((end-start)*1.0) );
    return 0;
}
