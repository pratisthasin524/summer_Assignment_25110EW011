#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, n3;

    cin >> n1;
    set<int> s1;

    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }

    cin >> n2;
    set<int> s2;

    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }

    cin >> n3;

    for (int i = 0; i < n3; i++) {
        int x;
        cin >> x;

        if (s1.count(x) && s2.count(x))
            cout << x << " ";
    }

    return 0;
}