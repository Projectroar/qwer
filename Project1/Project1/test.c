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
	printf("���� ��� : %d\n\n", sizeof 123);
	printf("�Ǽ� ��� : %d\n\n", sizeof 3.14);
	printf("���� ��� : %d\n\n", sizeof 'A');//���ڻ�� 4byte
	printf("���ڿ� ��� : %d\n\n", sizeof "hello");

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
	if (ivar == 1) { printf("���� �Դϴ�"); }
	else if (ivar == 2) { printf("���� �Դϴ�"); }
	else if (ivar == 3) { printf("�� �Դϴ�"); }
	ivat�� 1�̹Ƿ� ���� ���� �Ͽ� else if�� �˻� ���� �ʰ� "���� �Դϴ�"���
		if�� ���� ����
		int ivar = 99;
	if (ivar >= 90) {
		printf("90�̻��� ��\n\n");
	}
	if (ivar >= 80) {
		printf("80�̻��� ��\n\n");    //3���� ��� ���
	}
	if (ivar >= 70) {
		printf("70�̻��� ��\n\n");
	}

	int ivar = 99;
	if (ivar >= 90) {
		printf("90�̻��� ��\n\n"); //"90�̻��� ��" �� ��� ó���� ������ ���� �߱⿡ �ٸ� ������ �˻� ��������
	}
	else if (ivar >= 80) {
		printf("80�̻��� ��\n\n");
	}
	else if (ivar >= 70) {
		printf("70�̻��� ��\n\n");
	}
	return 0;

	if ~else if ~else ~
		if (if ���� ����) { if ���� �ڵ� }

		else if (else if���� ����) { else if ���� �ڵ� }

		else { else �����ڵ� }
	- else�� ���� �ڵ常 �����ϸ�
		if, else if�� ���� ������ ��� false�� ��� ���� �ȴ�
			- else�� ������ ��� ��츦 ���Ѵ�
			����
			int ivar;
	printf("1 2 3 �� �ϳ��� ���� �Է� : ");
	scanf_s("%d", &ivar);//���� �Է� �޴´�.
	if (ivar == 1) {
		printf("����\n\n");
	}
	else if (ivar == 2) {
		printf("����\n\n");
	}
	else if (ivar == 3) {
		printf("��\n\n");
	}
	else {
		printf("����� �ž�");//������ ���� 1,2,3 ���� ���ڸ� �Է½� ���
	}

	char giho = '-';

	switch (giho) {
	case'+':printf("%d %c %d = %d\n", 7, giho, 5, 7 + 5);//���� �ȵ�
	case'-':printf("%d %c %d = %d\n", 7, giho, 5, 7 - 5);//����
	case'*':printf("%d %c %d = %d\n", 7, giho, 5, 7 * 5);//����

	}

	char giho = '-';

	switch (giho) {
	case'+':printf("%d %c %d = %d\n", 7, giho, 5, 7 + 5);break;
	case'-':printf("%d %c %d = %d\n", 7, giho, 5, 7 - 5);break; //����
	case'*':printf("%d %c %d = %d\n", 7, giho, 5, 7 * 5);break;
	}

	int firstNum = 7, secondNum = 5;
	char giho = '-';
	printf("firstNum�Է� : ");
	scanf_s("%d", &firstNum);
	printf("giho�Է� : ");
	scanf_s(" %c", &giho, 1);
	printf("secondNum�Է� : ");
	scanf_s("%d", &secondNum);

	switch (giho) {
	case'+':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum + secondNum);break;
	case'-':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum - secondNum);break;
	case'*':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum * secondNum);break;
	case'/':printf("%d %c %d = %d\n", firstNum, giho, secondNum, firstNum / secondNum);break;
	default:printf("�̰�, �ƴ�");
	}

	int firtNum = 0, secondNum = 0;
	char giho = '+';
	printf("���� �Է� : ");
	scanf_s("%d", &firtNum);
	printf("+ - * / �Է� : ");
	scanf_s(" %c", &giho, 1);
	printf("���� �Է� : ");
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
		printf("�̰� �ƴ�\n\n");
	}
	printf("%d %c %d = %d", firtNum, giho, secondNum, resultNum);

	int user = 0, com = 0;
	printf("1����, 2����, 3�� user : ");
	scanf_s("%d", &user);

	srand((unsigned int)time(NULL));
	com = rand() % 3 + 1;
	printf("user: %d, com: %d\n\n", user, com);
	if (user == com) {
		printf("���");
	}
	if (user == 1) {//1����
		if (com == 2) printf("����� �й��Դϴ�.");
		else if (com == 3) printf("����� �¸��Դϴ�.");
	}
	if (user == 2) {//2����
		if (com == 3) printf("����� �й��Դϴ�.");
		else if (com == 1) printf("����� �¸��Դϴ�.");
	}
	if (user == 3) {
		if (com == 1) {//3��
			printf("����� �й��Դϴ�.");
		}
		else if (com == 2) {//if�� ���� �߰�ȣ ���� ����
			printf("����� �¸��Դϴ�.");
		}
	}

	while (true) {//����LOOP->���� ����
		printf("%d", 3);

		printf("%d", 22222);

		printf("%d", 1111111);

	}//while

	int qwer = 0;
	while (qwer <= 100) {// 0���� 100���� ��Ÿ���� ���ǽ�
		printf("%d\n\n", qwer);
		qwer++;
	}
	return 0;

	int qwer = 0;
	while (qwer <= 100) {//0���� 100���� Ȧ���� ����ϴ� ���ǽ�
		if (qwer % 2 == 1) printf("%d\n\n", qwer);
		qwer++;
	}
	return 0;

	int qwer = 0;
	while (qwer <= 100) {//0���� 100���� 5�� ����� ���
		if (qwer % 5 == 0) printf("%d\n\n", qwer);
		qwer++;
	}

	while (dan <= 9) {//���� �񱳽�: 9�ܱ���
		int gop = 1;//�ʱ��:1����
		while (gop <= 9) {//���� �񱳽�:9����
			gop++;//������
		}//while
		dan++;//������
	}//while

	����while������ ������ ����
		int dan = 2;//1�ʱ��
	while (dan <= 9) {//2���ǽ�
		printf("===%d��===\n\n", dan);
		int gop = 1;//�ʱ��
		while (gop <= 9) {//���ǽ�
			printf("%d * %d = %d\t", dan, gop, dan * gop);
			if (gop % 3 == 0) printf("\n");//3�� ��� ���� �ٹٲ�(�������ϰ� �����)
			gop++;//������
		}
		printf("\n\n");//���� ������ �ٹٲ�2��(�������ϰ�)
		dan++;//3������
	}

	int sero = 1;
	while (sero <= 10) {
		int garo = 1;
		while (garo <= 10) {
			printf("%d\t", garo);//1���� 10���� �� �ϸ� ���� ���
			if (sero == garo) break;//���࿡ sero��garo�� ���ڰ� ���ٸ� ����
			garo++;
		}
		printf("\n");//10�� ���� �ٹٲ�
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
	int fnum = rand() % 10;//0~9�� �� �߻�
	int snum = rand() % 10;//0~9�� �� �߻�
	int user;
	printf("funm %d\n\n", fnum);
	printf("1����, 2����, 3����, ����� ���� : ");
	scanf_s("%d", &user);
	if (user == 1 && fnum > snum) {
		printf("�¸�\n\n");
	}
	else if (user == 2 && fnum < snum) {
		printf("�¸�\n\n");
	}
	else if (user == 3 && fnum == snum) {
		printf("�¸�\n\n");
	}
	else {
		printf("�й�\n\n");
	}
	printf("f%d s%d u%d\n", fnum, snum, user);


	srand((unsigned int)time(NULL));//��ǻ�ͽð����� ��������
	int com = rand() % 1000;//0~999���
	int user, count = 1;
	while (1) {
		printf("���ڸ� �����Է� : ");
		scanf_s("%d", &user);//���� �Է�
		if (com == user) break;//���߸� ���߱�
		else if (com > user) printf("�۽��ϴ�\n\n");
		else if (com < user) printf("Ů�ϴ�\n\n");
		count++;
	}
	printf("com : %d user : %d\n\n", com, user);
	printf("%d ���� ���� ����", count);

	for (int loopCount = 10; loopCount >= 0; loopCount--) {

		printf("%d\t", loopCount);

	}

	for���� Ȱ���Ͽ� 1���� 10���� ����
		for (int loopcount = 1; loopcount <= 10; loopcount++) {
			printf("%d\t", loopcount);
		}
	return 0;


	for���� Ȱ���Ͽ� 10���� 1���� ����
		for (int loopcount = 10; loopcount >= 1; loopcount--) {
			printf("%d\t", loopcount);
		}

	for������ ����� �ﰢ��, ���ﰢ��
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

	break ����
		for (int dan = 2; dan <= 9; dan++); {
		printf("%d", dan);
		if (dan == 5) break; //Ư�����ǿ��� ����
	}
	����for�� ����
		for (int dan = 2; dan <= 9; dan++) {
			printf("\n===%d===\n", dan);
			for (int gop = 1; gop <= 9; gop++) {
				if (gop % 3 == 0) break; //���� break�� ���� �ݺ������� �����Ѵ�
				printf("%d * %d = %d\n", dan, gop, dan * gop);
			}
			printf("\n");
		}
	return 0;

	continue
		for (int dan = 2; dan <= 9; dan++) {
			if (dan == 5) conitnue;//Ư�� ���ǿ��� ������ �ǳ� �ڴ�
			printf("%d\n, dan");

		}

	����for���� continueȰ��
		������ Ȱ��
		for (int dan = 2; dan <= 9; dan++) {
			if (dan == 3) continue;//3���� �ǳ� �ڴ�
			printf("==%d==\n", dan);
			for (int gop = 1; gop <= 9; gop++) {
				if (gop == 5) continue;//5������ �ǳʶ�
				printf("%d * %d = %d\n", dan, gop, dan * gop);
			}
			printf("\n");
		}
	return 0;

	do { ���� �ڵ� } while (���� ����)
		Loop Statement(�ݺ��� ǥ��)
		do ~while: ~�϶� ~�ϴ� ����
			do { ���� �ڵ� } while (���� ����)
				- (���� ����)�� false�̾, { ���� �ڵ� }�� ����1ȸ�� ������
				- (���� ����)�� true�� ����, { ���� �ڵ� }�� �ݺ��ؼ� ��� ����
				- (���� ����)�� true / false�� ��Ÿ���� ǥ������ ����

				do {
					printf("���� 1ȸ ���� ��, (���� ��)����");
				} while (false);//do�� ���� 1ȸ ���� ��,(��������)�˻�//;(semicolon)����!

	do while����)
	while (false) {
		printf("���� �Ұ� �ڵ�");//�����������
	}

	while (0) {
		printf("false");
	}

	do {
		printf("do~~~\n\n");//���������� false�̿��� ����1�� �����
	} while (0);
	int user = 0;
	do {
		printf("���� �Է� :");
		scanf_s("%d", &user);//���� 1ȸ ������ ����
		if (user < 0) {
			printf("�����Է½� ����");
		}

	} while (user >= 0);//0�̸��� �� �Է½� ����
	printf("end of main\n\n");
	system("pause");
	return 0;

	�Լ�
		�Լ� : function
		- �ڵ��� ���⵵�� ���߰�, �������� ���δ�
		- reyurn type, name, parameters�� �̷������
		- �Լ��� �ٸ� �Լ��� ȣ��(����)�� �� �ִ�
		�Լ��� �̸�
		- ���� ��ҹ��ڿ� ���ڸ� �̿��Ͽ� �Լ��� �̸��� �����
		- ���ڴ� �� �տ� �� �� ����

		������ ���� ����Ǹ� ���γ��� �ڵ� ���������� ���� ����� �޶�����
		�Լ��� �� �ٸ� �Լ��� ȣ���Ͽ� ��밡��

		return type
		- �Լ��� ������ �߻��ϴ� data�� type
		- �Լ� �̸��� �տ� ��ġ
		- int getLottoNum(void)

		int main(void) {
		int ivar = 777;
		printf("ivar : %d\n\n", ivar);
		ivar = getLottoNum();
		printf("getLottoNum : %d\n\n", ivar);//return���� 0�ϰ�� 0���
		system("pause");
		return 0;
	}

	int getLottoNum(void) {
		int Lotto = 0;
		srand((unsigned int)time(NULL));
		Lotto = rand() % 45 + 1;
		return Lotto; //�� �Լ��� ȣ���� ������ ���� ������
	}

	parameters(�Ű�����)
		- �Լ��� ���� ��Ű�� ���ؼ� �ʿ��� data�� type�� ������ ǥ��
		- �Լ� �̸��� ��()�ȿ� ��ġ
		- ��)int calcNum(int iVar1, char chVar, int iVar2)
		- �Լ��� ȣ���� ��, parameters�� data�� type�� ������ ���߾� ���� �־� �־�� �Ѵ�(��ġ��)
		- ��)calcNum(7, '+', 8);

	int main(void) {
		int ivar = 777;
		ivar = calcNum(77, '-', 55);//calcNum���Է� //ivar�� res���� ����
		printf("calcNum : %d\n\n", ivar);
		system("pause");
		return 0;
	}

	int calcNum(int iVar1, char chVar, int iVar2) {//Ÿ��, ��ġ, ���� ����
		int res = 0;
		switch (chVar) {
		case '+': res = iVar1 + iVar2; break;
		case '-': res = iVar1 - iVar2; break;
		case '*': res = iVar1 * iVar2; break;
		case '/': res = iVar1 / iVar2; break;
		}
		return res;//res���� ��ȯ
	}

	void
		��ȿ��
		- return type�̳�, parameters�� ���� �� ǥ��
		- return type�̳�, parameters�� �ڸ��� ǥ��
		- ��)void printHello(void)

		�Լ� ���(�Լ� �����)
		- main�Լ����� ȣ��(����) �ϴ� �Լ����� ����� �ۼ�����
		- main�Լ��� ���ʿ� �ۼ��Ѵ�
		- ����ϴ� �Լ��� ������ �� �Լ��� return type, parameters�� �����Ϸ����� �˷��ش�
		- �����Ϸ��� �Լ��� ã��, �Լ��� ȣ���ϴ� �ڵ��� ������ ������ �˻��� �� �ְ� ���ش�
		- ȣ���ϴ� �Լ��� ȣ��Ǵ� �Լ��� ���� �ٸ� ���Ͽ� ������ �ݵ�� ��� �ۼ� �ʿ�

		main�Լ� ���� ����ο� ����
		void printHello(void);


	int main(void) {
		printHello();
		system("pause");
		return 0;
	}

	void printHello(void) {
		printf("�ȳ��ϼ���");
	}

	��������
		- Ư�� ���� �ȿ��� ����� ����
		- Ư�� ���� �ȿ����� �ǹ̰� �ִ� ����
		- ȿ�� ������ ����� �Լ� ���η� �����ȴ�



		void returnNo(int a, int b);//���� 
	int returnYes(int a, int b);

	int main(void) {
		int retu = returnYes(7, 5) * 2;//�Ű����� 
		return type�� �ִ� �Լ��� ������ �Ϻη� ���� �� �ִ�
			printf("%d\n\n", retu);
		returnNo(55, 5);
		system("pause");
		return 0;
	}

	int returnYes(int a, int b) {
		int c = a * b;
		return c;
	}

	void returnNo(int a, int b) {// void�� �Լ��� ���� �� ��� ������ �� �ۼ��ؾ��Ѵ�
		int c = a / b;
		printf("%d / %d = %d\n\n", a, b, c);
	}

	recursive function : ��� �Լ�
	(��Ŀ�ú� ���)
		- �����θ� �ݺ��ؼ� ȣ���ϴ� �Լ�
		����!!�ݺ��� �����ϴ� ǥ���� �־�� �Ѵ�

		1���� ����
		void recursiveTest(int gijun);//�ٸ� c���Ͽ��ִ� �Լ� ����

	int main(void) {
		recursiveTest(1);//�ٸ� ���Ͽ� �ִ� �Լ��� 1�� ��
		system("pause");
		return 0;
	}

	2��° ����
		void recursiveTest(int gijun) {//���ι��� �ִ� ������1�� ����
		printf("%d ���� ���� ����\n\n", gijun);
		if (gijun == 3) {//�Ű������� 3�̵Ǹ� ���� ���
			printf("����!!\n\n");
			return;
		}
		recursiveTest(gijun + 1);//�Լ��� �Ű������� 1�� ����
		printf("%d ���� ���� ����\n\n", gijun);
	}

