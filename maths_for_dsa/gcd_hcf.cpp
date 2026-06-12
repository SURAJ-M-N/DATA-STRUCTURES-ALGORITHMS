#include<iostream>
using namespace std;
int min(int n1,int n2){
    return n1<n2?n1:n2;
}

void gcd(int n1,int n2){
    int gcd_count=0;
    for(int i=1;i*i<=min(n1,n2);i++){
        if(n1%i==0&&n2%i==0){
            gcd_count=i;
        }
    }
    cout<<"The gcd of "<<n1<<","<<n2<<" is "<<gcd_count;
}
int main(){
    int n1,n2;
    cout<<"Enter the two numbers:"<<endl;
    cin>>n1>>n2;
    gcd(n1,n2);
}