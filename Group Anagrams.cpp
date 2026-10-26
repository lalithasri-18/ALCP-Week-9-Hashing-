#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);
    map<string, vector<string> > mp;

    cout << "Enter words: ";
    for(int i=0; i<n; i++) {
        cin >> words[i];

        string key = words[i];
        sort(key.begin(), key.end());

        mp[key].push_back(words[i]);
    }

    cout << "Anagram Groups:" << endl;

    map<string, vector<string> >::iterator it;

    for(it=mp.begin(); it!=mp.end(); it++) {
        cout << "[ ";

        for(int j=0; j<it->second.size(); j++) {
            cout << it->second[j] << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}
