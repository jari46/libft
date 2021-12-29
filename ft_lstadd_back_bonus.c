#include "libft_bonus.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return ;
    if (*lst == NULL)
        *lst = new;
    else
        ft_lstlast(*lst)->next = new;
}