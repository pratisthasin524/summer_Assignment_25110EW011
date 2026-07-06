#include <bits/stdc++.h>
using namespace std;

struct Book {

    int id;
    string name;
    string author;

};

int main() {

    Book b;

    cin >> b.id;
    cin >> b.name;
    cin >> b.author;

    cout << "\nBook ID = " << b.id;
    cout << "\nBook Name = " << b.name;
    cout << "\nAuthor = " << b.author;

    return 0;
}