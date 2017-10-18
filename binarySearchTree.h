
#ifndef bst_included
#define bst_included

//create a bst item

typedef struct myNode{
 
  char *data;
  struct myNode *left,*right; // creates a left and right child

}myNode;

myNode *node_alloc();

myNode *insert_node(myNode *np, char *data);

void bst_print(myNode *np);




#endif 
