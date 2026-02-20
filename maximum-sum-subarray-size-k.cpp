#include<iostream>
#include<vector>
using namespace std;
int avg(vector<int>&arr,int k) {
    int n=arr.size();
    int win=0;
    if (n<k) return -1;
    for(int i=0;i<k;i++) {
        win+=arr[i];
    }
    int maxsum=win;
    for(int i=k;i<n;i++) {
        win=win-arr[i-k]+arr[i];
        maxsum=max(win,maxsum);
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
    }
    int k;
    cout<<"enter value of k :";
    cin>>k;
    cout<<"maximum avrage subarray is :"<<avg(arr,k);
}
