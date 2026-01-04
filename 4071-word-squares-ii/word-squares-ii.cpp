class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        vector<vector<string>> ans;
        for(int i = 0; i < words.size(); i++){
            string top = words[i];
            for(int j = 0; j < words.size(); j++){
                if(i == j) continue;
                string left = words[j];
                if(top[0] != left[0]) continue;
                for(int k = 0; k < words.size(); k++){
                    if(j == k || i == k) continue;
                    string right = words[k];
                    if(top[3] != right[0]) continue;
                    for(int l = 0; l < words.size(); l++){
                        if(k == l || l == j || l == i) continue;
                        string bottom = words[l];
                        if(bottom[0] != left[3] || bottom[3] != right[3]) continue;
                        ans.push_back({top,left,right,bottom});
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};