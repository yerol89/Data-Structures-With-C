#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED
#define true 1
#define false 0

typedef int BOOL;

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}BST;

BST*PrepareNode(int toAdd);
BST*AddNode(BST*pRoot,int toAdd);
void Preorder(BST*pRoot);
void InOrder(BST*pRoot);
void PostOrder(BST*pRoot);
void PrintMaxtoMin(BST*pRoot);
BST* Delete(BST *root, int x);
BST* Find_minimum(BST*pRoot);
int TwoChildedNodes(BST*p);
void OddValuedNode(BST*p);
int Odd(BST*p);
void LeafNodes(BST*p);
int LesserThanN(BST*p,int N);
BST* DeleteLeafNodes(BST*p);
int SumOfNodes(BST*p);
BOOL BstOrNot(BST*p);
int maxDepth(BST* node);
void NodesBetweenNandM(BST*p,int N,int M);
void ReverseTree(BST*p);
void LeafNodesRandomly(BST*p);

#endif // BST_H_INCLUDED
