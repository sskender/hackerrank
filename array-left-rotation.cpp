#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printara(int x)
{
    cout << x << " ";
}

int main()
{
    // d are rotations
    int n, d; cin >> n >> d;
    vector<int> v(n);

    // input array
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // rotate ( r is the future first element )
    int r = v.size() - ( d % v.size() );
    rotate(v.begin(), v.end()-r, v.end());

    // print result
    for_each(v.begin(), v.end(), printara);

    return 0;
}
