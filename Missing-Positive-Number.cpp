#include<iostream>
#include<vector>
using namespace std;
int missing(vector<int>&arr) {
    int n=arr.size();
    for(int i=0;i<n;i++) {
        while(arr[i]>0 && arr[i]<=n && arr[i]!=arr[arr[i]-1]) 
        swap(arr[i],arr[arr[i]-1]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i]!=i+1) return i+1;
    }
    return n+1;
}
int main() {
    int n;
    cout<<"enter size of array :";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) {
        cout<<"enter array :";
        cin>>arr[i];
    }
    cout<<"missing positive element is :"<<missing(arr);
}
