#include<stdio.h>

void main(){
	int i, index, num[5] = {1,2,3,4,5};
	char dir;
	int * ptr;

	ptr = num;
	printf("���� ��� : ");
	for (i=0; i<5; i++){
		printf("%d ", num[i]);
	}
	printf("\n\n������(+) / ����(-) : ");
	scanf("%c", &dir);
	printf("\n�ε��� �Է� : ");
	scanf("%d", &index);

	printf("\n��� ��� : ");
	if (dir == '+'){
		for (i=0; i<5; i++){
			printf("%d", *(ptr+index) );
			index = (index+1)%5;
		}
		printf("\n");
	}
	else if (dir == '-'){
		for(i=0; i<5; i++){
			printf("%d ", num[index] );
			index--;
			if (index<0){
				index = 4;
			}
			
		}
		printf("\n");
	}
	else{
		printf("+�Ǵ�-�� �Է��� �ּ���.\n");
	}
}