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
	if (n < 1000)//условие при котором программа не выдаст нужный результат
	{
		std::cout << "Your number is not correct "//вывод фразы на которой программа завершиться
		return 0;//фактически опустошает переменные, зануляя их для дальнейшего использования
	}
	if (n >= 10000)//программа остановится из-зи некорректных данных
	{
		std::cout << "Your number is not correct ";
		return 0;
	}
	if (n >= 1000 && n <= 9999);// условие при котором программа работает
	{
		a = n / 1000 % 10;// можно реализовать и без доп переменных, но мне не нравятся длинные выражения
		b = n / 100 % 10;
		c = n / 10 % 10;
		d = n % 10;
		return (sum = a + b + c + d);// возвращает значение sum
	}

	std::cout << "Summa:" << sum << std::endl;//вывод результатов работы программы
	return 0;
}

//5 задание
#include <iostream>

int main()
{
	double T, r, x, y;
	std::cout << "Enter x: ";//пользователь вводит x и y с клавиатуры
	std::cin >> x;// запоминаем переменную х
	std::cout << "Enter y: ";
	std::cin >> y;//запоминаем переменную y

	r = sqrt(x * x + y * y);//формулы из математики по переводу из декартовых координат полярные
	T = atan2(y, x);

	std::cout << "Polar: (" << r << ", " << T << ")" << std::endl;//вывод результатов работы программы
	return 0;
}

//6 задание
#include <iostream>

int main()
{
	double T, r, x, y;
	std::cout << "Enter r: ";// аналогично всем предыдущим задачам ( далее не буду указывать эти моменты, буду пояснять только специфические моменты)
	std::cin >> r;
	std::cout << "Enter T: ";
	std::cin >> T;

	x = r * cos(T);//формулы перевода из полярной в декартовую систему
	y = r * sin(T);

	std::cout << "Deca: (" << x << ", " << y << ")" << std::endl;//вывод результатов работы программы
	return 0;
}
//7 задание
#include <iostream>

int main()
{
	double a, b, c;//использую double т.к. есть смысл учитывать не только целочисленные значения, последующие моменты аналогичны
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
		double x = (-b) / (2 * a);//дискриминант равен 0, значит х1 и х2 совпадут, есть смысл использовать отдельную формулу, чтобы пользователю выводилась только нужная информация
		std::cout << "Root: x = " << x << std::endl;//вывод результатов работы программы
		return 0;

	}
	if (d < 0)
	{
		std::cout << "Sorry, but I cannot work with complex numbers. I have paws." << std::endl;//вывод результатов работы программы с отрицательным дискриминантом, можно было бы отдельно прописать для комплексных чисел
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
	if ((a <= 0) || (b <= 0) || (c <= 0))//т.к. первоначальное условие позволяет числу быть любым, огранициваем до возможных значений у геометрических фигур
	{
		std::cout << "Incorrect number" << std::endl;//вывод результатов работы программы
		return 0;
	}
	else
	{
		double m1 = sqrt(2 * a * a + 2 * b * b - c * c) / 2;//формула для поиска медианы через 3 прямые
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
	int hour = (sec / 60) / 60;//классическая формула поиска кол-ва часов через секунды, программа выведет сколько целых часов/минут прошло, а не какой час идёт
	int min = sec / 60;
	if (hour > 24)//ограничение связано с условием задания
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
	if ((a != 0) && (b != 0) && (c != 0))//условие связано  евклидовой геометрией
	{
		if ((a == b) || (b == c) || (c == a))//т.к. равноторонние треугольники тоже равнобедренные
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
//11 задача
#include <iostream>

int main()
{
	int a;
	std::cout << "Enter the cost: ";
	std::cin >> a;
	if (a < 1000)//ограничение обусловлено условиями задачи
	{
		std::cout << "Final cost: " << a;
		return 0;
	}
	else
	{
		int b = a - 0.1 * a;//условие задачи
		std::cout << "Final cost: " << b << std::endl;
		return 0;
	}

}
//12 задача
#include <iostream>

int main()
{
	int a;
	std::cout << "Enter the height: ";
	std::cin >> a;
	int b;
	std::cout << "Enter the weight: ";
	std::cin >> b;
	if ((a > 100) && (b > 0))//a по задумке больше 100, т.к. мы из него эти 100 будем вычитать. Во избежание отрицательных значений было введено данное ограничение.
	{
		if (b == a - 100)//идеальный вес
		{
			std::cout << "Perfect ";
			return 0;
		}
		if (b < a - 100)
		{
			std::cout << "You should get fat a bit. But you're steal perfect. ";//потолстеть
			return 0;
		}
		if (b > a - 100)
		{
			std::cout << "You should lose your weight a bit. But you're steal perfect. ";//похудеть
			return 0;
		}
	}
	else
	{
		std::cout << "Incorrect number " << std::endl;// иначе выводит, что значения некорректны
		return 0;
	}

}
//13 задание
// Если честно, я так и не поняла с рандомом до конца, что именно надо в программе
//14 задание
#include <iostream>

int main()
{
	int day, time;
	std::cout << "Enter the day of the week: ";
	std::cin >> day;
	std::cout << "Enter how long was your call: ";
	std::cin >> time;//т.к. в условии не казана стоимость минуты, буду брать 1:1, чтобы не вводить доп переменную
	if ((day == 1) || (day == 2) || (day == 3) || (day == 4) || (day == 5) || (day == 6) || (day == 7))
	{
		if ((day == 6) || (day == 7))
		{
			int itog = time - 0.2 * time;//скидка по условию задачи
			std::cout << "Final summ: " << itog;
			return 0;
		}
		else
		{
			std::cout << "Final summ: " << time;//нет скидки, вывод, т.к. 1:1
			return 0;
		}

	}
	else
	{
		std::cout << "Invalid date " << std::endl;
		return 0;
	}

}
//15 задача
#include <iostream>
int main()
{
	int mes;
	std::cout << "Enter the number of the mounth: ";
	std::cin >> mes;
	if ((mes == 1) || (mes == 2) || (mes == 3) || (mes == 4) || (mes == 5) || (mes == 6) || (mes == 7) || (mes == 8) || (mes == 9) || (mes == 10) || (mes == 11) || (mes == 12))//условия ограничения по месяцам
	{
		if (mes == 1)//условие по конкретному месяцу
		{
			std::cout << "January, Winter ";
			return 0;
		}
		if (mes == 2)
		{
			std::cout << "February, Winter ";
			return 0;
		}
		if (mes == 3)
		{
			std::cout << "March, Spring ";
			return 0;
		}
		if (mes == 4)
		{
			std::cout << "April, Spring ";
			return 0;
		}
		if (mes == 5)
		{
			std::cout << "May, Spring ";
			return 0;
		}
		if (mes == 6)
		{
			std::cout << "June, Summer ";
			return 0;
		}
		if (mes == 7)
		{
			std::cout << "July, Summer ";
			return 0;
		}
		if (mes == 8)
		{
			std::cout << "August, Summer ";
			return 0;
		}
		if (mes == 9)
		{
			std::cout << "September, Autumn ";
			return 0;
		}
		if (mes == 10)
		{
			std::cout << "October, Autumn ";
			return 0;
		}
		if (mes == 11)
		{
			std::cout << "November, Autumn ";
			return 0;
		}
		if (mes == 12)
		{
			std::cout << "December, Winter ";
			return 0;
		}

	}
	else
	{
		std::cout << "Invalid date " << std::endl;
		return 0;
	}

}
//16 задание

