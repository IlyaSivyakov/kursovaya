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
    cout << "������� ����� ������������ ������, ������� ������ ���������: ";
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "������ 1 ������������ ������:: " << endl;
            prog();
            break;
        case 2:
            cout << "������ 2 ������������ ������:: " << endl;
            prog1();
            break;
        case 3:
            cout << "������ 3 ������������ ������: " << endl;
            prog2();
            break;
    }
    cout << "��������� ������� ����? (1-��, 0-���): ";
    cin >> g;
    if (g == 1) {
        main();
    }
    else {

    }
	return 0;
}