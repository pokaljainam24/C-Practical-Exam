// Write a C program that writes any N number of fruits name along with their color name in a file called data.txt by taking input from user dynamically.

#include <stdio.h>


int main() {
    FILE *file;
    int N;
    char fruit[50], color[50];

    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Could not open file data.txt for writing.\n");
        return 1;
    }

    printf("Enter the number of fruits: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Enter the name of fruit %d: ", i + 1);
        scanf("%s", fruit);
        printf("Enter the color of %s: ", fruit);
        scanf("%s", color);
        fprintf(file, "Fruit: %s, Color: %s\n", fruit, color);
    }

    fclose(file);
    printf("Data successfully written to data.txt\n");

}
