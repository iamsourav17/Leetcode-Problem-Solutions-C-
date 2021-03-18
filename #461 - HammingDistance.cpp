class Solution {
public:
    int hammingDistance(int x, int y) {
        int answer =x^y;
        int count =0;
        while(answer > 0)
        {
            count+= answer & 1;
            answer >>=1;
        }
        return count;

    }
};
