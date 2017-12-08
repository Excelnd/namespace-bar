// namespace bar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

namespace foo
{
	int value() { return 5;}
}
namespace bar
{
	const double pi = 3.1414;
	double value() { return 2 * pi; }
}
int main()
{
	cout << foo::value() << '\n';
	cout << bar::value() << '\n';
	cout << bar::pi << '\n';

    return 0;
}

