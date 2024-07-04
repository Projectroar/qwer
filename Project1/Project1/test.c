#include<stdio.h>

int main(void)
{
	int ivar6 = 123, ivar7 = 4;
	printf("%d\n\n", ivar6 > ivar7 && ivar6 != ivar7);//true && true = true
	printf("%d\n\n", ivar6 < ivar7 && ivar6 != ivar7);//false && true = false
	printf("%d\n\n", ivar6 <= ivar7 && ivar6 == ivar7);//false && false = false
	printf("%d\n\n", ivar6 > ivar7 || ivar6 != ivar7);//true && true = true
	printf("%d\n\n", ivar6 < ivar7 || ivar6 != ivar7);//false && true = true
	printf("%d\n\n", ivar6 <= ivar7 || ivar6 == ivar7);//false && false = false

	int ivar8 = 123;
	double dvar = 3.14;
	char chvar = 'A';
	char charr[6] = "hello";
	printf("%d\n\n", sizeof ivar8);
	printf("%d\n\n", sizeof dvar);
	printf("%d\n\n", sizeof chvar);
	printf("%d\n\n", sizeof charr);
	printf("정수 상수 : %d\n\n", sizeof 123);
	printf("실수 상수 : %d\n\n", sizeof 3.14);
	printf("문자 상수 : %d\n\n", sizeof 'A');//문자상수 4byte
	printf("문자열 상수 : %d\n\n", sizeof "hello");

	printf("%d\n\n", chvar1 & chvar2);//36
	printf("%d\n\n", chvar1 | chvar2);//63
	printf("%d\n\n", chvar1 ^ chvar2);//27
	printf("%d\n\n", ~chvar1);//-45

	char chvar3 = 44, chvar4 = 2;
	printf("%d\n\n", chvar3 << chvar4);//176
	printf("%d\n\n", chvar3 >> chvar4);//11

	int ivar1 = 4;
	int ivar2 = 123, ivar3 = 123, ivar4 = 123, ivar5 = 123, ivar6 = 123;
	ivar2 += ivar1;
	ivar3 -= ivar1;
	ivar4 *= ivar1;
	ivar5 /= ivar1;
	ivar6 %= ivar1;
	printf("ivar2 : %d\n\n", ivar2);//127
	printf("ivar3 : %d\n\n", ivar3);//119
	printf("ivar4 : %d\n\n", ivar4);//492
	printf("ivar5 : %d\n\n", ivar5);//30
	printf("ivar6 : %d\n\n", ivar6);//3
	char chvar1 = 44, chvar2 = 55;
	char chvar3 = chvar1;
	char chvar5 = chvar1;
	char chvar4 = chvar2;
	char chvar6 = chvar2;
	chvar1 &= chvar2;
	chvar3 |= chvar4;
	chvar5 ^= chvar6;
	printf("chvar1 : %d\n\n", chvar1);//36
	printf("chvar3 : %d\n\n", chvar3);//63
	printf("chvar5 : %d\n\n", chvar5);//27

	char chvar7 = 44, chvar8 = 2;
	char chvar9 = 44, chvar10 = 2;
	chvar7 <<= chvar8;
	chvar9 >>= chvar10;
	printf("chvar7 : %d\n\n", chvar7);//-80???
	printf("chvar9 : %d\n\n", chvar9);//11

	int ivar = 1;
	if (ivar == 1) { printf("가위 입니다"); }
	else if (ivar == 2) { printf("바위 입니다"); }
	else if (ivar == 3) { printf("보 입니다"); }
	ivat가 1이므로 조건 만족 하여 else if은 검사 하지 않고 "가위 입니다"출력
		if문 병렬 선언
		int ivar = 99;
	if (ivar >= 90) {
		printf("90이상의 값\n\n");
	}
	if (ivar >= 80) {
		printf("80이상의 값\n\n");    //3조건 모두 출력
	}
	if (ivar >= 70) {
		printf("70이상의 값\n\n");
	}

	int ivar = 99;
	if (ivar >= 90) {
		printf("90이상의 값\n\n"); //"90이상의 값" 만 출력 처음에 조건을 만족 했기에 다른 조건을 검사 하지않음
	}
	else if (ivar >= 80) {
		printf("80이상의 값\n\n");
	}
	else if (ivar >= 70) {
		printf("70이상의 값\n\n");
	}
	return 0;

	if ~else if ~else ~
		if (if 수행 조건) { if 수행 코드 }

		else if (else if수행 조건) { else if 수행 코드 }

		else { else 수행코드 }
	- else는 수행 코드만 존재하며
		if, else if의 수행 조건이 모두 false일 경우 실행 된다
			- else는 나머지 모든 경우를 뜻한다
			예시
			int ivar;
	printf("1 2 3 중 하나의 수를 입력 : ");
	scanf_s("%d", &ivar);//값을 입력 받는다.
	if (ivar == 1) {
		printf("가위\n\n");
	}
	else if (ivar == 2) {
		printf("바위\n\n");
	}
	else if (ivar == 3) {
		printf("보\n\n");
	}
	else {
		printf("뭐라는 거야");//조건이 없는 1,2,3 외의 숫자를 입력시 출력
	}

	char giho = '-';

	switch (giho) {
	case'+':printf("%d %c %d = %d\n", 7, giho, 5, 7 + 5);//실행 안됨
	case'-':printf("%d %c %d = %d\n", 7, giho, 5, 7 - 5);//실행
	case'*':printf("%d %c %d = %d\n", 7, giho, 5, 7 * 5);//실행

	}

	char giho = '-';

	switch (giho) {
	case'+':printf("%d %c %d = %d\n", 7, giho, 5, 7 + 5);break;
	case'-':printf("%d %c %d = %d\n", 7, giho, 5, 7 - 5);break; //실행
	case'*':printf("%d %c %d = %d\n", 7, giho, 5, 7 * 5);break;
	}

	int firstNum = 7, secondNum = 5;
	char giho = '-';
	printf("firstNum입력 : ");
	scanf_s("%d", &firstNum);
	printf("giho입력 : ");
	scanf_s(" %c", &giho, 1);
	printf("secondNum입력 : ");
	scanf_s("%d", &secondNum);

	switch (giho) {
	case'+':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum + secondNum);break;
	case'-':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum - secondNum);break;
	case'*':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum * secondNum);break;
	case'/':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum / secondNum);break;
	default:printf("이거, 아님");
	}

	int firtNum = 0, secondNum = 0;
	char giho = '+';
	printf("정수 입력 : ");
	scanf_s("%d", &firtNum);
	printf("+ - * / 입력 : ");
	scanf_s(" %c", &giho, 1);
	printf("정수 입력 : ");
	scanf_s("%d", &secondNum);
	int resultNum = 0;
	if (giho == '+') {
		resultNum = firtNum + secondNum;
	}
	else if (giho == '-') {
		resultNum = firtNum - secondNum;
	}
	else if (giho == '*') {
		resultNum = firtNum * secondNum;
	}
	else if (giho == '/') {
		resultNum = firtNum / secondNum;
	}
	else {
		printf("이거 아님\n\n");
	}
	printf("%d %c %d = %d", firtNum, giho, secondNum, resultNum);

	int user = 0, com = 0;
	printf("1가위, 2바위, 3보 user : ");
	scanf_s("%d", &user);

	srand((unsigned int)time(NULL));
	com = rand() % 3 + 1;
	printf("user: %d, com: %d\n\n", user, com);
	if (user == com) {
		printf("비김");
	}
	if (user == 1) {//1가위
		if (com == 2) printf("당신의 패배입니다.");
		else if (com == 3) printf("당신의 승리입니다.");
	}
	if (user == 2) {//2바위
		if (com == 3) printf("당신의 패배입니다.");
		else if (com == 1) printf("당신의 승리입니다.");
	}
	if (user == 3) {
		if (com == 1) {//3보
			printf("당신의 패배입니다.");
		}
		else if (com == 2) {//if문 내의 중괄호 생략 가능
			printf("당신의 승리입니다.");
		}
	}

	while (true) {//무한LOOP->강제 종료
		printf("%d", 3);

		printf("%d", 22222);

		printf("%d", 1111111);

	}//while

	int qwer = 0;
	while (qwer <= 100) {// 0부터 100까지 나타내는 조건식
		printf("%d\n\n", qwer);
		qwer++;
	}
	return 0;

	int qwer = 0;
	while (qwer <= 100) {//0부터 100까지 홀수만 출력하는 조건식
		if (qwer % 2 == 1) printf("%d\n\n", qwer);
		qwer++;
	}
	return 0;

	int qwer = 0;
	while (qwer <= 100) {//0부터 100까지 5의 배수만 출력
		if (qwer % 5 == 0) printf("%d\n\n", qwer);
		qwer++;
	}

	while (dan <= 9) {//조건 비교식: 9단까지
		int gop = 1;//초기식:1부터
		while (gop <= 9) {//조건 비교식:9까지
			gop++;//증감식
		}//while
		dan++;//증감식
	}//while

	이중while문으로 구구단 예시
		int dan = 2;//1초기식
	while (dan <= 9) {//2조건식
		printf("===%d단===\n\n", dan);
		int gop = 1;//초기식
		while (gop <= 9) {//조건식
			printf("%d * %d = %d\t", dan, gop, dan * gop);
			if (gop % 3 == 0) printf("\n");//3의 배수 마다 줄바꿈(보기편하게 만들기)
			gop++;//증감식
		}
		printf("\n\n");//단이 끝날때 줄바꿈2번(보기편하게)
		dan++;//3증감식
	}

	int sero = 1;
	while (sero <= 10) {
		int garo = 1;
		while (garo <= 10) {
			printf("%d\t", garo);//1부터 10까지 탭 하며 숫자 출력
			if (sero == garo) break;//만약에 sero와garo의 숫자가 같다면 멈춤
			garo++;
		}
		printf("\n");//10줄 까지 줄바꿈
		sero++;
	}

	int sero = 1;
	while (sero <= 10) {
		int gaor = 10;
		while (gaor >= 1) {
			printf("%d\t", gaor);
			if (sero == gaor) break;
			gaor--;
		}
		printf("\n");
		sero++;
	}

	srand((unsigned int)time(NULL));
	int fnum = rand() % 10;//0~9의 값 발생
	int snum = rand() % 10;//0~9의 값 발생
	int user;
	printf("funm %d\n\n", fnum);
	printf("1낮다, 2높다, 3같다, 당신의 선택 : ");
	scanf_s("%d", &user);
	if (user == 1 && fnum > snum) {
		printf("승리\n\n");
	}
	else if (user == 2 && fnum < snum) {
		printf("승리\n\n");
	}
	else if (user == 3 && fnum == snum) {
		printf("승리\n\n");
	}
	else {
		printf("패배\n\n");
	}
	printf("f%d s%d u%d\n", fnum, snum, user);


	srand((unsigned int)time(NULL));//컴퓨터시간기준 랜덤숫자
	int com = rand() % 1000;//0~999출력
	int user, count = 1;
	while (1) {
		printf("세자리 정수입력 : ");
		scanf_s("%d", &user);//유저 입력
		if (com == user) break;//맞추면 멈추기
		else if (com > user) printf("작습니다\n\n");
		else if (com < user) printf("큽니다\n\n");
		count++;
	}
	printf("com : %d user : %d\n\n", com, user);
	printf("%d 만에 정답 맞춤", count);

	for (int loopCount = 10; loopCount >= 0; loopCount--) {

		printf("%d\t", loopCount);

	}

	for문을 활용하여 1부터 10까지 나열
		for (int loopcount = 1; loopcount <= 10; loopcount++) {
			printf("%d\t", loopcount);
		}
	return 0;


	for문을 활용하여 10부터 1까지 나열
		for (int loopcount = 10; loopcount >= 1; loopcount--) {
			printf("%d\t", loopcount);
		}

	for문으로 별찍기 삼각형, 역삼각형
		int main(void) {

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5 - i; j++) {
				printf(" ");
			}
			for (int u = 0; u < i * 2 + 1; u++) {
				printf("*");
			}
			for (int q = 1; q > 0; q--) {
				printf(" ");
			}
			for (int l = 10; l > i * 2 + 1; l--) {
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}

	break 개념
		for (int dan = 2; dan <= 9; dan++); {
		printf("%d", dan);
		if (dan == 5) break; //특정조건에서 멈춤
	}
	이중for문 예시
		for (int dan = 2; dan <= 9; dan++) {
			printf("\n===%d===\n", dan);
			for (int gop = 1; gop <= 9; gop++) {
				if (gop % 3 == 0) break; //현재 break가 사용된 반복문만을 중지한다
				printf("%d * %d = %d\n", dan, gop, dan * gop);
			}
			printf("\n");
		}
	return 0;

	continue
		for (int dan = 2; dan <= 9; dan++) {
			if (dan == 5) conitnue;//특정 조건에서 수행을 건너 뛴다
			printf("%d\n, dan");

		}

	이중for문의 continue활용
		구구단 활용
		for (int dan = 2; dan <= 9; dan++) {
			if (dan == 3) continue;//3단을 건너 뛴다
			printf("==%d==\n", dan);
			for (int gop = 1; gop <= 9; gop++) {
				if (gop == 5) continue;//5곱셈을 건너뜀
				printf("%d * %d = %d\n", dan, gop, dan * gop);
			}
			printf("\n");
		}
	return 0;

	do { 수행 코드 } while (수행 조건)
		Loop Statement(반복의 표현)
		do ~while: ~하라 ~하는 동안
			do { 수행 코드 } while (수행 조건)
				- (수행 조건)이 false이어도, { 수행 코드 }를 최초1회는 수행함
				- (수행 조건)이 true인 동안, { 수행 코드 }를 반복해서 계속 수행
				- (수행 조건)은 true / false를 나타내는 표현식이 들어간다

				do {
					printf("최초 1회 실행 후, (조건 비교)실행");
				} while (false);//do를 최초 1회 실행 후,(수행조건)검사//;(semicolon)주의!

	do while예제)
	while (false) {
		printf("실행 불가 코드");//실행되지않음
	}

	while (0) {
		printf("false");
	}

	do {
		printf("do~~~\n\n");//수행조건이 false이여도 최초1번 실행됨
	} while (0);
	int user = 0;
	do {
		printf("정수 입력 :");
		scanf_s("%d", &user);//최초 1회 무조건 실행
		if (user < 0) {
			printf("음수입력시 종료");
		}

	} while (user >= 0);//0미만의 수 입력시 종료
	printf("end of main\n\n");
	system("pause");
	return 0;

	함수
		함수 : function
		- 코드의 복잡도를 낮추고, 가독성을 높인다
		- reyurn type, name, parameters로 이루어진다
		- 함수는 다른 함수를 호출(실행)할 수 있다
		함수의 이름
		- 영문 대소문자와 숫자를 이용하여 함수의 이름을 만든다
		- 숫자는 맨 앞에 올 수 없다

		매인이 먼저 실행되며 메인내의 코드 순서에따라 실행 출력이 달라진다
		함수가 또 다른 함수를 호출하여 사용가능

		return type
		- 함수의 수행결과 발생하는 data의 type
		- 함수 이름의 앞에 위치
		- int getLottoNum(void)

		int main(void) {
		int ivar = 777;
		printf("ivar : %d\n\n", ivar);
		ivar = getLottoNum();
		printf("getLottoNum : %d\n\n", ivar);//return값이 0일경우 0출력
		system("pause");
		return 0;
	}

	int getLottoNum(void) {
		int Lotto = 0;
		srand((unsigned int)time(NULL));
		Lotto = rand() % 45 + 1;
		return Lotto; //이 함수를 호출한 곳으로 돌려 보낸다
	}

	parameters(매개변수)
		- 함수를 실행 시키기 위해서 필요한 data의 type과 개수를 표시
		- 함수 이름의 뒤()안에 위치
		- 예)int calcNum(int iVar1, char chVar, int iVar2)
		- 함수를 호출할 떄, parameters의 data의 type과 개수를 맞추어 값을 넣어 주어야 한다(위치도)
		- 예)calcNum(7, '+', 8);

	int main(void) {
		int ivar = 777;
		ivar = calcNum(77, '-', 55);//calcNum값입력 //ivar은 res값을 받음
		printf("calcNum : %d\n\n", ivar);
		system("pause");
		return 0;
	}

	int calcNum(int iVar1, char chVar, int iVar2) {//타입, 위치, 개수 넣음
		int res = 0;
		switch (chVar) {
		case '+': res = iVar1 + iVar2; break;
		case '-': res = iVar1 - iVar2; break;
		case '*': res = iVar1 * iVar2; break;
		case '/': res = iVar1 / iVar2; break;
		}
		return res;//res값을 반환
	}

	void
		무효값
		- return type이나, parameters가 없을 때 표시
		- return type이나, parameters의 자리에 표시
		- 예)void printHello(void)

		함수 목록(함수 선언부)
		- main함수에서 호출(실행) 하는 함수들의 목록을 작성하자
		- main함수의 위쪽에 작성한다
		- 사용하는 함수의 종류와 각 함수의 return type, parameters를 컴파일러에게 알려준다
		- 컴파일러가 함수를 찾고, 함수를 호출하는 코드의 문법적 오류를 검사할 수 있게 해준다
		- 호출하는 함수와 호출되는 함수가 서로 다른 파일에 있으면 반드시 목록 작성 필요

		main함수 위에 선언부에 선언
		void printHello(void);


	int main(void) {
		printHello();
		system("pause");
		return 0;
	}

	void printHello(void) {
		printf("안녕하세요");
	}

	지역변수
		- 특정 지역 안에서 선언된 변수
		- 특정 지역 안에서만 의미가 있는 변수
		- 효력 범위가 선언된 함수 내부로 한정된다



		void returnNo(int a, int b);//선언문 
	int returnYes(int a, int b);

	int main(void) {
		int retu = returnYes(7, 5) * 2;//매개변수 
		return type이 있는 함수는 수식의 일부로 사용될 수 있다
			printf("%d\n\n", retu);
		returnNo(55, 5);
		system("pause");
		return 0;
	}

	int returnYes(int a, int b) {
		int c = a * b;
		return c;
	}

	void returnNo(int a, int b) {// void로 함수를 선언 할 경우 선언문을 꼭 작성해야한다
		int c = a / b;
		printf("%d / %d = %d\n\n", a, b, c);
	}

	recursive function : 재귀 함수
	(리커시브 펑션)
		- 스스로를 반복해서 호출하는 함수
		주의!!반복을 종료하는 표현을 넣어야 한다

		1번쨰 파일
		void recursiveTest(int gijun);//다른 c파일에있는 함수 선언문

	int main(void) {
		recursiveTest(1);//다른 파일에 있는 함수에 1일 줌
		system("pause");
		return 0;
	}

	2번째 파일
		void recursiveTest(int gijun) {//메인문에 있는 정수형1을 받음
		printf("%d 번쨰 수행 시작\n\n", gijun);
		if (gijun == 3) {//매개변수가 3이되면 종료 출력
			printf("종료!!\n\n");
			return;
		}
		recursiveTest(gijun + 1);//함수의 매개변수에 1을 더함
		printf("%d 번쨰 수행 종료\n\n", gijun);
	}

