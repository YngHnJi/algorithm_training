def solution(n):
    answer = 0
    temp = [0, 1]
    cnt = 2
    
    if(n == 0 & n == 1):
        answer = n
        return answer
    else:
        while(cnt != n):
            temp.append(temp[cnt-1] + temp[cnt-2])
            cnt += 1

        answer = temp[n-1] + temp[n-2]
        
        return answer

