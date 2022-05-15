class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
         sort(special.begin(), special.end());
        
        long long  n = special.size();
        long long  m;
        long long  count =0;
        if(bottom == special[0]){
            m =0;
        }
        else{
            m = special[0]-bottom;
        }
        long long  o = top - special[n-1];
        if( top == special[n-1]){
            o=0;
        }
        else{
             o = top -special[n-1];
        }
        
        for(int i =0 ; i<special.size()-1;i++){
            long long  ans = special[i+1]-special[i]-1;
            if(ans>count){
                count= ans;
            }
            cout<<count<<endl;
        }
        // cout<< max(count, max(m,o));
        return max(count, max(m,o));
    }
};