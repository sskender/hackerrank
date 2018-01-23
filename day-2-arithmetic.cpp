#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double price; cin >> price;
	short tip; cin >> tip;
	short tax; cin >> tax;

	long total = round(price + (tip*price) / 100 + (tax*price) / 100);
	cout << "The final price of the meal is $" << total << "." << endl;
	
	system("pause");
	return 0;
}