#include<stdio.h>
#include<stdlib.h>

	int main(void) {
		//출력예시
	  //01234*0*********
	  //0123***0*******
	  //012*****0*****
	  //01*******0***
	  //0*********0*
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5 - i; j++) {
				printf(" ");
			}
			for (int u = 0; u < i * 2 + 1; u++) {
				printf("*");
			}
			for (int q = 1; q > 0; q--) {//이 경우 *이 이미 삼각형으로 찍힐 것 이므로 " "하나씩만 추가 해주면 역삼각형이 나온다.
				printf(" ");
			}
			for (int l = 10; l > i * 2 + 1; l--) {
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}

	for문을 사용하여 삼각형, 역삼각형 찍기
#include<stdio.h>
#include<stdlib.h>

		int main(void) {
		//0 1 2 3 4 *\n
		//0 1 2 3 * * *\n
		//0 1 2 * * * * *\n   //출력 예시
		//0 1 * * * * * * *\n
		//0 * * * * * * * * *\n
		for (int i = 0; i < 5; i++) {// i가 5보다 작을때 안에 for문 실행 후 줄바꿈 이후 i++
			for (int j = 0; j < 5 - i; j++) {// j < 5 - i 첫 실행시 i는 0이므로, 5번 반복" "입력 후 종료
				printf(" ");
			}
			for (int u = 0; u < i * 2 + 1; u++) {// u < i * 2 + 1 첫 실행시 i는 0이므로 1번"*"입력 후 종료
				printf("*");
			}

			printf("\n");
		}
		//0 * * * * * * * * *\n
		//0 1 * * * * * * *\n
		//0 1 2 * * * * *\n   //출력 예시
		//0 1 2 3 * * *\n
		//0 1 2 3 4 *\n
		for (int i = 0; i < 5; i++) {// i가 5보다 작을때 안에 for문 실행 후 줄바꿈 이후 i++
			for (int j = 6; j > 5 - i; j--) {// j > 5 - i 첫 실행시 i는 0이므로, 1번 반복" "입력 후 종료
				printf(" ");
			}
			for (int u = 10; u > i * 2 + 1; u--) {// u > i * 2 + 1 첫 실행시 i는 0이므로 9번"*"입력 후 종료
				printf("*");
			}

			printf("\n");
		}
		return 0;
	}

