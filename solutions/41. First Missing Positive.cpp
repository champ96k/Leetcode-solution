class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
      int n=nums.size(), i=0;
        while(i<n) {
            if (nums[i]<=0) {
                swap(nums[i],nums[n-1]);
                n--;
            }
            else i++;
        }
        for (int i=0; i<n; ++i) {
            if (abs(nums[i])>n) continue;
            nums[abs(nums[i])-1]=-1*abs(nums[abs(nums[i])-1]);
        }
        for (int i=0; i<n; ++i) {
            if (nums[i]>0) return i+1;
        }
        return n+1;
       }
};
