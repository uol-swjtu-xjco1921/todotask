#include"taskop.h"

//Add a new task
todo* add(todo* list, const char* task_name, const char* task_description)
{
    //Check the precondition of the list
    //Traverse to the end of the list
    //Create a new todo item
    //Copy the task_name and task_description to the todo item
    //Mark the task to be undone
    //Attach the item the list
    //return the head of the list
}

//Mark a task to be done
int mark_done(todo* list, int id)
{   
    //Check the precondition of the list
    //Set up counter
    //Traverse the list
    //mark the idth item from the list to be done
    //Return 0 if successful, -1 if failed
}

//Remove a task, using the task id to locate the task
int remove_task_from_id(todo* list, int id)
{
    //Check the precondition of the list
    //Set up counter
    //Traverse the list
    //remove the idth item from the list
    //Return 0 if successful, -1 if failed
}

//Free the task list
void free_list(list) {
    //Check the precondition of the list
    //call free to release the memory
}

//Load tasks from a file
todo* load_tasks(const char* filename) {
    //Check the precondition of the file
    //Read the file and allocate todo item
    //Added the loaded items into a linked list
    //Return the head of the linked list
}

//Save the task list to a given filename
int save_list(todo* list, const char* filename)
{
    //Check the precondition of the file
    //Traverse the list
    //Save the items into file
    //Return 0 if successful, <0 otherwise
}