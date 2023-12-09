#ifndef __USER_LIST__H
#define __USER_LIST__H
    #include"user.h"

    struct UserList{
        struct User * user;
        struct UserList * next;
    };


    void initListUser(struct UserList ** list);
    void insertUser(struct UserList**list, struct User **user);
    void printList(struct UserList ** list);
    void freeList(struct UserList ** list);

#endif