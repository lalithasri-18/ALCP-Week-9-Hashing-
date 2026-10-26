#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    set<int> s;

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }

    int longest = 0;

    for(int i=0; i<n; i++) {
        int x = a[i];

        if(s.count(x-1) == 0) {
            int count = 1;

            while(s.count(x+1) > 0) {
                count++;
                x++;
            }

            if(count > longest) {
                longest = count;
            }
        }
    }

    cout << "Longest consecutive sequence length: "
         << longest;

    return 0;
}
