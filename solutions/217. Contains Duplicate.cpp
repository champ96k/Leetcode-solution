class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
      // method 1: Using unordered_set
        
      //   unordered_set<int>s;
      //   for(int i=0;i<nums.size();i++) {
      //       if(s.find(nums[i])!=s.end()) {
      //           return true;
      //       } else {
      //           s.insert(nums[i]);
      //       }
      //   }
      // return false;
        
      // Method 2: Using set
        set<int>s;
       for(int n:nums) {
            if(s.find(n)==s.end())
                s.insert(n);
            else 
                return true;
        }
        return false;
    }
};
