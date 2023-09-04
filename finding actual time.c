#include <stdio.h>
#include <stdlib.h>
int main() {
    int rhr, rmin, chr, cmin;

    printf("RESET TIME (HH:MM): ");
    scanf("%d:%d", &rhr, &rmin);

    printf("CURRENT TIME (HH:MM): ");
    scanf("%d:%d", &chr, &cmin);
    
    int min=(chr - rhr) * 60 + (cmin - rmin);

    
    int red=(min/60)*10;
   
    while(red>=60){
        chr--;
        red-=60;
    }

	if(red>0 && (cmin-red)<60){
        cmin=cmin-red;
    }
    
    printf("Actual Time: %02d:%02d\n", chr, cmin);
    
    return 0;
}