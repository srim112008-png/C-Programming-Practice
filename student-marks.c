
#include <stdio.h>

int main()
{
    char name[50];
    int m1, m2, m3, total;
    float average;

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter three subject marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if(m1 < 0 || m1 > 100 ||
       m2 < 0 || m2 > 100 ||
       m3 < 0 || m3 > 100)
    {
        printf("Invalid marks");
        return 0;
    }

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("\nStudent Name: %s", name);
    printf("\nTotal Marks: %d", total);
    printf("\nAverage: %.2f", average);

    if(m1 >= 35 && m2 >= 35 && m3 >= 35)
        printf("\nResult: PASS");
    else
        printf("\nResult: FAIL");

    return 0;
}
