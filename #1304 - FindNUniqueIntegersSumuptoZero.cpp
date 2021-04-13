class Solution {
public:
    vector<int> sumZero(int n) {
         vector<int> ans;
        int alpha =-2;
        if(n % 2 != 0)
        {
            ans.push_back(0);
        }
        while(ans.size() < n)
        {
            ans.push_back(alpha);
            ans.push_back(abs(alpha));
            alpha -=1;
        }
        return ans;

    }
};
