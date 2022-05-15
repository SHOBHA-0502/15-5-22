#include <bits/stdc++.h>

using namespace std;
    

int main(){

        long long p;
        long long q;
        cin>>p>>q;
       vector<long long > ans;
       for(long long i =p ; i<=q; i++){
           long long sq = i*i;
           string s = to_string(sq);
           int d = s.length()/2;
           if(d==0){
               if(i==sq){
                   ans.push_back(i);
               }
               continue;
           }
           if(stoll(s.substr(0,d))+stoll(s.substr(d,s.size()-d))==i){
               ans.push_back(i);
           }
           
       }
       if(ans.size()>0){
           for(int i=0; i<ans.size(); ++i){
               cout<<ans[i]<<" ";
           }
        cout<<endl;}
    else{
        cout<<"INVALID RANGE"<<endl;
    }
}

