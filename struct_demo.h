#define MAX_STRLEN 256

typedef struct person_t {
    char fname[MAX_STRLEN];
    char lname[MAX_STRLEN];
    unsigned int age;
} Person;

// Forward declarations
void resetPerson(struct person_t *person);
void printPerson(Person *person);
