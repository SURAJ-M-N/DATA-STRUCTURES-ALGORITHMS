#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int rev=0;
    int dup=n;
    int last_dig;
    while(n>0){
        
        last_dig=n%10;
        rev=rev*10+last_dig;
        n=n/10;

    }
    cout<<rev;
    if(dup==rev){
        cout<<"is palindrome";
    }
    else{
        cout<<"Not palindrome";
    }      
}

int main(){
    int n;
    cout<<"ENter the number:";
    cin>>n;
    ispalindrome(n);
    return 0;
}