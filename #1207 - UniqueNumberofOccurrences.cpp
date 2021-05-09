class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         unordered_map<int,int> mpp;
        set<int>sss;
        for(int i =0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        unordered_map<int,int>::iterator it;
        for(it = mpp.begin(); it != mpp.end(); it++)
        {
            sss.insert(it->second);
        }
        return sss.size() == mpp.size() ? true: false;
    }
};
