#include<iostream>
#include<vector>
using namespace std;
int circular(vector<int>&arr) {
    int n=arr.size();
    int maxsum=arr[0];
    int currmax=arr[0];
    int minsum=arr[0];
    int currmin=arr[0];
    int total=0;
    for(int i=0;i<n;i++) {
        total+=arr[i];
        if(i>0) {
            currmax=max(arr[i],currmax+arr[i]);
            maxsum=max(currmax,maxsum);
            currmin=min(arr[i],currmin+arr[i]);
            minsum=min(currmin,minsum);
        }
    }
        if(maxsum<0) return maxsum;
        return max(maxsum,total-minsum);
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
        cout<<"maximum circular sum is :"<<circular(arr);
    
}
