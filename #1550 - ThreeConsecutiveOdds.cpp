class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
          int limit = arr.size()-2;
        for(int i =0;i<limit;i++)

            if(arr[i]%2 && arr[i+1]%2 && arr[i+2]%2) return true;

            return false;


    }
};
