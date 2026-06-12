#include<iostream>
using namespace std;
int sum_ofN(int n){
    if(n==0){
        
        return 0;
    }
    return n+sum_ofN(n-1);
}

int main(){
    int n;
    cout<<"Enter the N value: ";
    cin>>n;
  
    cout<<"The sum of  n numbers is:",sum_ofN(4);
    return 0;
}