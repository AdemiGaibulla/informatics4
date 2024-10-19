#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main(){
    string a;
    cin >> a;
    int b= a.length()/2;
    string p1=a.substr(0,b);
    string p2=a.substr(a.length()-b);

    reverse(p2.begin(),p2.end());
    
    if(p1.length()==p2.length()){
        if(p1==p2){
            cout << "yes";
            }else {
                cout << "no";
    }
    }else{
        for(int i=0;i<p1.length();i++){
            if(p1[i]!=p2[i]){
                cout<<"no";
                break;
            } else{
                cout << "yes";
                break;
            }
        }
    }
}