#include<stdio.h>
#include<stdlib.h>

	int main(void) {
		//��¿���
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
			for (int q = 1; q > 0; q--) {//�� ��� *�� �̹� �ﰢ������ ���� �� �̹Ƿ� " "�ϳ����� �߰� ���ָ� ���ﰢ���� ���´�.
				printf(" ");
			}
			for (int l = 10; l > i * 2 + 1; l--) {
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}

	for���� ����Ͽ� �ﰢ��, ���ﰢ�� ���
#include<stdio.h>
#include<stdlib.h>

		int main(void) {
		//0 1 2 3 4 *\n
		//0 1 2 3 * * *\n
		//0 1 2 * * * * *\n   //��� ����
		//0 1 * * * * * * *\n
		//0 * * * * * * * * *\n
		for (int i = 0; i < 5; i++) {// i�� 5���� ������ �ȿ� for�� ���� �� �ٹٲ� ���� i++
			for (int j = 0; j < 5 - i; j++) {// j < 5 - i ù ����� i�� 0�̹Ƿ�, 5�� �ݺ�" "�Է� �� ����
				printf(" ");
			}
			for (int u = 0; u < i * 2 + 1; u++) {// u < i * 2 + 1 ù ����� i�� 0�̹Ƿ� 1��"*"�Է� �� ����
				printf("*");
			}

			printf("\n");
		}
		//0 * * * * * * * * *\n
		//0 1 * * * * * * *\n
		//0 1 2 * * * * *\n   //��� ����
		//0 1 2 3 * * *\n
		//0 1 2 3 4 *\n
		for (int i = 0; i < 5; i++) {// i�� 5���� ������ �ȿ� for�� ���� �� �ٹٲ� ���� i++
			for (int j = 6; j > 5 - i; j--) {// j > 5 - i ù ����� i�� 0�̹Ƿ�, 1�� �ݺ�" "�Է� �� ����
				printf(" ");
			}
			for (int u = 10; u > i * 2 + 1; u--) {// u > i * 2 + 1 ù ����� i�� 0�̹Ƿ� 9��"*"�Է� �� ����
				printf("*");
			}

			printf("\n");
		}
		return 0;
	}

�迭:array
- same data type(���� ������ �����͸� ���̾� ��ġ�Ҽ��ִ�)
- group handling�׷��ڵ鸵(���� ������ ������Ÿ������ �̷���� ��������� �ϳ��� ���������� ����������)
- int iArr[2];// 32bit ���� ������� 2���� ��ǥ�ϴ� �̸� iArr
-iArr[0] = 7;//������ ���� ���� 2����, 0�� ���� ������ 7�� ����
-iArr[1] = 8;//������ ���� ���� 2����, 1�� ���� ������ 8�� ����
-ũ���� ����� ���� ����(index)�� ������ �ִ�

�迭�� ����� ����
�迭�� ����
- data type + �迭�� �̸� + [���� ������ ����]
- ��) int iArr[2];// 32bit ���� ������� 2���� ��ǥ�ϴ� �̸� iArr
�迭�� ����
- �迭�� �̸� + [���� ������ �ּ�(index)]
- iArr[0] = 7; // iArr�̶�� �̸��� ��ǥ�ϴ� ������ ���� ���� 2�� ��,0�� ���� ������ 7�� ����
-printf("%d", iArr[0]); //iArr�� 0��° �ִ� �����͸� ���
�迭�� ���� ����
- 0�� ���� ��������(����� ���� ������ ���� - 1)���� �����Ѵ�
- ��) int iArr[5]; //32bit ���� ���� ���� 5���� ��ǥ�ϴ� �̸��� iArr
-iArr[0]���� iArr[4]���� 5���� 32bit ���� ���� ������ �����Ѵ�

