#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	//int arr[10]; // 10 == ��� // int[10]�� ������ Ÿ��
	//int i;

	//arr[0] = 1;
	//arr[1] = 2;
	//arr[2] = arr[1] + 1; //arr[2] == index * ������size

	//for (i=3; i<10; i++);{
	//		arr[1] = i+1;
	//}

	//printf("arr[0] = %d\n", arr[0]);
	//printf("arr[1] = %d\n", arr[1]);

	//for (i=2; i<10; i++){
	//	printf("arr[%d] = %d\n", i, arr[1]);
	//}

	//1���� 100������ �� �߿��� ¦���� �迭�� �����ϰ� ���
	//���� - �� �ٿ� 10�� �� ���

	/*int arr[100], i, index=0;

	//¦�� = i%2 = 0
	//���� i/2�� �������� 0�̸� ���
	
	for (i=1; i<=100; i++){

		if( (i%2) == 0 ){

			arr[index] = i;
			printf("%d ", arr[index]);
			index++;
			
			if ( (index%10) == 0 ){
				printf("\n");
			}
		}
	}*/

	/*int even [100];
	int idx = 0;
	int count = 1;
	int i;

	for ( i = 1; i<=100; i++){

		if( i%2 == 0 ){
			even[idx] = i;
			idx++;
		}
	}

	for ( i=0; (even[i]>0) && (even[i]<= 100); i++){
		printf("%4d ", even[i]);

		if(count%10 == 0){
			printf("\n");
		}
		count++;
	}*/

	/*int i, digit[10];

	for (i=0; i<10; i++){
		printf("�����Է� : ");
		scanf("%d", &digit[i]);
	}
	
	for (i=0; i<10; i++){
		printf("%3d", digit[i]);
	}

	printf("\n");*/ //���κ�Ʈ ����? ¦Ȧ?

	/*int i;
	char str[10];

	printf("���ڿ� �Է� : ");
	scanf("%s", str); //���ڿ��� &(���ۼ�Ʈ) �ƴ�, �̹� ������
	
	for (i=0; i<10; i++){
		printf("| %c |", str[i]);
	}

	printf("\nstr = %s\n", str);*/

	/*int i;

	srand(time(NULL));
	for (i=0; i<5; i++){
		printf("random : %c\n", (rand()%26) + 65);
	}*/

	/*int i, k; 
	int max[100];
	srand (time(NULL));
	
	for (i=0; i<5; i++){
		max[i] = (rand()%100);
		printf("�Է� %d : %d\n", i+1, max[i] );
	}



		if (max[i] > max[i+1]){ //�Է� 1�� �Է�2���� Ŭ ��
			
		}
		else if (max[i] > max[i+2]){//�Է� 1�� �Է�3���� Ŭ ��

		}
		//�Է� 1�� �Է� 4���� Ŭ ��
		//�Է� 1�� �Է� 5���� Ŭ ��
		//�Է� 2�� �Է� 1���� Ŭ ��
		//�Է� 2�� �Է� 2���� Ŭ ��
		//�Է� 2�� �Է� 3���� Ŭ ��
		//�Է� 2�� �Է� 4���� Ŭ ��
		//�Է� 2�� �Է� 5���� Ŭ ��*/
	
	/*int i, max=0;
	int val[5];

	srand(time(NULL));
	for (i=0; i<5; i++){

		val[i] = rand()%100;
		printf("�Է�  %d : %d\n", i+1, val[i]);

		_sleep(1000);//1��

		if (max < val[i]){

			max = val[i];

		}
	}
	printf("�ִ밪 : %d\n", max);*/

	/*int a[5]; //�ʱ�ȭ
	int b[5] = {1, 2, 3, 4, 5};
	int c[5] = {3};//3 0 0 0 0
	int d[] = {5, 6, 7, 8, 9, 0};

	int i;

	printf("a[] = ");
	for(i=0; i<5; i++){
		printf("%d\n", a[i]);
	}

	printf("b[] = ");
	for(i=0; i<5; i++){
		printf("%d\n", b[i]);
	}

	printf("c[] = ");
	for(i=0; i<5; i++){
		printf("%d\n", c[i]);
	}

	printf("d[] = ");
	for(i=0; i<5; i++){
		printf("%d\n", d[i]);
	}*/

	/*int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i;

	for (i=0; i<12; i++){
		printf("[%2d��]�� �ϼ��� [%2d��] �Դϴ�. \n", i+1, days[i]);
	}*/

	//���� �� ������ �Է¹޾� �ϼ� ���ϱ�
	//1�� : 31, 2�� : 28, 3�� : 31, 4�� : 30, 5�� : 31, 5�� : 30, 7�� : 31, 8�� : 31, 9�� : 30, 10�� : 31, 11�� : 30, 12�� : 31
	//���� ���� ���� �־����� ��[1days ~ ndays] + ��
	//���� [�ε���]�ȿ�

	int month, day, sum=0, i;
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("�� �Է� : ");
	scanf("%d", &month);

	printf("�� �Է� : ");
	scanf("%d", &day);
	
	for (i=0; i<=month; i++){ //��� ���� ���ϱ�
		sum += days[i];
	}
	sum += day;

	printf ("��ü ��¥: %d\n", sum);

}