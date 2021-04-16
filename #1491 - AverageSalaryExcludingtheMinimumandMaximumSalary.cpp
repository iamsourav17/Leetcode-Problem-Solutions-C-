class Solution {
public:
    double average(vector<int>& salary) {
         sort(salary.begin(), salary.end());
        int persons = salary.size()-2;
        double total =0;
 long double answer =0;
        for(int i =1;i<salary.size()-1;i++)
        {
         total+= salary[i];
        }
        answer = total/persons;
        return answer;


    }
};
