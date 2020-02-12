#include <stdio.h>
#include <stdlib.h>
#include "sll.h"

int main()
{
    SLLI*pHead=NULL;
    int i;
    for(i=1;i<11;i++)
    {
         pHead=AddItemtoEnd(pHead,i*10);
    }
    //Printlist(pHead);
    //printf("\n");
    //pHead=OddNodes(pHead);
    //pHead=DeleteEven(pHead);
    //pHead=AddInOrder(pHead,100);
    //pHead=DeletekthNode(pHead,2);
    //pHead=DeleteNextNode(pHead,90);
    //pHead=MoveNode(pHead,60,3);
    Printlist(pHead);

}
