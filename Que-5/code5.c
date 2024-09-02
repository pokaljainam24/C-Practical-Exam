// Develope a C program that uses structures to represent a laptop. List N number of laptop details using Array of objects.

#include <stdio.h>

typedef struct {
    char company_name[50];
    int processor[50];
    float price;
} Laptop;

void displayLaptop(Laptop laptop) {
    printf("Company_name: %s\n", laptop.company_name);
    printf("Processor: %d\n", laptop.processor);
    printf("Price: $%.2f\n\n", laptop.price);
}

int main() {
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    Laptop laptops[n];

    for (int i = 0; i < n; i++) {
        printf("Enter laptop %d details:\n", i + 1);
        printf("company_name: ");
        scanf("%s", laptops[i].company_name);

        printf("Processor: ");
        scanf("%d", &laptops[i].processor);

        printf("Price: $");
        scanf("%f", &laptops[i].price);
    }

    printf("\nLaptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Laptop %d:\n", i + 1);
        displayLaptop(laptops[i]);
    }
}
