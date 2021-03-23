class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
         set<string> myset;
        int i =0;
        string newstring ="";
        int flag =0;
      for(auto s:emails)
      {
         while(i < s.size() && s[i] != '@')
         {
            if(s[i]=='+') flag =1;
            if(flag = 0 && s[i]!= '.')
            {
             newstring += s[i];
            }
            i++;

         }
         cout<<newstring+s.substr(i)<<" ";
            myset.insert(newstring+s.substr(i));
      }

        return myset.size();

    }
};

