//���������� ��������� nlogn?
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
//����� ���������� ����������
void insertSort(int* a,int* b ,int size)
{
    int i, j, tmp,tmp2;
    for (i = 1; i < size; ++i)
    {
        tmp = a[i];
        tmp2 = b[i];
        for (j = i - 1; j >= 0 && a[j] > tmp; --j)
        {
            a[j + 1] = a[j];
            b[j+1]=b[j];
        }
        a[j + 1] = tmp;
        b[j+1]=tmp2;
    }
}

//��� �� ����� ��������� ������
for(i=0; i<m; i++)
    {
        left=0;
        right=n;
        while(left<=right)
        {
            key=left+(right-left)/2;
            //cout<<key <<" key "<<a[key]<<" key+1 "<<a[key+1]<<" isk "<<q[i] <<endl;
            //cin>>temp;
            if(a[key]<q[i]&&q[i]<=a[key+1])
            {
                cout<< key+1<<endl;
                break;
            }
            else
                if (a[key]>=q[i])
                    right=key-1;
                    else left=key+1;
        }

    }

std::ios::sync_with_stdio(false);  !!! ���������� ������������� IOSTREAM � STDIO ������ ���� �������� � ����� ��!!!

bool mysort(vector<int> i,vector<int> j) { return (i[1]<j[1]); }        ������� ��� sort �� ������� �������� ������� ��������
vector<vector <int> > a (n, vector<int>(2));                              ������ �� n ��������� �� 2
sort(a.begin(),a.end(),mysort);                                            n*log(n) ���������� �������� � ��������

min=1;
minn=-((minn<<(n-(unsigned)?0:1))+1); // ������������ �������� ������������� n - ����� �������� int32 int64 � ����
