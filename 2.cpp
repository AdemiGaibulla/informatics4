#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    char a;
    cin >> a;

    if(isdigit(a)){
        cout << "yes";
    } else {
        cout << "no";
    }
}