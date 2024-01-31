#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool IsWorking = true;
	while (IsWorking == true)
	{
		int ch;
		float a;
		float b;
		int one = 1;

		setlocale(LC_ALL, "RUS");
		cout << "Калькулятор!\nВыберите действие, написав соответствующую цифру:\n1. Сложение\n2. Вычитание\n3. Деление\n4. Умножение\n5. Возведение в степень" << endl;
		cout << "\n6. Факториал\n7. Нахождение 1% от числа\n8. Квадратный корень\n0. Выход из программы" << endl; 
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "\nВведите второе число: " << endl;
			cin >> b;
			cout << "Ваш ответ: " << a + b << endl;
			break;

		case 2:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "\nВведите второе число: " << endl;
			cin >> b;
			cout << "Ваш ответ: " << a - b << endl;
			break;

		case 3:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "\nВведите второе число: " << endl;
			cin >> b;
			cout << "Ваш ответ: " << a / b << endl;
			break;

		case 4:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "\nВведите второе число: " << endl;
			cin >> b;
			cout << "Ваш ответ: " << a * b << endl;
			break;

		case 5:
			cout << "Введите число: ";
			cin >> a;
			cout << "\nВведите показатель степени: " << endl;
			cin >> b;
			cout << "Ваш ответ: " << pow(a,b) << endl;
			break;

		case 6:
			cout << "Введите число: ";
			cin >> a;
			for (int i = 1; i < a; i++)
			{
				one *= i;
			}
			cout << "Ваш ответ: " << one << endl;
			break;

		case 7:
			cout << "Введите число: " << endl;
			cin >> a;
			cout << "Ваш ответ: " << a / 100 << endl;
			break;

		case 8:
			cout << "Введите число: " << endl;
			cin >> a;
			cout << "Ваш ответ: " << sqrt(a) << endl;
			break;

		case 0:
			IsWorking = false;
			break;
		}
	}
	return 0;
}

