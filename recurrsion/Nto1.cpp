#include<iostream>
using namespace std;
void print_Nto1(int i,int n){
      if(i>n){
        return;
      }
      cout<<n<<"\n";
      print_Nto1(i,n-1);
}
int main(){
    int n;
    cout<<"Enter the n value:";
    cin>>n;
    print_Nto1(1,n);
}