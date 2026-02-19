#include<iostream>
#include<vector>
using namespace std;
vector<int>findtwo(vector<int>&arr) {
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++) {
        while(arr[i]>0 && arr[i]<=n && arr[i]!=arr[arr[i]-1])
        swap(arr[i],arr[arr[i]-1]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i]!=i+1) {
            ans.push_back(arr[i]);
            ans.push_back(i+1);
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
    vector<int>arr1=findtwo(arr);
    for(int i=0;i<arr1.size();i++) {
        cout<<arr1[i]<<"\t";
    }
}
