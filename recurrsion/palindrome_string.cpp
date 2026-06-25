#include <bits/stdc++.h>
using namespace std;
bool reverse(int i,string& name,int n ){
    if(i>=n/2)return true  ;
    if(name[i]!=name[n-i-1])return false;
    return reverse(i+1,name,n);
       
        
}
int main(){
    string name="madam";
    int n=name.size();
    cout<<reverse(0,name,n);
    return 0;
}