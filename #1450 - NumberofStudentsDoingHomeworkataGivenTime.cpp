class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {

        int count =0;
        for(int i = 0; i<startTime.size();i++)
        {
            int j =i;
            if(startTime[i] <= queryTime && queryTime <= endTime[j])
            count++;
        }
        return count;
    }
};
