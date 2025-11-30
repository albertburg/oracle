#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include "list.c"

int z;
int x;
int h;
char b[];
char override[] = "override";
char abort[] = "abort";
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
    printf("WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING WARNING\n");
    printf("ARE YOU SURE YOU WANT TO DO THIS? THE PROGRAM WILL NOT STOP ON ITS OWN AND WILL REQUIRE A FORCE SHUTDOWN\n");
    printf("In order to proceed, type the word 'override', in order to go back, type the word 'abort'\n");
    scanf("%s", b);
    if (strcmp(override, b){ 
        while(true) 
	    gen();
	    z++;
	    sleep(1);
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
    scanf("%d", &x);
    if (x == 1) {
        genlist();
    }else if (x == 2) {
        geninfinite();
    }
    return 0;
}
