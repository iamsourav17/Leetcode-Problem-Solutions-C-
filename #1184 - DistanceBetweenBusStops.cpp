
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
         int f , s = 0;
        if(start == destination) return 0;
        if(start > destination)
            swap(start,destination);

            for(int i = start; i <destination;i++)
            {
                f += distance[i];
            }

        for(int i : distance)
            s += i;

        int answer = min(f,s-f);

        return answer ;
    }
};
