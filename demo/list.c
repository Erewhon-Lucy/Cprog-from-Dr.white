//disable warning for VC++ compiler
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//type declarations
typedef int value_type;
typedef value_type* value_pointer;

typedef struct _node
{
    value_type data;
    struct _node *next;
} node, *nodeptr;

typedef struct 
{
    nodeptr head;
    size_t size;
} list, *listptr;

typedef void (*callback)(value_pointer);
typedef void (*compare)(value_pointer, value_pointer);

//operation prototype declarations
void list_init(listptr l);
bool list_push_front(listptr l, value_pointer vp);
bool list_push_back(listptr l, value_pointer vp);
bool list_insert(listptr l, size_t pos, value_pointer vp);
size_t list_create(listptr l, value_pointer a);
size_t list_size(listptr l);
bool list_empty(listptr l);
void list_clear(listptr l);
void list_traverse(listptr l, callback cb);
void list_sort(listptr l, compare comp_f);

//operation definitions
void list_init(listptr l)
{
}

bool list_push_front(listptr l, value_pointer vp)
{
    return true;
}

bool list_push_back(listptr l, value_pointer vp)
{
    return true;
}

bool list_insert(listptr l, size_t pos, value_pointer vp)
{
    return true;
}

size_t list_create(listptr l, value_pointer a)  //a is an array
{
    return 0;
}

size_t list_size(listptr l)
{
    return 0;
}

bool list_empty(listptr l)
{
    return true;
}

void list_clear(listptr l)
{

}

void list_traverse(listptr l, callback cb)
{

}

void list_sort(listptr l, compare comp_f)
{
    
}

int main()
{
    int a[] = {54, 77, 23, 36, 19, 97, 41, 21, 33, 69};

    return 0;
}

