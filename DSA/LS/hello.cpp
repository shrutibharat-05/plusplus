#include <iostream>
using namespace std;
// main() is where program execution begins.
//1) int main()
// {
//  cout << "Hello World"; // prints Hello World
//  return 0;


// }
// 2)int main(){
//     int a=22;
//     int b=23;
//     if(a<b){
//         cout << "22 is smaller";
//     }
//     else{
//         cout <<"byee";
//     }
// }



//3) int main(){
// int n;
// cin >>n;
// if(n>18){
//     cout<< "You  can vote!";

// }
// else{
//     cout<< "You are minor";
// }
// }

//4) int main(){
// int n,m;
// cout<<"enter the number";
// cin >>n>>m;//ci fives u output without caring of enter,space or tab space

// cout<<"The numbers are "<< n  <<"and"<<  m;
// }


// int main(){
//     int n;
//     cout<<"enter ypur number:  ";
//     cin >>n;
 

//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i=i+1;
//     }
     
    
//     }

    int main(){
    int n;
    cout<<"enter your number:  ";
    cin >>n;
 
    
   
    int sum=0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
           sum=sum+i;
           
           break;
             }
            
    }
      cout << "the sum is : "<<sum << " ";
      
    // while(i<=n){
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     }
       
    
     
    
    }