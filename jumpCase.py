#jumping.py

"""
n		1	2	3	4	5	6	…
answer	1	2	3	5	8	13	…

"""
def jumpCase(n):
    answer = 0

    if n == 1:
    	return 1
    elif n == 2:
    	return 2
    answer = jumpCase(n - 1) + jumpCase(n - 2) 


    return answer