#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <math.h>



void question_A(void) {
    double m;
    printf("pls enter an exp number m: ");
    scanf("%le", &m); /* %le : double in exp form */
    if (m > 1 || m < 1E-14) {
        puts("The m is greater then 1 or less than 1E-14, function is breaked.");
    }
    else {
        if (-log10(m) <= 6.9) {
            printf("Acid\n");
        }
        else if (-log10(m) <= 7.1) {
            printf("Neutral\n");
        }
        else {
            printf("Alkaline\n");
        }
        printf("the acidity is %f\n", -log10(m));
        printf("the alkalinity is %f\n", log10(1 / m*1E+14));
        printf("the sum of acidity and alalinity is %f\n", log10(m) + log10(1 / m * 1E+14));
    }
}



void question_B(void) {
    double arraydiameter = 0, arraylength = 0, tolerance, length, diameter;
    int total = 0, notin = 0;
    printf("Enter the tolerance: ");
    scanf("%lf", &tolerance);
    while (1) {
        printf("Enter bolt length/diameter values (enter negative nmbers to exit):");
        scanf("%lf %lf", &length, &diameter);
        if (length <= 0 || diameter <= 0) {
            break;
        }
        else if (50 - tolerance > length || 50 + tolerance < length || 12 - tolerance > diameter || 12 + tolerance < diameter) {
            puts("Not within tolerance");
            notin++;
        }
        else {
            puts("Within tolerance");
            arraylength += length;
            arraydiameter += diameter;
            total++;
        }
    }
    printf("%d bolts were within tolerance \n", total);
    printf("Percentage of bolts within tolerance = %.2f\n", (float)notin / (float)total * 100);
    printf("Average length of bolt = %f\n", arraylength/total);
    printf("Average diameter of bolt = %f\n", arraydiameter/total);
}



int main(void) {
    char question[6];
    while (1) {
        puts("which question you want to go through? A-B/ALL/break");
        scanf("%s", question);
        if (strcmp(question, "A") == 0) {
            question_A();
        }
        else if (strcmp(question, "B") == 0) {
            question_B();
        }
        else if (strcmp(question, "ALL") == 0) {
            question_A();
            question_B();
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
