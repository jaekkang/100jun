# 100jun

## 11382번 문제

C+ 언어로 해결

문제를 제대로 읽지 않아, 입력되는 수의 범위가
10^12인 것을 모르고 무지성으로 int형으로 선언했다가
한번 Fail됨...

long으로 수정 후, 제출시에 통과

## 4153번 문제

C+ 언어로 해결

직각삼각형 a^2 + b^2 = c^2 식을 이용하기 위해 </br>
"algorithm" 헤더의 sort() 함수와 </br>
"cmath" 헤더의 pow()함수를 가져와서 이용 </br>

sort(a, a + @)를 이용시 a 배열을 오름차순으로 정렬해줌 </br>
-> a : 배열포인터, @ : 배열 크기 </br>
pow(a, @) 를 이용시 a^@ 값을 리턴 </br>
-> a : 밑 , @ : 지수 </br>

