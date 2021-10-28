#include <stdio.h>
#include <string.h>
#include <math.h>



void question_A(void) {
    int a;
    do {
        puts("pls enter a number, it will stop when greater than 1000.");
        scanf_s("%d", &a);
        printf("you answer is %d \n", a);
    } while (a < 1000);
}

void question_B(void) {
    int b = 0; /* always assume int b; b = random number */
    while (b < 1000) {
        puts("pls enter a number, it will stop when greater than 1000.");
        scanf_s("%d", &b);
        printf("you answer is %d \n", b);
    }
}

void question_C(void) {
    double c, d = 1;
    do {
        puts("pls enter a float, any negative number will stop the loop.");
        scanf_s("%lf", &c);
        d = d * c;
        printf("the product is %f \n", d);
    } while (d > 0);
}

void question_D(void) {
    double e, f = 1;
    do {
        puts("pls enter a float, if the answer is greater than 1000, the programe will be stopped.");
        scanf_s("%lf", &e);
        f = f * e;
        printf("the product is %f \n", f);
    } while (f < 1000);
}

void question_E(void) {
    double p, q;
    while (1) {
        puts("pls enter two numbers q and p, if p and q are both positive, the program should display rootsquare(p square + q square. if either p or q are negative, then the program should display an error message. the loop should terminate if either p or q are greater than 1000)");
        scanf_s("%lf%lf", &p, &q);
        if (p > 1000 || q > 1000) {
            break;
        }
        else if (p < 0 || q < 0) {
            puts("error!");
        }
        else {
            printf("the answer if %f \n", sqrt(p * p + q * q));  /* function of square root */
        }
    }
}

void question_F(void) {
    double g, x = 1, y;
    puts("pls enter a number");
    scanf_s("%lf", &g);
    while (1) {
        y = (x + g / x) / 2;
        if (fabs(x - y) < 0.00001) { /*abs(int) / cabs(double) / labs(long) */
            break;
        }
        x = y;
        printf("%f\n", x);
    }
}

void question_G(void) {
    int j;
    puts("pls enter the month");
    scanf_s("%d", &j);
    if (j == 4 || j == 6 || j == 9 || j == 11) {
        puts("30");
    }
    else if (j == 2) {
        puts("28");
    }
    else if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12) {
        puts("31");
    }
    else {
        puts("error");
    }
}



int main(void) {
    char question[5];
    while (1) {
        puts("which question you want to go through? I-K/ALL");
        scanf_s("%s", &question, 5);
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
        else if (strcmp(question, "ALL") == 0) {
            question_A();
            question_B();
            question_C();
            question_D();
            question_E();
            question_F();
            question_G();
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