배열:array
- same data type(같은 종류의 데이터를 연이어 배치할수있다)
- group handling그룹핸들링(같은 종류의 데이터타입으로 이루어진 저장공간을 하나의 변수명으로 굴릴수있음)
- int iArr[2];// 32bit 정수 저장공간 2개를 대표하는 이름 iArr
-iArr[0] = 7;//정수형 저장 공간 2개중, 0번 저장 공간에 7을 대입
-iArr[1] = 8;//정수형 저장 공간 2개중, 1번 저장 공간에 8을 대입
-크기의 개념과 저장 공간(index)의 개념이 있다

배열의 선언과 접근
배열의 선언
- data type + 배열의 이름 + [저장 공간의 개수]
- 예) int iArr[2];// 32bit 정수 저장공간 2개를 대표하는 이름 iArr
배열의 접근
- 배열의 이름 + [저장 공간의 주소(index)]
- iArr[0] = 7; // iArr이라는 이름이 대표하는 정수형 저장 공간 2개 중,0번 저장 공간에 7을 대입
-printf("%d", iArr[0]); //iArr의 0번째 있는 데이터를 출력
배열의 저장 공간
- 0번 저장 공간부터(선언된 저장 공간의 개수 - 1)까지 존재한다
- 예) int iArr[5]; //32bit 정수 저장 공간 5개를 대표하는 이름은 iArr
-iArr[0]부터 iArr[4]까지 5개의 32bit 정수 저장 공간이 존재한다

배열의 초기화

- int iArr1[5] = { 1,2,3,4,5 };
-int iArr2[5] = { 1,2,3 }; //선언에서 모자란 부분은 0 으로 초기화
-int iArr3[5] = { 0 };//모두 0으로 초기화
-int iArr4[5]; //초기화 안 한 index는 알 수 없는 값 존재
-중괄호{}를 사용한 배열의 초기화는 선언할 떄 최초 한 번만 가능
- iArr4 = { 1,2,3,4,5 };//error
배열에 넣는법
void array2() {
	int intArr1[5] = { 1,2,3,4,5 };
	printf("%d %d %d %d %d\n", intArr1[0], intArr1[1], intArr1[2], intArr1[3], intArr1[4]);
	int intArr2[5] = { 1,2,3 };//3,4자리에는 0출력
	printf("%d %d %d %d %d\n", intArr2[0], intArr2[1], intArr2[2], intArr2[3], intArr2[4]);
	int intArr3[5] = { 0 };//전부 0
	printf("%d %d %d %d %d\n", intArr3[0], intArr3[1], intArr3[2], intArr3[3], intArr3[4]);
	int intArr4[5];
	//intArr4 = {1,2,3,4,5};//error
	intArr4[0] = 1;//{}을 사용하지 않고 넣을 경우 
	intArr4[1] = 2;
	printf("%d %d %d %d %d\n", intArr4[0], intArr4[1], intArr4[2], intArr4[3], intArr4[4]);
}// 2,3,4 자리에는 이상한값이 들어간다

