#include "sll.h"

SLLI*AddItemtoEnd(SLLI*pHead,int x)
{
    SLLI*New=malloc(sizeof(SLLI));
    New->data=x;
    New->next=NULL;

    if(pHead==NULL)
        return New;
    else
    {
        SLLI*pTemp=pHead;
        while(pTemp->next != NULL)
            pTemp=pTemp->next;
        pTemp->next=New;
        return pHead;
    }
}


void Printlist(SLLI*pHead)
{
    SLLI*temp=pHead;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

SLLI*DeleteItem(SLLI*pHead,int toDel)
{
    if(pHead==NULL)
        printf("List is empty!");
    SLLI*Del=pHead->next;
    SLLI*prev=pHead;
    if(toDel == pHead->data)
    {
        pHead=pHead->next;
        prev->next=NULL;
        free(prev);
    }
    else
    {
        while(Del->data != toDel )
        {
            prev=prev->next;
            Del=Del->next;
        }
        prev->next=Del->next;
        Del->next=NULL;
        free(Del);
    }
    return pHead;
}


int FindMin(SLLI*pHead)
{
    SLLI*pMin=pHead;
    int mini=pMin->data;
    while(pMin != NULL)
    {
        if(pMin->data < mini)
        {
            mini=pMin->data;
        }
        else
        {
            pMin=pMin->next;
        }
    }
    printf("Minimum value is %d",mini);
}


void DeleteSecond(SLLI*pHead)
{

    SLLI*Del=pHead->next;
    pHead->next=Del->next;
    Del->next=NULL;
    free(Del);

    return pHead;
}

SLLI*OddNodes(SLLI*pHead)
{
   int counter =1;
   SLLI*pTemp=pHead;
   SLLI*pList=NULL;
   SLLI*pNewHead=NULL;

   while(pTemp != NULL)
   {
        if(counter % 2 != 0)
        {
            if(pList==NULL)
            {
                pList=malloc(sizeof(SLLI));
                pList->data=pTemp->data;
                pList->next=NULL;
                pNewHead = pList;
            }
            else
            {
                pList->next = malloc(sizeof(SLLI));
                pList->next->data = pTemp->data;
                pList->next->next = NULL;
                pList = pList->next;
            }

       }
        pTemp = pTemp->next;
        counter++;
   }

        return pNewHead;
}

SLLI*DeleteEven(SLLI*pHead)
{
    SLLI*prev=pHead;
    SLLI*Del=prev->next;

    while(Del->next != NULL)
    {

            prev->next=Del->next;
            SLLI*Free=Del;
            Del=Del->next;
            Free->next=NULL;
            free(Free);

            Del=Del->next;
            prev=prev->next;

    }
    if(prev->next->next == NULL)
    {
         prev->next=NULL;
         free(prev);
    }

    return pHead;
}

SLLI*AddBeforeEnd(SLLI*pHead,int x)
{
    SLLI*pTemp=pHead;
    while(pTemp->next->next != NULL)
    {
         pTemp=pTemp->next;
    }

    SLLI*pNew=malloc(sizeof(SLLI));
    pNew->data=x;
    pNew->next=pTemp->next;
    pTemp->next=pNew;
    return pHead;
}

SLLI*AddInOrder(SLLI*pHead,int ToAdd)
{
    SLLI*pTemp=pHead;
    SLLI*New=malloc(sizeof(SLLI));
    New->data=ToAdd;
    New->next=NULL;

    if(ToAdd <=pHead->data)
    {
        pHead=New;
        pHead->next=pTemp;
    }
    else
    {
        while(pTemp->next->data <= ToAdd)
    {
        pTemp=pTemp->next;
        if(pTemp->next ==NULL)
        {
            break;
            pTemp->next=New;
        }

    }

    New->next=pTemp->next;
    pTemp->next=New;
    }

    return pHead;

}

SLLI*DeletekthNode(SLLI*pHead,int k)
{
    int counter=2;
    SLLI*pTemp=pHead;

    if(k==1)
    {
        pHead=pHead->next;
        pTemp->next=NULL;
        free(pTemp);
        return pHead;
    }
    else
    {
        while(counter != k)
        {
            pTemp=pTemp->next;
            counter++;
        }
        SLLI*pDel=pTemp->next;
        pTemp->next=pDel->next;
        pDel->next=NULL;
        free(pDel);
    }
    return pHead;
}

SLLI*DeleteNextNode(SLLI*pHead,int x)
{
    SLLI*pTemp=pHead;
    while(pTemp->data != x)
    {
        pTemp=pTemp->next;
        if(pTemp->next==NULL)
            break;
    }
    if(pTemp->next==NULL)
    {
         printf("The value you input does not exist in the list\n");
    }

    else
    {
        SLLI*pDel=pTemp->next;
        pTemp->next=pDel->next;
        pDel->next=NULL;
        free(pDel);
    }
    return pHead;
}

SLLI*MoveNode(SLLI*pHead,int k,int i)
{
    int j=0;
    SLLI*pTemp=pHead;
    if(k==pHead->data)
    {
        pHead=pHead->next;
        SLLI*pMove=pTemp;
        pTemp=pTemp->next;
        pMove->next=NULL;
        while(j<i-1)
        {
            pTemp=pTemp->next;
            j++;
        }
        SLLI*pIter=pTemp->next;
        pTemp->next=pMove;
        pMove->next=pIter;

    }
    else
    {
        while(pTemp->next->data != k)
        {
            pTemp=pTemp->next;
        }
        SLLI*pMove=pTemp->next;
        pTemp->next=pMove->next;
        pMove->next=NULL;
        while(j<i)
        {
            pTemp=pTemp->next;
            j++;
        }
        SLLI*pIter=pTemp->next;
        pTemp->next=pMove;
        pMove->next=pIter;

        }
        return pHead;
}



