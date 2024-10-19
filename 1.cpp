#include <iostream>

using namespace std;

int main(){
    long long k;
    cin >>k;

    int a=k/3600;
    int b=a*3600;
    int c=k-b;
    int d=c/60;


    cout << "It is "<< a << " hours "<<d <<" minutes.";
}