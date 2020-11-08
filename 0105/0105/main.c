/*#include <stdio.h>

struct Data{
	int a;
	double b;
	char c;
};

void main(){
	struct Data d1;
	struct Data d2 = {50, 3.14, 'A'};

	printf("d1.a (정수) : ");
	scanf("%d", &d1.a);

	printf("d1.d (실수) : ");
	scanf("%lf", &d1.b);

	fflush(stdin);
	printf("d1.c (문자) : ");
	scanf("%c", &d1.c);

	printf("d1.a=%d / d1.b=%.2lf / d1.c=%c\n", d1.a, d1.b, d1.c);
	printf("d2.a=%d / d2.b=%.2lf / d2.c=%c\n", d2.a, d2.b, d2.c);
	
}*/

#include<stdio.h> //error
//학생 정보를 저장하는 student 구조체 정의한 후
	//아래 정보를 입력/출력
	//학번 : [001]
	//이름 : 김 강사
	//점수 : 98

	//학번 : [002]
	//이름 : 김 강오
	//점수 : 89

	//***학생 정보 출력***
	//=======================
	//학번	이름	점수
	//-----------------------
	//	1	김 강사	98
	//	2	김 강오	89
/*void printLine(char ch, int repeat); //errer

typedef struct Student St;

typedef struct Student{
		char num;
		char grade;
		int score;
		double height;
		char name[20];
		
	}St;

void main(){
	St st[2];
	int i;
	St * ptr;

	printf("[학생 정보 입력]\n");

	for(i=0; i<2; i++){
		printf("학번 : [%03d]\b\b");
		scanf ("%d", st[i].num);

		fflush(stdin)
		printf("이름 : ");
		gets(st[i].name);

		printf("점수 : ");
		scanf ("%d", &st[i].score);
	}

	printf("***학생 정보 출력***\n");
	printLine('=', 30);
	printf("%4s %-15s %5s\n", "학번", "이름", "점수");
	printLine('-', 30);
	for (i=0; i<2; i++){
		printf("%4s %-15s %5s\n", st[i].num, st[i].name, st[i].score);
	}
}

void printLine(char ch, int repeat){
	int i;

	for (i=0; i<repeat; i++){
		printf("%c", ch);
	}
	printf("\n");
}*/

#include <string.h>
#define NULL 0

void output(St st3);

void printLine(char ch, int repeat);//errer

typedef struct Student {
	int num;
	int score;
	char name[20];
}St;

void main(){
	St st[2];
	St st3;
	int i;
	St * ptr;

	ptr -> num;
	ptr -> score;
	ptr -> name;

	printf("[학생 정보 입력]\n");

	for(i=0; i<2; i++){
		printf("학번 : [00 ]\b\b");
		scanf ("%d", &(ptr+i) -> num);

		fflush(stdin);
		printf("이름 : ");
		gets((ptr+i) -> name);

		printf("점수 : ");
		scanf ("%d", &(ptr+i) -> score);
	}
	//st3.num = st[0].num;
	//strcpy (st3.name, st[0].name);
	//st3.score=st[0].score;
	st3=st[0];

	/*printf("***학생 정보 출력***\n");
	printLine('=', 30);
	printf("%4s %-15s %5s\n", "학번", "이름", "점수");
	printLine('-', 30);
	for (i=0; i<2; i++){
		printf("%4s", st3.num);
		printf("%-15s", st3.name);
		printf("%5s\n", st3.score);
	}*/

	FILE * fp;
	char ch;

	fp = fopen("out.txt", "w");
	if(fp == NULL){
		printf("File Open Fail!!\n");
		return;
	}

	printf("문자입력 : ");
	ch = getchar();

	fputc(ch, fp);
//	ch = fgetc(fp);
//	printf("ch=%c\n", ch);

	fclose(fp);
}

/*void printLine(char ch, int repeat){
	int i;

	for (i=0; i<repeat; i++){
		printf("%c", ch);
	}
	printf("\n");
}

void output(St * st3){
	int i;
	printf("***학생 정보 출력***\n");
	printLine('=', 30);
	printf("%4s %-15s %5s\n", "학번", "이름", "점수");
	printLine('-', 30);
	for (i=0; i<2; i++){
		printf("%4s", (*(ptr+i)) -> num);
		printf("%-15s", (*(ptr+i)) -> name);
		printf("%5s\n", (*(ptr+i)) -> score);
	}
}*/