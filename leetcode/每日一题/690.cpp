/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*> m;
        for (int i = 0; i < employees.size(); i++){
            m.insert({employees[i]->id,employees[i]});
        }
        stack<Employee*> s;
        s.push(m.find(id)->second);
        int result = 0;
        while(!s.empty()){
            result += s.top()->importance;
            Employee* temp = s.top();
            s.pop();
            if (temp->subordinates.size() != 0){
                for (int next : temp->subordinates){
                    s.push(m.find(next)->second);
                }
            } 
        }
        return result;        
    }
};
