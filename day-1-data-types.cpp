#include <iostream>
#include <string>
using namespace std;

int main()
{
	float f1 = 5.35;
	char c1 = 'a';
	bool b1 = false;
	int i = 100;
	string s1 = "I am a code monkey";
	bool b2 = true;
	float f2 = 17.3;;
	char c2 = 'c';
	string s2 = "derp";

	cout << "Primitive : " << typeid(f1).name() << endl;
	cout << "Primitive : char" << endl;
	cout << "Primitive : " << typeid(b1).name() << endl;
	cout << "Primitive : " << typeid(i).name() << endl;
	cout << "Referenced : string" << endl;
	cout << "Primitive : " << typeid(b2).name() << endl;
	cout << "Primitive : " << typeid(f2).name() << endl;
	cout << "Primitive : char" << endl;
	cout << "Referenced : string" << endl;

	system("pause");
	return 0;
}