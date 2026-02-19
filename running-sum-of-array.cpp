#include<iostream>
#include<vector>
using namespace std;
vector<int>running(vector<int>&arr) {
    int n=arr.size();
    for(int i=1;i<n;i++) {
        arr[i]=arr[i]+arr[i-1];
    }
    return arr;
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
    vector<int>arr1=running(arr);
    for(int i=0;i<arr1.size();i++) {
        cout<<arr1[i]<<"\t";
    }
}
