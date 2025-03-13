#include "../ft_lst.h"
#include "assert.h"
#include <stdio.h>
#include <stdlib.h>

void test(int type, void *data)
{
    t_list *list = ft_lstnew(type, data);
    if (list == NULL)
        return 0;
    assert(list->type == type);
    assert(list->data == data);
    free(list);
}

int main()
{
    int data = 42;
    test(0, NULL);
    test(1, &data);
    printf("%s OK\n", __FILE__);
    return 0;
}