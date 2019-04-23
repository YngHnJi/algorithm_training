//climbing_the_leaderboard.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    
    vector<int> scores = {100, 100, 50, 40, 40, 20, 10};
    vector<int> alice = {5, 25, 50, 120};
    
    vector<int> result;

    vector<int> uniq = scores;
    //extract unique numbers and store in comp vector
    uniq.erase(unique(uniq.begin(), uniq.end()), uniq.end());
    
/*
    for (int i = 0; i < alice.size(); i++) {
      for (int j = 0; j < uniq.size(); j++) {
        if (alice[i] >= uniq[j]) {

          result.push_back(j + 1);
          break;
        } 
        else if (j == uniq.size() - 1) {
          result.push_back(uniq.size() + 1);
        }
      }
    }
*/


    for (int i = alice.size()-1; i >= 0  ; i--) {
      for (int j = uniq.size()-1; j >= 0 ; j--) {
        if (alice[i] <= uniq[j]) {

          result.push_back(j + 1);
          break;
        } else if (j == uniq.size() - 1) {
          result.push_back(uniq.size() + 1);
        }
      }
    }
    
    printf("result\n");
    
    
    return 0;
}