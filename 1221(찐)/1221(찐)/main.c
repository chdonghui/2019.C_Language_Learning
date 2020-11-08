#include <stdio.h>

void main(){

	////모둘러연산
	//num1 = 20, num2 = 3;
	//printf("%d %% %d = %d\n", num1, num2, num1%num2);

	////대입연산자
	//int su1, su2;

	//su1 = su2 = 5;
	//printf("su1 + 1 = %d\n", su1 += 1);
	//printf("su1 - 1 = %d\n", su1 -= 1);
	//printf("su1 * su2 = %d\n", su1 *= su2);
	//printf("su1 / su2 = %d\n", su1 /= su2);
	//printf("su1 %% su2 = %d\n", su1 %= su2);

	////논리연산자
	//int a=1, b=2, c=3, d=4;

	//printf("1. %d\n", !(c<d)); //참 -> 거짓
	//printf("2. %d\n", a<b && c>d); //모두 참 -> 참
	//printf("3. %d\n", a<b || c>d); //하나라도 참 -> 참
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

	//******제어문 - 프로그램의 흐름을 바꿀 수 있다.********
	//종류
	// -조건문 : 조건에 의한 제어
	//		-if, if else, if elseif else
	// -반복문 : 반복 제어
	//		-while, do while, for
	// -분기문 : 분기 제어(명령어 포인터 보내버리기)
	//		-switch-case, break, continue
	//형식
	//명령(조건){
	//	명령1;
	//	명령2;
	//}

	//if문 : 조건식을 판별하여 조건이 참이면 블럭 안의 명령 수행
	//	거짓이면 블럭 안의 명령을 수행하지 않는다.

	/*int num;
	if (num){
		printf("참\n");
	}
	if (num-1){
		printf("num-1=%d\n", num-1);
	}*/

	/*char num;
	printf("글자 입력 : ");
	scanf("%c", &num);

	if (num<0){
		printf("%d이 양수로 변환되었습니다.\n", num);
		num *= -1;
	}
	printf("절대값 : %d\n", num);*/

	//대소문자변환
	/*char ch;
	printf("글자 입력 : ");
	scanf("%c", &ch);
	if('a'<=ch && ch<='z'){
		ch -= ('a'-'A');
		printf("문자%c가 대문자로 변환되었습니다.\n", ch);
	}
		printf ("결과값 : %c\n", ch);*/

	//if ~ else : 둘 중 한 개를 선택하는 조건문
	// -if문의 조건을 만족하지 못하면 else문 수행
	// -else문은 조건을 가질 수 없다.

	/*int num1, num2;
	printf("정수입력 : ");
	scanf("%d", &num1);
	
	printf("정수입력 : ");
	scanf("%d", &num2);

	if (num1>num2){
		printf("%d가 %d보다 큽니다.\n", num1, num2);
	}

	else {
		printf("%d가 %d보다 큽니다.\n", num2, num1);
	}*/

	/*int kor, eng, math;

	printf("국어점수 입력 : ");
	scanf("%d", &kor);

	printf("영어점수 입력 : ");
	scanf("%d", &eng);

	printf("수학점수 입력 : ");
	scanf("%d", &math);

	if ( (kor >= 60) && (eng >= 60) && (math >= 60) ){
		printf("전 과목 60점 이상으로 합격입니다. 축하드립니다!!!!\n");
	}

	else {
		printf("60점 미만인 과목이 있어 불합격입니다. 합격이면 추억, 불합격이면 경험입니다. 수고하셨습니다.\n");
	}*/

	//정수입력, 짝, 홀, 음수(걍 출력)구분
	//int num;

	//printf("정수 입력 : ");
	//scanf("%d", &num);

	//if(num>=0){ //num이 양수일 때
	//	if(num%2 == 0){ //양의 짝수
	//		printf("입력 값 %d은 양의 짝수 입니다.\n", num);
	//	}
	//	else{ //양의 홀수
	//		printf("입력 값 %d은 양의 홀수 입니다.\n", num);
	//	}
	//}
	//else {	//num이 홀수일 때
	//	 printf("입력 값은 %d 음수입니다.\n", num);
	//}

	//평균 70점 이상이고, 모든 과목이 60점 이상이면 합격
	int kor, eng, math;
	double avg/*평균*/;

	printf("국어점수 입력 : ");
	scanf("%d", &kor);

	printf("영어점수 입력 : ");
	scanf("%d", &eng);

	printf("수학점수 입력 : ");
	scanf("%d", &math);

	avg = (kor+eng+math)/3.0;

	if (avg>70){
		printf("불합격!!\n");
	}
	else if(kor<60){
		printf("국어 불합격!!\n");
	}
	else if(eng<60){
		printf("영어 불합격!!\n");
	}
	else if(math<60){
		printf("수학 불합격!!\n");
	｝
	else {
		printf("합격입니다. 축하합니다.\n");
	}
	
	else {
		printf("60점 미만인 과목이 있어 불합격입니다. 합격이면 추억, 불합격이면 경험입니다. 수고하셨습니다.\n");
	}

}