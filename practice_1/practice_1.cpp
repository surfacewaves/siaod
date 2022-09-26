#include <iostream>
using namespace std;

void  ex_1() {
	cout << "exercise 1.\n";
	unsigned short int x = 0x1FFF;
	unsigned short int maska = 0xE000;
	x = x | maska;
	cout << "result of exercise 1: " << x << "\n"; //result = 65535 = FFFF
}

void  ex_2() {
	cout << "\nexercise 2.\n";
	cout << "enter the number: ";
	unsigned short int x;
	cin >> x; //x = 20489 = 0101 0000 0000 1001
	unsigned short int maska = 1;
	for (int i = 0; i < 32; i++) {
		if (i == 3 || i == 12 || i == 14)
			x = x & ~(maska << i);
	}
	cout << "result of exercise 2: " << x << "\n"; //result = 00..01 = 1
}

void  ex_3() {
	cout << "\nexercise 3.\n";
	cout << "enter the number: ";
	unsigned short int x;
	cin >> x; //x = 3
	x = x << 2; //2^2 = 4
	cout << "result of exercise 3: " << x << "\n"; //result = 12
}

void  ex_4() {
	cout << "\nexercise 4.\n";
	cout << "enter the number: ";
	unsigned short int x;
	cin >> x; //x = 12
	x = x >> 2; //2^2 = 4
	cout << "result of exercise 4: " << x << "\n"; //result = 3
}

void  ex_5() {
	cout << "\nexercise 5.\n";
	cout << "enter the x: ";
	unsigned short int x;
	cin >> x; //x = 33417
	cout << "enter the n: ";
	int n;
	cin >> n; //n = 6
	unsigned short int maska = 0x8000;
	for (int i = 0; i < 32; i++) {
		if (i == n)
			x = x | (maska >> (15 - i));
	}
	cout << "result of exercise 5: " << x << "\n"; //result = 33481
}

int main()
{
	ex_1();
	ex_2();
	ex_3();
	ex_4();
	ex_5();
}