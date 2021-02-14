class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         set<char>s;
        int n = allowed.length();
        for(int i=0;i<n;i++)
        {
            s.insert(allowed[i]);
        }
        int count = 0;
        for(int i=0;i<words.size();i++)
        {
            string temp = words[i];
            int flag = 0;
            for(int ii=0;ii<temp.length();ii++)
            {
                if(s.find(temp[ii])==s.end())
                {
                    flag = 1;
                    break;
                }
            }
            if(!flag)
            {
                count++;
            }
        }
        return count;
    }


};
