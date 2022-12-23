class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sandw;
        queue<int> stud;
        int aux, notPop=0, size;

        size = students.size();
        for(int i=0; i<size; i++){
            sandw.push(sandwiches[size-i-1]);
            stud.push(students[i]);
        }

        while(1){
            if(sandw.top() == stud.front()){
                sandw.pop();
                stud.pop();
                notPop = 0;
            } else{
                aux = stud.front();
                stud.pop();
                stud.push(aux);
                notPop ++;
            }
            if(notPop == stud.size())
                break;
        }
        return notPop;
    }
};