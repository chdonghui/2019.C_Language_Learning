#include <stdio.h>

void main(){

	////��ѷ�����
	//num1 = 20, num2 = 3;
	//printf("%d %% %d = %d\n", num1, num2, num1%num2);

	////���Կ�����
	//int su1, su2;

	//su1 = su2 = 5;
	//printf("su1 + 1 = %d\n", su1 += 1);
	//printf("su1 - 1 = %d\n", su1 -= 1);
	//printf("su1 * su2 = %d\n", su1 *= su2);
	//printf("su1 / su2 = %d\n", su1 /= su2);
	//printf("su1 %% su2 = %d\n", su1 %= su2);

	////��������
	//int a=1, b=2, c=3, d=4;

	//printf("1. %d\n", !(c<d)); //�� -> ����
	//printf("2. %d\n", a<b && c>d); //��� �� -> ��
	//printf("3. %d\n", a<b || c>d); //�ϳ��� �� -> ��
	//printf("4. %d\n", 5 && -3000);
	//printf("5. %d\n", !0);

	/*int num1, sum = 0;
	float num2;

	num1=5;
	++num1;
	printf("++num1=%d\n", num1);

	num1=5;
	sum = num1++ + 10;
	printf("sum=%d\n", sum);
	printf("num1=%d\n", num1);

	num1=5;
	num1++;
	printf("sum=%d\n", sum);

	num2=12.3;
	printf("++num2=%d\n", ++num2);

	num2=12.3;
	printf("++num2=%.2f\n", num2++);
	printf("num2=%.2f\n", num2);*/

	/*int i;
	char c;
	float f;
	double d;

	printf("i=%d\n", sizeof(i));
	printf("c=%d\n", sizeof(c));
	printf("f=%d\n", sizeof(f));
	printf("d=%d\n", sizeof(d));
	printf("10=%d\n", sizeof(10));
	printf("10.1=%d\n", sizeof(10.1));*/

	//******��� - ���α׷��� �帧�� �ٲ� �� �ִ�.********
	//����
	// -���ǹ� : ���ǿ� ���� ����
	//		-if, if else, if elseif else
	// -�ݺ��� : �ݺ� ����
	//		-while, do while, for
	// -�б⹮ : �б� ����(��ɾ� ������ ����������)
	//		-switch-case, break, continue
	//����
	//���(����){
	//	���1;
	//	���2;
	//}

	//if�� : ���ǽ��� �Ǻ��Ͽ� ������ ���̸� �� ���� ��� ����
	//	�����̸� �� ���� ����� �������� �ʴ´�.

	/*int num;
	if (num){
		printf("��\n");
	}
	if (num-1){
		printf("num-1=%d\n", num-1);
	}*/

	/*char num;
	printf("���� �Է� : ");
	scanf("%c", &num);

	if (num<0){
		printf("%d�� ����� ��ȯ�Ǿ����ϴ�.\n", num);
		num *= -1;
	}
	printf("���밪 : %d\n", num);*/

	//��ҹ��ں�ȯ
	/*char ch;
	printf("���� �Է� : ");
	scanf("%c", &ch);
	if('a'<=ch && ch<='z'){
		ch -= ('a'-'A');
		printf("����%c�� �빮�ڷ� ��ȯ�Ǿ����ϴ�.\n", ch);
	}
		printf ("����� : %c\n", ch);*/

	//if ~ else : �� �� �� ���� �����ϴ� ���ǹ�
	// -if���� ������ �������� ���ϸ� else�� ����
	// -else���� ������ ���� �� ����.

	/*int num1, num2;
	printf("�����Է� : ");
	scanf("%d", &num1);
	
	printf("�����Է� : ");
	scanf("%d", &num2);

	if (num1>num2){
		printf("%d�� %d���� Ů�ϴ�.\n", num1, num2);
	}

	else {
		printf("%d�� %d���� Ů�ϴ�.\n", num2, num1);
	}*/

	/*int kor, eng, math;

	printf("�������� �Է� : ");
	scanf("%d", &kor);

	printf("�������� �Է� : ");
	scanf("%d", &eng);

	printf("�������� �Է� : ");
	scanf("%d", &math);

	if ( (kor >= 60) && (eng >= 60) && (math >= 60) ){
		printf("�� ���� 60�� �̻����� �հ��Դϴ�. ���ϵ帳�ϴ�!!!!\n");
	}

	else {
		printf("60�� �̸��� ������ �־� ���հ��Դϴ�. �հ��̸� �߾�, ���հ��̸� �����Դϴ�. �����ϼ̽��ϴ�.\n");
	}*/

	//�����Է�, ¦, Ȧ, ����(�� ���)����
	//int num;

	//printf("���� �Է� : ");
	//scanf("%d", &num);

	//if(num>=0){ //num�� ����� ��
	//	if(num%2 == 0){ //���� ¦��
	//		printf("�Է� �� %d�� ���� ¦�� �Դϴ�.\n", num);
	//	}
	//	else{ //���� Ȧ��
	//		printf("�Է� �� %d�� ���� Ȧ�� �Դϴ�.\n", num);
	//	}
	//}
	//else {	//num�� Ȧ���� ��
	//	 printf("�Է� ���� %d �����Դϴ�.\n", num);
	//}

	//��� 70�� �̻��̰�, ��� ������ 60�� �̻��̸� �հ�
	int kor, eng, math;
	double avg/*���*/;

	printf("�������� �Է� : ");
	scanf("%d", &kor);

	printf("�������� �Է� : ");
	scanf("%d", &eng);

	printf("�������� �Է� : ");
	scanf("%d", &math);

	avg = (kor+eng+math)/3.0;

	if (avg>70){
		printf("���հ�!!\n");
	}
	else if(kor<60){
		printf("���� ���հ�!!\n");
	}
	else if(eng<60){
		printf("���� ���հ�!!\n");
	}
	else if(math<60){
		printf("���� ���հ�!!\n");
	��
	else {
		printf("�հ��Դϴ�. �����մϴ�.\n");
	}
	
	else {
		printf("60�� �̸��� ������ �־� ���հ��Դϴ�. �հ��̸� �߾�, ���հ��̸� �����Դϴ�. �����ϼ̽��ϴ�.\n");
	}

}