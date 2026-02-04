#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    if (age >= 18) {
        if (age <= 60)
            printf("Eligible to work");
        else
            printf("Senior citizen");
    } else {
        printf("Not eligible");
    }

    return 0;
}