�迭�� �ʱ�ȭ

- int iArr1[5] = { 1,2,3,4,5 };
-int iArr2[5] = { 1,2,3 }; //���𿡼� ���ڶ� �κ��� 0 ���� �ʱ�ȭ
-int iArr3[5] = { 0 };//��� 0���� �ʱ�ȭ
-int iArr4[5]; //�ʱ�ȭ �� �� index�� �� �� ���� �� ����
-�߰�ȣ{}�� ����� �迭�� �ʱ�ȭ�� ������ �� ���� �� ���� ����
- iArr4 = { 1,2,3,4,5 };//error
�迭�� �ִ¹�
void array2() {
	int intArr1[5] = { 1,2,3,4,5 };
	printf("%d %d %d %d %d\n", intArr1[0], intArr1[1], intArr1[2], intArr1[3], intArr1[4]);
	int intArr2[5] = { 1,2,3 };//3,4�ڸ����� 0���
	printf("%d %d %d %d %d\n", intArr2[0], intArr2[1], intArr2[2], intArr2[3], intArr2[4]);
	int intArr3[5] = { 0 };//���� 0
	printf("%d %d %d %d %d\n", intArr3[0], intArr3[1], intArr3[2], intArr3[3], intArr3[4]);
	int intArr4[5];
	//intArr4 = {1,2,3,4,5};//error
	intArr4[0] = 1;//{}�� ������� �ʰ� ���� ��� 
	intArr4[1] = 2;
	printf("%d %d %d %d %d\n", intArr4[0], intArr4[1], intArr4[2], intArr4[3], intArr4[4]);
}// 2,3,4 �ڸ����� �̻��Ѱ��� ����

