#ifndef __TODO_H__
#define __TODO_H__

#define NAME_LENGTH 100
#define DESCRIPTION_LENGTH 1000

// Struct for to-do items

typedef struct _todo {
    char name[NAME_LENGTH]; //Name of the task
    char description[DESCRIPTION_LENGTH]; //description
    int done; //mark if a task is done
    struct _todo* next; //point to the next task on the list
} todo;

#endif