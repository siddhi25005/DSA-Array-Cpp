#include<iostream>
#include<vector>
using namespace std;
vector<int>parity(vector<int>&arr) {
    int n=arr.size();
    vector<int>ans(n);
    int p=0;
    for(int i=0;i<n;i++) {
        if(arr[i]%2==0) {
            ans[p]=arr[i];
            p++;
        }
    }
    for(int i=0;i<n;i++) {
        if(arr[i]%2!=0) {
            ans[p]=arr[i];
            p++;
        }
    }
    return ans;
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
    vector<int>arr1=parity(arr);
    for(int i=0;i<arr1.size();i++) {
        cout<<arr1[i]<<"\t";
    }
}
