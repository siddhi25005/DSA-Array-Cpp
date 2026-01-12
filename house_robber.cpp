#include<iostream>
#include<vector>
using namespace std;
int house(vector<int>&arr) {
    int n=arr.size();
    vector<int>dp(n);
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++) {
        dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
    }
    return dp[n-1];
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
    cout<<"maximum money robbed is :"<<house(arr);
}
