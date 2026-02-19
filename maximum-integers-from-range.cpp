#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int range(vector<int>&banned,int n,int maxsum) {
    unordered_set<int>ban(banned.begin(),banned.end());
    int sum=0,count=0;
    for(int i=1;i<=n;i++) {
        if(ban.count(i)) continue;
        if(sum+i>maxsum) break;
        sum=sum+i;
        count=count+1;
    }
    return count;
}
int main() {
    int size;
    cout<<"enter size of array :";
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++) {
        cout<<"enter array :";
        cin>>arr[i];
    }
    int n,maxsum;
    cout<<"enter n :";
    cin>>n;
    cout<<"enter maxsum :";
    cin>>maxsum;
    range(arr,n,maxsum);
        cout<<range(arr,n,maxsum)<<"\t";
}
