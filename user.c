#include"user.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



void initUser(struct User **user, int id, char * firstName,char *lastName,char *email,
                      char* address,char * phoneNumber,int age,int yearOfBirth)
{
    *user=malloc(sizeof(struct User));

    if(*user==NULL)
    {
        fprintf(stderr,"Error allocation memory\n");
        exit(1);
    }

    (*user)->id=id;
    (*user)->firstName=strdup(firstName);
    (*user)->lastName=strdup(lastName);
    (*user)->email=strdup(email);
    (*user)->address=strdup(address);
    (*user)->phoneNumber=strdup(phoneNumber);
    (*user)->yearOfBirth=yearOfBirth;
    (*user)->age=age;

}

/*_____________________________________________________________*/

void freeUser(struct User **user)
{
    if(*user!=NULL)
    {
        free((*user)->firstName);
        free((*user)->lastName);
        free((*user)->email);
        free((*user)->address);
        free((*user)->phoneNumber);

        free(*user);

        *user=NULL;
    }
}

/*_____________________________________________________________*/

void printUser(struct User **user)
{
    if(*user==NULL)
    {
        printf("User{}\n");
        return;
    }
    printf("User{id=%d, firstName='%s', lastName='%s', email='%s', address='%s', phoneNumber='%s', age=%d, yearOfBirth=%d }\n",
            (*user)->id,
            (*user)->firstName,
            (*user)->lastName,
            (*user)->email,
            (*user)->address,
            (*user)->phoneNumber,
            (*user)->age,
            (*user)->yearOfBirth
             );
}