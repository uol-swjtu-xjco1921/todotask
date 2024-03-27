#include"userinterface.h"
#include"todo.h"

//Show the user menu
void display_menu()
{
    printf("1 - Add new task\n2 - Complete task\n3 - Show todo list\n4 - Show complete items\n5 - Remove an item\n6 - Exit\n");
    //return the number of available choices
    return 6;
}

//Displace the list of tasks
void display(todo* list)
{
    //Traverse the list to display the tasks
    //Take care of special cases like empty list or a single item list
}

//Displace a list of tasks with a status of done (0 or 1)
int display_bool(todo* list, int done)
{
    // set up counter
    // traverse the list
    // if item->done == done
        // print i+1 - name - description (human readable numbers)
        // increment counter
    // return the number of done/not done items
}

//remove a task from the list
int remove(todo* list)
{
    //Ask user to enter the id of the task to be removed
    //Call the internal function to remove the task
    int status = remove_task_from_id(id);
    //Inform the user if the task has been successfully removed
}

//add a new task
todo* add_task(todo* list)
{
    //ask user about the task information
    //call the internal function to add a new task to the list
    todo* l = add(list, name, description);
    //Inform the user if the task has been successfully added
    return l;
}

//get the user choice from the menu
int get_choice(int size)
{
    // fgets + sscanf
    // validate between 1 -> size+1 (human readable)
    // return number or -1
}

//Mark a task to be done
int done(todo* list){
    //Ask the user about which task to be marked as done
    //Pass the task id to the internal function
    return mark_done(list, id)
}
