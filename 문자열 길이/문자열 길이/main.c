/*#include <stdio.h>//mang
int counting(char * str);

void main(){
	char str[4096];
	int count=0;
	printf("���̸� ���� ���ڿ��� �Է����ּ���.\n");
	gets(str);
	count = counting(str);
	printf("�Է� �� ���ڿ� : %s\n", str);
	printf("���ڿ� ���� : %d\n", count);
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

	printf("�̸��Է� : ");
	gets(name);

	len = strlen(name);
	printf("���� �� : %d", name);
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	char buf[225];
	char copy[225];
	int i;

	printf("���ڿ� �Է� : ");
	gets(buf);
	printf("�Էµ� ���ڿ� : %s\n", buf);
	
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

	printf("���ڿ� �Է� : ");
	gets(buf);
	printf("�Էµ� ���ڿ� : %s\n", buf);
	
	strcpy(copy, buf);

	strcat(str, buf);
	printf("copy=%s\n", copy);
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	char fStr [20] = "C language";
	char sStr [20];

	printf("ù ��° ���ڿ� :  %s\n", fStr);
	printf("�� ��° ���ڿ� �Է� : ");
	gets(sStr);

	if(strcmp(fStr, sStr) == 1){ //�� ���ڿ� ŭ
		printf("[%s] > [%s]\n", fStr, sStr);
	}else if (strcmp(fStr, sStr) == 0){ //����
		printf("[%s] == [%s]\n", fStr, sStr);
	}else{
		printf("[%s] < [%s]\n", fStr, sStr);// �� ���ڿ� ŭ
	}
}*/

/*#include<stdio.h>
#include<string.h>

void main(){
	//HomeWork
	//HW1. ���ڿ��� �Է� �޾� �Է¹��� ���ڿ��� ���� ����
	//HW2. �Է� ���� ���ϸ� '.txt'���ڿ��� ����
	//HW3. ����/����/���� ������ �� ���ǿ� ���� �Ǻ�
	// ��) ��ǻ�� '��' ����� '����'
	//		��ǻ�Ͱ� �̰���ϴ�.
}*/