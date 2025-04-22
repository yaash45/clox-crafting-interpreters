#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "doublelinkedlist.h"

int main(void)
{
    int size1 = 6;
    char *data1 = (char *)malloc(sizeof(char) * size1);
    *(data1 + 0) = 'F';
    *(data1 + 1) = 'i';
    *(data1 + 2) = 'r';
    *(data1 + 3) = 's';
    *(data1 + 4) = 't';
    *(data1 + 5) = '\0';

    int size2 = 7;
    char *data2 = (char *)malloc(sizeof(char) * size2);
    *(data2 + 0) = 'S';
    *(data2 + 1) = 'e';
    *(data2 + 2) = 'c';
    *(data2 + 3) = 'o';
    *(data2 + 4) = 'n';
    *(data2 + 5) = 'd';
    *(data2 + 6) = '\0';

    int size3 = 6;
    char *data3 = (char *)malloc(sizeof(char) * size3);
    *(data3 + 0) = 'T';
    *(data3 + 1) = 'h';
    *(data3 + 2) = 'i';
    *(data3 + 3) = 'r';
    *(data3 + 4) = 'd';
    *(data3 + 5) = '\0';

    int size4 = 7;
    char *data4 = (char *)malloc(sizeof(char) * size4);
    *(data4 + 0) = 'F';
    *(data4 + 1) = 'o';
    *(data4 + 2) = 'u';
    *(data4 + 3) = 'r';
    *(data4 + 4) = 't';
    *(data4 + 5) = 'h';
    *(data4 + 6) = '\0';

    int size5 = 6;
    char *data5 = (char *)malloc(sizeof(char) * size5);
    *(data5 + 0) = 'F';
    *(data5 + 1) = 'i';
    *(data5 + 2) = 'f';
    *(data5 + 3) = 't';
    *(data5 + 4) = 'h';
    *(data5 + 5) = '\0';

    Node n1 = createNode(data1);
    Node n2 = createNode(data2);
    Node n3 = createNode(data3);
    Node n4 = createNode(data4);
    Node n5 = createNode(data5);

    insertAfter(&n1, &n2);
    insertAfter(&n2, &n3);
    insertAfter(&n3, &n4);
    insertAfter(&n4, &n5);

    printf("Traversing forward:\n");
    traverseForward(&n1);

    printf("\nTraversing backward:\n");
    traverseBackward(&n5);

    char data_to_find[sizeof(data2)];
    strcpy(data_to_find, data2);
    Node *found_node = findData(&n1, data_to_find);

    printf("\nSearching...\n");

    if (found_node == NULL)
    {
        printf("Not found!\n");
        exit(0);
    }

    printf("Found: %s\n", found_node->data);

    deleteNode(&n3);

    traverseForward(&n1);

    free(data1);
    free(data2);
    free(data3);
    free(data4);
    free(data5);
}
