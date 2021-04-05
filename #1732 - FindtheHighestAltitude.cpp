class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int max = 0;
        int height =0;
        for(int i =0; i< gain.size();i++)
        {
            height += gain[i];
            if(height > max )
            {
                max =height;
            }
        }
        return max;
    }
};