for���� Ȱ���� �迭 �θ���
void array3() {
	int intArr5[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {//5���� ���� ������ �θ� (0,1,2,3,4)
		printf("intArr5[%d] : %d\n\n", i, intArr5[i]);
	}//for
}

�迭 ������ Ȯ���ϱ�
int intArr1[5];
int size = sizeof(intArr1);
printf("%d", size);// int�� ���� ������ ũ���� 5���� 20byte�� ���´�
int size2 = sizeof(intArr1[0]);
printf("%d", size2);//int�� ��������� ũ�� 4byte�� ���´�
}

sizeof�����ڷ� �ݺ�Ƚ���� ���ѵ� for������ �ݺ��Ͽ� intArr1�� ������ �ҷ�����
void array5() {
	int intArr1[5] = { 1,2,3,4,5 };
	int endPoint = sizeof(intArr1) / sizeof(intArr1[0]);//20 / 4 = 5
	for (int i = 0; i < endPoint; i++) {
		printf("%d %d\n\n", i, intArr1[i]);
	}
}

int iArr[5];//32bit ���� ������� 5���� �̸� iArr
iArr[0]�� ũ��� 4byte(int�� ������� 1���̱⶧��)
iArr��ũ��� 20byte(int�� ���� ���� 5�� �����̱⶧��)

2���� �迭 : �迭�� �迭
- 1���� �迭 : ��Ȧ�� ����Ʈ : ����Ʈ �̸� + ȣ�� = �����̸� + index
- 2���� �迭 : ����Ʈ ���� : ����Ʈ �̸� + ����ȣ + ȣ�� : �����̸� + index + index
- int iArr[2][3];//32bit���� ���� ���� 3���� �迭2���� ��ǥ�ϴ� �̸��� iArr
-iArr[0][0] = 7;//0�� �迭�� 0�� ���� ������ 7�� ����
-iArr[1][0] = 8;//1�� �迭�� 0�� ���� ������ 7�� ����
2���� �迭�� ����� ����
2���� �迭�� ����
- data type + �迭�� �̸� + [�迭�� ����] + [���� ������ ����]
- ��)int iArr[2][3];//32bit���� ���� ���� 3���� �迭2���� ��ǥ�ϴ� �̸��� iArr
2���� �迭�� ����
- �迭�� �̸� + [�迭�� �ּ�] + [���� ������ �ּ�(index)]
- iArr[0][0] = 7;//0�� �迭�� 0�� ���� ������ 7�� ����
-printf("%d", iArr[0][0]);
2���� �迭�� ���� ����
- 0�� �迭����(����� �迭�� ���� - 1)���� �����Ѵ�
- 0�� ���� ��������(����� ���� ������ ���� - 1)���� �����Ѵ�
�迭 ���� ������ ��)
int iArr[2][3];//32bit���� ���� ���� 3���� �迭2���� ��ǥ�ϴ� �̸��� iArr
-iArr[0][0]���� iArr[0][2]���� 3���� 32bit���� ���� ������ ����
- iArr[1][0]���� iArr[1][2]���� 3���� 32bit���� ���� ������ ����

�迭�� ���� ���� �־� ����
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

2���� �迭�� ũ��
- int intArr1[2][3];
-printf("%d", sizeof(intArr1));//2 * 3 * 4byte
-printf("%d", sizeof(intArr1[0]));//3 * 4byte (2���� �迭��1���� ����� ��� 0�� �迭�� �����ϴ� 3���� �迭�� ����� ����)
-printf("%d", sizeof(intArr[0][0]));//4byet
-printf("%d", sizeof(intArr1) / sizeof(intArr[0]));//2 * 3 * 4byte) / (3 * 4byte) =2���� �迭
-printf("%d", sizeof(intArr1[0]) / sizeof(intArr[0][0]));//(3 * 4byte) / (4byte) =3���� �������

�迭 ũ��
void array22() {
	int iArr[2][3];
	int totalSize = sizeof(iArr);//��� ��������� ũ��
	printf(" totalSize : %d\n\n", totalSize);
	int arr1Size = sizeof(iArr[0]);//�ϳ��� �迭�� �������ũ��
	printf(" arr1Size : %d\n\n", arr1Size);
	int idxSize = sizeof(iArr[0][0]);//1���� �������ũ��
	printf(" idxSize : %d\n\n", idxSize);
	int arrCnt = totalSize / arr1Size;//�迭�� ����
	printf(" arrCnt : %d\n\n", arrCnt);
	int idxcnt = arr1Size / idxSize;//�迭 1���� �������
	printf(" idxcnt : %d\n\n", idxcnt);

}

2���� �迭�� �ʱ�ȭ
int intArr1[2][3] = { {1,2,3},{4,5,6} };
int intArr2[2][3] = { {1},{4} };//intArr2[0][0]�� 1, intArr2[1][0]�� 4 ������ 0
int intArr3[2][3] = { {1,2} };//intArr3[0][0]�� 1, intArr3[0][1]�� 2������ 0
int intArr4[2][3] = { 1,2,3,4,5,6 };//������� ���� ����
int intArr5[2][3] = { 1,2,3,4 };//������� �� ���� �� ���� ������� 0
int intArr6[2][3] = { 1,2 }//intArr3�� ����
int intArr7[2][3] = { 0 };//��� ������� 0���� �ʱ�ȭ

2���� �迭�� �ݺ���

�ݺ����� ����Ͽ� 2���� �迭�� ���� ���� �ҷ�����
void arr() {
	int iArr[2][3] = { 1,2,3,4,5,6 };
	int endPoint1 = sizeof(iArr) / sizeof(iArr[0]);//�迭�� ����
	int endPoint2 = sizeof(iArr[0]) / sizeof(iArr[0][0]);//�迭 1���� ��������� ����
	for (int i = 0; i < endPoint1; i++) {
		for (int k = 0; k < endPoint2; k++) {
			printf("iArr[%d][%d] : %d\n\n", i, k, iArr[i][k]);
		}//for
	}//for
}//arr()

���� �迭 : char array
- ���ڿ��� ǥ���ϱ� ���� ����
- char insa[20];//8bit char ���� ���� 20���� ��ǥ�ϴ� �̸��� insa
-insa[0] = 'h'//8bit char ���� ���� 20�� ��, 0�� ���� ������ h�� ����
- insa[1] = 'i'//8bit char ���� ���� 20�� ��, 1�� ���� ������ i�� ����
- ũ���� ����� ���� ����(index)�� ������ �ִ�

