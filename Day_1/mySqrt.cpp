class Solution {
public:
    int mySqrt(int x) {
        if(x < 2 ) {
            return x;}
        long long int left = 1, right = x;
 
        while(left <= right) {
            long long int mid = (right + left ) / 2;
            if( mid*mid == x) {return mid; }
            if(mid*mid < x) {
                left = mid + 1;
            }
            else {
                right = mid -1;
            }
        }
        return right;
    }
};