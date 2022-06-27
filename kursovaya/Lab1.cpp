#include <iostream>
#include "Header.h"
#include "Header1.h"
#include "Header2.h"

using namespace std;

void AddList1(int value, int position);
int DeleteList1(int position);
void CountList1();
void PrintList1();

int Prior(char a);
double Result(char* str);
Stack* InS(Stack*, char);
Stack* OutS(Stack*, char&);

int main() {
    setlocale(LC_ALL, "Rus");
    int x,g;
    cout << "Введите номер практической работы, которую хотите запустить: ";
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "Запуск 1 практической работы:: " << endl;
            prog();
            break;
        case 2:
            cout << "Запуск 2 практической работы:: " << endl;
            prog1();
            break;
        case 3:
            cout << "Запуск 3 практической работы: " << endl;
            prog2();
            break;
    }
    cout << "Вернуться главное меню? (1-да, 0-нет): ";
    cin >> g;
    if (g == 1) {
        main();
    }
    else {

    }
	return 0;
}
