class Solution {
public:
    bool isSumEqual(string firstword, string secondword, string targetword) {
       long double first ,second ,target =0;
        for(int i =0;i<firstword.size();i++)
        {
            first = first*10 + (firstword[i]-'a');
        }
         for(int i =0;i<secondword.size();i++)
        {
            second = second*10 + (secondword[i]-'a');
        }
         for(int i =0;i<targetword.size();i++)
        {
            target= target*10 + (targetword[i]-'a');
        }

        return first+second == target;


    }
};
