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
	// + : ���������� ���(������ ����)(cw)
	// - : �������� ���(�迭�̸�)(ccw)

	//����Ű�� �ε��� �Է� �޾� ����ϼ���.
	//�Է� : �ε��� ����� ù ����

	/*char lr;
	int index;
	int i;
	int num[5] = {1, 2, 3, 4, 5};

	printf("\n������ '+'������ ���� �Ǵ� '-'���� �������� �Է� : ");
	scanf("%c", &lr);
	printf("�ε��� : ");
	scanf("%d", &index);

	if(lr == '+'){
		for (i=0; i<5; i++){
			printf("+ %d��° / index = %d : %d\n", i+1, index, *(num+index) );
			index = (index+1)%5;
		}
	}

	else if(lr == '-'){
		for (i=0; i<5; i++){
			if (index < 0){
				index = 4;
			}
			printf("+ %d��° / index = %d : %d\n", i+1, index, *(num+index) );
			index--;
		}
	}

	else {
		printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
	}*/

	//"h	e	l	l	o	\0"
	//10	11	12	13	14	15

	//func("Happy New Year");

	//���� �迭�� "Happy  New Year"�����ϰ�
	//��ҹ��� ��ȯ�� ���(�Լ� ����)
	//32

	/*char str[4029];

	printf("���ڿ� �Է� : ");
	//scanf("%s", str);
	gets(str);
	printf("���ڿ� ��� : %s\n", str);*/

	//���ڿ��� �Է¹޾� �빮�ڸ� '*'�� ������ �� ���
	/*int i=0;
	char str[4096];
	char ch;

	printf("���ڿ� �Է� : ");
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
	printf("��� ��� : %s\n", str);

	//printf ("���ڿ� ��� : %s\n", str);*/

	//Q3. �Է� ���� ���ڿ��� ���̸� ���ؼ� �������ִ� �Լ� �����ϱ�
	
	char str[4096];
	int count = 0;
	printf("���̸� ���� ���ڿ��� �Է����ּ���.\n");
	gets(str);
	void counting(char * str, int count);
	printf("���� : %d\n", count);

	/*char message[4096] = "Happy New Year";

	printf("��ȯ�� ��� : %s\n", message);

	void invertChar(char * nessage);

	printf("��ȯ �� ��� : %s\n", message);

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