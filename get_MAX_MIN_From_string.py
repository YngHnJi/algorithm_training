#get_MAX_MIN_From_string.py

def solution(s):
    a = s.split()
    c = []
    for i in range(len(a)):
        c.append(int(a[i]))
    c.sort()

    answer = str(c[0]) + " " + str(c[-1])
    return answer