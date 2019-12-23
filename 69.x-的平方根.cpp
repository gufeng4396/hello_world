/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int a=1,b=x;
        while(a<=b){
            int m=a+(b-a)/2;
            int d=x/m;
            if(d==m) 
                return m;
            if(m<d) 
                a=m+1;
            else 
                b=m-1;
        }
        return b;
    }
};
// @lc code=end

