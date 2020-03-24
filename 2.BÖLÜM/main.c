#include <stdio.h>
#include <stdlib.h>
#include "sll.h"
#include "dll.h"


int main()
{
    SLLI*pHead=NULL;
    SLLI*Neww=NULL;
    DLLI*Head=NULL;
    DLLI*Second=NULL;
    int i;
    for(i=1;i<11;i++)
    {
         pHead=AddItemtoEnd(pHead,i*10);
    }

    Neww=AddItemtoEnd(Neww,6);
    Neww=AddItemtoEnd(Neww,5);
    Neww=AddItemtoEnd(Neww,4);
    Neww=AddItemtoEnd(Neww,0);
    Neww=AddItemtoEnd(Neww,0);
    Neww=AddItemtoEnd(Neww,4);
    Neww=AddItemtoEnd(Neww,5);
    Neww=AddItemtoEnd(Neww,6);


    /*for(i=1;i<10;i++)
    {
         Head=AddItemToEnd(Head,i*10);
    }

    for(i=1;i<10;i++)
    {
         Second=AddItemToEnd(Second,i*7);
    }*/
    //Printlist(pHead);
    //printf("\n");
    //pHead=OddNodes(pHead);
    //pHead=DeleteEven(pHead);
    //pHead=AddInOrder(pHead,100);
    //pHead=DeletekthNode(pHead,2);
    //pHead=DeleteNextNode(pHead,90);
    //pHead=MoveNode(pHead,60,3);
    //Head=FindMidElement(Head);
    //Head=ChangeNodes(Head,20,40);
    //PrintList(Head);
    //printf("\n");
    //CutPaste(Head,Second,1,6,9);
    //pHead=PrimeFactor(77);
    //pHead=AddMultipleofN(pHead,8);
    //printReverse( pHead) ;
    //Printlist(pHead);
    //IsIdentical(pHead,Neww);
    //SameElements(pHead,Neww);
    IsPalindrome(Neww);


}
