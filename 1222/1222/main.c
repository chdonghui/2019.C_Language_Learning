#include <stdio.h>
void main(){

//switch~case : ������ ���� ã�� ����� �����ϴ� �б⹮
// ~���� ���� ���� default���� ���� (jamp)
// ~case�� ��ɹ� ���̿� �ݷ�(:)�� ����Ѵ�. (��=���̺� ���)
//����
//swtich(����){
// case ��1(���̺�) : ���1;
//						���1-1;
//						���1-2;
//						break  //(�б��ɾ�)
// case ��2(���̺�) : ���2;
// default :
//		���1;
//}

	//int num;

	//printf("���� �Է� : ");
	//scanf("%d", &num);

	//switch(num){
	//case 1 : //��������͸�
	//	printf("1 �Է�\n");
	//	break;
	//case 2 :
	//	printf("2 �Է�\n");
	//	break;
	//default :
	//	printf("1, 2���� �ٸ� �� �Է�\n");
	//	break;

	//char ch;

	//printf("���� �Է� : ");
	//scanf("%c", &ch);

	//switch(ch){ //���ڿ�X ��Ȯ���� ������X
	//case 'A' : //(nop �ƹ��͵� ����X)
	//case 'a' : 
	//	printf("a �Է�\n");
	//	break;

	//case 'B' : 
	//case 'b' : 
	//	printf("b �Է�\n");
	//	break;

	//default : 
	//	printf("default�� �ԷµǾ����ϴ�.\n", ch);
	//}


	//**********************************************
	//������ �Է� �޾� 1���� 10������ ������ ���ؼ��� 
	//1�� 'one', 2�� 'two', ...����� ���
	//�������� 'error'���

	//int num;

	//printf("�����Է� : "); //���� ���
	//scanf("%d", &num); //������ �޾� num�� ������ �Ұ̴ϴ�. ���̺��� ã���� switch�ΰ����ô�!

	//switch(num){
	//case 1 : //�� 1
	//	printf("one\n"); //one ���
	//	break;
	//case 2 : //�� 2
	//	printf("two\n"); //two ���
	//	break;

	//case 3 : //��3
	//	printf("three\n"); //three ���
	//	break;

	//case 4 : //�� 4
	//printf("four\n"); //four ���
	//break;

	//case 5 : //�� 5
	//printf("five\n"); //five ���
	//break;

	//default : //�� �� �͵�
	//	printf("error\n"); //error ���
	//}

	/*int kor, eng, math, avg_int;
	float avg;

	printf("���� : ");
	scanf("%d", &kor);

	printf("���� : ");
	scanf("%d", &eng);

	printf("���� : ");
	scanf("%d", &math);

	avg = (kor+eng+math)/3.0;
	avg_int = avg/10;

	switch(avg_int){
	case 10 : 
	case  9: 
		printf("����� %.2f�� A ����Դϴ�.\n", avg);
		break;

	case 8 : 
		printf("����� %.2f�� B ����Դϴ�.\n", avg);
		break;

	case 7 :
		printf("����� %.2f�� C ����Դϴ�.\n", avg);
		break;

	case 6 : 
		printf("����� %.2f�� D ����Դϴ�.\n", avg);
		break;

	default : 
		printf("����� %.2f�� F ����Դϴ�.\n", avg);
		break;
	}*/

	//�ݺ��� : while, do~while, for
	//while : ������ ���� ��� �� ���� ��ɾ �ݺ������� ���� 
	//�⺻ ����
	//while(����){
	//	���1;
	//	���2;
	//}
	
	/*int num = 1, sum = 0;
	
	while (num <= 100){
		sum += num;
		num++;
		printf("while loop\n");
	}
	printf("out of while loop\n");
	printf("1���� 100������ �� : %d\n", sum);*/
	
	//���ڿ��� �Է¹޾� ���ĺ��� ����ϰ�, �� ���� ���ڴ� '*'�� ���

//	char ch;
//
//	printf("���ڿ� �Է� : ");
//
//	while( ((ch = getchar()) != '\t') ) {
//
//		if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch=='\n') || (ch == ' ') ){
//			printf("%c", ch);
//
//		}
//
//		else {
//			printf("%c", '*');
//		}
//	}
//	printf("\n���α׷� ����\n");
//}

//do while : ��ɺ��� ���� �����ϰ� ������ ���߿� ��
// -������- �ּ��� �� ���� �ݵ�� ����
// -while�� �ڿ� �����ݷ�(;)�� ��� �Ѵ�.

//�⺻ ����
//do{
//	���1;
//	���1;
//}	while(����);

	/*int num = 1, sum = 0;

	do {
		sum += num;
		num++;
	}while(num<=100);
	printf("1���� 100������ �� : %d\n", sum);*/

	//for�� : ������ ���� ��� �� ���� ��ɵ��� �ݺ������� ����
	//	-��ȣ �ȿ� 3���� ��ɾ ���
	//	-�� ��ɾ�� �����ݷ�(;)���� �и�
	//	-�ʿ� ���� ��ɾ�� ���� ����
	//	-������ ���� ���� ��� &&, ||, ! ���� �������ڷ� �����ؾ� �Ѵ�.
	//for(�ʱ�ȭ ; ���ǽ� ; ��/���� ����){
	//	���1;
	//	���2;
	//}
	

	//1. �ҹ��� �ټ� ���ھ� ����ϱ�

	/*int i, j;

	for(i='a', j=0; 'a' <= i && i<='z'; i++, j++){


		if (j % 5 == 0){
			printf("\n");
		}
		printf("%c ", i);

	}*/

//2. for���� ����Ͽ� 1���� 10���� 3�� ����� 3�� ����� �� ��� ex) 3+6+9+18
	/*int i, num, sum=0;

	for (i = 1; i <= 10; i++){
		if(i%3 == 0){
			printf("%d + ", i);
			sum += i;
		}
	}
	printf("\b\b=%d\n", sum);

}*/

//���ϱ�(2~9��)
//2*1=2
//���� i

	int i, j;
	for (i=1; i <= 9; i++){
		for (j=1; j <=9; j++){
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}