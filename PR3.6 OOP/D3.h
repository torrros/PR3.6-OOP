#pragma once
#include "B3.h"
#include "D2.h"
#include <iostream> 

using namespace std;

class D3 :private B3, public D2
{
	int d3;
public:
	D3(int d3 = 0, int d1 = 0, int d2 = 0, int b3 = 0, int b1 = 0, int b2 = 0) : D2(d1, d2, b1, b2), B3(b3), d3(d3) {};
	void showd3()
	{
		cout << "class D3" << endl;
		cout << "show_D3()" << endl << "D3::d3 = " << d3 << endl;
	}
	

};

