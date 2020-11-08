#include <stdio.h>

//void invertChar(char * nessage);
void counting(int count);

void main(){
	//char c = 'a';
	//int i = 3;
	//double d = 3.14;
	//
	//char * cp;
	//int * ip;
	//double * dp;

	//cp = &c;
	//ip = &i;
	//dp = &d;

	//printf("c=%c\n", *(&c)); //=c
	//printf("i=%d\n", i);
	//printf("d=%.2lf\n", d);

	//printf("*cp=%c\n", *cp);
	//printf("*ip=%d\n", *ip);
	//printf("*dp=%.2lf\n", *dp);

	/*int a[3] = {1, 2, 3};
	int * p;
	int i;

	p = a;

	printf("a=%p\n", a);

	for (i=0; i<3; i++){
		printf("p+%d=\t%p\n", i, p+i);
		printf("p+%d=\t%p\n", i, &a[i]);
	}

	for (i=0; i<3; i++){
		printf("a[%d] =\t%d\n", i, a[i]);
		printf("*(p+%d) =%d\n", i, *(p+i));
	}*/

	//Q1. int num[5] = {1, 2, 3, 4, 5};
	// + : 오른쪽으로 출력(포인터 변수)(cw)
	// - : 왼쪽으로 출력(배열이름)(ccw)

	//방향키와 인덱스 입력 받아 출력하세요.
	//입력 : 인덱스 방향과 첫 숫자

	/*char lr;
	int index;
	int i;
	int num[5] = {1, 2, 3, 4, 5};

	printf("\n방향을 '+'오른쪽 방향 또는 '-'왼쪽 방향으로 입력 : ");
	scanf("%c", &lr);
	printf("인덱스 : ");
	scanf("%d", &index);

	if(lr == '+'){
		for (i=0; i<5; i++){
			printf("+ %d번째 / index = %d : %d\n", i+1, index, *(num+index) );
			index = (index+1)%5;
		}
	}

	else if(lr == '-'){
		for (i=0; i<5; i++){
			if (index < 0){
				index = 4;
			}
			printf("+ %d번째 / index = %d : %d\n", i+1, index, *(num+index) );
			index--;
		}
	}

	else {
		printf("문자를 잘못 입력하셨습니다.\n");
	}*/

	//"h	e	l	l	o	\0"
	//10	11	12	13	14	15

	//func("Happy New Year");

	//문자 배열에 "Happy  New Year"저장하고
	//대소문자 변환해 출력(함수 구현)
	//32

	/*char str[4029];

	printf("문자열 입력 : ");
	//scanf("%s", str);
	gets(str);
	printf("문자열 출력 : %s\n", str);*/

	//문자열을 입력받아 대문자를 '*'로 저장한 후 출력
	/*int i=0;
	char str[4096];
	char ch;

	printf("문자열 입력 : ");
	gets(str);

	/*for (i=0; str[i] != '\0'; i++){
		if (str[i]>='A' && str[i]<='Z'){
			str[i] = '*';
		}
	}*/

	/*while (str[i] != '\0'){
		ch = str[i];

		if (ch>='A' && ch<='Z'){
			str[i] = '*';
		}
		i++;
	}
	printf("출력 결과 : %s\n", str);

	//printf ("문자열 출력 : %s\n", str);*/

	//Q3. 입력 받은 문자열의 길이를 구해서 리턴해주는 함수 구현하기
	
	char str[4096];
	int count = 0;
	printf("길이를 구할 문자열을 입력해주세요.\n");
	gets(str);
	void counting(char * str, int count);
	printf("길이 : %d\n", count);

	/*char message[4096] = "Happy New Year";

	printf("변환전 출력 : %s\n", message);

	void invertChar(char * nessage);

	printf("변환 후 출력 : %s\n", message);

}

void invertChar(char * message){

	int i;

	for (i=0; message[i] != '\0'; i++){

		if (message[i]>='a' && message[i]<='z'){
			message[i] -= ('a'-'A');
		}

		else if(message[i]>='A' && message[i]<='Z'){
			message[i] += ('a'-'A');
		}

		else {
			message[i] = message[i];
		}
	}*/

}

void counting(char * str, int count){
	while (str[count] != '\0'){
		count++;
	}
}