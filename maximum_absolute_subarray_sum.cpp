#include<iostream>
#include<vector>
using namespace std;
int absolute(vector<int>&arr) {
    int n=arr.size();
    int maxsum=arr[0],currmax=arr[0];
    int minsum=arr[0],currmin=arr[0];
    for(int i=1;i<n;i++) {
        currmax=max(arr[i],arr[i]+currmax);
        maxsum=max(currmax,maxsum);
        currmin=min(arr[i],arr[i]+currmin);
        minsum=min(currmin,minsum);
    }
    return max(maxsum,abs(minsum));
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
    cout<<"absolute maximum sum is :"<<absolute(arr);
}
