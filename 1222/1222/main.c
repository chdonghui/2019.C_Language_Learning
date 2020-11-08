#include <stdio.h>
void main(){

//switch~case : 변수의 값을 찾아 명력을 수행하는 분기문
// ~값이 없을 때는 default문을 수행 (jamp)
// ~case와 명령문 사이에 콜론(:)을 사용한다. (라벨=레이블 사용)
//사용법
//swtich(변수){
// case 값1(레이블) : 명령1;
//						명령1-1;
//						명령1-2;
//						break  //(분기명령어)
// case 값2(레이블) : 명령2;
// default :
//		명령1;
//}

	//int num;

	//printf("정수 입력 : ");
	//scanf("%d", &num);

	//switch(num){
	//case 1 : //상수데이터만
	//	printf("1 입력\n");
	//	break;
	//case 2 :
	//	printf("2 입력\n");
	//	break;
	//default :
	//	printf("1, 2외의 다른 값 입력\n");
	//	break;

	//char ch;

	//printf("문자 입력 : ");
	//scanf("%c", &ch);

	//switch(ch){ //문자열X 명확하지 않으면X
	//case 'A' : //(nop 아무것도 실행X)
	//case 'a' : 
	//	printf("a 입력\n");
	//	break;

	//case 'B' : 
	//case 'b' : 
	//	printf("b 입력\n");
	//	break;

	//default : 
	//	printf("default가 입력되었습니다.\n", ch);
	//}


	//**********************************************
	//정수를 입력 받아 1에서 10까지의 정수에 대해서는 
	//1은 'one', 2는 'two', ...영어로 출력
	//나머지는 'error'출력

	//int num;

	//printf("정수입력 : "); //정보 출력
	//scanf("%d", &num); //정수를 받아 num에 저장을 할겁니다. 레이블을 찾으러 switch로가봅시다!

	//switch(num){
	//case 1 : //라벨 1
	//	printf("one\n"); //one 출력
	//	break;
	//case 2 : //라벨 2
	//	printf("two\n"); //two 출력
	//	break;

	//case 3 : //라벨3
	//	printf("three\n"); //three 출력
	//	break;

	//case 4 : //라벨 4
	//printf("four\n"); //four 출력
	//break;

	//case 5 : //라벨 5
	//printf("five\n"); //five 출력
	//break;

	//default : //그 외 것들
	//	printf("error\n"); //error 출력
	//}

	/*int kor, eng, math, avg_int;
	float avg;

	printf("국어 : ");
	scanf("%d", &kor);

	printf("영어 : ");
	scanf("%d", &eng);

	printf("수학 : ");
	scanf("%d", &math);

	avg = (kor+eng+math)/3.0;
	avg_int = avg/10;

	switch(avg_int){
	case 10 : 
	case  9: 
		printf("평균은 %.2f로 A 등급입니다.\n", avg);
		break;

	case 8 : 
		printf("평균은 %.2f로 B 등급입니다.\n", avg);
		break;

	case 7 :
		printf("평균은 %.2f로 C 등급입니다.\n", avg);
		break;

	case 6 : 
		printf("평균은 %.2f로 D 등급입니다.\n", avg);
		break;

	default : 
		printf("평균은 %.2f로 F 등급입니다.\n", avg);
		break;
	}*/

	//반복문 : while, do~while, for
	//while : 조건이 참인 경우 블럭 안의 명령어를 반복적으로 수행 
	//기본 형식
	//while(조건){
	//	명령1;
	//	명령2;
	//}
	
	/*int num = 1, sum = 0;
	
	while (num <= 100){
		sum += num;
		num++;
		printf("while loop\n");
	}
	printf("out of while loop\n");
	printf("1에서 100까지의 합 : %d\n", sum);*/
	
	//문자열을 입력받아 알파벳은 출력하고, 그 외의 문자는 '*'로 출력

//	char ch;
//
//	printf("문자열 입력 : ");
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
//	printf("\n프로그램 종료\n");
//}

//do while : 명령블럭을 먼저 실행하고 조건을 나중에 비교
// -차이점- 최소한 한 번은 반드시 실행
// -while문 뒤에 세미콜론(;)을 써야 한다.

//기본 형식
//do{
//	명령1;
//	명령1;
//}	while(조건);

	/*int num = 1, sum = 0;

	do {
		sum += num;
		num++;
	}while(num<=100);
	printf("1에서 100까지의 합 : %d\n", sum);*/

	//for문 : 조건이 참인 경우 블럭 안의 명령들을 반복적으로 수행
	//	-괄호 안에 3개의 명령어를 사용
	//	-각 명령어는 세미콜론(;)으로 분리
	//	-필요 없는 명령어는 생략 가능
	//	-조건이 여러 개인 경우 &&, ||, ! 등의 논리연산자로 연결해야 한다.
	//for(초기화 ; 조건식 ; 증/감소 연산){
	//	명령1;
	//	명령2;
	//}
	

	//1. 소문자 다섯 문자씩 출력하기

	/*int i, j;

	for(i='a', j=0; 'a' <= i && i<='z'; i++, j++){


		if (j % 5 == 0){
			printf("\n");
		}
		printf("%c ", i);

	}*/

//2. for문을 사용하여 1에서 10까지 3의 배수와 3의 배수의 합 출력 ex) 3+6+9+18
	/*int i, num, sum=0;

	for (i = 1; i <= 10; i++){
		if(i%3 == 0){
			printf("%d + ", i);
			sum += i;
		}
	}
	printf("\b\b=%d\n", sum);

}*/

//곱하기(2~9단)
//2*1=2
//변수 i

	int i, j;
	for (i=1; i <= 9; i++){
		for (j=1; j <=9; j++){
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}