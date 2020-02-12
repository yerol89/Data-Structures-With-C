#ifndef SLL_H
#define SLL_H
#include <stdio.h>
#include <stdlib.h>

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
#endif // SLL_H_INCLUDED
