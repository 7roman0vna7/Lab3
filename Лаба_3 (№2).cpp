#include <iostream>
using namespace std;

long double factorial(int x) {         //функция для вычисления факториала
	if (x < 0)                         
		return 0;
	if (x == 0)
		return 1;
	else
		return x * factorial(x - 1);
}

int main() {
	setlocale(0, "");
	cout << "Введите число: " << endl;
	int x = 0;
	cin >> x;
	cout << "Выберите дейстие:\n\
1.Найти факториал числа.\n\
2.Вывести все натуральные предыдущие числа." << "\n";
	int c = 0;
	cin >> c;
	switch (c) {
	case 1:
		cout << "Факториал для числа " << x << " = " << factorial(x) << endl;
		break;
	case 2:
		x = x + 1;                //чтобы в цикле вывелось ещё число, которое ввёл пользователь
		cout << "Предыдущие числа: " << endl;
		while (x > 0) {
			x = x - 1;
			cout << x << endl;
		}
		break;
	}
	return 0;
}