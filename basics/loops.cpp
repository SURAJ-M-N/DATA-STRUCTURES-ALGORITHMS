#include<iostream>
using namespace std;
int main(){
int i,j;
//1)
    // for(int i=1;i<=5;i++){
//     for(int j=1;j<=5;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }


//2)

// for(i=0;i<5;i++){
//     for(j=0;j<=i;j++){
//         cout<<"*";
//     }cout<<endl;
// }

//3
// for(i=1;i<=5;i++){
//     for(j=1;j<=i;j++){
//         cout<<j;
//     }cout<<endl;
// }

//4
// for(i=1;i<=5;i++){
//     for(j=1;j<5-i+1;j++){
//         cout<<"*";
//     }cout<<endl;
// }


// for(i=0;i<5;i++){
//     for(j=0;j<i;j++){
//         cout<<" ";
//     }
//     for(j=0;j<10-(2*i+1);j++){
//         cout<<"*";
        
//         }
//     for(j=0;j<i;j++){
//         cout<<" ";
//     }cout<<endl;
// }



//5)//zero and ones printing
// int start=1;
// for(i=1;i<=5;i++){
    
//     if(i%2==0){
//         start=1;
//     }
//     else{
//         start=0;
//     }
//     for(j=1;j<=i;j++){
//         start=1-start; 
//         cout<<start<<" ";
        
//     }cout<<endl;
// }




//nuber-space-number pattern
// for(i=1;i<=4;i++){
//     for(j=1;j<=i;j++){
//          cout<<j;

//     }
//     for(j=1;j<=2*(4-i);j++){
//         cout<<" ";
//     }
//     for(j=i;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }



//print pyramid of 15 numbers
// int count=1;
// for(i=1;i<=5;i++){
//      for(j=1;j<=i;j++){
//       cout<<count<<" ";
//       count++;
// }cout<<endl;
// }



//print pyramid of letters
// for(i=0;i<5;i++){
//     for(char ch='A';ch<='A'+i;ch++){
//         cout<<ch<<" ";
//     }
//     cout<<endl;
// }


// //print reverse letter pyramid
//  for(i=5;i>0;i--){
//    for(char ch='A';ch<'A'+i;ch++){
//      cout<<ch;
//    }cout<<endl;
// }

//pyramid of same-letters in a row
// char count='A';
// for(i=0;i<5;i++){
//     for(char ch='A';ch<='A'+i;ch++){
//         cout<<count;
//     }
//     count++;
//     cout<<endl;
     
// }



//space and letter pyramid
for(i=0;i<5;i++){
    for(j=0;j<5-i-1;j++){
        cout<<" ";
    }
    for(char ch='A';ch<='A'+ 2*(i-1);ch++){
        cout<<ch;
    }
    for(j=0;j<5-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
}


return 0;
}