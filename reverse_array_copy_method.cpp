#include<iostream>
#include<vector>
using namespace std;
vector<int>rev(vector<int>&arr) {
    int n=arr.size();
    int p=0;
    vector<int>temp(n);
    for(int i=n-1;i>=0;i--) {
        temp[p]=arr[i];
        p++;
    }
    for(int i=0;i<n;i++) {
        arr[i]=temp[i];
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
    vector<int>arr1=rev(arr);
    for(int i=0;i<arr1.size();i++) {
        cout<<arr1[i]<<"\t";
    }
}
