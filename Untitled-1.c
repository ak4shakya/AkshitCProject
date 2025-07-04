#include <stdio.h>
void printtable(int numtable){
    int i = 1;
    printf("Table of %d\n", numtable);
    for (i=1;i<=10;i++){
        printf("%d\n",i*numtable);
    }
}

int main() {
  // Ask the user to type a number
  printf("Type a number for multiplication table: \n");
  int myNum;
  // Get and save the number the user types
  scanf("%d", &myNum);  
  printtable(myNum);
  return 0;  
}

void printwtable(){
    int i = 1;
    while(i<=10){
        printf("%d\n",i*2);
        i++;
    }
}
int main(){
    printwtable();
    return 0;
}

void factorial(){
  int numfactorial;
  scanf("%d\n", numfactorial);
}