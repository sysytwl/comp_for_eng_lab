#include <stdio.h>
#include <math.h>
char question[1];

void question_A(void) {
	int a, i;
	printf("enter the value of a to count up to:\n");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++) {
		printf("hello - line %d\n", i);
	}
}

void question_B(void) {
	int a, i, t = 0;
	printf("enter the value of a to count up to:\n");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++) {
		t += i;
		printf("hello - line %d\n", i);
	}
	printf("%d\n", t);
}

void question_C(void) {
	int a, i;
	printf("enter the value of a to count up to:\n");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++) {
		printf("hello - line %d\n", i);
	}
	for (i = a; i <= 2 * a; i += 2) {
		printf("hello - line %d\n", i);
	}
}

void question_D(void) {
	double x;
	for (x = -9.9; x <= -8.8; x += 0.005) {
		printf("%f  %f\n", x, exp(x));
	}
}

void question_E(void) {
	double x, s = 0;
	for (x = -9.9; x <= -8.8; x += 0.005) {
		s += exp(x);
	}
	printf("%f\n", s);
}

void question_F(void) {
	int a;
	puts("pls enter an integer:");
	scanf_s("%d", &a);
	if (a % 3) {
		puts("It is not divisible by 3.");
	}
	else{
		puts("It is divisible by 3.");
	}
}

void question_G(void) {
	for (int i = 0; i < 6; i++) {
		question_F();
	}
}

void question_H(void) {
	for (int i = 10; i <= 19; i += 3) {
		for (int j = i; j <= i + 45; j += 5) {
			printf(" %d ", j);
		}
		printf("\n");
	}
}

int main(void) {
	while (1) {
		puts("which question you want to go through? A-H/ALL/break");
		scanf_s("%s", &question, 6);
		if (strcmp(question, "A") == 0) {
			question_A();
		}
		else if (strcmp(question, "B") == 0) {
			question_B();
		}
		else if (strcmp(question, "C") == 0) {
			question_C();
		}
		else if (strcmp(question, "D") == 0) {
			question_D();
		}
		else if (strcmp(question, "E") == 0) {
			question_E();
		}
		else if (strcmp(question, "F") == 0) {
			question_F();
		}
		else if (strcmp(question, "G") == 0) {
			question_G();
		}
		else if (strcmp(question, "H") == 0) {
			question_H();
		}
		else if (strcmp(question, "ALL") == 0) {
			question_A();
			question_B();
			question_C();
			question_D();
			question_E();
			question_F();
			question_G();
			question_H();
		}
		else if (strcmp(question, "break") == 0) {
			break;
		}
		else {
			puts("what do you mean?");
		}
	}
	return 0;
}