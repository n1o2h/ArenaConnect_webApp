#include <stdio.h>

int main(){
    /*
    int numbers[10] ={ 2, 9, 10, 11, 12 , 15 , 19, 22, 41, 45};
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
        
        printf("can you please enter a number you want to see how many times has it occured in the table");
        scanf("%d", &digit);
        
        for (int i = 0; i < 10; i++)
        {
            if (numbers[i] == digit)
            {
                occ++;
                }
                printf("the number has occured in the table %d\n", occ);
                }
                //Q2
                int search;
                int length = 10;
                int newlength = 0;
                
                printf("can you please enter the index of the number you wish to delete");
                scanf("%d", &search);
                for (int j = 0; j < 10; j++)
                {
                    if (numbers[j] != search)
                    {
                        numbers[newlength++] = numbers[j];
                        }     
                        }
                        for (int b = 0; b < newlength; b++)
    {
        printf("%d\t", numbers[b]);
    }
    
    //q3
    int pair[10];
    int unpair[10];
    int p = 0;
    int u = 0;
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            pair[p] = numbers[i]; 
            p++;
            }
            
            else
            {
                unpair[u] = numbers[i];
                u++; 
                }
                }
                
                printf("Even numbers: ");
                for (int i = 0; i < p; i++) {
                    printf("%d ", pair[i]);
                    }
                    
                    printf("\nOdd numbers: ");
                    for (int i = 0; i < u; i++) {
                        printf("%d ", unpair[i]);
                        }
                        //niveau 3
                        //q1
        
       for (int i = 0; i < 10; i++)
       {
        int index = i;
        for (int a= i+1; a < 10; a++)
        {
            if (numbers[a] < numbers[index])
            {
                index = a;
                }
                
                }
                int temp = numbers[i];
                numbers[i] = numbers[index];
                numbers[index] = temp;
                }
                printf("Sorted array (smallest to largest):\n");
                for (int i = 0; i < 10; i++) {
                    printf("%d ", numbers[i]);
                    }
                    printf("\n");
                    
                    //Q2
                   int min = 0;
    int max = 9;
    int search;
    int mid;
    
    printf("can you please enter the number you want to search for: ");
    scanf("%d", &search);
    
for (int i = 0; i < 9; i++)
{
    mid = (min + max) / 2;
    if (numbers[mid] == search)
    {
        printf("the number is in the position: %d", mid+1);
        break;
    }
    min = mid;
    if (numbers[mid] > search)
    {
        max = mid -1;
    }
}
   //Q3

    int first[] =  {12, 3, 8, 15, 1};
    int second[] = {7, 9, 2, 20, 5};
    int merged[10];

    for (int b = 0; b < 5; b++)
    {
        merged[b] = first[b];
    }
    for (int j = 0; j < 5; j++)
    {
        merged[5 + j] = second[j];
    }
    
    for (int i = 0; i < 10; i++)
       {
        int index = i;
            for (int a= i+1; a < 10; a++)
            {
                if (merged[a] < merged[index])
                {
                    index = a;
                }
                
            }
        int temp = merged[i];
        merged[i] = merged[index];
        merged[index] = temp;
       }
        printf("Sorted array (smallest to largest):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }
*/
//Niveau 4
//Q1

int somme[2][8] = {
    {10,11,12,13,14,15,16,17},
    {20,21,22,23,24,25,26,27},
};
int sum;

    for (int i = 0; i < 8; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            
        }
    }
    printf("%d", sum);
};

