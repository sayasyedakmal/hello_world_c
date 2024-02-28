/*
    Getting User Input

    - try get user input and practice variable and datatype
        - name - string
        - age - int
        - height - double
        - weight - float
        - grade - character
    - print it back

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fullName[20];
    char grade;
    int age;
    double height;
    float weight;

    printf("Enter your full name: ");
    fgets(fullName,20,stdin);

    printf("Enter your grade: ");
    scanf("%c", &grade);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height(cm): ");
    scanf("%lf", &height);

    printf("Enter your weight(kg): ");
    scanf("%f", &weight);

    // Remove the newline character, if it exists
    size_t len = strlen(fullName);
    if (len > 0 && fullName[len - 1] == '\n') {
        fullName[len - 1] = '\0';
    }

    printf("\n\n");
    printf("-----Your Information------");
    printf("\n");
    printf("Name: %s", fullName);
    printf("\n");
    printf("Age: %d", age);
    printf("\n");
    printf("Height: %f", height);
    printf("\n");
    printf("Weight: %f", weight);
    printf("\n");
    printf("Grade: %c", grade);
    printf("\n");



    return 0;
}
