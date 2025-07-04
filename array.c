/*Array projram*/
#include <stdio.h>
int main(){
 int myArray[] = {5,67,4,23};
 int length = sizeof(myArray) ;
 int i;
 for (i=0;i<length;i++){
    printf("%d\n", myArray[i]);
 }
}