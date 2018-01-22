#include <QtCore/QCoreApplication>
#include <iostream>
#include <math.h>
#include <clocale>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <time.h>

using namespace std;

void selection(int *ar, int n)
{
    int i, j, mx, nmx;
    for(i = 0; i < n-1; i++)
    {
        mx=ar[i];
        nmx=i;
        for(j = i+1; j < n; j++)
        {
            if (ar[j]<mx)
            {
                mx=ar[j];
                nmx=j;
            }
        }
        ar[nmx]=ar[i];
        ar[i]=mx;
    }
}

int main()
{int i, n = 10000, vr;
int* a = new int[n];
setlocale(LC_ALL, "RUSSIAN");
cout<<" �������� �����o����� ��������:\n";
cout<<"1 - ���������� �� �����\n2 - ��������� �������\n";
cin>>vr;

switch (vr)
{
    case 1:
    {
        cout<<"\n�������� ������:\n";
        ifstream fin("C:\\massiv.txt");
        for (i=0; i<n; i++)
        {
            fin>>a[i];
            cout<<a[i]<<endl;
        }

        clock_t start = clock();
        selection(a, n);
        clock_t end = clock();

        cout<<"\n���������� �������:\n";
        for (i=0; i<n; i++)
        {

            cout<<a[i]<<endl;
        }
        cout<<"\n����� ����������: "<<end-start;
        break;
    }
    case 2:
    {
            cout<<"\n�������� ������:\n";
            for (i=0; i<n; i++)
            {
                a[i]=int(rand()%10000);
                cout<<a[i]<<endl;
            }

            clock_t start = clock();
            selection(a, n);
            clock_t end = clock();

            cout<<"\n���������� �������:\n";
            for (i=0; i<n; i++)
            {

                cout<<a[i]<<endl;
            }
            cout<<"\n����� ����������: "<<end-start;
            break;
    }
}

cout<<endl;
delete[] a;
getch();
return 0;
}