for문을 활용해 배열 부르기
void array3() {
	int intArr5[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {//5보다 작은 값들을 부름 (0,1,2,3,4)
		printf("intArr5[%d] : %d\n\n", i, intArr5[i]);
	}//for
}

배열 사이즈 확인하기
int intArr1[5];
int size = sizeof(intArr1);
printf("%d", size);// int형 저장 공간의 크기의 5배인 20byte가 나온다
int size2 = sizeof(intArr1[0]);
printf("%d", size2);//int형 저장공간의 크기 4byte가 나온다
}

sizeof연산자로 반복횟수를 구한뒤 for문으로 반복하여 intArr1의 값들을 불러오기
void array5() {
	int intArr1[5] = { 1,2,3,4,5 };
	int endPoint = sizeof(intArr1) / sizeof(intArr1[0]);//20 / 4 = 5
	for (int i = 0; i < endPoint; i++) {
		printf("%d %d\n\n", i, intArr1[i]);
	}
}

int iArr[5];//32bit 정수 저장공간 5개의 이름 iArr
iArr[0]의 크기는 4byte(int형 저장공간 1개이기때문)
iArr의크기는 20byte(int형 저장 공간 5개 전부이기때문)

2차원 배열 : 배열의 배열
- 1차원 배열 : 나홀로 아파트 : 아파트 이름 + 호수 = 변수이름 + index
- 2차원 배열 : 아파트 단지 : 아파트 이름 + 동번호 + 호수 : 변수이름 + index + index
- int iArr[2][3];//32bit정수 저장 공간 3개의 배열2개를 대표하는 이름은 iArr
-iArr[0][0] = 7;//0변 배열의 0번 저장 공간에 7을 대입
-iArr[1][0] = 8;//1변 배열의 0번 저장 공간에 7을 대입
2차원 배열의 선언과 접근
2차원 배열의 선언
- data type + 배열의 이름 + [배열의 개수] + [저장 공간의 개수]
- 예)int iArr[2][3];//32bit정수 저장 공간 3개의 배열2개를 대표하는 이름은 iArr
2차원 배열의 접근
- 배열의 이름 + [배열의 주소] + [저장 공간의 주소(index)]
- iArr[0][0] = 7;//0변 배열의 0번 저장 공간에 7을 대입
-printf("%d", iArr[0][0]);
2차원 배열의 저장 공간
- 0번 배열부터(선언된 배열의 개수 - 1)까지 존재한다
- 0번 저장 공간부터(선언된 저장 공간의 개수 - 1)까지 존재한다
배열 저장 공간의 예)
int iArr[2][3];//32bit정수 저장 공간 3개의 배열2개를 대표하는 이름은 iArr
-iArr[0][0]부터 iArr[0][2]까지 3개의 32bit정수 저장 공간이 존재
- iArr[1][0]부터 iArr[1][2]까지 3개의 32bit정수 저장 공간이 존재

배열에 각각 정수 넣어 보기
void array21() {
	int iArr21[2][3];
	iArr21[0][0] = 7;
	iArr21[0][1] = 8;
	iArr21[0][2] = 9;
	iArr21[1][0] = 4;
	iArr21[1][1] = 5;
	iArr21[1][2] = 6;
	printf(" iArr21[0][0] : %d\n\n", iArr21[0][0]);
	printf(" iArr21[0][1] : %d\n\n", iArr21[0][1]);
	printf(" iArr21[0][2] : %d\n\n", iArr21[0][2]);
	printf(" iArr21[1][0] : %d\n\n", iArr21[1][0]);
	printf(" iArr21[1][1] : %d\n\n", iArr21[1][1]);
	printf(" iArr21[1][2] : %d\n\n", iArr21[1][2]);
}

2차원 배열의 크기
- int intArr1[2][3];
-printf("%d", sizeof(intArr1));//2 * 3 * 4byte
-printf("%d", sizeof(intArr1[0]));//3 * 4byte (2차원 배열을1개만 사이즈를 재면 0번 배열에 존재하는 3개의 배열의 사이즈가 나옴)
-printf("%d", sizeof(intArr[0][0]));//4byet
-printf("%d", sizeof(intArr1) / sizeof(intArr[0]));//2 * 3 * 4byte) / (3 * 4byte) =2개의 배열
-printf("%d", sizeof(intArr1[0]) / sizeof(intArr[0][0]));//(3 * 4byte) / (4byte) =3개의 저장공간

배열 크기
void array22() {
	int iArr[2][3];
	int totalSize = sizeof(iArr);//모든 저장공간의 크기
	printf(" totalSize : %d\n\n", totalSize);
	int arr1Size = sizeof(iArr[0]);//하나의 배열의 저장공간크기
	printf(" arr1Size : %d\n\n", arr1Size);
	int idxSize = sizeof(iArr[0][0]);//1개의 저장공간크기
	printf(" idxSize : %d\n\n", idxSize);
	int arrCnt = totalSize / arr1Size;//배열의 개수
	printf(" arrCnt : %d\n\n", arrCnt);
	int idxcnt = arr1Size / idxSize;//배열 1개당 저장공간
	printf(" idxcnt : %d\n\n", idxcnt);

}

2차원 배열의 초기화
int intArr1[2][3] = { {1,2,3},{4,5,6} };
int intArr2[2][3] = { {1},{4} };//intArr2[0][0]은 1, intArr2[1][0]은 4 나머지 0
int intArr3[2][3] = { {1,2} };//intArr3[0][0]은 1, intArr3[0][1]은 2나머지 0
int intArr4[2][3] = { 1,2,3,4,5,6 };//순서대로 값이 대입
int intArr5[2][3] = { 1,2,3,4 };//순서대로 값 대입 후 남은 저장공간 0
int intArr6[2][3] = { 1,2 }//intArr3과 같음
int intArr7[2][3] = { 0 };//모든 저장공간 0으로 초기화

2차원 배열과 반복문

반복문을 사용하여 2차원 배열의 저장 공간 불러오기
void arr() {
	int iArr[2][3] = { 1,2,3,4,5,6 };
	int endPoint1 = sizeof(iArr) / sizeof(iArr[0]);//배열의 개수
	int endPoint2 = sizeof(iArr[0]) / sizeof(iArr[0][0]);//배열 1개당 저장공간의 개수
	for (int i = 0; i < endPoint1; i++) {
		for (int k = 0; k < endPoint2; k++) {
			printf("iArr[%d][%d] : %d\n\n", i, k, iArr[i][k]);
		}//for
	}//for
}//arr()

문자 배열 : char array
- 문자열을 표현하기 위한 수단
- char insa[20];//8bit char 저장 공간 20개를 대표하는 이름은 insa
-insa[0] = 'h'//8bit char 저장 공간 20개 중, 0번 저장 공간에 h를 대입
- insa[1] = 'i'//8bit char 저장 공간 20개 중, 1번 저장 공간에 i를 대입
- 크기의 개념과 저장 공간(index)의 개념이 있다

