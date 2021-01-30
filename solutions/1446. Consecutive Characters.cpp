class Solution {
public:
    int maxPower(string str) {
        
    int n = str.length(); 
    int count = 0; 
    int cur_count = 1; 
  
    for (int i=0; i<n; i++) 
    { 
        if (i < n-1 && str[i] == str[i+1]) 
            cur_count++; 
        else
        { 
            if (cur_count > count) 
            { 
                count = cur_count; 
            } 
            cur_count = 1; 
        } 
    } 
  
    return count; 
        
    }
};
