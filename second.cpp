#include <iostream>
#include "classstary.h"
#include <conio.h>
void menu() {
	std::cout << "------МЕНЮ-----" << std::endl;
	std::cout << "1 - магазин" << std::endl;
	std::cout << "2 - ферма зайцев" << std::endl;
	std::cout << "3 - амбар" << std::endl;
	std::cout << "";
}

// Проверка достаточно ли денег для покупки
bool notmoney(int money, int gold, int cofecent) {
    // Проверяем, достаточно ли средств для покупки
    return money >= (gold * cofecent);
}

int game1(int& corm, int& zayaccount, int& money, int gold1, int gold2, int cofecent) {
    std::cout << "----МАГАЗИН-----" << std::endl;
    std::cout << "1 - Купить одного зайца (" << gold1 * cofecent << ")" << std::endl;
    std::cout << "2 - Купить корм для коров (5 минут) (" << gold2 * cofecent << ")" << std::endl;
    std::cout << "3 - Выйти из магазина" << std::endl;

    // Получаем выбор пользователя
    int r;
    std::cin >> r;

    switch (r) {
    case 1:
        if (notmoney(money, gold1, cofecent)) {
            std::cout << "Вы купили зайца!" << std::endl;
            zayaccount++;
            money -= (gold1 * cofecent); // Уменьшаем деньги после покупки
        }
        else {
            std::cout << "У вас недостаточно средств для покупки!" << std::endl;
        }
        break;

    case 2:
        if (notmoney(money, gold2, cofecent)) {
            std::cout << "Вы купили корм для коров!" << std::endl;
            corm = 1; // Устанавливаем значение корма
            money -= (gold2 * cofecent); // Уменьшаем деньги после покупки
        }
        else {
            std::cout << "У вас недостаточно средств для покупки!" << std::endl;
        }
        break;

    case 3:
        std::cout << "Вы вышли из магазина." << std::endl;
        return 0;
        break;

    default:
        std::cout << "Неверный выбор, попробуйте еще раз." << std::endl;
        break;
    }

    return 1;
}
void ClearScreen()
{
    std::cout << std::string(100, '\n');
}
int game2(int zayaccount, int hardcore) {
    return 0;
}
