
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        set<int> s;
        unordered_map<int, int> m;
        for(int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for(auto it: m)
            s.insert(it.second);
        if(s.size() == m.size()) return true;
        return false;
    }
};