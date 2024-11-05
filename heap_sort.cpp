#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr,int i,int n){
    //i is 1 based indexing 
    // see for 11 based indexing and write accordingly
    int left=(2*i)+1;
    int right=(2*i)+1+1;
    int largest;
    if(left<n && arr[left]>arr[i]){
        largest=left;
    }
    else{
        largest=i;
    }
    if ( right < n && arr[right]>arr[largest]){
        largest=right;
    }
    if ( largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}
void build_heap(vector<int>&arr){
    int n=arr.size();
    for ( int i=arr.size()/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
}
void heap_sort(vector<int>&arr){
    build_heap(arr);
    int si=arr.size();
    for(int i=si-1;i>=1;i--){
            swap(arr[0],arr[i]);
            heapify(arr,0,i);
    }
}



int main(){
    vector<int>arr={3, 23, 14, 1, 14, 5, 8, 7, 10, 12};
    // build_heap(arr);
    heap_sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
//key changes :
//this is just a comment added for a gitcheck
//new change is this
