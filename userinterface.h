#ifndef __USER_INTERFACE_H__
#define __USER_INTERFACE_H__

#include "todo.h"
#include "taskop.h"

//Display the user choices from the menu and return the number of choices supported
int display_menu();

//Displace the list of tasks
void display(todo* list);

//Displace a list of tasks with a status of done (0 or 1)
int display_bool(todo* list, int done);

//Remove a task
void remove(todo* list);

//Add a new task and return the head of the task list
todo* add_task(todo* list);

//Get user choice from the menu, return -1 if the user choose to exit
int get_choice(int size);

//Mark a task to be done
int done(todo* list);

#endif