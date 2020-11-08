#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	//int arr[10]; // 10 == 요소 // int[10]형 데이터 타입
	//int i;

	//arr[0] = 1;
	//arr[1] = 2;
	//arr[2] = arr[1] + 1; //arr[2] == index * 데이터size

	//for (i=3; i<10; i++);{
	//		arr[1] = i+1;
	//}

	//printf("arr[0] = %d\n", arr[0]);
	//printf("arr[1] = %d\n", arr[1]);

	//for (i=2; i<10; i++){
	//	printf("arr[%d] = %d\n", i, arr[1]);
	//}

	//1부터 100까지의 수 중에서 짝수를 배열에 저장하고 출력
	//조건 - 한 줄에 10개 씩 출력

	/*int arr[100], i, index=0;

	//짝수 = i%2 = 0
	//만약 i/2의 나머지가 0이면 출력
	
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
		printf("정수입력 : ");
		scanf("%d", &digit[i]);
	}
	
	for (i=0; i<10; i++){
		printf("%3d", digit[i]);
	}

	printf("\n");*/ //사인비트 양음? 짝홀?

	/*int i;
	char str[10];

	printf("문자열 입력 : ");
	scanf("%s", str); //문자열은 &(엔퍼센트) 아님, 이미 엘벨류
	
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
		printf("입력 %d : %d\n", i+1, max[i] );
	}



		if (max[i] > max[i+1]){ //입력 1이 입력2보다 클 때
			
		}
		else if (max[i] > max[i+2]){//입력 1이 입력3보다 클 때

		}
		//입력 1이 입력 4보다 클 때
		//입력 1이 입력 5보다 클 때
		//입력 2가 입력 1보다 클 때
		//입력 2가 입력 2보다 클 때
		//입력 2가 입력 3보다 클 때
		//입력 2가 입력 4보다 클 때
		//입력 2가 입력 5보다 클 때*/
	
	/*int i, max=0;
	int val[5];

	srand(time(NULL));
	for (i=0; i<5; i++){

		val[i] = rand()%100;
		printf("입력  %d : %d\n", i+1, val[i]);

		_sleep(1000);//1초

		if (max < val[i]){

			max = val[i];

		}
	}
	printf("최대값 : %d\n", max);*/

	/*int a[5]; //초기화
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
		printf("[%2d월]의 일수는 [%2d일] 입니다. \n", i+1, days[i]);
	}*/

	//월과 일 정보를 입력받아 일수 구하기
	//1월 : 31, 2월 : 28, 3월 : 31, 4월 : 30, 5월 : 31, 5월 : 30, 7월 : 31, 8월 : 31, 9월 : 30, 10월 : 31, 11월 : 30, 12월 : 31
	//만약 월과 일이 주어지면 월[1days ~ ndays] + 일
	//월은 [인덱스]안에

	int month, day, sum=0, i;
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("월 입력 : ");
	scanf("%d", &month);

	printf("일 입력 : ");
	scanf("%d", &day);
	
	for (i=0; i<=month; i++){ //모든 월을 더하기
		sum += days[i];
	}
	sum += day;

	printf ("전체 날짜: %d\n", sum);

}