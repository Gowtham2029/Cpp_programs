#include <stdio.h>

void statement_to_assembly(char exp[]);

int main(void) {

  statement_to_assembly("x=a+b*c;");
  // statement_to_assembly("x=a*b+c;");

  // statement_to_assembly("x=a+b+c;");
  // statement_to_assembly("x=a*b*c;");
  
  return 0;
}


void statement_to_assembly(char exp[]) {
  for(int i = 0; i<8; i++)
    {
      
      if(exp[i] == '*')
      {
        printf("move %c\n", exp[i-1]);
        printf("move %c\n", exp[i+1]);
        printf("mul %c,%c", exp[i-1],exp[i+1]);
      }
  for(int i = 0; i<8; i++)
    {    
      if(exp[i] == '+')
      {
        printf("add %c,%c\n", exp[i-1],exp[i+1]);
        printf("move to x\n");
      }
    }
}
      
  
}