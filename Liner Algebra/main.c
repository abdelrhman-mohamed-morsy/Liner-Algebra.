#include <stdio.h>

#define SIZE 6

void print_image(char matrix[SIZE][SIZE]) { for (int i = 0; i < SIZE; i++) { for (int j = 0; j < SIZE; j++) { printf("%c ", matrix[i][j]); } printf("\n"); } printf("\n"); }

void reflect_vertical(char matrix[SIZE][SIZE]) { char temp; for (int i = 0; i < SIZE / 2; i++) { for (int j = 0; j < SIZE; j++) { temp = matrix[i][j]; matrix[i][j] = matrix[SIZE - 1 - i][j]; matrix[SIZE - 1 - i][j] = temp; } } }

void reflect_horizontal(char matrix[SIZE][SIZE]) { char temp; for (int i = 0; i < SIZE; i++) { for (int j = 0; j < SIZE / 2; j++) { temp = matrix[i][j]; matrix[i][j] = matrix[i][SIZE - 1 - j]; matrix[i][SIZE - 1 - j] = temp; } } }

int main() { char image[SIZE][SIZE] = {
    {' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' '},
    {'*', ' ', ' ', ' ', ' ', ' '}
};


printf("--- Original Image ---\n");
print_image(image);

printf("--- Vertical Flip ---\n");
reflect_vertical(image);
print_image(image);

reflect_vertical(image);

printf("--- Horizontal Flip ---\n");
reflect_horizontal(image);
print_image(image);

return 0;

}