#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N; cin >> N;
	for (int i = 1; i <= N; i++)
		cout << string(N - i, ' ') << string(i, '#') << endl;
	system("pause");
	return 0;
}