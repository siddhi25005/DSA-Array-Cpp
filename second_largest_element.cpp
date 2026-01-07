#include<iostream>
#include<vector>
using namespace std;
int second(vector<int>&arr){
    int n=arr.size();
    if(n<2) return -1;
    int l=arr[0];
    for(int i=0;i<n;i++) {
        if(l<arr[i]) l=arr[i];
    }
    int s=-1;
    for(int i=0;i<n;i++) {
        if(l!=arr[i]) 
        if(s<arr[i] || s==-1) s=arr[i];
    }
    return s;
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
    cout<<"second largest element is :"<<second(arr);
}
