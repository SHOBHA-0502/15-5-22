#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    int arr[n];
    vector<pair<int,int>>v;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    for(int i =0 ; i<n ; i++){
        v.push_back( make_pair(arr[i],i) );
    }
    sort(v.begin(),v.end());
    int k = INT_MAX;
    for(int i=0 ; i<n; i++){
        if(v[i].first == v[i+1].first){
            int diff = v[i].second - v[i+1].second;
            if(diff<k){
                k=diff;
            }
        }
    }
    cout<<k;
}