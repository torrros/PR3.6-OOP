#pragma once
#include <iostream>

using namespace std;

class B2
{
	int b2;
	public:
		B2(int x = 0) : b2(x) {}
		void showb2()
		{
			cout << "class B2" << endl;
			cout << "show_B2()" << endl << "B2::b2 = " << b2 << endl;
		}
};

