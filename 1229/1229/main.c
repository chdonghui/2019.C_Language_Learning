////����Ÿ��, ������Ÿ��, ��������
//#include <stdio.h>
//
//void kim_kang_sa_man_se();//�Լ�����
//
//void main(){
//	printf("");
//	kim_kang_sa_man_se();
//}
//
//void kim_kang_sa_man_se(){
//	int a, b, c;
//	a=10, b=20;
//	printf("�谭�� ����!!!\n");
//}

/*#include <stdio.h>

void printLine();
void printStar();
void sum(int a, int b);

void main(){
	printLine();
	sum(3, 4);
	printStar();

}
void sum(int a, int b){
	printf("%d + %d = %d\n", a, b, a+b);
}

void printLine(){
	printf("**************\n");
}

void printStar(){
	printf("--------------\n");
}*/

//�ݺ�Ƚ���� ���ڸ� ���� �޾� Ƚ�� ��ŭ ���ڸ� �ݺ� ����ϼ���

/*#include <stdio.h>
#include <conio.h>*/

/*void go(int n, char ch);

void main(){
	int n; char ch;
	printf("�ݺ� Ƚ�� : ");
	scanf("%d", &n);
	printf("���� �Է� : ");
	ch = getch();
	go(n, ch);
}

void go(int n, char ch){

	int i;
	for (i=0; i<n; i++){
		printf("%c", ch);
	}
	printf("\n");*/

	/*void printChar(int repeat, char ch);	

	void main(){
		int repeat;
		char ch;
		printf("���� �Է� : ");
		ch = getchar();
		printf("Ƚ�� �Է� : ");
		scanf("%d", &repeat);

		void printChar(int repeat, char ch);
	}

		void printChar(int repeat, char ch){
			int i;
			for (i=0; i<repeat; i++){
			printf("%c", ch);
		}
	}*/

/*	//�Է� ���� �� ���� ū �� ����ϱ�

	void main(){
	int num1, num2;
	int res;

	printf("����1 : ");
	scanf("%d", &num1);

	printf("����2 : ");
	scanf("%d", &num2);

}

	void Num(int num1, int num2){
		if(n)*/

#include <stdio.h>
	void func1();
	void func2();

	void main(){
		func1();
		func2();
		func1();
		func2();
		func1();
		func2();
	}


	void func1(){
		static int i=10;//�����Ϳ��� ����

		i++;
		printf("func() : i = %d\n", i);
	}

	void func2(){
		static int i=10;//�����Ϳ��� ����

		i++;
		printf("func() : i = %d\n", i);
	}

/*void main(){
	char c = 'a';
	int i = 3;
	double d = 3.14;

	char * cp;
	int * ip;
	double * dp;

	cp = &c;
	ip = &i;
	dp = &d;

	*cp = 'b';

	*ip = *cp + *ip;

	printf("c=%c / *cp=%c\n", c, *cp);
	printf("i=%d / *ip=%d\n", i, *ip);
	printf("d=%.2lf / *dp=%.2lf\n", d, *dp);

	printf("&c=%p / cp=%p\n", &c, cp);
	printf("&i=%p / ip=%p\n", &i, ip);
	printf("&d=%p / dp=%p\n", &d, dp);
}*/

/*void main(){

	int a=5;
	double d=3.14;
	double res;

	int * ap = &a;
	double * dp = &d;
	double * resp = &res;

	*resp = *ap + *dp;

	printf("���� %.2lf�Դϴ�.\n", *resp);//8.14
}*/