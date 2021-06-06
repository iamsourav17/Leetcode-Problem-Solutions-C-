class Solution {
public:
    int maxNumberOfBalloons(string text) {
          unordered_map <char,int> mymap;

        for(char c:text)
        {
            mymap[c] +=1;

        }
        return min({mymap['b'],mymap['a'],mymap['l']/2,mymap['o']/2,mymap['n']});


    }
};
