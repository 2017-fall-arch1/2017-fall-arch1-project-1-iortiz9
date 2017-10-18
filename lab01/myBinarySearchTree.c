#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binarySearchTree.h"

#define FN "ACME_EMP_LIST.txt"
#define BST "BST_ACME_EMP.txt";

void create_clear_file(char *filename){

  FILE * fp;

  //r read
  //w write
  //a append

  fp = fopen(filename,"w");

  fclose(fp);
}


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

  int temp =0;
  
  if(strcmp(np->data,data)!=0){
     
  if (np->left !=NULL)
    search_node(np->left,data);
  
  if (np->right != NULL)
    search_node(np->right,data);  

  }
  
  if(strcmp(np->data,data)==0){
    printf("looking for %s returned true. \n",data);

    temp+=1;
    return temp; 
  }
  else return 0;
 
}

/*This method takes in a node and a selected data to be deleted
  and returns the new node pointer*/
myNode *remove_node(myNode *np, char *data){ 

  //root
  if(np==NULL){

    return np;

  }
  else if (strcmp(np->data,data)<0){

    np->left=remove_node(np->left,data);
  }
  else if (strcmp(np->data,data)>0){

    np->right=remove_node(np->right,data);
  }
  else{
    if(np->left == NULL && np->right == NULL){

      free(np);
      np =NULL;
      return np;
      
    }
    
    else if(np->left!=NULL){

      myNode *temp = np;
      np=np->left;
      free(temp);

    }
    
    else if(np->right !=NULL){

      myNode *temp = np;
      np=np->right;

      free(temp);

    }

    else{

      return np;

    }
  }
  
  return np;
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

void bst_file(myNode *np){

  FILE * fp;

  fp = fopen(FN,"a");
  
  if(np==NULL){
    
    return;
  }
  if(np->left !=NULL)
    bst_file(np->left);
  
  fprintf(fp,np->data);

  if(np->right !=NULL)
    bst_file(np->right);
  
  fclose(fp);
  
}

char *read_file(char *file,int i){
  
  FILE * fp;
  
  char oneLine[150];
  char *x[150];
  int y =0;
  
  fp = fopen(file,"r");

  while(fgets(oneLine,150,fp)){

    x[y] =strdup(oneLine);
    y++;
     
  }
  printf("%s", x[y]);
  return x[i];
 
  
  fclose(fp);
  
}
int lines(char *file){

  FILE * fp;
  
  int lines =0;
  
  fp = fopen(file,"r");
  
  while(!feof(fp)){
    char cha=fgetc(fp);
    if(cha=='\n'){
      
      lines+=1;
      
    }
  }
  return lines;
  
}


  





