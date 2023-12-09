#include"user.h"
#include"user_list.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc,char **argv)
{
    struct User * user =NULL;
    struct User * user1=NULL;
    
    struct UserList* list =NULL;
    
    initUser(&user,1,"albert","hetro","km@gmail.com","4 street nothing","234567873456",26,1995);
    initUser(&user1,2,"john","doe","john@gmail.com","rue de bougen","045637854544",34,1997);


    initListUser(&list);

    insertUser(&list,&user1);
    insertUser(&list,&user);


    printList(&list);

    freeList(&list);
    freeUser(&user);
    freeUser(&user1);
    return 0;
}