#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Self-referential structure
struct treeNode
{
  int data; // Node value
  struct treeNode *pLeft; // Pointer to left subtree
  struct treeNode *pRight; // Pointer to right subtree
};
// Type-definitions
typedef struct treeNode TreeNode;
typedef TreeNode *pTreeNode;
// Function Prototypes
void insertNode(pTreeNode *pTree, int value);
void inOrder(pTreeNode pTree);
void preOrder(pTreeNode pTree);
void postOrder(pTreeNode pTree);
// Main Function
int main(void)
{
  int i = 0; // Counter to loop from 1-10
  int item = 0; // Variable to hold random numbers
  pTreeNode pRoot = NULL; // Tree is initially empty
  
  srand(time(NULL));
  printf("The numbers being placed in the tree are: \n");
  // Insert random values between 0 and 14 in the tree
  for(i = 1; i <= 10; i++)
  {
    item = rand() % 15;
    printf("%3d", item);
    insertNode(&pRoot, item);
  }
  // Traverse the tree preOrder
  printf("\n\nThe pre-order traversal is: \n");
  preOrder(pRoot);
  // Traverse the tree inOrder
  printf("\n\nThe in-order traversal is: \n");
  inOrder(pRoot);
  // Traverse the tree postOrder
  printf("\n\nThe pre-order traversal is: \n");
  postOrder(pRoot);
  return(0);
}
// Function Definitions
void insertNode(pTreeNode *pTree, int value)
{
  
}

void inOrder(pTreeNode pTree)
{
  
}

void preOrder(pTreeNode pTree)
{
  
}

void postOrder(pTreeNode pTree)
{
  
}