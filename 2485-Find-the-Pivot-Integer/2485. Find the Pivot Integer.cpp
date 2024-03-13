class Solution {
public:
    int pivotInteger(int n) {
        int leftSum= (n*(n+1))/2;
        int rightSum=0;

        while(leftSum>rightSum)
        {
            rightSum += n;
            if(rightSum == leftSum){
                return n;
            }
            leftSum -= n;
            n--;
        }
        return -1;
        
    }
};
