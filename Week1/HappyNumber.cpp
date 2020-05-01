/*
Mohammed Mudassir Mohiuddin

Link For the Problem:- https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3284/ 
*/

class Solution {
public:
    bool check(long long int num){
        if(num == 1 || num ==7) return true;
        if(num>1 && num <= 9) return false;
        long long int newnum=0;
        while(num != 0 ){
            //int k = ;
            newnum += (num%10)*(num%10);
            num/=10;
        }
        cout<<newnum;
        return check(newnum);
    }
    bool isHappy(int n) {
        return check(n);
    }
};