#ifndef FILA_H
#define FILA_H

#include <stdlib.h>
#include <stdio.h>

typedef struct item{
    int value;
    struct item* next;
    struct item* prev;

} ITEM;

typedef struct {
    ITEM *first;
    ITEM *last;
    int size;
} FILA;

FILA fila;

inline void init(){
    fila.size = 0;
    fila.first = NULL;
    fila.last = NULL;
}

inline int empty(){
    return fila.size == 0;
}

inline void insert(int val){
    ITEM * item = (ITEM*) malloc( sizeof(ITEM) );
    if(item == NULL) return;
    item->value = val;
    item->next = NULL;
    if(fila.first == NULL){
        fila.first = item;
        fila.last = item;
        item->prev = NULL;
    }else{
        fila.last->next = item;
        item->prev = fila.last;
        fila.last = item;
    }
    fila.size++;
}

inline void remove_last(){
    if(empty()) return;

    ITEM* last = fila.last;
    fila.last = last->prev;
    if(fila.last != NULL)
        fila.last->next = NULL;
    fila.size--;
    free(last);
}

inline void remove_value( ITEM* it, int value ){
    if(it == NULL) return;
    if(it->value == value){
        fila.size--;
        ITEM* prev = it->prev;
        ITEM* next = it->next;
        if(prev != NULL)
            prev->next = next;
        else
            fila.first = next;
        if(next != NULL)
            next->prev = prev;
        else
            fila.last = prev;
        free(it);
        return;
    }
    remove_value(it->next, value);
}

inline void clear(ITEM* it){
    if(it == NULL) {
        fila.first = NULL;
        fila.last = NULL;
        fila.size = 0;
        return;
    }
    ITEM *next = it->next;
    free(it);
    clear(next);
}


inline void print_fila(){
    ITEM* it = fila.first;
    while(it != NULL){
        printf("%d ", it->value);
        it = it->next;
    }
    printf("\n");
}

#endif
