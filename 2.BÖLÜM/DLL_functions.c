#include "dll.h"

DLLI*AddItemToEnd(DLLI*Head,int x)
{
    DLLI*pNew=malloc(sizeof(DLLI));
    pNew->next=NULL;
    pNew->prev=NULL;
    pNew->data=x;

    if(Head==NULL)
        return pNew;
    else
    {
        DLLI*pTemp=Head;
        while(pTemp->next != NULL)
        {
            pTemp=pTemp->next;
        }
        pTemp->next=pNew;
        pNew->prev=pTemp;
        return Head;
    }
}

void PrintList(DLLI* Head)
{
    while (NULL != Head)
    {
        printf("%d\t", Head->data);
        Head = Head->next;
    }
}

DLLI*FindMidElement(DLLI*Head)
{
    int counter=0;
    int i=0;
    DLLI*pTemp=Head;
    DLLI*pMid=Head;
    while(pTemp != NULL)
    {
        pTemp=pTemp->next;
        counter++;
    }
    while(i < counter/2)
    {
        pMid=pMid->next;
        i++;
    }
    printf("Middle element of the list is %d\n",pMid->data);
}


DLLI*ChangeNodes(DLLI*Head,int i,int j)
{
    DLLI*p=Head;
    DLLI*q=Head;

    while(p->next->data != i)
        p=p->next;

     while(q->next->data != j)
        q=q->next;

    DLLI*p1=p->next;
    DLLI*p2=p1->next;
    p1->next->prev=NULL;
    p1->next=NULL;
    p1->prev=NULL;
    p->next=NULL;

    DLLI*q1=q->next;
    DLLI*q2=q1->next;
    q1->next->prev=NULL;
    q1->next=NULL;
    q1->prev=NULL;
    q->next=NULL;

    p->next=q1;
    q1->prev=p;
    q1->next=p2;
    p2->prev=q1;

    q->next=p1;
    p1->prev=q;
    p1->next=q2;
    q2->prev=p1;

    return Head;

}

void CutPaste(DLLI*Cut,DLLI*Paste,int i,int j,int m)//Cut the DLLI*Cut list from  index i to j and paste to DLLI*Paste from index m
{
    DLLI*Head=Cut;
    int count=0;
    while(count != i )
    {
        Head=Head->next;
        count ++;
    }

    DLLI*Tail=Cut;
    int counter=0;
    while(counter != j )
    {
        Tail=Tail->next;
        counter ++;
    }

    Head->prev->next=NULL;
    Head->prev=NULL;
    Tail->next->prev=NULL;
    Tail->next=NULL;


    DLLI*p=Paste;
    int x=0;
    while(x != m )
    {
        p=p->next;
        x ++;
    }
    DLLI*p2=p->next;
    p->next=Head;
    Head->prev=p;
    p2->prev=Tail;
    Tail->next=p2;

}



