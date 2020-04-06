#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "bst.h"

int main()
{
    BST*root=NULL;

    root=AddNode(root,9);
    root=AddNode(root,11);
    root=AddNode(root,7);
    root=AddNode(root,13);
    root=AddNode(root,10);
    root=AddNode(root,5);
    root=AddNode(root,6);
    root=AddNode(root,8);






    //root=Delete(root,11);
    //printf("Minimum value in the BST is %d",Find_minimum(root));
    //PrintMaxtoMin(root);
    //printf("Number of two childed nodes is %d",root=TwoChildedNodes(root));
    //OddValuedNode(root);
    //printf(" Number of the nodes which has odd value is %d",Odd(root));
    //LeafNodes(root);
     //printf(" Number of the nodes which are lesser than given number is %d",LesserThanN(root,13));
     //root=DeleteLeafNodes(root);
     //PrintMaxtoMin(root);
    //printf(" Sum of the nodes in this BST is %d",SumOfNodes(root));
    //printf("%d",BstOrNot(root));
    //printf(" Height of the given tree is %d",maxDepth(root));
    //NodesBetweenNandM(root,3,9);
    //printf(" Depth of the given node is %d",FindDepth(root,7));
     //ReverseTree(root);
     //LeafNodesRandomly(root);
    printf(" Sum value for depth of all the nodes in the given tree  is %d",PrintDepth(root));







}
