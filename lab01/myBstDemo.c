#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binarySearchTree.h"



void user_menu(myNode *np,char *file){

  while(1){
  int option;
  int name;
  static char fn[]="ACME_EMP_LIST.txt";

  FILE * fp;

  fp=fopen(file,"a");
  
  printf("Choose 1 to add employees name.\n");
  printf("Choose 2 to search for a employee\n");
  printf("Choose 3 to remove an employee\n");
  printf("Choose 4 to print a list of employess\n");

  printf("Input:");
  scanf("%d",&option);
  printf("you choose %d\n",option);
  
  switch(option){
  case 1:
    printf("Enter new name:");
    scanf("%s",&name);
    printf("%s\n",name);
  

    fprintf(fp,"%s",name);
    
    break;

  case 4:

    bst_print(np);
    break;
   
    break;
  default:
    printf("Please pick a correct option\n");
    break;
  }
  }
  
}

int main(){
  
  myNode *t=NULL;
  
  user_menu(t,"ACME_EMP_LIST.txt");
  
  printf("%s",read_file("ACME_EMP_LIST.txt",4));
  
  for(int i =0;i<lines("ACME_EMP_LIST.txt");i++){
    
    t=insert_node(t,read_file("ACME_EMP_LIST.txt",i));
    
  }
  
  bst_print(t);
  
    printf("%d",lines("ACME_EMP_LIST.txt"));  
    
    
  bst_print(t);

  //  remove_node(t,"Ismael Ortiz");
  // bst_print(t);
  return 0;
  
}
