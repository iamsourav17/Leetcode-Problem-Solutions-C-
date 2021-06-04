class Solution {
public:
    char findTheDifference(string s, string t) {
          unordered_map <char ,int> mymap;

        for(int i =0;i<t.size();i++)
        {

            mymap[t[i]]++;

        }
        for(int i = 0; i< s.size();i++)
        {
            mymap[s[i]]--;
        }
        for(auto i : mymap)
        {
            if(i.second ==1)
            {
            return i.first;
        }
    }

      return 'a';
    }
};
