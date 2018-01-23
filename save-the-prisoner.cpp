#include <iostream>
using namespace std;

int savePrisoner()
{
    int prisonersN, sweetsM, startS; cin >> prisonersN >> sweetsM >> startS;

    int r = (startS + sweetsM - 1) % prisonersN;
    return (r == 0) ? prisonersN : r;
    
    /*
    int id = startS; sweetsM--;
    while (sweetsM > 0) {
        sweetsM--;
        id++;
        if (id > prisonersN) { id = 1; }
    }
    return id;
    */
}

int main()
{
    int T; cin >> T;
    while (T--) { cout << savePrisoner() << endl; }
    return 0;
}