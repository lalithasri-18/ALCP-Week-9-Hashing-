#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    map<int, int> mp;

    for(int i=0; i<n; i++) {
        int x = target - a[i];

        if(mp.count(x) > 0) {
            cout << "Indices: "
                 << mp[x] << " " << i;
            return 0;
        }

        mp[a[i]] = i;
    }

    cout << "No pair found";

    return 0;
}
