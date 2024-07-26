#include "ft_list.h"
int ft_list_size(t_list *begin_list)
{
	int i = 0;
	if (begin_list == 0)
		return (i);
	while (begin_list->next)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}