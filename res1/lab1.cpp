#include <iostream>
#include <windows.h>

float main()
{
	setlocale(LC_ALL, "Russian");

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_GREEN);

	std::cout << "Введите площадь основания:";
	float s;
	std::cin >> s;

	float h;
	std::cout << "Введите высоту:";
	std::cin >> h;


	float v = (s * h)/3;

	std::cout << "Объём пирамиды: ";
	std::cout << v;
	std::cout << "\nСпасибо за использование технологий VAUsIGT\n-------------------------------------------";
	return 0;
}