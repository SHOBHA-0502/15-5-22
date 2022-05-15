#include <bits/stdc++.h>

using namespace std;

 int main()
//     long long  n,p;
//     cin>>n>>p;
//     long long arr[n];
//     for(long long  i=0; i<n;i++){
//         cin>>arr[i];    
//     }
//     long long  count =0;
//     for(long long i =0 ; i<n ; i++){
//         for(long long  j =i ; j<n;j++){
//             for(long long  k=j;k<n;k++){
//                 if( (arr[j]-arr[i])==p && (arr[k]-arr[j]==p)){
//                     count++;
//                 }
//             }
//         }
//     }
//     cout<<count;
// }


{
    int n ,d;
    cin>>n>>d;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    unordered_map<int, int> m;
    int cnt = 0;
    for (int a : arr) {
        m[a] += 1;
        cnt += m[a-d]*m[a-2*d];
        // cout<< m[a-d]<<"//"<<m[a-2*d]<<"//"<<endl;
        // cout<< a-d<<"//"<<a-2*d<<"?/"<<endl;
        
    }
    cout<< cnt;
}