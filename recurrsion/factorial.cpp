#include<iostream>
using namespace std;
int fact(int n){

    if(n==0){
        
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"Enter the N value: ";
    cin>>n;
  
    cout<<"The sum of  n numbers is:"<<fact(n);
    return 0;
}