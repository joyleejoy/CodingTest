1. 문제 
: https://www.hackerrank.com/challenges/candies/problem?isFullScreen=true
: Candies

2. 풀이
: 점수에 따라 자원(사탕)을 최소로 분배하는 문제.
: input으로 점수 배열이 주어지고, 각 학생은 최소 1개의 사탕을 가질 수 있다.
: 1개씩 기본으로 배부 후, 차례대로 비교해가며 점수에 따라 사탕을 배부한다.
: 근접한 학생 중에는 점수가 높은 쪽이 더 많은 사탕을 가져야 하므로, 역순으로 다시 검사한다.