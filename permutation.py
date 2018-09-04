import itertools

def solution(n, k):
    answer = []
    init = []
    temp = []
    
    for i in range(1,n+1):
        init.append(i)  #초기 함수 설정
        
    mypermutation = itertools.permutations(init)
    for j in mypermutation:
        temp.append(j)
        
    answer = list(temp[k-1])
        
    return answer