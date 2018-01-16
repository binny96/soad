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
cout<<" Выберите необхoдимое действие:\n";
cout<<" 1 - считывание из файла\n 2 - случайным образом\n";
cin>>vr;

switch (vr)
{
    case 1:
    {
        cout<<"Исходный массив:"<<endl;
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
            cout<<"Исходный массив:"<<endl;
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
