#include "libft.h"

int main()
{
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));


    node1->next = node2;
    node1->content = "hello1";

    node2->next = node3;
    node2->content = "hello2";

    node3->next = NULL;
    node3->content = "hello3";

    printf("this is node 2 from node 1: %so", (char *)node2->content);
}