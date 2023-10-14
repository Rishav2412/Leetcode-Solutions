int max(int a, int b){ return (a>b) ? a: b; }
class Solution {
public:
    int maxProduct(vector<string>& word) {
        int n= word.size(); vector<int> mask(n, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<word[i].size(); j++){
              
                int idx= (int)(word[i][j]-'a');
                mask[i]= mask[i] | (1<<idx);
            }
        }
        int len=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if( (mask[i] & mask[j]) == 0 ){ 
                    len= max(len, word[i].size()*word[j].size());
                }
            }
        }
        return len;
    }
};