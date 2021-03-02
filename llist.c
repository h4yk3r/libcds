#include "cds.h"

list* initList ()
{
    list *L;
    L = (list*)malloc(sizeof(list));
    L->head = (node*)malloc(sizeof(node));
    L->head->next = NULL;
    L->rear = L->head;
    return L;
}

node* insertRear (ElemType num, list *L)
{
    node *temp;
    temp = (node*)malloc(sizeof(node));
    temp->data = num;
    temp->next = NULL;
    L->rear->next = temp;
    L->rear = temp;
    return temp;
}

void PrintList (list *L)
{
    node *p = L->head->next;
    while (p!=NULL) {
        printf("%d#", p->data);
        p = p->next;
    }
    printf("\n");
}

node* searchList (list *L, ElemType t)
{
    node *p = L->head->next;
    while (p!=NULL) {
        if ((p->data)==t) {
            break;
        }
        p = p->next;
    }
    return p;
}

node* searchPre (list *L, ElemType t)
{
    node *prep = L->head;
    node *p = L->head->next;
    while (p!=NULL) {
        if ((p->data)==t) {
            break;
        }
        prep = p;
        p = p->next;
    }
    return prep;
}

void deleteList (list *L, ElemType t)
{
    node *prep = searchPre(L, t);
    node *p = prep->next;
    if (p!=NULL) {
        prep->next = p->next;
        free(p);
    }
}
