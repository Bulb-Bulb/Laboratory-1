#include <iostream>
using namespace std;
int main()
{
	int x, y;  //ввод переменных x,y
	cout << "Input x and y "; //вывод строки на экран
	cin >> x >> y; //вывод строки с консоли
stg:swap(x, y);
	cout << x << "," << y << endl;
	system("pause");
	return 0;
}