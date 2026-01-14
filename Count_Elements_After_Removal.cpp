#include<iostream>
#include<vector>
using namespace std;
int count(vector<int>&arr,int k) {
    int n=arr.size();
    int p=0;
    for(int i=0;i<n;i++) {
        if(arr[i]!=k) {
            arr[p]=arr[i];
            p++;
        }
    }
    return p;
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
    cout<<"enter k :";
    cin>>k;
    cout<<"total elements after removing k is :"<<count(arr,k);
}
