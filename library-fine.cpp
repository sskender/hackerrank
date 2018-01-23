#include <iostream>
using namespace std;

int main()
{
	int d1, m1, y1;		// actual date
	int d2, m2, y2;		// expected return date
	cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

	// on time
	if ( (y1 < y2) || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 <= d2) )
		cout << 0 << endl;

	// fixed if year late
	else if (y1 > y2)
		cout << 10000 << endl;

	// same year, month late => 500 x months
	else if (y1 == y2 && m1 > m2)
		cout << 500 * (m1 - m2) << endl;

	// same month, day late => 45 x days
	else if (y1 == y2 && m1 == m2 && d1 > d2)
		cout << 15 * (d1 - d2) << endl;

	system("pause");
	return 0;
}