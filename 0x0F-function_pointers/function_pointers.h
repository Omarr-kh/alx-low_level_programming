#ifndef main_h
#define main_h

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
