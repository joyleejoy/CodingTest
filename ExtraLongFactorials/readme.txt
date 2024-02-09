1. 문제
: https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=true
: Extra Long Factorials

2. 풀이
: Factorial을 구현하면 되는 문제.
: 단, 1<= n <= 100이므로 단순 재귀나 for loop를 이용한 구현은 적합하지 않다. (overflow 발생)
: byte 숫자 대신 Array 숫자로 바꿔 생각하기. n자리의 숫자를 0 ~ n 크기의 Array로 구현한다.
: 곱셈은 낮은 자리부터 진행하되 몫은 다음 자릿수로 넘긴다. (반복)
: 출력은 높은 자리부터 (index 큰 순서대로) 진행.