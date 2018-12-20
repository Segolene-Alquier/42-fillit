/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 11:20:57 by bafraiki          #+#    #+#             */
/*   Updated: 2018/12/20 12:02:45 by bafraiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_shape *ft_new(char shape[4][2], int index, s_grid *nb)
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
	new->letter = index + 'A';
	new->height = nb->max_y - nb->min_y;
	new->width = nb->max_x - nb->min_x;
	new->next = NULL;
	return (new);
}
