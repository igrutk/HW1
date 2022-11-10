//в файле при каждой задаче вводится <iostream>, т.к. каждая задача была написана отдельно от остальных 
//задача 1

#include <iostream>

int main()
{
	std::cout << "Enter the length of the upper base of the trapezium";// просим пользователя ввести любое число
	int b1 = 0;
	std::cin >> b1;// получаем число пользователя и сохраняем его в b1
	std::cout << "Enter the length of the lower base of the trapezium";// просим пользователя ввести любое число
	int b2 = 0;
	std::cin >> b2;// получаем число пользователя и сохраняем его в b2
	std::cout << "Enter the length of the height of the trapezium";// просим пользователя ввести любое число
	int h = 0;
	std::cin >> h;// получаем число пользователя и сохраняем его в h
	int S;//вводим целочисленную переменную
	S = (((b1 + b2)/2) * h);
	std::cout << "The area of trapezium:" << S << std::endl;//ввывод итога работы программы, значение S
	return 0;//очищаем все значения


}

//задача 2
//1 вариант решения
#include <iostream>

int main()
{
	std::cout << "Enter the radius: ";// просим пользователя ввести любое число
	double r = 0;//тип числа вещественный, число с плавающей точкой, чтобы пользователь мог вводить дробные числа
	std::cin >> r;// получаем число пользователя и сохраняем его в r
	int P;//в данном случае запрашивается целочисленное значение --> при выводе мы получим целое чило несмотря на дробное пи
	P = (2 * 3.14 * r);
	int S;//в данном случае запрашивается целочисленное значение --> при выводе мы получим целое чило несмотря на дробное пи
	S = (3.14 * r * r);
	std::cout << "The lengh: " << P << "  The area: " << S << std::endl;//вывод результатов работы программы
	return 0;//очищаем все значения
}
//2 вариант решения
#include <iostream>

int main()
{
	std::cout << "Enter the radius: ";// просим пользователя ввести любое целое число
	int r = 0;
	std::cin >> r;// получаем число пользователя и сохраняем его в r
	int P;//в данном случае запрашивается целочисленное значение --> при выводе мы получим целое чило несмотря на дробное пи
	P = (2 * r);
	int S;//в данном случае запрашивается целочисленное значение --> при выводе мы получим целое чило несмотря на дробное пи
	S = (r * r);
	std::cout << "The lengh: " << P << "pi" << "  The area: " << S << "pi" << std::endl;//вывод результатов работы программы
	return 0;//очищаем все значения
}
//3 вариант
#include <iostream>

int main()
{
	double r;//вещественное число с плавающей точкой
	const double pi = 3.14;//вещественное число с плавающей точкой, ввод пи, как константы, т.е. постоянной 
	std::cout << "Enter radius: ";
	std::cin >> r;// получаем число пользователя и сохраняем его в r
	double P = 2 * pi * r;//сразу присваиваем переменной значение, переменная - число с плавающей точкой
	double S = pi * r * r;//сразу присваиваем переменной значение, переменная - число с плавающей точкой
	std::cout << "The lengh:" << P << "  The area:" << S << std::endl;//вывод результатов работы программы
	return 0;//очищаем все значения
}

//3 задание
#include <iostream>

int main()
{
	int a;//ввод первого катета 
	std::cout << "Enter the first leg: ";
	std::cin >> a;//получаем число пользователя и сохраняем его в а
	int b;//ввод второго катета 
	std::cout << "Enter the second leg: ";
	std::cin >> b;//получаем число пользователя и сохраняем его в b
	int S = (a * b) / 2;
	int c;
	c = sqrt(a * a + b * b);
	std::cout << "The hypotenuse:" << c << "  The area:" << S << std::endl;//вывод результатов работы программы
	return 0;//очищаем все значения
}

//4 задание
#include <iostream>

