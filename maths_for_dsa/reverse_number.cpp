#include<iostream>
using namespace std;
int revnum(int n){
    int rev=0;
    int last_dig;
    while(n>0){
        last_dig=n%10;
        rev=rev*10+last_dig;
        n=n/10;

    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;
    cout<<"The reversed number is:"<<revnum(n);
    return 0;
}