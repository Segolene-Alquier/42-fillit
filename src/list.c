/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 11:20:57 by bafraiki          #+#    #+#             */
/*   Updated: 2018/12/20 14:07:23 by bafraiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_lst_size(t_shape **lst)
{
	int size;
	t_shape *elem;

	size = 0;
	elem = *lst;
	if (!(lst))
		size  = 0;
	while (elem)
	{
		size++;
		elem = elem->next;
	}
	return (size);
}

void	ft_print_list(t_shape **lst)
{
	t_shape *elem;

	elem = *lst;
	while (elem)
	{
		printf("%d %d\n%d %d\n%d %d\n%d %d\n", elem->form[0][0], elem->form[0][1], elem->form[1][0], elem->form[1][1], elem->form[2][0], elem->form[2][1], elem->form[3][0], elem->form[3][1]);
		printf("elem->letter : %c\n\n", elem->letter);
		elem = elem->next;
	}
}

t_shape *ft_new(char shape[4][2],  t_grid *nb)
{
	t_shape *new;
	int i;

	i = 0;
	if ((new = (t_shape*)malloc(sizeof(t_shape))) == NULL)
		exit(EXIT_FAILURE);
	while (i < 4)
	{
		ft_add_value(new->form, shape[i][0], shape[i][1], i);
		i++;
	}
	new->height = nb->max_y - nb->min_y;
	new->width = nb->max_x - nb->min_x;
	new->next = NULL;
	return (new);
}

void	ft_add_end(t_shape **lst, t_shape *new)
{
	t_shape	*elem;
	int		i;

	if (new == NULL)
		exit(EXIT_FAILURE);
	if (!(*lst) && (*lst = new) != NULL)
		new->letter = 'A';
	else
	{
		i = 1;
		elem = *lst;
		while (elem->next)
		{
			elem = elem->next;
			i++;
		}
		elem->next = new;
		new->letter = i + 'A';
	}
}