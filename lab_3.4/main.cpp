// Lab_03_4.cpp
// < Могила Тарас Русланович >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 21
#include <iostream>
using namespace std;
int main()
{
 double x; // вхідний аргумент
 double y; // вхідний параметр
 double R;
 
 cout << "x = "; cin >> x;
 cout << "y = "; cin >> y;
 cout << "R = "; cin >> R;
 
 // розгалуження в повній формі
 if ((x*x+y*y<=R*R && x>0 && y>x)||(x*x+y*y<=R*R && x<0 && y<x))
 cout << "yes" << endl;
 else
 cout << "no" << endl;
 cin.get();
 return 0;
}
