#include <iostream>
#include <string>

using namespace std;

string nextSequence(const string& c) {
    string result;
    int count = 1;
    for (int i = 1; i <= c.length(); i++) {
        if (i < c.length() && c[i] == c[i - 1]) {
            count++;
        } else {
            result += to_string(count) + c[i - 1];
            count = 1;
        }
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    string c = to_string(a);
    
    for (int i = 1; i < b; i++) {
        c = nextSequence(c);
    }

    cout << c << endl;
    return 0;
}