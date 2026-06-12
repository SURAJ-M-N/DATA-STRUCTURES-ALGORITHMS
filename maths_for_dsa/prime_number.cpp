#include<iostream>
using namespace std;
bool check_prime(int n){
     int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        return true;

    }else return false;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(check_prime(n)){
        cout<<"The number is prime";
    }
    else 
    cout<<"The number is not prime";
    return 0;
}