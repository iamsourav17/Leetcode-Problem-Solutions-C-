class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string answer = s;
        for(int i =0; i<indices.size();i++)
        {
            s[indices[i]] = answer[i];
        }
        return s;
    }
};