문자 배열의 선언과 접근
문자 배열의 선언
- char + 배열의 이름 + [저장 공간의 개수]
- 예)char insa[20];//8bit char 저장 공간 20개를 대표하는 이름은 insa
문자 배열의 접근
- 배열의 이름 + [저장 공간의 주소(index)]
- insa[0] = 'h'//8bit char 저장 공간 20개 중, 0번 저장 공간에 h를 대입
- printf("c", insa[0]);//문자 출력
-printf("%s", insa);//문자열 출력
문자 배열 선언의 주의 사항
문자 배열 선언의 주의 사항
- 저장할 문자열의 길이 보다 저장 공간을 한 칸 크게 문자 배열 선언 * **
-문자 배열의 마지막 저장 공간에는 문자열 종료 문자 저장
- 문자열 종료 문자 : \0 = NULL
- 문자열 출력 함수는 문자 배열에서 문자열 종료 문자가 나올 때까지 출력
- 문자열 종료 문자가 없으면, 다른 메모리 영역을 침범

void chArr1() {
	char insa[20];
	insa[0] = 'h';
	insa[1] = 'i';
	printf("insa[0] : % c\n\n", insa[0]);
	printf("insa[1] : % c\n\n", insa[1]);
	printf("insa[2] : % c\n\n", insa[2]);//?
	printf("insa[3] : % c\n\n", insa[3]);//?
	printf("insa[4] : % c\n\n", insa[4]);//?출력
	printf("insa : %s\n\n", insa);//hi와 함께 엉뚱한 문자출력
	insa[2] = '\0';//\0은 종료문자
	printf("insa[0] : % c\n\n", insa[0]);
	printf("insa[1] : % c\n\n", insa[1]);
	printf("insa[2] : % c\n\n", insa[2]);//종료 문자를 넣었기에 아무것도 출력되지않음
	printf("insa[3] : % c\n\n", insa[3]);//?
	printf("insa[4] : % c\n\n", insa[4]);//?
	printf("insa : %s\n\n", insa);//hi만 출력되고 끝
}

문자 배열의 선언과 초기화
- char chArr1[10] = { 'H','o','w','A','r','e','Y','o','u' };//자동으로 \0입력
-char chArr2[10] = { "hello" };//자동으로 \0입력
-char chArr3[10] = "whats up?";//자동으로 \0입력
-char chArr4[10];
char chArr4[0] = 'h';
char chArr4[1] = 'i';
char chArr4[2] = '\0';//수동으로\0입력

void chArr2() {
	//문자 배열의 선언과 함꼐 초기화를 해주면,
	//문자열 종료 문자가 자동으로 입력!!
	char arr1[10] = { 'H', 'O', 'W', 'A', 'R', 'E', 'Y', 'O', 'U', };
	printf("arr1 : %s\n\n", arr1);
	char arr2[10] = { "i am fine" };
	printf("arr2 : %s\n\n", arr2);
	char arr3[10] = "what's up?";//종료문 자리가없음으로 이상한문자 출력
	printf("arr3 : %s\n\n", arr3);
	char arr4[10];
	arr4[0] = 'H'; arr4[1] = 'i'; arr4[2] = '\0';//종료 문자 수동 입력
	printf("arr4 : %s\n\n", arr4);
}

strcpy_s(chArr7, "bye!!");
-문자 배열은 초기화 이후에는 직접 값을 대입하는 것이 불가능
- 초기화 이후에 문자열 입력 시, strcpy사용
- 사용이 필요할 시 #include<string.h> 추가
- 안정성이 않좋을경우 strcpy_s사용

void chArr3() {
	char arr[10];
	//aee = "i am fine";//대입연산불가능
	strcpy_s(arr, 10, "i am fine");//변수이름,배열크기,문자또는문자열
	printf("arr : %s\n\n", arr);
	strcpy_s(arr, sizeof(arr), "HowAreYou");//sizeof연산자로 arr의 배열크기 입력
	printf("arr : %s\n\n", arr);
}

char chArr8[10] = "HowAreYou";
printf("sizeof(chArr8) : %d\n\n", sizeof(chArr8));
printf("sizeof(chArr8) : %d\n\n", strlen(chArr8));
-sizeof:전체 길이
- strlen : 저장된 문자열의 길이
- #include<string.h>

void chArr4() {
	char arr[10] = "hello";
	printf("arr : %s\n\n", arr);
	int arrsize = sizeof(arr);
	printf("arrsize : %d\n\n", arrsize);//10출력
	int arrstrlen = strlen(arr);
	printf("arrstrlen : %d\n\n", arrstrlen);//5출력
}



2차원 문자 배열 : 문자 배열의 문자 배열(2차원 배열과 같은 개념)
- 1차원 배열 : 나홀로 아파트 : 아파트 이름 + 호수 = 변수이름 + index
- 2차원 배열 : 아파트 단지 : 아파트 이름 + 동번호 + 호수 : 변수이름 + index + index
- char insa[2][10]; // 8bit char 저장 공간 10개의 배열 2개를 대표하는 이름은 insa
-strcpy(insa[0], "hi");//0번 배열 저장 공간에 hi를 대입
-strcpy(insa[1], "hello");//1번 배열 저장 공간에 hello를 대입
2차원 문자 배열의 선언
- char + 배열의 이름 + [배열의 개수] + [저장 공간의 개수]
- 예)char insa[2][10]; // 8bit char 저장 공간 10개의 배열 2개를 대표하는 이름은 insa
2차원 문자 배열의 접근
- 배열의 이름 + [배열의 주소] + [저장 공간의 주소(index)]
- 예)insa[0][0] = 'h';//0번 배열의 0번 저장 공간에 h를 대입
-printf("%c", insa[0][0]);0번 배열의 0번 저장 공간의 문자 출력
- printf("%s", insa[0]);//0번배열의 문자열 출력

void strArr1() {
	char insa[2][10];
	insa[0][0] = 'h';
	insa[0][1] = 'i';
	printf("%c %c\n\n", insa[0][0], insa[0][1]);
	printf("%s\n\n", insa[0]);//종료 문자없음
	insa[0][2] = '\0';
	printf("%s\n\n", insa[0]);

	//strcpy_s(insa[1], 10, "howareyou?");//중단문자를 넣을자리없어 에러
	strcpy_s(insa[1], 10, "howareyou");
	printf("%s\n\n", insa[1]);
}

2차원 문자 배열의 초기화
char chArr1[2][20] = { {"hi"},{"hello"} };
char chArr2[2][20] = { "fine","thanks" };
char chArr2[2][20];
strcpy(chArr3[0], "how are you");
strcpy(chArr3[1], "nice to meet you");

void strArr2() {
	char chArr1[2][20] = { {'h','i'},{"hello"} };//문자열 종료 문자 자동입력
	printf("%s\n\n", chArr1[0]);
	printf("%s\n\n", chArr1[1]);

	char chArr2[2][20] = { "fine","thank you" };
	printf("%s\n\n", chArr2[0]);
	printf("%s\n\n", chArr2[1]);

	char chArr3[2][20];
	strcpy_s(chArr3[0], 20, "how are you?");
	strcpy_s(chArr3[1], 20, "nice to mee you.");
	printf("%s\n\n", chArr3[0]);
	printf("%s\n\n", chArr3[1]);
}

2차원 문자 배열의 길이
char chArr4[2][20] = { {"how are you"},{"nice to meet you"} };
printf("sizeof(chArr4) : %d\n", sizeof(chArr4));//40byte
printf("sizeof(chArr4[0]) : %d\n", sizeof(chArr4[0]));//20byte
printf("strlen(chArr4[0]) : %d\n", strlen(chArr4[0]));//저장되있는 문자 열만큼
void strArr3() {
	char chArr4[2][20] = { {"how are you?"},{"nice to meet you"} };
	int totsize = sizeof(chArr4);
	int onssize = sizeof(chArr4[0]);
	int onsstr = strlen(chArr4[0]);
	printf("sizeof(chArr4) : %d\n", totsize);//1byte * 20 * 2 == 40
	printf("sizeof(chArr4[0]) : %d\n", onssize);//1byte * 20 == 20
	printf("strlen(chArr4[0]) : %d\n", onsstr);//입력된 문자만큼1byte
}