int main()
{
	int n;
	int sum;
	std::cout << "Enter four-digit number: ";
	std::cin >> n;
	int a, b, c, d;
	if (n < 1000)
	{
		std::cout << "Your number is not correct: ";
		return 0;
	}
	if (n >= 10000)
	{
		std::cout << "Your number is not correct: ";
		return 0;
	}
	if (n >= 1000 && n <= 9999);
	{
		a = n / 1000 % 10;
		b = n / 100 % 10;
		c = n / 10 % 10;
		d = n % 10;
		return (sum = a + b + c + d);
	}

	std::cout << "Summa:" << sum << std::endl;//вывод результатов работы программы
	return 0;
}

//5 задание
#include <iostream>

int main()
{
	double T, r, x, y;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	r = sqrt(x * x + y * y);
	T = atan2(y, x);

	std::cout << "Polar: (" << r << ", " << T << ")" << std::endl;//вывод результатов работы программы
	return 0;
}

//6 задание
#include <iostream>

int main()
{
	double T, r, x, y;
	std::cout << "Enter r: ";
	std::cin >> r;
	std::cout << "Enter T: ";
	std::cin >> T;

	x = r * cos(T);
	y = r * sin(T);

	std::cout << "Deca: (" << x << ", " << y << ")" << std::endl;//вывод результатов работы программы
	return 0;
}
//7 задание
#include <iostream>

int main()
{
	double a, b, c;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;

	double d = b * b - 4 * a * c;// Дискриминант
	if (d > 0)
	{
		double q = b >= 0 ? (-b - sqrt(d)) / 2 : (-b + sqrt(d)) / 2;// Стандартное `-b +- sqrt(d) / 2 * a`, но без `a` в знаменателе 
		// расшифровка: если b больше или равна 0 мы возвращаем (-b - sqrt(d)) / 2, иначе (-b + sqrt(d)) / 2
		double x1 = q / a;
		double x2 = c / q;

		std::cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << std::endl;//вывод результатов работы программы
		return 0;
	}
	if (d == 0)
	{
		double x = (-b) / (2 * a);
		std::cout << "Root: x = " << x << std::endl;//вывод результатов работы программы
		return 0;

	}
	if (d < 0)
	{
		std::cout << "Sorry, but I cannot work with complex numbers. I have paws." << std::endl;//вывод результатов работы программы
		return 0;
	}
}
//8 задание
#include <iostream>

int main()
{
	double a, b, c;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;
	if ((a <= 0) || (b <= 0) || (c <= 0))
	{
		std::cout << "Incorrect number" << std::endl;//вывод результатов работы программы
		return 0;
	}
	else
	{
		double m1 = sqrt(2 * a * a + 2 * b * b - c * c) / 2;
		double m2 = sqrt(2 * a * a + 2 * c * c - b * b) / 2;
		double m3 = sqrt(2 * b * b + 2 * c * c - a * a) / 2;
		double med1 = sqrt(2 * m1 * m1 + 2 * m2 * m2 - m3 * m3) / 2;
		double med2 = sqrt(2 * m1 * m1 + 2 * m3 * m3 - m2 * m2) / 2;
		double med3 = sqrt(2 * m3 * m3 + 2 * m2 * m2 - m1 * m1) / 2;
		std::cout << "Median 1:" << med1 << " Median 2:" << med2 << " Median 3:" << med3 << std::endl;//вывод результатов работы программы
		return 0;
	}
}
//9 задание
#include <iostream>

int main()
{
	int sec;
	std::cout << "Enter the number of seconds: ";
	std::cin >> sec;
	int hour = (sec / 60) / 60;
	int min = sec / 60;
	if (hour > 24)
	{
		std::cout << "Incorrect time";
		return 0;

	}
	else
	{
		std::cout << hour << " hours, " << min << " minuts" << std::endl;
		return 0;
	}
}
//10 задача
#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Enter the first leg: ";
	std::cin >> a;
	std::cout << "Enter the second leg: ";
	std::cin >> b;
	std::cout << "Enter the fird leg: ";
	std::cin >> c;
	if ((a != 0) && (b != 0) && (c != 0))
	{
		if ((a == b) || (b == c) || (c == a))
		{
			std::cout << "Ravnobedrenniy";
			return 0;
		}
		else
		{
			std::cout << "No" << std::endl;
			return 0;
		}
	}
	else
	{
		std::cout << "Incorrect number";
		return 0;
	}
}

