#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    FILE *fptr;
    fptr = fopen("output.txt", "w");
    int n = 10;
    fprintf(fptr, "%d\n", n);
    while(n--){
        int x = rand()%7 - 3;
        fprintf(fptr, "%d\n", x);
    }
    fclose(fptr);

    return 0;
}