���� �迭�� ����� ����
���� �迭�� ����
- char + �迭�� �̸� + [���� ������ ����]
- ��)char insa[20];//8bit char ���� ���� 20���� ��ǥ�ϴ� �̸��� insa
���� �迭�� ����
- �迭�� �̸� + [���� ������ �ּ�(index)]
- insa[0] = 'h'//8bit char ���� ���� 20�� ��, 0�� ���� ������ h�� ����
- printf("c", insa[0]);//���� ���
-printf("%s", insa);//���ڿ� ���
���� �迭 ������ ���� ����
���� �迭 ������ ���� ����
- ������ ���ڿ��� ���� ���� ���� ������ �� ĭ ũ�� ���� �迭 ���� * **
-���� �迭�� ������ ���� �������� ���ڿ� ���� ���� ����
- ���ڿ� ���� ���� : \0 = NULL
- ���ڿ� ��� �Լ��� ���� �迭���� ���ڿ� ���� ���ڰ� ���� ������ ���
- ���ڿ� ���� ���ڰ� ������, �ٸ� �޸� ������ ħ��

void chArr1() {
	char insa[20];
	insa[0] = 'h';
	insa[1] = 'i';
	printf("insa[0] : % c\n\n", insa[0]);
	printf("insa[1] : % c\n\n", insa[1]);
	printf("insa[2] : % c\n\n", insa[2]);//?
	printf("insa[3] : % c\n\n", insa[3]);//?
	printf("insa[4] : % c\n\n", insa[4]);//?���
	printf("insa : %s\n\n", insa);//hi�� �Բ� ������ �������
	insa[2] = '\0';//\0�� ���Ṯ��
	printf("insa[0] : % c\n\n", insa[0]);
	printf("insa[1] : % c\n\n", insa[1]);
	printf("insa[2] : % c\n\n", insa[2]);//���� ���ڸ� �־��⿡ �ƹ��͵� ��µ�������
	printf("insa[3] : % c\n\n", insa[3]);//?
	printf("insa[4] : % c\n\n", insa[4]);//?
	printf("insa : %s\n\n", insa);//hi�� ��µǰ� ��
}

���� �迭�� ����� �ʱ�ȭ
- char chArr1[10] = { 'H','o','w','A','r','e','Y','o','u' };//�ڵ����� \0�Է�
-char chArr2[10] = { "hello" };//�ڵ����� \0�Է�
-char chArr3[10] = "whats up?";//�ڵ����� \0�Է�
-char chArr4[10];
char chArr4[0] = 'h';
char chArr4[1] = 'i';
char chArr4[2] = '\0';//��������\0�Է�

void chArr2() {
	//���� �迭�� ����� �Բ� �ʱ�ȭ�� ���ָ�,
	//���ڿ� ���� ���ڰ� �ڵ����� �Է�!!
	char arr1[10] = { 'H', 'O', 'W', 'A', 'R', 'E', 'Y', 'O', 'U', };
	printf("arr1 : %s\n\n", arr1);
	char arr2[10] = { "i am fine" };
	printf("arr2 : %s\n\n", arr2);
	char arr3[10] = "what's up?";//���Ṯ �ڸ����������� �̻��ѹ��� ���
	printf("arr3 : %s\n\n", arr3);
	char arr4[10];
	arr4[0] = 'H'; arr4[1] = 'i'; arr4[2] = '\0';//���� ���� ���� �Է�
	printf("arr4 : %s\n\n", arr4);
}

strcpy_s(chArr7, "bye!!");
-���� �迭�� �ʱ�ȭ ���Ŀ��� ���� ���� �����ϴ� ���� �Ұ���
- �ʱ�ȭ ���Ŀ� ���ڿ� �Է� ��, strcpy���
- ����� �ʿ��� �� #include<string.h> �߰�
- �������� ��������� strcpy_s���

void chArr3() {
	char arr[10];
	//aee = "i am fine";//���Կ���Ұ���
	strcpy_s(arr, 10, "i am fine");//�����̸�,�迭ũ��,���ڶǴ¹��ڿ�
	printf("arr : %s\n\n", arr);
	strcpy_s(arr, sizeof(arr), "HowAreYou");//sizeof�����ڷ� arr�� �迭ũ�� �Է�
	printf("arr : %s\n\n", arr);
}

char chArr8[10] = "HowAreYou";
printf("sizeof(chArr8) : %d\n\n", sizeof(chArr8));
printf("sizeof(chArr8) : %d\n\n", strlen(chArr8));
-sizeof:��ü ����
- strlen : ����� ���ڿ��� ����
- #include<string.h>

void chArr4() {
	char arr[10] = "hello";
	printf("arr : %s\n\n", arr);
	int arrsize = sizeof(arr);
	printf("arrsize : %d\n\n", arrsize);//10���
	int arrstrlen = strlen(arr);
	printf("arrstrlen : %d\n\n", arrstrlen);//5���
}



2���� ���� �迭 : ���� �迭�� ���� �迭(2���� �迭�� ���� ����)
- 1���� �迭 : ��Ȧ�� ����Ʈ : ����Ʈ �̸� + ȣ�� = �����̸� + index
- 2���� �迭 : ����Ʈ ���� : ����Ʈ �̸� + ����ȣ + ȣ�� : �����̸� + index + index
- char insa[2][10]; // 8bit char ���� ���� 10���� �迭 2���� ��ǥ�ϴ� �̸��� insa
-strcpy(insa[0], "hi");//0�� �迭 ���� ������ hi�� ����
-strcpy(insa[1], "hello");//1�� �迭 ���� ������ hello�� ����
2���� ���� �迭�� ����
- char + �迭�� �̸� + [�迭�� ����] + [���� ������ ����]
- ��)char insa[2][10]; // 8bit char ���� ���� 10���� �迭 2���� ��ǥ�ϴ� �̸��� insa
2���� ���� �迭�� ����
- �迭�� �̸� + [�迭�� �ּ�] + [���� ������ �ּ�(index)]
- ��)insa[0][0] = 'h';//0�� �迭�� 0�� ���� ������ h�� ����
-printf("%c", insa[0][0]);0�� �迭�� 0�� ���� ������ ���� ���
- printf("%s", insa[0]);//0���迭�� ���ڿ� ���

void strArr1() {
	char insa[2][10];
	insa[0][0] = 'h';
	insa[0][1] = 'i';
	printf("%c %c\n\n", insa[0][0], insa[0][1]);
	printf("%s\n\n", insa[0]);//���� ���ھ���
	insa[0][2] = '\0';
	printf("%s\n\n", insa[0]);

	//strcpy_s(insa[1], 10, "howareyou?");//�ߴܹ��ڸ� �����ڸ����� ����
	strcpy_s(insa[1], 10, "howareyou");
	printf("%s\n\n", insa[1]);
}

2���� ���� �迭�� �ʱ�ȭ
char chArr1[2][20] = { {"hi"},{"hello"} };
char chArr2[2][20] = { "fine","thanks" };
char chArr2[2][20];
strcpy(chArr3[0], "how are you");
strcpy(chArr3[1], "nice to meet you");

