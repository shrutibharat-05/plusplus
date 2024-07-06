#include <iostream>
using namespace std;

    // bool search(int arr[],int n, int key){
    //     for(int i=0;i<n;i++){
    //         if(arr[i]==key){
    //             return 1;
    //         }

    //     }
    //     return 0;
    // }
int reverse(int arr[],int n){
        

        int start=0;
        int end=n-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }

    
    }

//     int main (void){
// int n;
// cout<<"enter array size";
// cin>> n;

// int arr[100];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// int key;
//  cout<<"enter key value to be searched ";
//  cin>>key;

//  bool result = search(arr,n,key);

//  if(result==1){
//     cout<<"success! the index of  "<<key<<"  is  "<< i;
//  }
//  else{
//     cout<<"could not found";
//  }}
int main(void){
 int array[100]={1,2,34,5};
        int num=4;

        int final= reverse(array,num);
        cout<<"reverse array:"<<final;
    
}
  