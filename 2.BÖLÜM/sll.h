#ifndef SLL_H
#define SLL_H
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

typedef struct SinglyLinkedListItem
{
    int data;
    struct SinglyLinkedListItem*next;
}SLLI;



SLLI*AddItemtoEnd(SLLI*pHead,int x);
void Printlist(SLLI*pHead);
SLLI*DeleteItem(SLLI*pHead,int toDel);
int FindMin(SLLI*pHead);
void DeleteSecond(SLLI*pHead);
SLLI*OddNodes(SLLI*pHead);
SLLI*DeleteEven(SLLI*pHead);
SLLI*AddBeforeEnd(SLLI*pHead,int x);
SLLI*AddInOrder(SLLI*pHead,int ToAdd);
SLLI*DeletekthNode(SLLI*pHead,int k);
SLLI*DeleteNextNode(SLLI*pHead,int x);
SLLI*MoveNode(SLLI*pHead,int k,int i);
SLLI*PrimeFactor(int N);
SLLI*AddMultipleofN(SLLI*p,int N);
void printReverse(SLLI* head) ;
void IsIdentical(SLLI*p,SLLI*q);
void SameElements(SLLI*p,SLLI*q);
void IsPalindrome(SLLI*p);


#endif // SLL_H_INCLUDED
