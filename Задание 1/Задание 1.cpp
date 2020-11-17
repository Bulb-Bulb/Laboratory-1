#include <iostream>
using namespace std;

int main()
{
	{
		double pow, p, a;  //ввод переменных p,a
		cout << " Write p= "; //вывод строки на экран
		cin >> p; //вывод строки с консоли
		cout << " Write a= "; //вывод строки на экран
		cin >> a; //вывод строки с консоли
		pow = p * a;
		cout << p << "*" << a << "=" << pow << endl;
		system("pause");
		return 0;
	}
}