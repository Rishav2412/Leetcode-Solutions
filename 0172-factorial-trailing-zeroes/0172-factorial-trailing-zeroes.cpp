class Solution {
public:
    int trailingZeroes(int n) {
        int total = 0;
        int temp = 5;

        while(temp<=n){
            int m = n / temp;
            total+=m;

            temp = temp*5;
        }
        return total;
        
    }
};