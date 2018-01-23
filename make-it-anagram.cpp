#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> A(26); vector<int> B(26);
	string a, b; cin >> a >> b;

	for (int i = 0; i < a.size(); i++)
		A[a[i] - 'a']++;

	for (int i = 0; i < b.size(); i++)
		B[b[i] - 'a']++;

	int deletions = 0;
	for (int i = 0; i < 26; i++)
		deletions += abs(A[i] - B[i]);
	cout << deletions << endl;

	system("pause");
	return 0;
}