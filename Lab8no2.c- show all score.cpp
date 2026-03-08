#include <stdio.h>
#define NSTD 8
#define NQ 10

int checkscore(char std[]);
int countNo1Correct(char ans[][NQ]);
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
