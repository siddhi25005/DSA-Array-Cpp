#include<iostream>
#include<vector>
using namespace std;
vector<int>con(vector<int>&arr) {
    int n=arr.size();
    vector<int>ans(2*n);
    for(int i=0;i<n;i++) {
        ans[i]=arr[i];
        ans[n+i]=arr[i];
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
    vector<int>arr1=con(arr);
    for(int i=0;i<arr1.size();i++) {
        cout<<arr1[i]<<"\t";
    }
}
