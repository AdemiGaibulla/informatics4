#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    char a;
    cin >> a;

    if(isupper(a)){
        cout << (char)tolower(a);
    }else{
        cout << (char)toupper(a);
    }
}