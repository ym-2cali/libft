#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	last;
	int	i;

	last = ft_lstsize(lst) - 1;
	i = 0;
	while (i < last)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
