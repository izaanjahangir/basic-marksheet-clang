#include <stdio.h>
#include <stdlib.h>

float calcPercentage(float totalMark, int obtainedMark);
int getMarks(char label[]);

int main()
{
    const float TOTAL_MARKS = 375.00;
    int mathMarks, englishMarks, ictMarks, pstMarks, fopMarks;

    printf("\n");
    printf("Total marks for each subject is 75");
    printf("\n\n");

    mathMarks = getMarks("Enter marks for math: ");

    englishMarks = getMarks("Enter marks for english: ");

    ictMarks = getMarks("Enter marks for ICT: ");

    pstMarks = getMarks("Enter marks for PST: ");

    fopMarks = getMarks("Enter marks for FOP: ");

    int totalObtained = mathMarks + englishMarks + ictMarks + pstMarks + fopMarks;
    float percentage = calcPercentage(TOTAL_MARKS, totalObtained);

    printf("Marksheet");
    printf("\n\n");

    printf("Percentage marks in math: %.2f%%", calcPercentage(75.00, mathMarks));
    printf("\n");

    printf("Percentage marks in english: %.2f%%", calcPercentage(75.00, englishMarks));
    printf("\n");

    printf("Percentage marks in ict: %.2f%%", calcPercentage(75.00, ictMarks));
    printf("\n");

    printf("Percentage marks in pst: %.2f%%", calcPercentage(75.00, pstMarks));
    printf("\n");

    printf("Percentage marks in fop: %.2f%%", calcPercentage(75.00, fopMarks));
    printf("\n");

    printf("Total marks: %0.f", TOTAL_MARKS);
    printf("\n");

    printf("Total marks obtained: %d", totalObtained);
    printf("\n");

    printf("Total percentage: %.2f%%", percentage);
    printf("\n\n");

    return 0;
}

float calcPercentage(float totalMark, int obtainedMark)
{
    return (obtainedMark / totalMark) * 100;
}

int getMarks(char label[])
{
    int marks;

    printf("%s: ", label);
    scanf("%d", &marks);
    printf("\n");

    if (marks < 0)
    {
        printf("Mark should not be 0, please try again");
        printf("\n\n");
        exit(0);
    }

    if (marks > 75)
    {
        printf("Mark should not be greater than 75, please try again");
        printf("\n\n");
        exit(0);
    }

    return marks;
}