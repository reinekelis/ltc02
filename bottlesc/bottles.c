#include <stdio.h>

void bottles_poem(int x){
    if (x < 1){
        printf("No more bottles of beer on the wall, no more bottles of beer.\n");
        printf("We've taken them down and passed them around; now we're drunk and passed out!\n");
    } else {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", x, x);
        printf("Take one down, pass it around,\n");
        bottles_poem(--x);
    }
}


int  main(){
    int x=99;
    bottles_poem(x);
    return 0;
}
