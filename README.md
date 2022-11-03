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

## 2752번 문제

C+ 언어로 해결

숫자 3개를 입력받고, 오름차순으로 정렬하는 문제, 
입력하는 숫자의 개수가 정해져있기 떄문에
arr[3] 으로 배열을 선언,
"algorithm" 헤더의 sort() 함수를 이용해서 정렬 후 출력

## 9086번 문제

C+ 언어로 해결

문자열을 입력받기 위해 "String" 헤더를 인클루드
std::string <- 타입을 사용했습니다.
(어째선지 char *str로 선언하면 런타임에러가 남, 아직 확인 안함)
같은 String 헤더에 .size()라는 함수가 있어, 문자열의 크기를 구해줌
그걸 이용해서 처음과 마지막 글자만 출력, 끝

## 5597번 문제

1~30까지의 숫자중 28개를 입력받고, 입력받지 않은 숫자 2개를 작은 수부터 차례대로 출력하는 문제였다.
입력받은 숫자를 기록하기 위해 arr[30]으로 배열을 선언, 0으로 초기화 후, 
반복문을 통해 28개를 입력받으면서 받은 자리를 1로 치환해주었다
그리고 2번째 반복문으로 0번 인덱스부터 체크 후, 0이면 출력
하지만 abort 에러가 났고, 생각해보니 번호가 30까지 들어올 수 있는데 arr[30]은 29까지 밖에 자리가 안되서
arr[31]로 변경 후 시도, 통과

## 2754번 문제

학점을 입력 받으면 해당하는 점수를 출력해주는 프로그램, 공통적으로 알파벳에 0 즉 기본값들은 4.0 3.0 등으로 깔끔하게 숫자가 떨어지기 때문에 기준으로 잡아서 시작했다. 처음 입력은 앞문자와 뒷문자 %c%c로 따로 입력을 받았고,
첫번째 문자가 A~D 사이가 아니면, if문에 걸리지 않고, 바로 프린트를 하게끔 자려고 했기 때문에 ret = 0으로 먼저 초기화를 해주었다. 이후는, 뒷 문자의 조건에 따라 ret 값을 조금 계산해주고 출력.