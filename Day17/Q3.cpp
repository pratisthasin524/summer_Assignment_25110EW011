#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;

    cin >> n1;

    set<int> s;

    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cin >> n2;

    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;

        if (s.find(x) != s.end()) {
            cout << x << " ";
            s.erase(x);
        }
    }

    return 0;
}