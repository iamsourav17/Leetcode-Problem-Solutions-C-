class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int min =1000;
        string minString = "";
        for(int i =0;i<strs.size();i++)
        {
            int minlength = strs[i].length();
            if(minlength < min)
            {
                min = minlength;
                minString = strs[i];
            }
        }
        int count =0;
        for(int i =0;i<min;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i] != minString[i])
                {
                    return minString.substr(0,count);
                }
                }

          count++;

        }
        return minString.substr(0,count);


    }
};
