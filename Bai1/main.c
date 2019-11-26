#include "dsarraylist.h"
#include "dscomparepointer.h"
#include <stdio.h>

void insert_value(ArrayList *arrayList);
void append_value(ArrayList *arrayList);
void prepend_value(ArrayList *arrayList);
void remove_value(ArrayList *arrayList);
void find_index(ArrayList *arrayList);
void sort_list(ArrayList *arrayList);
void printf_arrayList(ArrayList arrayList);

void insert_value(ArrayList *arrayList){
    int i = arraylist_insert(arrayList, 4, 11);
    printf("%d\n", i);
}

void append_value(ArrayList *arrayList){
    int a = arraylist_append(arrayList, 12);
}

void prepend_value(ArrayList *arrayList){
    int p = arraylist_prepend(arrayList, 10);
}

void remove_value(ArrayList *arrayList){
    arraylist_remove(arrayList, 4);
}

void find_index(ArrayList *arrayList){
    int index = arraylist_indexOf(arrayList,pointerEqual, 12);
    printf("%d\n", index);
}

void sort_list(ArrayList *arrayList){
    arraylist_sort(arrayList, pointerCompare);
}

void printf_arrayList(ArrayList arrayList){
    for(int i = 0; i < arrayList.length; i ++){
         printf("%d ",arrayList.data[i]);
    }
    printf("\n");
}
int main(){
    ArrayList *arrayList = arraylist_new(16);
    for(int i = 1; i <= 5; i ++){
        arraylist_append(arrayList, i);
    }
    insert_value(arrayList);
    append_value(arrayList);
    prepend_value(arrayList);
    remove_value(arrayList);
    find_index(arrayList);
    printf("\n");
    sort_list(arrayList);
    printf_arrayList(*arrayList);
    return 0;
}

