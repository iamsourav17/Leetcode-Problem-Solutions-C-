#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
public:

    bool isPlaindrome(int x)
    {
        string s = to_string(x);
        string s2= s;
        reverse(s2.begin(),s2.end());
        return (s==s2);


    }
};

int main()
{
    Solution s;
    int number = 242;
    cout << s.isPlaindrome(number) <<endl;
    return 0;
}


