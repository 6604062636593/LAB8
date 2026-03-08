#include <stdio.h>
#define NSTD 8
#define NQ 10

int checkscore(char std[]);
int hardestQuestion(char ans[][NQ]);

char keys[NQ] = {'D','B','D','C','C','D','A','E','A','D'};

int main() {
    int i;

    char ans[NSTD][NQ] = {
        {'A','B','A','C','C','D','E','E','A','D'}, 
        {'D','B','A','B','C','A','E','E','A','D'}, 
        {'E','D','D','A','C','B','E','E','A','D'}, 
        {'C','B','A','E','D','C','E','E','A','D'}, 
        {'A','B','D','C','C','D','E','E','A','D'}, 
        {'B','B','E','C','C','D','E','E','A','D'}, 
        {'B','B','A','C','C','D','E','E','A','D'}, 
        {'E','B','E','C','C','D','E','E','A','D'}  
    };

    for(i = 0; i < NSTD; i++) {
        printf("std %d => %d\n", (i+1), checkscore(ans[i]));
    }

    printf("show no. of hardest no. = %d\n", hardestQuestion(ans));

    return 0;
}


int checkscore(char std[]) {
    int score = 0;
    for(int i = 0; i < NQ; i++) {
        if(std[i] == keys[i]) {
            score++;
        }
    }
    return score;
}


int hardestQuestion(char ans[][NQ]) {
    int correct[NQ] = {0};

    for(int j = 0; j < NQ; j++) {
        for(int i = 0; i < NSTD; i++) {
            if(ans[i][j] == keys[j]) {
                correct[j]++;
            }
        }
    }

    int minIndex = 0;
    for(int j = 1; j < NQ; j++) {
        if(correct[j] < correct[minIndex]) {
            minIndex = j;
        }
    }

    return minIndex + 1;
}
