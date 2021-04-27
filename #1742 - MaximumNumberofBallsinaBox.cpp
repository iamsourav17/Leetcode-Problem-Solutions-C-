class Solution {
public:
    int countBalls(int l, int h) {
        int count[50] ={0};
        int total =0;
        int j =0;
        for(int i = l; i<= h;i++)
        {
            total =0;
            j =i;
            while(j != 0)
            {
                int r = j %10;
                total = total + r;
                j = j/10;
            }
            count[total]++;
        }
        sort(count,count+50,greater<int>());
        return count[0];


    }
};
