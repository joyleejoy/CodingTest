1. 문제
: Climbing the Leaderboard
https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?isFullScreen=true

2. n개의 점수가 높은 순으로 정렬된 ranked가 있고, 추가로 m개의 점수를 입력받는다.
동일 점수는 동일 순위이며, 그 다음 점수는 그 다음 순위를 받는다.
점수: 100 90 90 85
순위:    1   2   2  3
추가로 입력받은 m개 점수의 순위를 출력한다.

3. 시간복잡도 n^2 이상이면 시간 초과.
순위는 건너뛰는 것 없이 연속적이므로 중복 점수를 먼저 제거한다.
맨 처음 점수 이상이거나 마지막 점수 이하면 비교할 것 없이 해당 순위로 정한다. 둘 중 아무것도 아니면 순위를 찾는다.
위 과정을 거치며 차례대로 찾은 점수를 반환한다.