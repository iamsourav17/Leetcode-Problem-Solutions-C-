class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
         sort(arr.begin(),arr.end());
        int minVal = INT_MAX;
        for(int  i =1;i<arr.size();i++)
        {
            minVal = min(minVal,arr[i]-arr[i-1]);
        }
        vector<vector<int>>answer;
        for(int i =1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1] == minVal)
            {
                answer.push_back({arr[i-1],arr[i]});
            }
        }
        return answer;

    }
};
