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
    cout << "Ââåäèòå íîìåð ïðàêòè÷åñêîé ðàáîòû, êîòîðóþ õîòèòå çàïóñòèòü: ";
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "Çàïóñê 1 ïðàêòè÷åñêîé ðàáîòû:: " << endl;
            prog();
            break;
        case 2:
            cout << "Çàïóñê 2 ïðàêòè÷åñêîé ðàáîòû:: " << endl;
            prog1();
            break;
        case 3:
            cout << "Çàïóñê 3 ïðàêòè÷åñêîé ðàáîòû: " << endl;
            prog2();
            break;
    }
    cout << "Âåðíóòüñÿ ãëàâíîå ìåíþ? (1-äà, 0-íåò): ";
    cin >> g;
    if (g == 1) {
        main();
    }
    else {

    }
	return 0;
}
