#include<iostream>
using namespace std;

int binarysearch(int arr[],int left,int right,int key){
    if(left>right) return -1;
    int mid=(left+right)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) return binarysearch(arr,left,mid-1,key);
    else return binarysearch(arr,mid+1,right,key);

}

int main(){
    int arr[]={1,4,7,10,13,16,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key = 16;
    int result = binarysearch(arr,0,n-1,key);
    if(result !=-1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}