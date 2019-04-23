#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> ar = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};
    vector<int> temp = ar;
    
    int counter, flag;
    int result = 0;
    

    //1.filter the elements from ar
        //sort, unique and erase
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    //2. counting the number of elements by sorts
    sort(ar.begin(), ar.end());
    for(int i = 0; i < temp.size(); i++){
        flag = 0;
        counter = 0;
        for(int j = 0; j < ar.size(); j++){
            if(temp[i] == ar[j]){
                counter += 1;
                flag = 1;
            }
            else if(flag == 1){
                break;
            }
        }
        result += (counter / 2);
    }
    
    printf("%d\n", result);
    
    
    return 0;
}
