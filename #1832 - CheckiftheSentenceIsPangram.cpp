class Solution {
public:
    bool checkIfPangram(string sentence) {
          unordered_map <char , int> Lettermap;
         for(char c : sentence)
            {
                Lettermap[c]++;
            }
         return Lettermap.size() == 26 ;

    }
};