void strArr2() {
	char chArr1[2][20] = { {'h','i'},{"hello"} };//���ڿ� ���� ���� �ڵ��Է�
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

2���� ���� �迭�� ����
char chArr4[2][20] = { {"how are you"},{"nice to meet you"} };
printf("sizeof(chArr4) : %d\n", sizeof(chArr4));//40byte
printf("sizeof(chArr4[0]) : %d\n", sizeof(chArr4[0]));//20byte
printf("strlen(chArr4[0]) : %d\n", strlen(chArr4[0]));//������ִ� ���� ����ŭ
void strArr3() {
	char chArr4[2][20] = { {"how are you?"},{"nice to meet you"} };
	int totsize = sizeof(chArr4);
	int onssize = sizeof(chArr4[0]);
	int onsstr = strlen(chArr4[0]);
	printf("sizeof(chArr4) : %d\n", totsize);//1byte * 20 * 2 == 40
	printf("sizeof(chArr4[0]) : %d\n", onssize);//1byte * 20 == 20
	printf("strlen(chArr4[0]) : %d\n", onsstr);//�Էµ� ���ڸ�ŭ1byte
}


�ζ� ����� ����
void lotto1() {//1���� 45������ ������ ���� 6���� ���� �迭 ����.
	int lotto[6];
	srand((unsigned int)time(NULL));

	printf("lotto insert start...\n\n");
	int tmp = 0;//���� ������ �ӽ� ����
	int	idx = 0;//�������� �Էµ� �迭�� ��ȣ + 1//���� ������ �Էµ� ����
	int	sameYn = 0;//tmp�� ������ �Էµ� ���� ������ ���θ� �˷��ִ� ����
	for (int i = 0; i < 6; i++) {
		tmp = rand() % 45 + 1;
		if (i == 0) {//looto[0] -> ������ ���� ����
			lotto[idx] = tmp;
			idx++;
		}//if
		else {
			sameYn = 0;//�ʱ�ȭ
			//lotto�迭�� ������ �Էµ� ���� �ִ� ���. i > 0
//���� �߻��� ���� ������ ����� ���� �������� ������
			for (int k = 0; k < idx; k++) {
				if (lotto[k] == tmp) {
					sameYn = 1;//���� true
					break;
				}//if
			}//for
			if (sameYn == 0) {//���� ���� ����
				lotto[idx] = tmp;
				idx++;
			}//if
			else {//���� ���� �ִ�
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

�ζ� ��ȣ ����
//start -> 19, 12, 15, 31, 16, 6
//i:0, k:1 19�� 12 �� ������ : 12, 19, 15, 31, 16, 6
//i:0, k:2 12�� 15 �� ������ : 12, 19, 15, 31, 16, 6
//i:0, k:3 12�� 31 �� ������ : 12, 19, 15, 31, 16, 6
//i:0, k:4 12�� 16 �� ������ : 12, 19, 15, 31, 16, 6
//i:0, k:5 12�� 6 �� ������ : 6, 19, 15, 31, 16, 12
//i:1, k:2 19�� 15 �� ������ : 6, 15, 19, 31, 16, 12
//i:1, k:3 15�� 31 �� ������ : 6, 15, 19, 31, 16, 12
//i:1, k:4 15�� 16 �� ������ : 6, 15, 19, 31, 16, 12
//i:1, k:5 15�� 12 �� ������ : 6, 12, 19, 31, 16, 15
//i:2, k:3 19�� 31 �� ������ : 6, 12, 19, 31, 16, 15
//i:2, k:4 19�� 16 �� ������ : 6, 12, 16, 31, 19, 15
//i:2, k:5 16�� 15 �� ������ : 6, 12, 15, 31, 19, 16
//i:3, k:4 31�� 19 �� ������ : 6, 12, 15, 19, 31, 16
//i:3, k:5 19�� 16 �� ������ : 6, 12, 15, 16, 31, 19
//i:4, k:5 31�� 19 �� ������ : 6, 12, 15, 16, 19, 31
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

2���� �迭������
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
		printf("==%d��==\n\n", dan);
		for (int gop = 0; gop < 10; gop++) {
			printf("%d * %d = %d\t", dan, gop, gugu[dan][gop]);
			if (gop % 3 == 0) printf("\n");
		}//for
		printf("\n\n");
	}//for
	printf("gugudan print end...\n\n");
}

gets_s
- �� ĭ�� �����Ͽ� �� �� ��ü�� ���ڿ��� �Է� �޴´�
- ���ڿ� ���� ���ڸ� �ڵ����� �ִ´�

puts
- ���ڿ��� ��� �����ϴ�
- ���ڿ� ��� �Ŀ� �ڵ����� �� �ٲ��� �Ѵ�

puts�� ���� ���ڿ��� ����ϴ� �Լ�
���ڿ��� ������ �ڵ����� �� �ٲ��� �ϴ� Ư¡�� �ִ�.
�� Ư¡�� �̿��� pute("");�� ����� ������ ��� �� �ִ�(�̷��� �ٹٲ��� �� �����ȴ� ī����)

gets_s ���
void chArr4() {
	char name[10];
	char addr[30];

	printf("�̸� : ");
	gets_s(name, sizeof(name));//���ڿ� �Է� �� ǥ��

	printf("�ּ� : ");
	gets_s(addr, sizeof(addr));//���ڿ� �Է� �� ǥ��

	printf("\n �̸� : %s", name);//�Է�Ȯ�����
	printf("\n �ּ� : %s\n\n", addr);//�Է�Ȯ�����
}

gets_s�� puts���� ���
void testGetPut() {
	char testln[80];
	puts("gets_s�� ����� �Է� : ");
	gets_s(testln, 80);//���ڿ� ���� �����Է¹޴� �Լ�
	puts("==========");
	puts("puts�� ����� ���ڿ� ��� : ");//���ڿ��� ����ϴ��Լ� �� �ٹٲ� �ڵ�
	puts(testln);
}

strcmp: ���ڿ��� ��
- �ƽ�Ű �ڵ� ���� ũ�⸦ ��
- ���ڿ��� �� ����� ������ : 0
- ���ڿ��� �� ���, ���� ���ڿ��� ũ�� : -1
- ���ڿ��� �� ���, ���� ���ڿ��� ũ�� : 1
- #include<string.h>

strcmp �Ẹ��
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

�����Խ��� ����� ����
char bTitle[10][50];
char bWriter[10][50];
char bCnts[10][50];
char menu[5];
printf("board input start...\n\n");
int i = 0;
while (i < 10) {
	printf("1 : �۾���, 2:���, �Է� : ");
	gets_s(menu, 5);
	if (strcmp(menu, "2") == 0) break;
	printf("���� : ");
	gets_s(bTitle[i], 50);
	printf("�ۼ��� : ");
	gets_s(bWriter[i], 50);
	printf("���� : ");
	gets_s(bCnts[i], 50);
	printf("\n");
	i++;
}//while
printf("board input end...\n\n");
printf("board print start...\n\n");
for (int k = 0; k < i; k++) {
	printf("���� : ");
	puts(bTitle[k]);
	printf("�ۼ��� : ");
	puts(bWriter[k]);
	printf("���� : ");
	puts(bCnts[k]);
	puts("");
}
printf("board print end...\n\n");
}

�޸𸮿� load�Ǵ� ��� �����ʹ� ��ġ(�ּ�)���� ���´�
int iVar = 777;
-777�� �޸��� ����� ������ 32bit��ŭ�� ũ��� ����ȴ�
- iVat�� 777�� ����� 32bit������ ���� ��ġ(�ּ�) ���� ���� �ִ�
- printf("%d", iVar);�� iVar�� ���� �ּҿ� ����� ���� ����Ѵ�
- iVar = 888;�� iVar�� ���� �ּҿ� ���ο� �� 888�� �����Ѵ�

& (�ּ� ������)
- ������ ������ �ִ� �ּҸ� �˷��ִ� ������
- printf("iVar : %d\n", iVar); //iVar�� ����� ��
-printf("&iVar : %p\n", &iVar);//iVar�� ����� ���� �ִ� �ּ��� ��
% p:�ּҸ� ����ϴ� ���� ����

* (������)
pointer
����1.�ּҸ� �����ϴ� ������ �����Ѵ�
- int iVar = 777;
-int* iVarP;//iVarP�� int type�� �ּҸ� ��� �����̴�
-iVarP = &iVar;
-printf("%p", iVarP);//�ּҰ� ��µȴ�
����2.�ּҿ� ����� ���뿡 �����Ѵ�
- int iVar = 777;
-int* iVarP;//iVar�� int type�� �ּҸ� ��� �����̴�
-iVarP = &iVar;
-printf("%p", iVatP);//�ּҰ� ��µȴ�
-printf("%d", *iVarP);//�ּҿ� ����� ������ ��µȴ�
������ ��¿���
void pTest3() {
	//�Ϲ� ���� : ���� ������ �����Ϳ� �����Ѵ�
	//������ ���� : ���� ������ �ּҷ� �����Ѵ�
	//&�Ϲ� ���� : ���� ������ �ּҿ� �����Ѵ�
	//*������ ���� : ���� ������ �����Ϳ� �����Ѵ�
	double dVar = 42.195;
	printf("dVar %lf\n\n", dVar);
	printf("&dVar %p\n\n", &dVar);

	double* dVarP = &dVar;
	printf("dVarP %p\n\n", dVarP);
	printf("*dVarP %lf\n\n", *dVarP);
}

void pTest2() {
	int iVar = 777;
	//iVar�� 32bit ���� ���� ���� ����
	//iVar�� 32bit ������ ���� ������ �ּҸ� �˰� �ִ�
	//iVar�� �˰� �ִ� 32bit ������ ���� ������ �ּҸ� ������ ��� : &iVar
	printf("iVar : %d\n\n", iVar);
	int* iVarP;//������ ������ �����ϴ� *.
	//iVarP�� 32bit ������ ���� ������ �ּҸ� ���� ����
	//�Ϲ��� ������ 32bit ������ ���� ������ �����Ϳ� ����
	//����Ʈ ������ 32bit ������ ���� ������ �ּҿ� ����
	iVarP = &iVar;//777�� ����� ������ �ּҸ� iVarP���� ��� ǥ��
	printf("&iVar : %p\n\n", &iVar);
	printf("iVarP : %p\n\n", iVarP);
	printf("*iVarP : %d\n\n", *iVarP);//�ּҾȿ� �ִ� �����͸� ���

}

void pTest1() {
	//& : �ּ� ������ : ������ ���� �ּҸ� ��ȯ���ִ� ������.
	int iVar;
	//32bit������ ������� �ϳ��� �����, �� ��ġ���� iVar�� �˰� �ִ�.
	printf("iVar�� �ּҰ�%p\n\n", &iVar);
	iVar = 777;
	printf("iVar�� ��%d\n\n", iVar);
	printf("iVar�� �ּҰ�%p\n\n", &iVar);
	//1. int���� iVar�� 32bit ���� ������ ��ġ���� �˰� �ִ�
	//2. int���� iVar�� 32bit ���� ������ ������ ���ų� �д´�
}

������ ������ �ٽ�
�ּҸ� ���ϴ� �ּ� ������ : &
�ּҸ� �����ϴ� ������ �����ϴ� ������ : *
�ּҿ� ����� ���뿡 �����ϴ� ������ : *

�Ϲ� ����
- ������ ����ϸ�, ����� �����Ͱ� ��µ�
- &�� ����ؾ� �ּҸ� �� �� ����
������ ����
- ������ ����ϸ�, �ּҰ� ��µ�
- *�� ����ؾ� ����� �����͸� �� �� ����

�������� ����
�Ϲ� ������ �ּ� �ϳ��� ���� �����Ϳ� ���� �����ϴ�
- int iVar = 777;
-int* iVarP1 = &iVar;
-int* iVarP2 = &ivar;
������ ������ �ּҸ� �ٸ� �����Ϳ� ���� �����ϴ�
- int* iVarP3 = iVarP1;
������ ���� ��)
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

������ ������ sizeof ����
�ּҸ� ��� ������ ������ sizeof���� : 8byte//���� ������ �����ϵ� 8byte�� ����
- Data Type�� ���� �޸� ������ ũ��� �ٸ���
- �Ϲ� ������ sizeof������ Data Type�� ũ�⿡ ���� �޶�����
- ������ ������ �ּҸ��� �����Ƿ�, Data Type�� �����ϰ�, ũ��� �׻� 8byte�̴�
������ �˾ƺ���
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

������ ������ Data Type
- ������ ������ ���� �ּҿ� ��ġ�� ���� Date Type�� ���� Date Type���� �����϶�
- int ������ ������ ������ int* ���� ����
- double ������ ������ ������ double* ���� ����
���� Ȯ��
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

5 X 5 2���� �迭 ���� �Է�

int main(void) {
	int array[5][5] = { 0 };//5 X 5�迭 ���� �� ��� 0���� �ʱ�ȭ
	int num = 0;//�� ���Ұ� �Է� ����
	int qwe = 0;//�� �Է� ����
	for (int i = 0; i < 5; i++) {//�� 5�� �ݺ�
		for (int n = 4; n > i; n--) {//4���ݺ� �� -1���ݺ�
			//printf("  ");// ��� �ȳ���
			qwe++;//�� �Է� ���� for�� �ݺ����� ++
		}
		for (int t = 0; t < i + 1; t++) {//1�� �ݺ� �� +1���ݺ�
			array[i][qwe] = ++num;//���Ұ� �Է�
			//printf("%d ", array[i][qwe]);//��� �ȳ���
			qwe++;//�� �Է� ���� for�� �ݺ����� ++
			if (qwe >= 5) qwe = 0;//�� �Է� ������ 5�� �Ǿ��� ��� 0���� �ݺ�
		}
		//printf("\n\n");//��� �ȳ���
	}
	printf("\t2���� �迭 A[5][5]\n");
	for (int i = 0; i < 5; i++) {//�� 5�� �ݺ�
		for (int n = 0; n < 5; n++) {//�� 5�� �ݺ�
			if (array[i][n] == 0) {
				printf("\t");//��� ���� 0�ϰ�� \t �Է�
			}
			else printf("%d\t", array[i][n]);//0�� ������ ���ڴ� �״�� ���
		}
		printf("\n\n");
	}
	system("pause");
	return 0;
}
//  0 1 2 3 4
//0 0 0 0 0 1
//1 0 0 0 2 3  ��� ����)
//2 0 0 4 5 6
//3 0 7 8 9 10
//4 1112131415

5 X 5 ������ �迭 2���� ���簢�� ���
int main(void) {
	int array[5][5] = { 0 };//5 X 5�迭 ���� �� ��� 0���� �ʱ�ȭ
	int array2[5][5] = { 0 };
	int num = 0;//�� ���Ұ� �Է� ����
	int num2 = 0;
	int qwe = 0;//�� �Է� ����
	for (int i = 0; i < 5; i++) {//�� 5�� �ݺ�
		for (int n = 4; n > i; n--) {//4���ݺ� �� -1���ݺ�
			//printf("  ");// ��� �ȳ���
			qwe++;//�� �Է� ���� for�� �ݺ����� ++
		}//for
		for (int t = 0; t < i + 1; t++) {//1�� �ݺ� �� +1���ݺ�
			array[i][qwe] = ++num;//���Ұ� �Է�
			//printf("%d ", array[i][qwe]);//��� �ȳ���
			qwe++;//�� �Է� ���� for�� �ݺ����� ++
			if (qwe >= 5) qwe = 0;//�� �Է� ������ 5�� �Ǿ��� ��� 0���� �ݺ�
		}//for
		//printf("\n\n");//��� �ȳ���
	}//for
	int asd = 5;//�� �ݺ����� -- �Ǵ� ���� n�� ����
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < asd; n++) {
			array2[i][n] = ++num2;
		}
		asd--;//�� �ݺ����� --
	}
	printf("\t2���� �迭 A[5][5]\t\t\t2���� �迭 B[5][5]\n");
	for (int i = 0; i < 5; i++) {
		for (int n = 0; n < 5; n++) {
			if (array[i][n] == 0) {
				printf("\t");
			}
			else printf("%d\t", array[i][n]);//0�� ������ ���ڴ� �״�� ���
		}//for
		for (int n = 0; n < 5; n++) {
			if (array2[i][n] == 0) {
				printf("\t");
			}
			else printf("%d\t", array2[i][n]);//0�� ������ ���ڴ� �״�� ���
		}//for
		printf("\n\n");
	}//for
	system("pause");
	return 0;
}
//  0 1 2 3 4
//0 0 0 0 0 1 1 2 3 4 5
//1 0 0 0 2 3 6 7 8 9  ��� ����)
//2 0 0 4 5 6 101112
//3 0 7 8 9 101314
//4 111213141515

