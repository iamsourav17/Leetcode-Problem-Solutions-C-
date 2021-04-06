class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         int A = word1.size();
        int B =word2.size();
        string answer = "";
        for(int i =0;i<A+B;i++)
        {
            if(i < A)
            {
                answer.push_back(word1[i]);
            }
            if(i < B)
            {
                answer.push_back(word2[i]);
            }
        }
        return answer;
    }
};
