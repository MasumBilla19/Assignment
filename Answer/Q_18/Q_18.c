//18. Write a C program to calculate GPA of a student using switch case.

#include <stdio.h>

int main() {
    int score;

    //user defined value
    printf("Enter score( 0-100 ): ");
    scanf("%d", &score);

    switch(score / 10) {
        case 10:
        case 9:
            printf("Grade: A");/* Marks between 90-100 */
            break;

        case 8:
            printf("Grade: B");/* Marks between 80-89 */
            break;

        case 7:
            printf("Grade: C");/* Marks between 70-79 */
            break;

        case 6:
            printf("Grade: D");/* Marks between 60-69 */
            break;

        case 5:
            printf("Grade: E");/* Marks between 50-59 */
            break;

        case 4 :
            /* Marks between 40-59 */
            printf("\n Your Grade is: E--");
            break;

        default:
            /* Marks less than 40 */
            printf("Grade: F");
            break;

    }

    return 0;
}


