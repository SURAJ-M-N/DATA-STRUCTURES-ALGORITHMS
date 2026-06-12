#include<iostream>
using namespace std;
int printdivisor(int n){
    int i;
    for ( i = 1; i <=n; i++)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
        
    }
    
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    printdivisor(n);
}