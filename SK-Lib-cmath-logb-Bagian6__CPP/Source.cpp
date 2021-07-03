#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double x = 763.243, hasil;

	hasil = logb(x);
	cout << "logb(" << x << ") = " << "log(|" << x << "|) = " << hasil << endl;

	_getch();
	return 0;
}