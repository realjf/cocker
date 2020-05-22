#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct list_head {
    struct list_head *next, *prev;
};

#endif // LIST_H_INCLUDED
