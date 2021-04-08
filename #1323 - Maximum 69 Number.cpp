class Solution {
public:
    int maximum69Number (int num) {
        string newstring = to_string(num);
        for(int i =0;i<newstring.length();i++)
        {

            if(newstring[i] == '6')
            {    newstring[i]= '9';
                break;
            }
        }
        return stoi(newstring);
    }
};
