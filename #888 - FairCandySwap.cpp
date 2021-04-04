class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
         int sumA =0;
        int sumB =0;
        vector<int> answer;
        for(int i =0;i<A.size();i++)
        {
            sumA += A[i];
        }
        set<int> sB;
        for(int i =0; i < B.size();i++)
        {
            sumB += B[i];
            sB.insert(B[i]);
        }
        int alpha = (sumB - sumA)/2;
        for(int k =0;k <A.size();k++)
        {
            set<int>::iterator it;
            it = sB.find(A[k] + alpha);
            if(it != sB.end())
            {
                answer.push_back(A[k]);
                answer.push_back(A[k] + alpha);
                return answer;

            }
        }
        return answer;

    }
};
