#include <QtCore/QCoreApplication>
#include <iostream>
#include <math.h>
#include <clocale>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{int i, n = 100, vr;
double a[100];
setlocale(LC_ALL, "RUSSIAN");
cout<<" �������� �����o����� ��������:\n";
cout<<" 1 - ���������� �� �����\n 2 - ��������� �������\n";
cin>>vr;

switch (vr)
{
    case 1:
    {
        cout<<"�������� ������:"<<endl;
        ifstream fin("massiv.txt");
        for (i=0; i<n; i++)
        {
            fin>>a[i];
            cout<<a[i]<<endl;
        }
        break;
    }
    case 2:
    {
            cout<<"�������� ������:"<<endl;
            for (i=0; i<n; i++)
            {
                a[i]=int(rand()%1000);
                cout<<a[i]<<endl;
            }
                break;
    }
}
cout<<endl;
getch();
return 0;
}
