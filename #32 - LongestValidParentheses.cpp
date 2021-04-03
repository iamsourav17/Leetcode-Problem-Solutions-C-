class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>ans;
        ans.push(-1);
        int maxi = 0;
        for(int i =0 ;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                ans.push(i);
            }
            else
            {
                ans.pop();
                if(ans.empty())
                    ans.push(i);
                else
                    maxi = max(maxi , i-ans.top());
            }
        }
        return maxi;

    }
};
