#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// --------------------------------------------------------------------

// print array
void printara(vector<int> v)
{
	for (auto const &i : v)
		cout << i << " ";
	cout << endl;
}

// --------------------------------------------------------------------

// fill array for countingsort 1 & 2
vector<int> fillOneTwo(int n)
{
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	return v;
}

void countingsort1(int n)
{
	cout << "COUNTING SORT 1 STARTS HERE\n";
	// fill vector
	vector<int> v = fillOneTwo(n);

	// count appearances
	vector<int> appearance(100);
	for (auto const &i : v)
		appearance[i]++;

	// print appearances
	printara(appearance);
}

void countingsort2(int n)
{
	cout << "COUNTING SORT 2 STARTS HERE\n";
	// fill vector
	vector<int> v = fillOneTwo(n);

	sort(v.begin(), v.end());
	printara(v);
}

// --------------------------------------------------------------------

void countingsort3(int n)
{
	cout << "COUNTING SORT 3 STARTS HERE\n";
	vector<int> v(100); int x; string s;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> s;
		v[x]++;
	}

	int suma = 0;
	for (int i = 0; i < 100; i++)
	{
		suma += v[i];
		cout << suma << " ";
	}
	cout << endl;
}

// --------------------------------------------------------------------

void countingSort4(int n)
{
	cout << "COUNTING SORT 4 STARTS HERE\n";

	vector < pair< pair<int, int>, string > > v;
	int index; string word, rightPair;

	for (int i = 0; i < n; i++)
	{
		cin >> index >> word;
		rightPair = (i < n / 2 ? ("-") : (word));

		v.push_back(make_pair(make_pair(index, i), rightPair));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
		cout << v[i].second << " ";

	cout << endl;  
}

// --------------------------------------------------------------------

int main()
{
	int n; cin >> n;

	countingsort1(n);
	countingsort2(n);
	countingsort3(n);
	countingSort4(n);

	system("pause");
	return 0;
}