로또 만들어 보기
void lotto1() {//1에서 45까지의 임의의 정수 6개를 갖는 배열 선언.
	int lotto[6];
	srand((unsigned int)time(NULL));

	printf("lotto insert start...\n\n");
	int tmp = 0;//랜던 정수를 임시 저장
	int	idx = 0;//정수값이 입력된 배열의 번호 + 1//다음 정수가 입력될 번지
	int	sameYn = 0;//tmp가 기존에 입력된 값과 같은지 여부를 알려주는 역할
	for (int i = 0; i < 6; i++) {
		tmp = rand() % 45 + 1;
		if (i == 0) {//looto[0] -> 기존의 값이 없다
			lotto[idx] = tmp;
			idx++;
		}//if
		else {
			sameYn = 0;//초기화
			//lotto배열에 기존에 입력된 값이 있는 경우. i > 0
//새로 발생된 값이 기존에 저장된 값과 같은가를 비교하자
			for (int k = 0; k < idx; k++) {
				if (lotto[k] == tmp) {
					sameYn = 1;//같다 true
					break;
				}//if
			}//for
			if (sameYn == 0) {//같은 값이 없다
				lotto[idx] = tmp;
				idx++;
			}//if
			else {//같은 값이 있다
				i--;
			}//else
		}//else
	}//for
	printf("lotto insert end...\n\n");

	printf("lotto print start...\n\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}//for
	printf("\n\n");
	printf("lotto print end...\n\n");
}

로또 번호 정렬
//start -> 19, 12, 15, 31, 16, 6
//i:0, k:1 19와 12 비교 수행결과 : 12, 19, 15, 31, 16, 6
//i:0, k:2 12와 15 비교 수행결과 : 12, 19, 15, 31, 16, 6
//i:0, k:3 12와 31 비교 수행결과 : 12, 19, 15, 31, 16, 6
//i:0, k:4 12와 16 비교 수행결과 : 12, 19, 15, 31, 16, 6
//i:0, k:5 12와 6 비교 수행결과 : 6, 19, 15, 31, 16, 12
//i:1, k:2 19와 15 비교 수행결과 : 6, 15, 19, 31, 16, 12
//i:1, k:3 15와 31 비교 수행결과 : 6, 15, 19, 31, 16, 12
//i:1, k:4 15와 16 비교 수행결과 : 6, 15, 19, 31, 16, 12
//i:1, k:5 15와 12 비교 수행결과 : 6, 12, 19, 31, 16, 15
//i:2, k:3 19와 31 비교 수행결과 : 6, 12, 19, 31, 16, 15
//i:2, k:4 19와 16 비교 수행결과 : 6, 12, 16, 31, 19, 15
//i:2, k:5 16와 15 비교 수행결과 : 6, 12, 15, 31, 19, 16
//i:3, k:4 31와 19 비교 수행결과 : 6, 12, 15, 19, 31, 16
//i:3, k:5 19와 16 비교 수행결과 : 6, 12, 15, 16, 31, 19
//i:4, k:5 31와 19 비교 수행결과 : 6, 12, 15, 16, 19, 31
void lottl2() {
	int lotto[6] = { 19, 12, 15, 31, 16, 6 };
	printf("lotto sort start...\n\n");
	for (int i = 0; i < 6; i++) {
		for (int k = i + 1; k < 6; k++)
			if (lotto[i] > lotto[k]) {
				int tmp = lotto[i];
				lotto[i] = lotto[k];
				lotto[k] = tmp;
			}
	}
	printf("lotto sort end...\n\n");
	printf("lotto print start...\n\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
	printf("\n\n");
	printf("lotto print end...\n\n");
}

2차원 배열구구단
void gugu() {
	int gugu[10][10];
	printf("gugudan insert start...\n\n");
	for (int dan = 0; dan < 10; dan++) {
		for (int gop = 0; gop < 10; gop++) {
			gugu[dan][gop] = dan * gop;
		}//for
	}//for
	printf("gugudan insert end...\n\n");
	printf("gugudan print start...\n\n");
	for (int dan = 0; dan < 10; dan++) {
		printf("==%d단==\n\n", dan);
		for (int gop = 0; gop < 10; gop++) {
			printf("%d * %d = %d\t", dan, gop, gugu[dan][gop]);
			if (gop % 3 == 0) printf("\n");
		}//for
		printf("\n\n");
	}//for
	printf("gugudan print end...\n\n");
}

gets_s
- 빈 칸을 포함하여 한 줄 전체를 문자열로 입력 받는다
- 문자열 종료 문자를 자동으로 넣는다

puts
- 문자열만 출력 가능하다
- 문자열 출력 후에 자동으로 줄 바꿈을 한다

puts는 오직 문자열만 출력하는 함수
문자열이 끝날때 자동으로 줄 바꿈을 하는 특징이 있다.
이 특징을 이용해 pute("");를 만들어 한줄을 비울 수 있다(이러면 줄바꿈이 더 빨리된다 카더라)

gets_s 사용
void chArr4() {
	char name[10];
	char addr[30];

	printf("이름 : ");
	gets_s(name, sizeof(name));//문자열 입력 후 표시

	printf("주소 : ");
	gets_s(addr, sizeof(addr));//문자열 입력 후 표시

	printf("\n 이름 : %s", name);//입력확인출력
	printf("\n 주소 : %s\n\n", addr);//입력확인출력
}

gets_s와 puts같이 사용
void testGetPut() {
	char testln[80];
	puts("gets_s를 사용한 입력 : ");
	gets_s(testln, 80);//문자열 공백 포함입력받는 함수
	puts("==========");
	puts("puts를 사용한 문자열 출력 : ");//문자열만 출력하는함수 및 줄바꿈 자동
	puts(testln);
}

strcmp: 문자열의 비교
- 아스키 코드 값의 크기를 비교
- 문자열의 비교 결과가 같으면 : 0
- 문자열의 비교 결과, 앞의 문자열이 크면 : -1
- 문자열의 비교 결과, 뒤의 문자열이 크면 : 1
- #include<string.h>

strcmp 써보기
void testCmp() {
	char chArr1[50] = "nice to meet you";
	char chArr2[50] = "NICE TO MEET YOU";
	char chArr3[50] = "NICE TO MEET YOU";
	int iVar1 = strcmp(chArr1, chArr2);
	printf("strcmp(chArr1, chArr2) : %d\n\n", iVar1);//1
	int iVar2 = strcmp(chArr2, chArr1);
	printf("strcmp(chArr2, chArr1) : %d\n\n", iVar2);//-1
	int iVar3 = strcmp(chArr2, chArr3);
	printf("strcmp(chArr2, chArr3) : %d\n\n", iVar3);//0
}

자유게시판 만들어 보기
char bTitle[10][50];
char bWriter[10][50];
char bCnts[10][50];
char menu[5];
printf("board input start...\n\n");
int i = 0;
while (i < 10) {
	printf("1 : 글쓰기, 2:출력, 입력 : ");
	gets_s(menu, 5);
	if (strcmp(menu, "2") == 0) break;
	printf("제목 : ");
	gets_s(bTitle[i], 50);
	printf("작성자 : ");
	gets_s(bWriter[i], 50);
	printf("내용 : ");
	gets_s(bCnts[i], 50);
	printf("\n");
	i++;
}//while
printf("board input end...\n\n");
printf("board print start...\n\n");
for (int k = 0; k < i; k++) {
	printf("제목 : ");
	puts(bTitle[k]);
	printf("작성자 : ");
	puts(bWriter[k]);
	printf("내용 : ");
	puts(bCnts[k]);
	puts("");
}
printf("board print end...\n\n");
}

메모리에 load되는 모든 데이터는 위치(주소)값을 갖는다
int iVar = 777;
-777은 메모리의 어딘가의 공간에 32bit만큼의 크기로 저장된다
- iVat은 777이 저장된 32bit공간의 시작 위치(주소) 값을 갖고 있다
- printf("%d", iVar);는 iVar가 가진 주소에 저장된 값을 출력한다
- iVar = 888;은 iVar가 가진 주소에 새로운 값 888을 저장한다

& (주소 연산자)
- 변수가 가지고 있는 주소를 알려주는 연산자
- printf("iVar : %d\n", iVar); //iVar에 저장된 값
-printf("&iVar : %p\n", &iVar);//iVar에 저장된 값이 있는 주소의 값
% p:주소를 출력하는 서식 문자

* (포인터)
pointer
역할1.주소를 저장하는 변수를 선언한다
- int iVar = 777;
-int* iVarP;//iVarP는 int type의 주소를 담는 변수이다
-iVarP = &iVar;
-printf("%p", iVarP);//주소가 출력된다
역할2.주소에 저장된 내용에 접근한다
- int iVar = 777;
-int* iVarP;//iVar는 int type의 주소를 담는 변수이다
-iVarP = &iVar;
-printf("%p", iVatP);//주소가 출력된다
-printf("%d", *iVarP);//주소에 저장된 내용이 출력된다
포인터 출력예시
void pTest3() {
	//일반 변수 : 저장 공간의 데이터에 접근한다
	//포인터 변수 : 저장 공간의 주소레 접근한다
	//&일반 변수 : 저장 공간의 주소에 접근한다
	//*포인터 변수 : 저장 공간의 데이터에 접근한다
	double dVar = 42.195;
	printf("dVar %lf\n\n", dVar);
	printf("&dVar %p\n\n", &dVar);

	double* dVarP = &dVar;
	printf("dVarP %p\n\n", dVarP);
	printf("*dVarP %lf\n\n", *dVarP);
}

void pTest2() {
	int iVar = 777;
	//iVar는 32bit 정수 값을 갖는 변수
	//iVar는 32bit 정수형 저장 공간의 주소를 알고 있다
	//iVar가 알고 있는 32bit 정수형 저장 공간의 주소를 꺼내는 방법 : &iVar
	printf("iVar : %d\n\n", iVar);
	int* iVarP;//포인터 변수를 선언하는 *.
	//iVarP는 32bit 정수령 저장 공간의 주소를 갖는 변수
	//일반형 변수는 32bit 정수형 저장 공간의 데이터에 접근
	//포인트 변수는 32bit 정수형 저장 공간의 주소에 접근
	iVarP = &iVar;//777이 저장된 공간의 주소를 iVarP에게 담는 표현
	printf("&iVar : %p\n\n", &iVar);
	printf("iVarP : %p\n\n", iVarP);
	printf("*iVarP : %d\n\n", *iVarP);//주소안에 있는 데이터를 출력

}

void pTest1() {
	//& : 주소 연산자 : 변수가 가진 주소를 반환해주는 연산자.
	int iVar;
	//32bit정수령 저장공간 하나를 만들고, 그 위치값을 iVar가 알고 있다.
	printf("iVar의 주소값%p\n\n", &iVar);
	iVar = 777;
	printf("iVar의 값%d\n\n", iVar);
	printf("iVar의 주소값%p\n\n", &iVar);
	//1. int변수 iVar는 32bit 저장 공간의 위치값을 알고 있다
	//2. int변수 iVar는 32bit 저장 공간의 내용을 쓰거나 읽는다
}

포인터 개념의 핵심
주소를 구하는 주소 연산자 : &
주소를 저장하는 변수를 선언하는 포인터 : *
주소에 저장된 내용에 접근하는 포인터 : *

일반 변수
- 변수를 출력하면, 저장된 데이터가 출력됨
- &를 사용해야 주소를 알 수 있음
포인터 변수
- 변수를 출력하면, 주소가 출력됨
- *를 사용해야 저장된 데이터를 알 수 있음

포인터의 대입
일반 변수의 주소 하나를 여러 포인터에 대입 가능하다
- int iVar = 777;
-int* iVarP1 = &iVar;
-int* iVarP2 = &ivar;
포인터 변수의 주소를 다른 포인터에 대입 가능하다
- int* iVarP3 = iVarP1;
포인터 대입 예)
void pTest4() {
	int iVar = 777;
	int* iVarP1 = &iVar;
	int* iVarP2 = &iVar;
	int* iVarP3 = iVarP1;
	printf("&iVar %p\n\n", &iVar);
	printf("iVarP1 %p\n\n", iVarP1);
	printf("iVarP2 %p\n\n", iVarP2);
	printf("iVarP3 %p\n\n", iVarP3);
	printf("iVar %d\n\n", iVar);
	printf("*iVarP1 %d\n\n", *iVarP1);
	printf("*iVarP2 %d\n\n", *iVarP2);
	printf("*iVarP3 %d\n\n", *iVarP3);
}

