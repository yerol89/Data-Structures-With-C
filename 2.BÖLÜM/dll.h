#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyLinkedListItem {
    int data;
    struct DoublyLinkedListItem* prev;
    struct DoublyLinkedListItem* next;
}DLLI;

DLLI*AddItemToEnd(DLLI*Head,int x);
void PrintList(DLLI* Head);
DLLI*FindMidElement(DLLI*Head);
DLLI*ChangeNodes(DLLI*Head,int i,int j);
void CutPaste(DLLI*Cut,DLLI*Paste,int i,int j,int m);

#endif // DLL_H_INCLUDED
