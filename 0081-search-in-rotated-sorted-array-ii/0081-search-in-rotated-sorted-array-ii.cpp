class Solution {
public:
    bool search(vector<int>& vec, int target) {
        int s = 0;
        int e = vec.size() - 1;
        while(s <= e) {
            while(s < e && vec[s] == vec[s + 1]) s++;
            while(s < e && vec[e] == vec[e - 1]) e--;
            int mid = s + (e-s)/2;
            if(target == vec[mid]) return true;
            if(vec[mid] >= vec[s]) {
                if(target < vec[mid] && target >= vec[s]) {
                    e = mid - 1;
                }
                else s = mid + 1;
            }
            else {
                if(target > vec[mid] && target <= vec[e]) {
                    s = mid + 1;
                }
                else e = mid - 1;
            }
        }
        return false;
    }
};