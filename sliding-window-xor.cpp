#include<iostream>
#include<vector>
using namespace std;
int xors(vector<int>&arr,int k) {
    int n=arr.size();
    if(n<k) return -1;
    int x=0;
    for(int i=0;i<k;i++) {
        x=x^arr[i];
    }
    int maxor=x;
    for(int i=k;i<n;i++) {
        x=x^arr[i-k];
        x=x^arr[i];
        maxor=max(x,maxor);
    }
    return maxor;
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
    cout<<"max xor subarray is :"<<xors(arr,k);
}
