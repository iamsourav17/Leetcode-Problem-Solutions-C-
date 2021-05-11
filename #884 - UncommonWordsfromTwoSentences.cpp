class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {

        vector<string> result;
        string s;
        stringstream ss(A);
        stringstream sx(B);
        unordered_map <string,int> mpp;
        while(ss >> s)
        {
            mpp[s]++;

        }
        while(sx >> s)
        {
            mpp[s]++;
        }
        for(auto it : mpp)
        {
            if(it.second == 1)
            result.push_back(it.first);
        }
        return result;

    }
};
