#include<iostream>
#include<vector>
using namespace std;
void parity(vector<int>&arr) {
    int n=arr.size();
    int left=0,right=n-1;
    while(left<right) {
        if(arr[left]%2==0) left++;
        else if(arr[right]%2!=0) right--;
        else {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
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
    parity(arr);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<"\t";
    }
}
