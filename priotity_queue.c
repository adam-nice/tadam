
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "priority_queue.h"

typedef struct node {
    void* element;
    struct node* next_node;
}*Node;

struct PriorityQueue_t {
    Node first_node;
    int num;

    PQElement(*CopyPQElement)(PQElement) copyElement;
    PQElementPriority(*CopyPQElementPriority)(PQElementPriority) elementPriority ;
    void(*FreePQElement)(PQElement) freeElement;
    void(*FreePQElementPriority)(PQElementPriority) freeElementPriority;
    bool(*EqualPQElements)(PQElement, PQElement) SequalElements;
    int(*ComparePQElementPriorities)(PQElementPriority, PQElementPriority) compareElementPriorities;
};

PriorityQueue pqCreate(CopyPQElement copy_element,
                       FreePQElement free_element,
                       EqualPQElements equal_elements,
                       CopyPQElementPriority copy_priority,
                       FreePQElementPriority free_priority,
                       ComparePQElementPriorities compare_priorities){
                          
                           PriorityQueue queue;
                           queue = malloc(sizeof(queue));
                            if (!queue) {
                                return NULL;
                            }
                            
                            queue->copyElement = copyElement;
                            return queue;
                       }



