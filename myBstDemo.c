#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binarySearchTree.h"


char* user_menu(){



  static char name[20];
  printf("Enter name: \n");
  scanf("%s",name);
  printf("Name added: %s \n",name);

  return name;
}

int main(){

  printf("Start of test...\n");
  
  int i = 0;
  myNode *temp = NULL;
  temp = insert_node(temp,"Ismael");
  temp = insert_node(temp,"Gus");
  temp = insert_node(temp,"Zebra");
  temp = insert_node(temp,"Xorscar");
  
  
  
  temp = insert_node(temp,user_menu());
  bst_print(temp);
  
  search_node(temp,"ass");
  return 0;
  
}
