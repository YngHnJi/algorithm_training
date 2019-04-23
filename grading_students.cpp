//hackerrank, grading problem

vector<int> gradingStudents(vector<int> grades) {
    /*
     * Write your code here.
     */
    vector<int> result;
    
    int temp_rnd = 0;

    for(int i = 0; i < grades.size(); i++){
        
        if(grades[i] >= 38){
            temp_rnd = ((grades[i] / 5) + 1) * 5;

            if((temp_rnd - grades[i]) < 3){
                result.push_back(temp_rnd);
            }
            else{
                result.push_back(grades[i]);
            }
        }
        else{
            result.push_back(grades[i]);
        }
    }

    return result;
}