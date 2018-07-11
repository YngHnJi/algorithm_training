#https://programmers.co.kr/learn/challenges
#JadenCase string만들기
"""
JadenCase란 모든 단어의 첫 알파벳이 대문자이고,
그 외의 알파벳은 소문자인 문자열입니다. 문자열 s가 주어졌을 때, 
s를 JadenCase로 바꾼 문자열을 리턴하는 함수, solution을 완성해주세요.
"""


def solution_1(s):
    answer = ''
    temp = s.lower().split(' ')
    for i in range(len(temp)):
        temp[i] = temp[i][0].upper() + temp[i][1:]
        
    a = " "
    answer = a.join(temp)
    
    return answer

def solution_2(s):
    answer = ''
    for i in s.split():
        answer += i[0].upper() + i[1:].lower() + ' '
    
    return answer[:-1]