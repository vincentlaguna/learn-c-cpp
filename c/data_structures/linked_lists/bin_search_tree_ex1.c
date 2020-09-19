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