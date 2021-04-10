class Solution {
public:

    bool halvesAreAlike(string s) {

        int count1 =0;
        int count2 =0;

        for(int i =0 , j=s.size()-1;i<s.size()/2;i++,j--)
        {
            count1+= helper(tolower(s[i]));
            count2+= helper(tolower(s[j]));
        }
          return count1 ==count2;
    }
         bool helper(char s)
{     return s =='a' || s=='e' || s=='i'||s=='o'||s=='u';                         }
};
