//hackerrank, kangaroo

string kangaroo(int x1, int v1, int x2, int v2) {
    
    float temp_f;
    int temp_i;

        if((v1 - v2) == 0)
            return "NO";

        temp_f = (float)(x2-x1)/(v1-v2);
        temp_i  = (x2-x1)/(v1-v2); //if it's negative or float
        if(temp_i > 0  && temp_f == temp_i){
            return "YES";
        }
        else{
            return "NO";
        }

}