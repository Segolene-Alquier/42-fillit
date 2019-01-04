/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:25:15 by bafraiki          #+#    #+#             */
/*   Updated: 2019/01/04 14:23:44 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fillit.h"

int		size_square(t_shape **lst, int boolean)
{
	int		height;
	int		width;
	t_shape	*elem;
	int result;
	
	elem = *lst;
	if (!boolean)			// max
	{
		height = 0;
		width = 0;
		while (elem)
		{
			height += elem->height;
			width += elem->width;
			elem = elem->next;
		}
		if (height > width)
			return (height);
		return (width);
	}
	else					// min
	{
		result = ft_power_2(ft_lst_size(lst) * 4);
		if (result >= elem->height && result >= elem->width)
			return (result);
		if (elem->height > elem->width)
			return (elem->height);
		return (elem->width);
	}
}

/* si madame a reussi a placer elle m'envoit 1 je lui envoit la prochaine lettre
 * sinon elle me dit d'incrementer
 */
