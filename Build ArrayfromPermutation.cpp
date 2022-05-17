class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int z=nums.size();
        vector<int>v(z);
        for(int i =0;i<nums.size();i++){
            v[i]=nums[nums[i]];
            
        }
        return v;
    }
};
