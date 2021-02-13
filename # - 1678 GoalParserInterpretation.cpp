#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    string interpret(string command) {
        string result="";
        for(int i =0;i<command.length();i++)
        {

            if(command.at(i) == 'G')
            {
                result += "G";
            }
            if(command.at(i) == '(')
            {
                if(command.at(i+1) == ')')
                    result += "o";
                if(command.at(i+1) == 'a')
                    result += "al";
            }
        }
        return result;

    }
};
