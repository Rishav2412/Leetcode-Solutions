class Solution {
public:
    long int reverse(int x) {
        long int num = 0 ; 
        while (x!=0)
        {
            num = num*10;
            num = num+(x%10);
            x = x/10;
        }
        // for certain test cases
        if(num>INT_MAX)
        {
            return 0 ;
        }
        else if (num<INT_MIN)
        {
            return 0 ; 
        }
        else return num;
    }
};