#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string a;
    getline(cin,a);
    int count=1;

    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            count+=1;
        }
    }
    cout << count;
    
}