#include <stdio.h>

struct book
{
    char name[20];
    char sub[20];
    int id;
}b1;

int main() {

       b1.name = "hero";
       b1.sub = "clang";
       
       b1.id = 213;
    
    printf("%s", b1.name);
    

    return 0;
}