#include<bits/stdc++.h>
using namespace std;
int fibonaccci(int n){
    if(n<=1)return n;
    return fibonaccci(n-1)+fibonaccci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonaccci(n);
}