/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:16:56 by bafraiki          #+#    #+#             */
/*   Updated: 2019/01/08 15:35:48 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
	int		fd;
	t_shape *begin;
	t_grid 	bgrid;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit one_argument\n");
		return (1);
	}
	if (!((fd = open(argv[1], O_RDONLY)) > 0))
		return (1);
	ft_bzero(&bgrid, sizeof(bgrid));
	ft_grid_validity(fd, &(bgrid.begin));   //maybe begin should be a **
	bgrid.grid = generate_big_grid(&(bgrid.begin));
	bgrid.size = size_square(&(bgrid.begin), 1);
	fillit_baby(&bgrid, bgrid.begin, ft_lst_size(&(bgrid.begin)));
	ft_print_grid(bgrid.grid, bgrid.size);
	return (0);
}
