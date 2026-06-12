#include<iostream>
using namespace std;
void func(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Suraj"<<" ";
    func(i+1,n);
}
int main(){
    int  n;
    cout<<"Enter the n value:";
    cin>>n;
    func(1,n);
}