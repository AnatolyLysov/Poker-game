// Программа-пример №1 из главы 7 Руководства
// по С для новичков, 3-е издание
// Файл Chapter7ex1.c
/* Это простая программа-пример, перечисляющая трех
детей, их потребности в школьных принадлежностях,
а также стоимость их приобретения */

#include <stdio.h>
#include <string.h>
#include "chapter7ex1.h"

int main() {
    int age;
    char childname[15];
    printf("%s\n", childname);

     strcpy(childname, "Тимофей");

     printf("\n%s имеют %d детей\n ", FAMILY, KIDS);

     age = 11;
     printf("Старший сын, %s, %d лет.\n", childname, age);

    strcpy(childname, "Николай");

     age = 6;
    printf("Средний сын, %s, %d.\n", childname, age);

    age = 3;
    strcpy(childname, "Борис");
    printf("Младший сын, %s, %d.\n", childname, age);
 
    return 0;
}