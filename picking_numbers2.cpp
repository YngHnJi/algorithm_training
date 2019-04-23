//picking_numbers2.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{

    //vector<int> a = {4, 6, 5, 3, 3, 1};
    vector<int> a = {4, 97, 5, 97, 97, 4, 97, 4, 97, 97, 97, 97, 4, 4, 5, 5, 97, 5, 97, 99, 4, 97,
    5, 97, 97, 97, 5, 5, 97, 4, 5, 97, 97, 5, 97, 4, 97, 5, 4, 4, 97, 5, 5, 5, 4, 97, 97, 4, 97, 5, 4, 4, 97,
    97, 97, 5, 5, 97, 4, 97, 97, 5, 4, 97, 97, 4, 97, 97, 97, 5, 4, 4, 97, 4, 4, 97, 5, 97, 97, 97, 97, 4, 97,
    5, 97, 5, 4, 97, 4, 5, 97, 97, 5, 97, 5, 97, 5, 97, 97, 97};
    
    vector<int> temp = a; //store arranged numbers
    
    //sort it and put in temp only unique numbers
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    
    if(temp.size() <= 1)
        return a.size();

    vector<int> container;
    
    int cnt;
    for(int i = 0; i < temp.size(); i++){

        container.push_back(temp[i]);
        cnt = 0;
        
        for(int j = 0; j < a.size(); j++){
            if(container[i*2] == a[j])
                cnt++;
        }
        container.push_back(cnt);
    }

    int max = 0;
    
    for(int i = 0; i < container.size()/2; i++){
        if(container[(i+1)*2] - container[i*2] <= 1){ //compare the number
            if((container[((i+1)*2)+1] + container[i*2+1]) > max){ //adding
                max = container[((i+1)*2)+1] + container[i*2+1];
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
