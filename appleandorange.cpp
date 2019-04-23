//hackerRank, Apple and Orange

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int cnt_apple = 0;
    int temp_dis_apple = 0;

    int cnt_orange = 0;
    int temp_dis_orange = 0;

    for(int i = 0; i < apples.size(); i++){ //apple
        //calculate distance
        temp_dis_apple = a + apples[i];
        //compare if in s-t
        //if yes, cnt++
        if(temp_dis_apple >= s && temp_dis_apple <= t){
            cnt_apple++;
        }
    }

    for(int j = 0; j < oranges.size(); j++){ //orange
        //calculate distance
        temp_dis_orange = b + oranges[j];
        //compare if in s-t
        //if yes, cnt++
        if(temp_dis_orange >= s && temp_dis_orange <= t){
            cnt_orange++;
        }
    }

    printf("%d\n%d", cnt_apple, cnt_orange);
}