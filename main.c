#include <stdio.h>
#include <math.h>
#include <string.h>
#define pi 3.1415926 /* define do not need = */



char question[5];
int a, b, c, d, h, shh, smm, ehh, emm, hh, mm;
float p, e, f, g, t, change;
double q, z, x, r, V;



/*question A */
void question_A(void) {
	puts("pls enter a, b, c and d:");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	printf("The answer of (a+b)(c+d)=%d\n", (a + b) * (c + d));
}



/* question B */
void question_B(void) {
	puts("pls enter a float:");
	scanf_s("%f", &p);
	printf("p in decimal format = %f\n", p);
	printf("p in exponential format = %e\n", p);

	puts("pls enter a float:");
	scanf_s("%lf", &q);
	printf("p in decimal format = %f\n", q);
	printf("p in exponential format = %e\n", q);
	z = (double)p * 2 + 3 * q;
	printf("%f\n", z);
}



/* question C */
void question_C(void) {
	puts("pls enter a number:");
	scanf_s("%lf", &x);
	printf("the answer is %f\n", x * x * x + 3 * x * x + 5 * x + 7);
}



/* question D */
void question_D(void) {
	printf("the answer is %f\n", pow(x, 3) + pow(x, 2) * 3 + 5 * x + 7);
}



/* question E */
void question_E(void) {
	puts("pls enter a and b");
	scanf_s("%f%f", &e, &f);
	g = e / f;
	printf("the answer is %f\n", g);
}



/* question F */
void question_F(void) {
	puts("pls enter a and b");
	scanf_s("%d%d", &a, &b);
	g = (float)a / (float)b;
	printf("the answer is %f\n", g);
}



/* question G */
void question_G(void) {
	puts("pls enter an int:");
	scanf_s("%d", &h);
	printf("the remainder is %d\n", h % 7);
}



/* question H */
void question_H(void) {
	puts("pls enter r:");
	scanf_s("%lf", &r);
	V = 4 / 3 * (pi * r * r * r);
	printf("the answer is %f\n", V);
}



/* additional question I */
void question_I(void) {
	puts("pls enter the V for the r:");
	scanf_s("%lf", &V);
	r = pow(3 * V / 4 / pi, 1.0 / 3);	/* the difference between 1/3 and 1.0/3*/
	printf("The r is %.3f\n", r);
}



/* additional question J */
void question_J(void) {
	puts("pls enter a start time (hh mm):");
	scanf_s("%d%d", &shh, &smm);
	puts("pls enter an end time (hh mm):");
	scanf_s("%d%d", &ehh, &emm);
	if (shh > ehh) {
		hh = 24 - shh + ehh;
	}
	else {
		hh = ehh - shh;
	}
	if (smm > emm) {
		mm = 60 - smm + emm;
		hh--;
	}
	else {
		mm = emm - smm;
	}
	printf("The duration is %d minutes which is %d h %d m\n", mm + hh * 60, hh, mm);
}



/* additional question K */
void question_K(void) {
	t = 0;
	puts("pls enter 4 prices and four quantities:");
	for (int i = 1; i <= 4; i++) {	/* using == not = use <= not == for safety reason*/
		printf("The NO.%d price and amount:\n", i);
		scanf_s("%f%f", &p, &e);
		t += p * e;
	}
	printf("Total is %.2f\n", t);
	puts("Enter how much you are paying:");
	scanf_s("%f", &change);
	if (change < t) {
		puts("^_^!");
	}
	else {
		printf("Change is %.2f\n", (double)change - (double)t);
	}
}



int main(void) {
	while (1) {
		puts("which question you want to go through? A-K/ALL/break");
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
			puts("question D is based on question C.");
			question_C();
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
		else if (strcmp(question, "I") == 0) {
			question_I();
		}
		else if (strcmp(question, "J") == 0) {
			question_J();
		}
		else if (strcmp(question, "K") == 0) {
			question_K();
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
			question_I();
			question_J();
			question_K();
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
