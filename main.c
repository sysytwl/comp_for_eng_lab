#include <stdio.h>
#include <math.h>



int w = 255;
int p = 104;
int q = 19;
int r, x, y, z, a, b, c;



void questionE(void) {
	z = 2 * y * (w + x);
	printf("2 x %d x ( %d + %d )=%d\n", y, w, x, z);
}



int main(void) {
	puts("Hi, I'm Jack. Find more on github(sysytwl).");	/* question A */
	printf("This is a new C program.\nIt uses newlines to create two separate lines on the screen.\n");		/* question B */
	printf("The value of w is %d\n", w);	/* question C */
	printf("%d - %d = %d\n", p, q, p - q);	/* questino D */
	r = p - q;
	printf("%d - %d = %d\n", p, q, r);
	questionE();	/* question E */
	w = 32; x = 8; y = 10;
	questionE();
	printf("Enter A and B:");		/* question F */
	scanf("%d%d", &a, &b);
	printf("A: %d, B: %d\n", a, b);
	printf("A + B = %d\n", a + b);	/* question G */
	printf("Enter A, B and C:");	/* question H */
	scanf("%d%d%d", &a, &b, &c);
	printf("A x B x C = %d\n", a * b * c);
	return 0;
}