포인터 변수의 sizeof 연산
주소를 담는 포인터 변수의 sizeof연산 : 8byte//무슨 형으로 선언하든 8byte를 가짐
- Data Type에 따라 메모리 공간의 크기는 다르다
- 일반 변수의 sizeof연산은 Data Type의 크기에 따라 달라진다
- 포인터 변수는 주소만을 가지므로, Data Type와 무관하게, 크기는 항상 8byte이다
사이즈 알아보기
void pTest5() {
	int iVar = 777;
	int* iVarP = &iVar;
	printf("sizeof(iVar) : %d\n\n", sizeof(iVar));// 4
	printf("sizeof(&iVar) : %d\n\n", sizeof(&iVar));// 8
	printf("sizeof(iVarP) : %d\n\n", sizeof(iVarP));// 8
	printf("sizeof(*iVarP) : %d\n\n", sizeof(*iVarP));// 4
	double dVar = 42.195;
	double* dVarP = &dVar;
	printf("sizeof(dVar) : %d\n\n", sizeof(dVar));// 8
	printf("sizeof(dVarP) : %d\n\n", sizeof(dVarP));// 8
	char chVar = 'A';
	char* chVarP = &chVar;
	printf("sizeof(chVar) : %d\n\n", sizeof(chVar));// 1
	printf("sizeof(&chVar) : %d\n\n", sizeof(&chVar));// 8
	printf("sizeof(chVarP) : %d\n\n", sizeof(chVarP));// 8
	printf("sizeof(*chVarP) : %d\n\n", sizeof(*chVarP));// 1
}

포인터 변수의 Data Type
- 포인터 변수가 갖는 주소에 위치한 값이 Date Type과 같은 Date Type으로 선언하라
- int 변수의 포인터 변수는 int* 으로 선언
- double 변수의 포인터 변수는 double* 으로 선언
에러 확인
void pTest6() {
	double dVar = 42.195;
	int* iVarP = &dVar;
	printf("dVar : %lf\n\n", dVar);
	printf("&dVar : %p\n\n", &dVar);
	printf("iVarP : %p\n\n", iVarP);
	printf("*iVarP : %lf\n\n", *iVarP);//error
	printf("*iVarP : %d\n\n", *iVarP);//error
	double* dVarP = &dVar;
	printf("dVarP : %p\n\n", dVarP);
	printf("*dVarP : %lf\n\n", *dVarP);
}

5 X 5 2차원 배열 정수 입력

int main(void) {
	int array[5][5] = { 0 };//5 X 5배열 선언 및 모두 0으로 초기화
	int num = 0;//각 원소값 입력 변수
	int qwe = 0;//열 입력 변수
	for (int i = 0; i < 5; i++) {//행 5번 반복
		for (int n = 4; n > i; n--) {//4번반복 후 -1씩반복
			//printf("  ");// 모양 안나옴
			qwe++;//열 입력 변수 for문 반복마다 ++
		}
		for (int t = 0; t < i + 1; t++) {//1번 반복 후 +1씩반복
			array[i][qwe] = ++num;//원소값 입력
			//printf("%d ", array[i][qwe]);//모양 안나옴
			qwe++;//열 입력 변수 for문 반복마다 ++
			if (qwe >= 5) qwe = 0;//열 입력 변수가 5가 되었을 경우 0대입 반복
		}
		//printf("\n\n");//모양 안나옴
	}
	printf("\t2차원 배열 A[5][5]\n");
	for (int i = 0; i < 5; i++) {//행 5번 반복
		for (int n = 0; n < 5; n++) {//열 5번 반복
			if (array[i][n] == 0) {
				printf("\t");//출력 값이 0일경우 \t 입력
			}
			else printf("%d\t", array[i][n]);//0을 제외한 숫자는 그대로 출력
		}
		printf("\n\n");
	}
	system("pause");
	return 0;
}
//  0 1 2 3 4
//0 0 0 0 0 1
//1 0 0 0 2 3  출력 예시)
//2 0 0 4 5 6
//3 0 7 8 9 10
//4 1112131415

