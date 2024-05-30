#include <stdio.h>
#include "linkedlist.h"

int printInt (void *item, FILE *fp) {
  int number = *((int *)item);

  fprintf (fp, "%d\n", number);

  return 0;
}

int main() {

  linkedlist list;
  int one, two, three;

  one=1, two=2, three=3;

  initLL (&list);
  addHeadLL(&list, &one);
  addHeadLL(&list, &two);
  addHeadLL(&list, &three);

  printLL(&list, printInt);

  return 0;
}