������ ���亹��
void passByValue(int iVarCopy);
void passByRefeference(int* iVarPnt);


int main(void) {
	//�����͸� ����ϴ� ���� - �������̰� ���� ������ ���� ���
	int iVar = 777;
	passByRefeference(&iVar);//iVar�� ���� ������ �ּҸ� ���� ����
	printf("iVar : passByRefeference : %d\n\n", iVar);//888 ��ȭ
	int iVar2 = 777;
	passByValue(iVar2);//iVar2 ���� ������ ���ο� ���� ���� iVarCopy�� ����
	//printf("iVar : %d\n\n", iVar);//777��ȭ����
	system("pause");
	return 0;
}

void passByRefeference(int* iVarPnt) {//�����簡 �ƴ� �ּҸ� ������
	*iVarPnt = 888;//�ּҿ� ����� ���� �ٲ�
}

void passByValue(int iVarCopy) {//�����͸� ������� ���� ��
	iVarCopy = 888;//���ο� ������ ����� 2���� ������� ����
}

��ġ(�ּ�)���� �̿��� �迭 ����
�迭�� �̸��� �迭�� 0���� �ּ�
- int intarr[5];
-printf("%p", intarr);
-printf("%p", &intarr);
-printf("%p", &intarr[0]);

-printf("%p", intarr + 1);
-printf("%p", &intarr[1]);
-printf("%p", intarr + 2);
-printf("%p", &intarr[2]);

