class Solution {
public:
    int singleNumber(vector<int>& A) {
        
  int one=0;
        int two=0;
        for(int i=0;i<A.size();i++){
            one=(one^A[i]) & ~two;
            two=(two^A[i]) & ~one;
        }
        return one;
    }
};
