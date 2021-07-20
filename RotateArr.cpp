#include <iostream>
using namespace std;

void rotateArr(int arr[],int d, int n){
       int temp=arr[0];
       for(int i=0;i<n-1;i++){
           arr[i]=arr[i+1];
           }
    arr[n-1]=temp;
}
   
void leftRotate(int arr[], int d, int n){
    for (int i = 0; i < d; i++)
        rotateArr(arr,d, n);
}

int main(){
    int arr[]={2,5,3,8,5,7,4};
    int d;
    cin>>d;
    
    leftRotate(arr,d,7);
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}