class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while (left < right) {
           left /= 2; //left >>= 1; 
           right /= 2; //right >>= 1;
            shift++;
        }
        return left << shift;
    }
};
