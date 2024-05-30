#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "struct_demo.h"

// Version 1
// struct person_t {
//   char *fname;
//   char *lname;
//   unsigned int age;
// };
// typedef struct person_t Person;

// // Version 2
// typedef struct person_t {
//   char *fname;
//   char *lname;
//   unsigned int age;
// } Person;
//
// // Version 3
// // This is called anonymous struct
// typedef struct {
//   char *fname;
//   char *lname;
//   unsigned int age;
// } Person;

// forward declaration
//void resetPerson(struct person_t *person);
//void printPerson(Person *person);

// This will fail without forward declaration
void test() {
    printPerson(NULL);
}

// pass only the pointer to struct
void printPerson(Person *person) {
    // do nothing if the person is NULL
    if (!person) {
        printf("Firstname = %s\n", person->fname);
        // Or
        //printf("Firstname = %s\n", (*person).fname);
        printf("Lastname = %s\n", person->lname);
        printf("age = %u\n", person->age);
    }
}

// pass the entire struct
void printPerson(Person person) {
    // do nothing if the person is NULL
    if (!person) {
        printf("Firstname = %s\n", person.fname);
        printf("Lastname = %s\n", person.lname);
        printf("age = %u\n", person.age);
    }
}

void resetPerson(struct person_t *person) {
    strcpy(person->fname, "");
    strcpy(person->lname, "");
    person->age = 0;
    // (*person).age = 0;
}

int main() {
    struct person_t somePerson;
    Person somePerson;

    printf("%lu\n", sizeof(struct person_t));
    //printf("%d\n", MAX_STRLEN);

    somePerson.fname = (char *)malloc(500);
    somePerson.lname = (char *)malloc(500);
    strcpy(somePerson.fname , "Sunsern");
    strcpy(somePerson.lname , "C");
    somePerson.age = 12;

    //somePerson.fname = "Sunsern"; <- Wrong!
    printf("Firstname = %s\n", somePerson.fname);
    printf("Lastname = %s\n", somePerson.lname);
    printf("age = %u\n", somePerson.age);

    resetPerson(&somePerson);

    struct person_t *dynamicPerson;
    dynamicPerson = (struct person_t *)malloc(sizeof(struct person_t));

    // strcpy((*dynamicPerson).fname,"Sunsern");
    // strcpy((*dynamicPerson).lname,"C");
    // (*dynamicPerson).age = 12;

    strcpy(dynamicPerson->fname,"Sunsern");
    strcpy(dynamicPerson->lname,"C");
    dynamicPerson->age = 12;

    resetPerson(dynamicPerson);

    free(dynamicPerson);
    dynamicPerson = NULL;

}
