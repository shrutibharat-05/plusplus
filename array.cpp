#include <iostream>
using namespace std;
int main(){
    // here only 0th position val is 1 and others are 0
int array[10]={1};

int n=10;
cout <<"printing array elements"<<endl;

//initialsing array elemnts with same number
for(int i=0;i<=n;i++){
    cout<< array[0];
}

// int getmax(int arr[],int n) {
      
//       int maxi = INT_MIN;
//       for(int i=0:i<n;i++){
//         max=max(maxi,arr[i]);

    
//       }
//       return max;
// }
// getmax();






int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<size;i++)
    {
     sum= sum+arr[i];
     
    }
    return sum;
    }

int main(void){
    cout<<"enter your array size";
int size;
cin>> size;



int arr[100];


for(int i=0;i<size;i++){
           cin>>arr[i];


}

int sum= getSum(arr,size);
cout<<"the sum is"<<sum<<endl;
}


}