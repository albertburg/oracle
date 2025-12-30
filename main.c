#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include "list.c"

int z;
int x;
int h;
int f;
int min = 0;
int max = 242;


void gen(void) {
    int rir = (rand() % (max - min + 1)) + min;
    printf("%s [%d]\n", words[rir], z);
}
void genlist(void) {
    printf("Select amount you want to generate\n");
    scanf("%d", &h);
    for (z = 1; z <= h; z++){
        gen();
	sleep(1);
    }

}

void geninfinite(void) {
    printf("Warning! If you go through with this the program will NOT close on itself,\n and will require a manual intervention.\n");
    printf("Continue? [y/n]\n");
    printf(">");
    scanf(" %c", f);
    if (f == 'Y' || f == 'y') {
        gen();
	sleep(1);
    }else if (f == 'N' || f == 'n') {
        printf("The program will now close.\n");
    }

}



int main(void) {
    srand(time(NULL) ^ getpid());;
    system("clear");
    sleep(1);
    printf("WELCOME TO THE THE ORACLE\n");
    printf("Select a mode to get started\n");
    printf("1. Generate List\n");
    printf("2. Generate Infinite\n");
    printf(">");
    scanf("%d", &x);
    if (x == 1) {
        genlist();
    }else if (x == 2) {
        geninfinite();
    }
    return 0;
}
