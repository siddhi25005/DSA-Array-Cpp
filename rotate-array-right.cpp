#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>&arr,int k) {
    int n=arr.size();
    k=k% n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
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
    rotate(arr,k);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<"\t";
    }
}
