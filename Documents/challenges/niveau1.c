#include <stdio.h>

int main(){
    int numbers[10] ={10 , 15, 12 , 10, 22, 41, 2, 9, 10, 41};
    int taille;
    int max;
    int min;
    int sum = 0;
    float avg = 0;

    printf("can you please enter the length of the table");
    scanf("%d", &taille);
    for (int i = 0; i < taille; i++)
    {
        sum += numbers[i];
    }
    printf("la somme est : %d\n", sum);

    for (int j = 0; j < taille; j++)
    {
        avg = sum / taille;
    }
    printf("le moyenne est: %f\n", avg);

    max = numbers[0];
    for (int g = 0; g < taille; g++)
    {
        if (numbers[g] > min)
        {
            min = numbers[g];
        }
    }
    printf("le plus petit est: %d\n", min);

    max = numbers[0];
    for (int a = 0; a < taille; a++)
    {
        if (max < numbers[a])
        {
            max = numbers[a];
        }
    }
    printf("le plus grand est: %d\n", max);

    
    for (int a = 1; a < taille; a++)
    {
        printf("%d\t", numbers[taille - a]);
    }
    printf("%d\t", numbers[0]);
    printf("\n");

//niveau 2
    int digit;
    int occ = 0;

    printf("can you please enter a number you want to see how many times has it occured in the table");
    scanf("%d", &digit);

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == digit)
        {
            occ++;
        }
    }
    printf("the number has occured in the table %d\n", occ);
   //Q2
    int search;
    int length = 10;
    int index = -1;
    printf("can you please enter the index of the number you wish to delete");
    scanf("%d", &search);
    for (int j = 0; j < 10; j++)
    {
        if (numbers[j] == search)
        {
            index = j;
        }     
    }
    
    for (int a = index; a < 9; a++)
    {
        numbers[a] = numbers[a + 1];
    }
    
    for (int b = 0; b < 9; b++)
    {
        printf("%d\t", numbers[b]);
    }
}