#include<iostream>
#include<vector>
using namespace std;
vector<int>move(vector<int>&arr) {
    int n=arr.size();
    int p=0;
    for(int i=0;i<n;i++) {
        if(arr[i]!=0) {
            arr[p]=arr[i];
            p++;
        }
    }
    while(p<n) {
        arr[p]=0;
        p++;
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
    vector<int>arr1=move(arr);
    for(int i=0;i<arr1.size();i++) {
        cout<<arr1[i]<<"\t";
    }
}
