# Cycle_detector
The function named cycle_detector takes a const t_list *list as argument, and check if the given linked list contains no cycles.

A cycle is defined when you go at least twice through the same link, when you travel inside a linked list.

This function should returnw 1 if it detects a cycle inside the given linked list, otherwise it returns 0.

This function should be prototyped like this: 

    int        cycle_detector(const t_list *list)

The type t_list is:

    typedef struct     s_list 
    {
        int            data;
        struct s_list  *next;
    }                  t_list;

This type will be included in a header named "list.h". You don't have to turn-in your "list.h", we will use ours during the evaluation.