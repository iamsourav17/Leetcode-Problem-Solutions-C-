class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count =0;
        vector<int> copy;
        for(int i =0;i<heights.size();i++)
        {
            copy.push_back(heights[i]);
        }
        sort(copy.begin(),copy.end());
        for(int i =0; i < copy.size();i++)
        {
            int j =i;
            if(copy[i] != heights[j])
            count++;
        }
        return count;
    }
};
