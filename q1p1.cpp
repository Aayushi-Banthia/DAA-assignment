#include<iostream>
using namespace std;

 int binarysearch(int arr[],int n,int key){
    int left=0;int right=n-1;
    while(left<right){
        int mid=(left+right)/2;
        if(arr[mid]==key)  return mid;
        else if(arr[mid] > key) right=mid-1;
        else left=mid+1;   
    }
    return -1;
 }

 int main(){
    int arr[]={1,4,7,10,13,16,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key = 16;
    int result = binarysearch(arr ,n,key);
    if(result !=1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
 }