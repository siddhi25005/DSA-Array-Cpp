#include<iostream>
#include<vector>
using namespace std;
int profitmax(vector<int>&arr) {
    int n=arr.size();
    int profit=0;
    for(int i=1;i<n;i++) {
        if(arr[i]>arr[i-1]) {
            profit+=arr[i]-arr[i-1];
        }
    }
    return profit;
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
    cout<<"profit is :"<<profitmax(arr);
}