��ġ(�ּ�)���� �̿��� �迭 ���� Ȯ��
* (�ƽ��׸�Ʈ)����Ͽ� ���Է� �� ���Ȯ��
void arrPnt3() {
	int iArr[5];
	*iArr = 111;//iArr[0] = 111;
	*(iArr + 1) = 222;//iArr[1] = 222;
	*(iArr + 2) = 333;//iArr[2] = 333;
	*(iArr + 3) = 444;//iArr[3] = 444;
	*(iArr + 4) = 555;//iArr[4] = 555;
	printf("iArr[0] : %d\n\n", *iArr);//iArr[0]
	printf("iArr[1] : %d\n\n", *(iArr + 1));//���� �������� +������ ���� ���ؾ���
	printf("iArr[2] : %d\n\n", *(iArr + 2));
	printf("iArr[3] : %d\n\n", *(iArr + 3));
	printf("iArr[4] : %d\n\n", *(iArr + 4));
}

�� �迭�� �ּ� Ȯ��
void arrPnt2() {
	int iArr[5];
	printf("iArr : %p\n\n", iArr);//�迭�� ���� �ּ�
	printf("&iArr : %p\n\n", &iArr);//�迭�� ���� �ּ�
	printf("&iArr[0] : %p\n\n", &iArr[0]);//�迭�� ���� �ּ�
	printf("&iArr[1] : %p\n\n", &iArr[1]);
	printf("iArr + 1 : %p\n\n", iArr + 1);//&iArr[1] == iArr + 1
	printf("&iArr[2] : %p\n\n", &iArr[2]);
	//iArr : iArr[0]�� �ּ�
	//iArr + 1 : iArr[0]�� ���� �������� �ּҸ� �����´�
	printf("iArr + 2 : %p\n\n", iArr + 2);
	printf("&iArr[3] : %p\n\n", &iArr[3]);
	printf("iArr + 3 : %p\n\n", iArr + 3);
	printf("&iArr[4] : %p\n\n", &iArr[4]);
	printf("iArr + 4 : %p\n\n", iArr + 4);

}

���� ������ Ȱ��

�Է�
int intarr[5];
int* pintarr = intarr;
for (int i = 0; i < 5; i++) {
	*(pintarr++) = i;
}
���
for (int j = 0; j < 5; j++) {
	printf("%d\n", *(pintarr++));
}
for���� ���� ������ ���� ����
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

������ ������ sizeof����
������ ������ �ּҸ��� �����Ƿ�, Data Type�� �����ϰ�,
ũ��� �׻� 8Byte�̴�
- int intarr[5];
-int* pintarr = intarr;
-printf("%d", sizeof(intarr));
-printf("%d", sizeof(pintarr));
size��� �غ���
void arrPnt5() {
	int iArr[5];
	printf("sizeof(iArr) : %d\n\n", sizeof(iArr));// 20
	int* iArrP = iArr;
	printf("sizeof(iArrP) : %d\n\n", sizeof(iArrP));// 8
}

������ ���� ����
void arrlnput(int* put);


int main(void) {
	int iArr[5];
	arrlnput(iArr);
	for (int i = 0; i < 5; i++) {
		printf("iArr[%d] : %d\n\n", i, iArr[i]);//�ݺ����� ���� ���
	}
	system("pause");
	return 0;
}

void arrlnput(int* put) {
	for (int i = 0; i < 5; i++) {
		*(put++) = i * 111;//������ ������ ���� �Ǿ��ִ� �ּҿ� �����Ϳ� ���� �ϸ� �Է�
	}//for
}


	system("pause");
	
	
	return 0;
}