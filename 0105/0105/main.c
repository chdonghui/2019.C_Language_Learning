/*#include <stdio.h>

struct Data{
	int a;
	double b;
	char c;
};

void main(){
	struct Data d1;
	struct Data d2 = {50, 3.14, 'A'};

	printf("d1.a (����) : ");
	scanf("%d", &d1.a);

	printf("d1.d (�Ǽ�) : ");
	scanf("%lf", &d1.b);

	fflush(stdin);
	printf("d1.c (����) : ");
	scanf("%c", &d1.c);

	printf("d1.a=%d / d1.b=%.2lf / d1.c=%c\n", d1.a, d1.b, d1.c);
	printf("d2.a=%d / d2.b=%.2lf / d2.c=%c\n", d2.a, d2.b, d2.c);
	
}*/

#include<stdio.h> //error
//�л� ������ �����ϴ� student ����ü ������ ��
	//�Ʒ� ������ �Է�/���
	//�й� : [001]
	//�̸� : �� ����
	//���� : 98

	//�й� : [002]
	//�̸� : �� ����
	//���� : 89

	//***�л� ���� ���***
	//=======================
	//�й�	�̸�	����
	//-----------------------
	//	1	�� ����	98
	//	2	�� ����	89
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

	printf("[�л� ���� �Է�]\n");

	for(i=0; i<2; i++){
		printf("�й� : [%03d]\b\b");
		scanf ("%d", st[i].num);

		fflush(stdin)
		printf("�̸� : ");
		gets(st[i].name);

		printf("���� : ");
		scanf ("%d", &st[i].score);
	}

	printf("***�л� ���� ���***\n");
	printLine('=', 30);
	printf("%4s %-15s %5s\n", "�й�", "�̸�", "����");
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

	printf("[�л� ���� �Է�]\n");

	for(i=0; i<2; i++){
		printf("�й� : [00 ]\b\b");
		scanf ("%d", &(ptr+i) -> num);

		fflush(stdin);
		printf("�̸� : ");
		gets((ptr+i) -> name);

		printf("���� : ");
		scanf ("%d", &(ptr+i) -> score);
	}
	//st3.num = st[0].num;
	//strcpy (st3.name, st[0].name);
	//st3.score=st[0].score;
	st3=st[0];

	/*printf("***�л� ���� ���***\n");
	printLine('=', 30);
	printf("%4s %-15s %5s\n", "�й�", "�̸�", "����");
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

	printf("�����Է� : ");
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
	printf("***�л� ���� ���***\n");
	printLine('=', 30);
	printf("%4s %-15s %5s\n", "�й�", "�̸�", "����");
	printLine('-', 30);
	for (i=0; i<2; i++){
		printf("%4s", (*(ptr+i)) -> num);
		printf("%-15s", (*(ptr+i)) -> name);
		printf("%5s\n", (*(ptr+i)) -> score);
	}
}*/