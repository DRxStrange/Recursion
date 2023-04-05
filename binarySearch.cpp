#include <iostream>
using namespace std;

bool binarySearch(int *arr, int n, int key, int start, int end){
    
    if(start > end){
        return false;
    }
    int mid =(start + end)/2;
    if(arr[mid] == key){
        return true;
    }
    else if(key > arr[mid])
    {
        return binarySearch(arr, n, key, mid+1,end);
    }else{
        return binarySearch(arr, n, key, start, mid-1);
    }
    
}
int main()
{
    //size of array
    int n;
    cin>>n;
    // insert elements in sorted order in increasing order
    int *arr = new int[n];
    
    for(int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    //enter key
    int key;
    cin>>key;
    int start =0;
    int end = n-1;
    bool ans = binarySearch(arr, n, key, start, end);
    cout<<ans;

    return 0;
}
