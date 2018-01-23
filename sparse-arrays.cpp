#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int numOfStr; cin >> numOfStr;
    vector<string> allStrings(numOfStr);

    for(int i = 0; i < numOfStr; i++) {
        cin >> allStrings[i];
    }



    int queries; cin >> queries; string temp;
    for (int i = 0; i < queries; i++) {
        cin >> temp;
        cout << count(allStrings.begin(), allStrings.end(), temp) << endl;
    }

    return 0;
}
