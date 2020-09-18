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