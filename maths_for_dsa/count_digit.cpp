#include<iostream>
using namespace std;
int countdigit(int n){
    int count=0;
     while(n>0){
        int lastdig=n%10;
        count = count +1;
        n=n/10;
     }
     return count;
}

int main(){
    int a;
     cout<<"Enter the value:";
     cin>>a;
     
     cout<<"The number of digits is: "<<countdigit(a);
return 0;
}