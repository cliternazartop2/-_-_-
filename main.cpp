#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "classstary.h"
int main()
{
	setlocale(LC_ALL, "rus");
	int e{};
	int zayaccount{ 1 };
	int money{ 100 };
	int corm{ 0 };
	int gold1{ 20 };
	int gold2{ 20 };
	int gold3{ 20 };
	int gold4{ 20 };
	int hardcore{0};
	std::cout << "выберите уровень сложности(чем больше число тем тяжелее игра):" << std::endl;
	std::cin >> hardcore;
	for (int i{ 1 }; i < 10; i++) {
		menu();
		std::cin >> e;
		if (e == 1) {
			game1(corm, zayaccount, money, gold1, gold2, hardcore);
			ClearScreen();
		}

		




























	}

}
