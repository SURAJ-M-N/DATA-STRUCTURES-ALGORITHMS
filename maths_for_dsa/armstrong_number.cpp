#include<iostream>
using namespace std;
bool isarmstrong(int n){
    int dup=n;
    int last_dig=0,sum=0,rev=0;
    while(n!=0){
        last_dig=n%10;
        sum+=(last_dig*last_dig*last_dig);
        n=n/10;
    }
   if(dup==sum){
    return true;
   }
   else 
    return false;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(isarmstrong(n)){
        cout<<"Armstrong number";
    }
    else
    cout<<"Not armstrong numer";
    
}