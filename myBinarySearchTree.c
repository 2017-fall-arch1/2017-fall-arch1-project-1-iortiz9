#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binarySearchTree.h"


myNode *node_alloc(){

  myNode *np = (myNode *)malloc(sizeof(myNode));
  np->left = np->right = NULL;

  return np;

}

myNode *insert_node(myNode *np, char *data){

  myNode *temp;
  if(np == NULL){

    temp = node_alloc();
    temp->data = data;
  
    return temp;
  }


  else if (strcmp(np->data,data)<0){
    np->left=insert_node(np->left,data);
  }
  else if(strcmp(np->data,data)>0){
    np->right=insert_node(np->right,data);
  }
  else
    return np;
  
}

int search_node(myNode *np, char *data){

  if(strcmp(np->data,data)==0){
    printf("looking for %s returned true. \n",data);
    return 1;
  }
  else if (strcmp(np->data,data)<0){
   search_node(np->left,data);
  }


  else if (strcmp(np->data,data)>0){
    search_node(np->right,data);
  }
  else{
    printf("not Found\n");
    return 0;
  }
}

void bst_print(myNode *np){

  if(np==NULL){

    return;
    
  }


  if(np->left != NULL)

    bst_print(np->left);
    
    printf("Data Found: %s \n",np->data);
  
 if (np->right !=NULL)
   
   bst_print(np->right);
     

  
}


  





