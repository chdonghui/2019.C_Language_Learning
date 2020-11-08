/*#include <stdio.h>//mang
int counting(char * str);

void main(){
	char str[4096];
	int count=0;
	printf("길이를 구할 문자열을 입력해주세요.\n");
	gets(str);
	count = counting(str);
	printf("입력 된 문자열 : %s\n", str);
	printf("문자열 길이 : %d\n", count);
}

int counting(char * str){
	int count = 0;
	int i=0;
	while (str[count] != '\0'){
		count++;
		i++;
	}
	return count;
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	char name[30];
	int len;

	printf("이름입력 : ");
	gets(name);

	len = strlen(name);
	printf("글자 수 : %d", name);
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	char buf[225];
	char copy[225];
	int i;

	printf("문자열 입력 : ");
	gets(buf);
	printf("입력된 문자열 : %s\n", buf);
	
//	for (i=0; buf[i] != '\0'; i++){
//		copy[i]=buf[i];
//	}
	strcpy(copy, buf);
//	copy[i]='\0';
	printf("copy=%s\n", copy);
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	char buf[225];
	char copy[225];
	char str[225];
	int i;

	printf("문자열 입력 : ");
	gets(buf);
	printf("입력된 문자열 : %s\n", buf);
	
	strcpy(copy, buf);

	strcat(str, buf);
	printf("copy=%s\n", copy);
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	char fStr [20] = "C language";
	char sStr [20];

	printf("첫 번째 문자열 :  %s\n", fStr);
	printf("두 번째 문자열 입력 : ");
	gets(sStr);

	if(strcmp(fStr, sStr) == 1){ //앞 문자열 큼
		printf("[%s] > [%s]\n", fStr, sStr);
	}else if (strcmp(fStr, sStr) == 0){ //같음
		printf("[%s] == [%s]\n", fStr, sStr);
	}else{
		printf("[%s] < [%s]\n", fStr, sStr);// 뒷 문자열 큼
	}
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	//HomeWork
	//HW1. 문자열을 입력 받아 입력받은 문자열의 공백 제거
	//HW2. 입력 받은 파일명에 '.txt'문자열을 연결
	//HW3. 가위/바위/보를 선택한 후 조건에 따라 판별
	// 예) 컴퓨터 '보' 사용자 '가위'
	//		컴퓨터가 이겼습니다.
}*/