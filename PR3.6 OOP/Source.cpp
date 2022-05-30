#include <iostream>
#include "D3.h"
#include <Windows.h>

using namespace std;

int main()
{
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	B1 o0(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Ієрархія класу B1 " << endl;
	o0.showb1();

	B2 o1(222);
	cout << "B2 o1(222);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Ієрархія класу B2 " << endl;
	o1.showb2();

	B3 o2(333);
	cout << "B3 o2(333);" << endl;
	cout << "sizeof(B3) = " << sizeof(B3) << endl;
	cout << endl << "Ієрархія класу B3 " << endl;
	o2.showb3();
	
	D1 o3(111, 222);
	cout << "D1 o3(111, 222);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ієрархія класу D1 " << endl;
	o3.showd1();

	D2 o4(333, 444, 555, 666);
	cout << "D2 o4(333, 444, 555, 666);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2 " << endl;
	o4.showd2();

	D3 o5(777, 888, 999, 1111, 2222, 33330);
	cout << "D3 o5(777, 888, 999, 1111, 2222, 33330);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3 " << endl;
	o5.showd3();
	

	return 0;
	
	
}