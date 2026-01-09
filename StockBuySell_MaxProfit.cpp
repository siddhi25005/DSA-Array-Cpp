#include<iostream>
#include<vector>
using namespace std;
int maxprofit(vector<int>&arr) {
    int n=arr.size();
    int maxprofit=0;
    int minprice=arr[0];
    for(int i=1;i<n;i++) {
        if(arr[i]<minprice) minprice=arr[i];
        else maxprofit=max(maxprofit,arr[i]-minprice);
    }
    return maxprofit;
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
    cout<<"max profit is :"<<maxprofit(arr);
}
