#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"


// Creating a single node
BST*PrepareNode(int toAdd)
{
    BST*pNew;
    pNew=malloc(sizeof(BST));
    pNew->data=toAdd;
    pNew->left=NULL;
    pNew->right=NULL;
    return pNew;
}

//Adding new nodes to a BST
BST*AddNode(BST*pRoot,int toAdd)
{
    if(pRoot==NULL)
    {
        return PrepareNode(toAdd);
    }
    else
    {
        if(toAdd <=pRoot->data)
        {
            pRoot->left=AddNode(pRoot->left,toAdd);
        }

        else
        {
            pRoot->right=AddNode(pRoot->right,toAdd);
        }

        return pRoot;
    }
}


//Q:1/Function to delete any of the given node in a BST
BST* Delete(BST *root, int x)
{
    if(root==NULL)
        return NULL;
    if (x > root->data)
        root->right = Delete(root->right, x);
    else if(x < root->data)
        root->left = Delete(root->left, x);
    else
    {
        //No Children
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }

        //One Child
        else if(root->left==NULL || root->right==NULL)
        {
            BST *temp;
            if(root->left==NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }

        //Two Children
        else
        {
            BST *temp = Find_minimum(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}


//Function to find least element in a BST
BST* Find_minimum(BST*pRoot)
{
    BST*temp=pRoot;
    while(temp->left != NULL)
    {
        temp=temp->left;
    }

    return temp;

}

//Q2/Preorder tree traversal(Data-Left-Right)
void Preorder(BST*pRoot)
{
    if(pRoot==NULL)
        return;

    printf("%d\t",pRoot->data);
    Preorder(pRoot->left);
    Preorder(pRoot->right);
}

//Q2/ Inorder tree Traversal(Left-Data-Right)
void InOrder(BST*pRoot)
{
    if(pRoot==NULL)
        return;

    InOrder(pRoot->left);
    printf("%d\t",pRoot->data);
    InOrder(pRoot->right);

}

//Q2/ Postorder tree Traversal(Left-Right-Data)
void PostOrder(BST*pRoot)
{
    if(pRoot==NULL)
        return;

    PostOrder(pRoot->left);
    PostOrder(pRoot->right);
    printf("%d\t",pRoot->data);

}



//Q4/ Tree Traversal printing elements from max to min(Right-Data-Left)
void PrintMaxtoMin(BST*pRoot)
{
    if(pRoot==NULL)
        return;

    PrintMaxtoMin(pRoot->right);
    printf("%d\t",pRoot->data);
    PrintMaxtoMin(pRoot->left);

}





//Q:5/ Function which is returning number of nodes which have two children
int TwoChildedNodes(BST*p)
{
    int counter=0;
    if(p==NULL)
        return 0;
    if(p->left==NULL || p->right==NULL)
        return 0;

    if(p->left !=NULL && p->right!=NULL)
    {
        counter ++;
    }
    counter+=TwoChildedNodes(p->left)+TwoChildedNodes(p->right);
    return counter;
}


//Q:6/Function to print nodes whose data is ODD
void OddValuedNode(BST*p)
{
    if(p==NULL)
        return;
    if(p->data %2 !=0)
    {
        printf("%d\t",p->data);
    }
    OddValuedNode(p->left);
    OddValuedNode(p->right);
}


//Q:6/Function to count number of nodes have odd valued data
int Odd(BST*p)
{
    int counter=0;
    if(p==NULL)
        return 0;
    if(p->data % 2 != 0)
    {
        counter ++;
    }
    counter+=Odd(p->left)+Odd(p->right);
    return counter;
}


//Q:7/Function to print one of the leaf nodes randomly
void LeafNodesRandomly(BST*p)
{
    // Seed the random number generator.
    srand(time(NULL));

    // Randomly select a leaf node
    while(p->left !=NULL || p->right !=NULL)
    {
        if(p->left==NULL)//Just have a right child
        {
            p=p->right;
        }
        else if(p->right==NULL)//Just have a left child
        {
            p=p->left;
        }
        else // The current node have two children
        {
            // Randomly select a child node.
            int i = rand()%2;
            if(i==0)
            {
                p=p->left;
            }
            else
            {
                p = p->right;
            }
        }
    }
    // When you get here, p is pointing to a leaf node.
    printf("%d\t",p->data);
}



//Function to print  leaf nodes
void LeafNodes(BST*p)
{
    if(p==NULL)
        return;
    if(p->left==NULL && p->right==NULL)
    {
        printf("%d\t",p->data);
    }
    LeafNodes(p->left);
    LeafNodes(p->right);

}




//Q:8/Function to find number of nodes which are lesser than a given number N
int LesserThanN(BST*p,int N)
{
    int counter=0;
    if(p==NULL)
        return 0;
    if(p->data < N)
    {
        counter ++;
    }
    counter+=LesserThanN(p->left,N)+LesserThanN(p->right,N);
    return counter;
}


//Q:9/Function to delete all leaf nodes in a BST
BST* DeleteLeafNodes(BST*p)
{
    if(p==NULL)
        return NULL;
    if(p->left==NULL && p->right==NULL)
        {
            free(p);
            return NULL;
        }
    p->left=DeleteLeafNodes(p->left);
    p->right=DeleteLeafNodes(p->right);
    return p;

}


//Q:10/Function to find sum of all nodes in a BST
int SumOfNodes(BST*p)
{
    int sum=0;
    if(p==NULL)
        return 0;
    else
    {
        sum=p->data;
    }
    sum+=SumOfNodes(p->left)+SumOfNodes(p->right);
    return sum;
}


//Q:11/Function to find if a given tree is a BST or not
BOOL BstOrNot(BST*p)
{
    if(p==NULL)
        return;
    if(p->left->data < p->data && p->right->data > p->data)
        return true;
    BstOrNot(p->left);
    BstOrNot(p->right);
}


//Q:12/Function reverse right and left childs in  a given  tree
void ReverseTree(BST*p)
{
    if(p==NULL)
        return;
    BST*temp=p->right;
    p->right=p->left;
    p->left=temp;

    ReverseTree(p->left);
    ReverseTree(p->right);
}


//Q:13/Height of a tree
int maxDepth(BST* node)
{
   if (node==NULL)
       return -1;
   else
   {

       int lDepth = maxDepth(node->left);
       int rDepth = maxDepth(node->right);


       if (lDepth > rDepth)
           return(lDepth+1);
       else return(rDepth+1);
   }
}

//Q:14/Function to print nodes whose value is between two given integer
void NodesBetweenNandM(BST*p,int N,int M)
{
    if(p==NULL)
        return 0;
    if(p->data >N && p->data<M)
    {
        printf("%d\t",p->data);
    }
    NodesBetweenNandM(p->left,N,M);
    NodesBetweenNandM(p->right,N,M);
}


//Function find depth of a given node
int FindDepth(BST*pRoot,int toFind)
{
    int count =0;
    int count1 =0;
    int count2 =0;
    while(pRoot != NULL)
    {
        if(toFind == pRoot->data)
           return count += count1+count2;

        if(toFind < pRoot->data)
        {
            count1 ++;
            pRoot=pRoot->left;
        }
        else
        {
             count2 ++;
             pRoot=pRoot->right;
        }
    }
return count;
}





