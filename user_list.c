#include"user.h"
#include"user_list.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void initListUser(struct UserList ** list)
{
    *list=NULL;
}
/*_____________________________________________________________*/

void insertUser(struct UserList**list, struct User **user)
{
    struct UserList * node = malloc(sizeof(struct UserList));

    if(node==NULL)
    {
        fprintf(stderr,"failed allocation memory\n");
        exit(1);
    }

    node->user=*user;
    node->next=*list;

    *list=node;
}
/*_____________________________________________________________*/
void printList(struct UserList ** list)
{
    struct UserList * current = *list;
    while(current!=NULL)
    {
        struct User * user = current->user;
        printUser(&user);

        current=current->next;
    }
}

/*_____________________________________________________________*/

void freeList(struct UserList ** list)
{
    struct UserList * current = *list;
    while(current!=NULL)
    {
        struct UserList *temp = current;
        current=current->next;

        freeUser(&(temp->user));
        free(temp);
    }
}
