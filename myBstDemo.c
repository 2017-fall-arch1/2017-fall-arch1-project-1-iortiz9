#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binarySearchTree.h"

int main(){

  printf("Start of test...\n");

  int i = 0;
  myNode *temp = NULL;

  char *a[5] = {"Ismael","Gus","Della","Zebra"};

  for(;i<=4;i++){
    temp = insert_node(temp,a[i]);
    printf("%s\n",a[i]);
  }
  bst_print(temp);
  return 0;
  
}
