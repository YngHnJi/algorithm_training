//
//  no_same_num.cpp
//  Backjoon_algorithm
//
//  Created by Younghoon Ji on 1/16/19.
//  Copyright © 2019 Younghoon Ji. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


vector<int> solution(vector<int> arr)
{
    //storing unique number from input vector
    vector<int> answer;
    //flag sets when elements of answer vector and input vector are same to avoid put same number into answer vector
    int flag = 0;

    answer.push_back(arr[0]);

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < answer.size(); j++){
            if(answer[j] == arr[i]){
                flag = 1;
            }
        }
        //browsing answer vector and if flag sets, which shows no same thing, push_back
        if(flag == 0){
            answer.push_back(arr[i]);
        }
        else{
            flag = 0;
        }
    }

    
    return answer;
}

int main(){
    
    vector<int> arr = {1,1,2,3,4,4,5};
    vector<int> arr1 = {1,1,3,3,0,1,1};
    vector<int> arr2 = {2,3,4,1,1,4,5};
    vector<int> arr3 = {4,4,4,3,3};
    vector<int> answer;
    
    answer = solution(arr2);
    
    for(int i = 0; i < answer.size(); i++){
        printf("%d", answer[i]);
    }
    
    
    return 0;
}
