#include "libft.h"

t_list *ft_lstmap(t_list **lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*head;

	if (!lst || !f || del)
		return ;
	head = NULL;
	while (*lst)
	{
		new_lst = ft_lstnew(f(lst->new));
		if (!new_lst)
			ft_lstclear(&head, del);
		ft_lstadd_back(&head, new_lst);
		lst = lst->next;
	}
	return (head);
}