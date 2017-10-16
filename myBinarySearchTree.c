#include <stdio,h>
#include <stdlib.h>
#include "binarySearchTree.h"


myNode *node_alloc(){

  myNode *np = (myNode *)malloc(sizeof(myNode));
  np->left = np->right = NULL;

  return np;

}

myNode* insert_node(myNode *np, char *data){

  if(np == NULL){

    return node_alloc();
  }
  else if (strcmp(data, np ->name)<0){
    np->left=insert_node(data,np->left);
  }
  else if(strcmp(data,np->name)>0){
    np->right=insert_node(data,np->right);
  }
  else
    return np;
  
}


  



  
