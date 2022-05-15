class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string>ans;
        string s = words[0];
        ans.push_back(s);
        sort(s.begin(),s.end());
        
        for(int i = 1; i<n;i++){
            string s1 = words[i];
            sort(s1.begin(),s1.end());
            // cout<<s<<"//"<<s1<<endl;
            if(s==s1){
                 // cout<<s1<<"//";
            continue;
            }
            else{
               ans.push_back(words[i]) ;
                s=s1;
            }
        }
         
        return ans;

        
        
        
       
       
    
    
        
    }    
};