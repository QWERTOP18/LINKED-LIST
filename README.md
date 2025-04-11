# List Library

This repository provides a linked list library implemented in C. The library includes functions for list creation, modification, iteration, and conversion.

## Table of Functions

### List Operations

| Function Name      | Description                              | Memory Allocation |
| ------------------ | ---------------------------------------- | ----------------- |
| `ft_lst_at`        | Retrieves the nth element of the list.   |                   |
| `ft_lst_find`      | Searches for an element in the list.     |                   |
| `ft_lst_from_strs` | Creates a list from an array of strings. | 　　✅            |
| `ft_lstlast`       | Returns the last element of the list.    |                   |
| `ft_lstnew`        | Creates a new list element.              | 　　✅            |
| `ft_lstsize`       | Returns the size of the list.            |                   |

### List Modifiers

| Function Name           | Description                               | Memory Allocation |
| ----------------------- | ----------------------------------------- | ----------------- |
| `ft_lstadd_back`        | Adds an element to the end of the list.   |                   |
| `ft_lstadd_front`       | Adds an element to the front of the list. |                   |
| `ft_lstclear`           | Clears the list and frees memory.         | 　　✅            |
| `ft_lstdel_front`       | Deletes the first element of the list.    | 　　✅            |
| `ft_lstdelone`          | Deletes a single element from the list.   | 　　✅            |
| `ft_lstmerge`           | Merges two lists.                         |                   |
| `ft_lstremove_if`       | Removes elements matching a condition.    | 　　✅            |
| `ft_lstreverse`         | Reverses the list.                        |                   |
| `ft_lstsort`            | Sorts the list.                           |                   |
| `ft_sorted_list_insert` | Inserts an element in a sorted list.      | 　　✅            |

### Iterators & Maps

| Function Name       | Description                                         | Memory Allocation |
| ------------------- | --------------------------------------------------- | ----------------- |
| `ft_lst_foreach`    | Applies a function to each element.                 |                   |
| `ft_lst_foreach_if` | Applies a function to elements meeting a condition. |                   |
| `ft_lstmap`         | Creates a new list by applying a function.          | 　　✅            |

### Conversion

| Function Name     | Description                             | Memory Allocation |
| ----------------- | --------------------------------------- | ----------------- |
| `ft_list_to_strs` | Converts a list to an array of strings. | 　　✅            |

## Compilation

To compile the library, use the following command:

```sh
make
```

## Usage

Include `ft_lst.h` in your C project and link against `list.a` to use the functions.

```c
#include "ft_lst.h"
#include <stdio.h>

void print_data(void *data) {
    printf("%s\n", (char *)data);
}

int main(void) {
    t_list *list = ft_lstnew(0, "Hello");
    ft_lstadd_back(&list, ft_lstnew(0, "World"));
    ft_lst_foreach(list, print_data);
    ft_lstclear(&list, NULL);
    return 0;
}
```
