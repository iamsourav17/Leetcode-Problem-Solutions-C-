class Solution {
public:
    bool judgeCircle(string moves) {
        int L =1;
            int R =1;
            int D =1;
            int U = 1;
        for(int i=0;i<moves.length();i++){
			char ch = moves[i];


            if(moves[i] == 'L')
            {
                L +=1;
            }
            else if(moves[i] == 'R')
            {
                R+=1;
            }
            else if(moves[i] == 'U')
            {
                U +=1;
            }
            else
            {
                D+=1;
            }

        }
        if(L == R && U == D)
        {
            return true;
        }
        else
        {
                return false;
        }

    }
};
