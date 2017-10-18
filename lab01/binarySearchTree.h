
#ifndef bst_included
#define bst_included

//create a bst item

typedef struct myNode{
 
  char *data;
  struct myNode *left,*right; // creates a left and right child

}myNode;

myNode *node_alloc();

myNode *insert_node(myNode *np, char *data);

int search_node(myNode *np, char *data);

myNode *remove_node(myNode *np,char *data);

void bst_print(myNode *np);

//----------------------------------------------
void user_menu(myNode *np,char *file);

void create_clear_file(char *fn);
void write_to_file(char *fn,char *data);

void bst_file(myNode *np);
char *read_file(char *file,int i);

int lines(char *f);


#endif 
