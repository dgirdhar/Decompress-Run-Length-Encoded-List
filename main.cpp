class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ret;
        int size = nums.size();
        
        for (int i = 0; i < size; i += 2) {
            vector<int> temp(nums[i], nums[i + 1]);
            
            ret.insert(ret.end(), temp.begin(), temp.end());
        }
        return ret;
    }
};
