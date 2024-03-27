#ifndef __TASKOP_H__
#define __TASKOP_H__
#include "todo.h"

//Add a new task
todo* add(todo* list, const char* task_name, const char* task_description);

//Mark a task to be done
int mark_done(todo* list, int id);

//Remove a task, using the task id to locate the task
int remove_task_from_id(todo* list, int id);

//Free the task list
void free_list(todo* list);

//Load tasks from a file
todo* load_tasks(const char* filename);

//Save the task list to a given filename
int save_list(todo* list, const char* filename);

#endif