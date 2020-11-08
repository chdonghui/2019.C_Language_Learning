#include<stdio.h>

void main(){
	int i, index, num[5] = {1,2,3,4,5};
	char dir;
	int * ptr;

	ptr = num;
	printf("정수 출력 : ");
	for (i=0; i<5; i++){
		printf("%d ", num[i]);
	}
	printf("\n\n오른쪽(+) / 왼쪽(-) : ");
	scanf("%c", &dir);
	printf("\n인덱스 입력 : ");
	scanf("%d", &index);

	printf("\n결과 출력 : ");
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
		printf("+또는-를 입력해 주세요.\n");
	}
}