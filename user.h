#ifndef __USER__H
#define __USER__H

    struct User{
        int id;
        char * firstName;
        char * lastName;
        char * email;
        char * address;
        char * phoneNumber;
        int age ;
        int yearOfBirth;

    };


    void initUser(struct User **user, int id, char * firstName,char *lastName,char *email,
                      char* address,char * phoneNumber,int age,int yearOfBirth);


    void freeUser(struct User **user);


    void printUser(struct User **user);


#endif