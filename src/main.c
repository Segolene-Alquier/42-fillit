/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:16:56 by bafraiki          #+#    #+#             */
/*   Updated: 2019/01/04 15:44:48 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
	int		fd;
	t_shape *begin;
	char **truc;

	if (argc != 2)
	{
		write(1, "usage: ./fillit name_of_file\n", 50);
		return (1);
	}
	if (!((fd = open(argv[1], O_RDONLY)) > 0))
		return (1);
	ft_grid_validity(fd, &begin);
	//printf("%d\n", size_square(&begin, 0));
	//printf("%d\n", size_square(&begin, 1));
	//ft_print_list(&begin);
	truc = generate_big_grid(&begin);
	place_piece(truc, begin, 3);
	place_piece(truc, begin->next, 3);
	//printf("%d\n", place_piece(generate_big_grid(&begin), begin, size_square(&begin, 1)));
	return (0);
}