5 X 5 이차원 배열 2개로 직사각형 출력
int main(void) {
	int array[5][5] = { 0 };//5 X 5배열 선언 및 모두 0으로 초기화
	int array2[5][5] = { 0 };
	int num = 0;//각 원소값 입력 변수
	int num2 = 0;
	int qwe = 0;//열 입력 변수
	for (int i = 0; i < 5; i++) {//행 5번 반복
		for (int n = 4; n > i; n--) {//4번반복 후 -1씩반복
			//printf("  ");// 모양 안나옴
			qwe++;//열 입력 변수 for문 반복마다 ++
		}//for
		for (int t = 0; t < i + 1; t++) {//1번 반복 후 +1씩반복
			array[i][qwe] = ++num;//원소값 입력
			//printf("%d ", array[i][qwe]);//모양 안나옴
			qwe++;//열 입력 변수 for문 반복마다 ++
			if (qwe >= 5) qwe = 0;//열 입력 변수가 5가 되었을 경우 0대입 반복
		}//for
		//printf("\n\n");//모양 안나옴
	}//for
	int asd = 5;//행 반복마다 -- 되는 변수 n비교 변수
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < asd; n++) {
			array2[i][n] = ++num2;
		}
		asd--;//행 반복마다 --
	}
	printf("\t2차원 배열 A[5][5]\t\t\t2차원 배열 B[5][5]\n");
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 5; n++) {
			if (array[i][n] == 0) {
				printf("\t");
			}
			else printf("%d\t", array[i][n]);//0을 제외한 숫자는 그대로 출력
		}//for
		for (int n = 0; n < 5; n++) {
			if (array2[i][n] == 0) {
				printf("\t");
			}
			else printf("%d\t", array2[i][n]);//0을 제외한 숫자는 그대로 출력
		}//for
		printf("\n\n");
	}//for
	system("pause");
	return 0;
}
//  0 1 2 3 4
//0 0 0 0 0 1 1 2 3 4 5
//1 0 0 0 2 3 6 7 8 9  출력 예시)
//2 0 0 4 5 6 101112
//3 0 7 8 9 101314
//4 111213141515

포인터 개념복습
void passByValue(int iVarCopy);
void passByRefeference(int* iVarPnt);


int main(void) {
	//포인터를 사용하는 이유 - 경제적이고 빠른 연산을 위해 사용
	int iVar = 777;
	passByRefeference(&iVar);//iVar의 저장 공간을 주소를 통해 공유
	printf("iVar : passByRefeference : %d\n\n", iVar);//888 변화
	int iVar2 = 777;
	passByValue(iVar2);//iVar2 값을 복사한 새로운 저장 공간 iVarCopy를 만듬
	//printf("iVar : %d\n\n", iVar);//777변화없음
	system("pause");
	return 0;
}

void passByRefeference(int* iVarPnt) {//값복사가 아닌 주소를 가져옴
	*iVarPnt = 888;//주소에 저장된 값을 바꿈
}

void passByValue(int iVarCopy) {//포인터를 사용하지 않은 예
	iVarCopy = 888;//새로운 변수를 만들어 2개의 저장공간 생김
}

위치(주소)값을 이용한 배열 접근
배열의 이름은 배열의 0번지 주소
- int intarr[5];
-printf("%p", intarr);
-printf("%p", &intarr);
-printf("%p", &intarr[0]);

-printf("%p", intarr + 1);
-printf("%p", &intarr[1]);
-printf("%p", intarr + 2);
-printf("%p", &intarr[2]);

위치(주소)값을 이용한 배열 접근 확인
* (아스테리트)사용하여 값입력 후 출력확인
void arrPnt3() {
	int iArr[5];
	*iArr = 111;//iArr[0] = 111;
	*(iArr + 1) = 222;//iArr[1] = 222;
	*(iArr + 2) = 333;//iArr[2] = 333;
	*(iArr + 3) = 444;//iArr[3] = 444;
	*(iArr + 4) = 555;//iArr[4] = 555;
	printf("iArr[0] : %d\n\n", *iArr);//iArr[0]
	printf("iArr[1] : %d\n\n", *(iArr + 1));//가로 쓰는이유 +연산을 먼저 행해야함
	printf("iArr[2] : %d\n\n", *(iArr + 2));
	printf("iArr[3] : %d\n\n", *(iArr + 3));
	printf("iArr[4] : %d\n\n", *(iArr + 4));
}

각 배열의 주소 확인
void arrPnt2() {
	int iArr[5];
	printf("iArr : %p\n\n", iArr);//배열의 시작 주소
	printf("&iArr : %p\n\n", &iArr);//배열의 시작 주소
	printf("&iArr[0] : %p\n\n", &iArr[0]);//배열의 시작 주소
	printf("&iArr[1] : %p\n\n", &iArr[1]);
	printf("iArr + 1 : %p\n\n", iArr + 1);//&iArr[1] == iArr + 1
	printf("&iArr[2] : %p\n\n", &iArr[2]);
	//iArr : iArr[0]의 주소
	//iArr + 1 : iArr[0]의 다음 데이터의 주소를 가져온다
	printf("iArr + 2 : %p\n\n", iArr + 2);
	printf("&iArr[3] : %p\n\n", &iArr[3]);
	printf("iArr + 3 : %p\n\n", iArr + 3);
	printf("&iArr[4] : %p\n\n", &iArr[4]);
	printf("iArr + 4 : %p\n\n", iArr + 4);

}

증감 연산자 활용

입력
int intarr[5];
int* pintarr = intarr;
for (int i = 0; i < 5; i++) {
	*(pintarr++) = i;
}
출력
for (int j = 0; j < 5; j++) {
	printf("%d\n", *(pintarr++));
}
for문을 통해 순차적 접근 가능
void arrPnt4() {
	int iArr[5];
	int* iArrP = iArr;
	*iArrP = 111;//*iArr = 111;//iArr[0] = 111;
	*(++iArrP) = 222;//*(iArr + 1) = 222;//iArr[1] == 222;
	*(++iArrP) = 333;//*(iArr + 2) = 333;//iArr[2] == 333;
	*(++iArrP) = 444;//*(iArr + 3) = 444;//iArr[3] == 444;
	*(++iArrP) = 555;//*(iArr + 4) = 555;//iArr[4] == 555;

	int* iArrP2 = iArr;
	for (int i = 0; i < 5; i++) {
		printf("*iArr[%d] : %d\n\n", i, *iArrP2++);
	}

}

포인터 변수의 sizeof연산
포인터 변수는 주소만을 가지므로, Data Type와 무관하게,
크기는 항상 8Byte이다
- int intarr[5];
-int* pintarr = intarr;
-printf("%d", sizeof(intarr));
-printf("%d", sizeof(pintarr));
size출력 해보기
void arrPnt5() {
	int iArr[5];
	printf("sizeof(iArr) : %d\n\n", sizeof(iArr));// 20
	int* iArrP = iArr;
	printf("sizeof(iArrP) : %d\n\n", sizeof(iArrP));// 8
}

포인터 쓰는 이유
void arrlnput(int* put);


int main(void) {
	int iArr[5];
	arrlnput(iArr);
	for (int i = 0; i < 5; i++) {
		printf("iArr[%d] : %d\n\n", i, iArr[i]);//반복문을 통한 출력
	}
	system("pause");
	return 0;
}

void arrlnput(int* put) {
	for (int i = 0; i < 5; i++) {
		*(put++) = i * 111;//포인터 변수에 저장 되어있는 주소에 데이터에 접근 하며 입력
	}//for
}


	system("pause");
	
	
	return 0;
}