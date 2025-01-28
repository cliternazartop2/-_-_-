#pragma once

class zayac {
public:
    int* zayaccount;
    int hardcore;
    zayac();               // Конструктор
    void addzayac();
};
void menu();
int game1(int& corm, int& zayaccount, int& money, int gold1, int gold2, int cofecent);
int game2(int zayaccount, int hardcore);
void magazine();
int notmoney(int gold, int price);
void ClearScreen();
