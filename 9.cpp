#include <iostream>
#include <string>

using namespace std;

void reverseSubstring(string& str, int i, int j) {
    i--;
    j--;

    while (i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

int main() {
    string str;
    getline(cin, str);

    int i, j;
    cin >> i >> j;

    reverseSubstring(str, i, j);

    cout<< str << endl;

    return 0;
}