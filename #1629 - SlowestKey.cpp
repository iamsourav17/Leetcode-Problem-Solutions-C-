class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
         char key = keysPressed[0];
        int maxTime = releaseTimes[0];
        int N = releaseTimes.size();
        for (int i = 1; i < N; i++) {
            int duration = releaseTimes[i] - releaseTimes[i-1];
            if (duration >= maxTime) {
               if (duration == maxTime) {
                    if (keysPressed[i] > key) {
                        key = keysPressed[i];
                    }
               } else {
                   key = keysPressed[i];
                   maxTime = duration;
               }
            }
        }
        return key;

    }
};
