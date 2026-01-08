#include<iostream>
#include<vector>
using namespace std;
int kadane(vector<int>&arr) {
    int n=arr.size();
    int maxsum=arr[0];
    int currmax=arr[0];
    for(int i=1;i<n;i++) {
        currmax=max(arr[i],currmax+arr[i]);
        maxsum=max(currmax,maxsum);
    }
    return maxsum;
}
int main() {
    int n;
    cout<<"enter size of array :";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) {
        cout<<"enter array :";
        cin>>arr[i];
    }cout<<"kadane maximum subarray is :"<<kadane(arr);
}
