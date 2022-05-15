class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k =3;
        int n = target.size();
        vector<vector<int>>v;
        v = mat;
      if( mat == target ){
          return true;
      }
        while(k--){
         for(int i =0 ; i< mat.size();i++){
             for(int j =0 ; j<mat[0].size();j++){
                  v[j][mat[0].size()-1-i]=mat[i][j];
             }
         }
        if(v== target){
            return true;
        }
           mat = v;
        }
        
            return false;
        
    }
};