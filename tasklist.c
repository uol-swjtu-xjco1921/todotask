#include<stdio.h>
#include<stdlib.h>

#include"todo.h"
#include"taskop.h"
#include"userinterface.h"

int main(int argc, char *argv[])
{

    // load a list of tasks
    todo* list = load_tasks(argv[1]);

    //displace menu
    int num_choice = display_menu();
   
    int choice;
    do{
        printf("Enter menu option: \n");
    }while ((choice=get_choice(num_choice))==-1);

    int rep = 1;

    while(rep){

        // switch on choice.
        // option 1: add new
        // add a new todo* to the array
        list = add_task(list);

        // option 2: Mark as done
        done(list);
        int size = 0;
        int check;
        check = display_bool(list, size);
        // make sure check is > 0 - don't bother if == 0.

        // option 3: Show all to-do
        display_bool(list, 0);

        // option 4: show done
        display_bool(list, 1);
        // option 5: 
        remove(list);

        // option 5: exit
        save_list(list, argv[1]);
        free_list(list);

        do{
        printf("Enter menu option: \n");
        }while ((choice=get_choice(num_choice))==-1);
    }

    return 0;

}