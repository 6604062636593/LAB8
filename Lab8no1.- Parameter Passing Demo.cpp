#include <stdio.h>

int findMax(int num[]);
void addthree(int number[], int pos[][2], int n);

int main() {
    int number[5] = {20,50,100,99,9};

    int pos[3][2] = {
        {1,10},   
        {3,5},    
        {4,20}   
    };

    int max;
    addthree(number, pos, 3);

    printf("After adding\n");
    for(int i = 0; i < 5; i++) {
        printf("number[%d] : %d\n", i, number[i]);
    }
 
    max = findMax(number);
    printf("Maximum of these number is %d\n", max);

    return 0;
}


void addthree(int number[], int pos[][2], int n) {
    for(int i = 0; i < n; i++) {
        int index = pos[i][0];
        int value = pos[i][1];
        number[index] += value;
    }
}


int findMax(int num[]) {
    int maximum = num[0];

    for(int i = 1; i < 5; i++) {
        if(num[i] > maximum) {
            maximum = num[i];
        }
    }
    return maximum;
}
