/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salquier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 18:26:44 by salquier          #+#    #+#             */
/*   Updated: 2018/12/18 19:08:24 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* 
 * coordonnees : shape[h][w]
 * on connait la hauteur de la piece : h + 1 // largeur : w + 1
 * il ne doit jamais y avoir plus de 1 de difference entre les h et les w
 * OU j'additione w et x de chaque case, et je dois jamais avoir 1 de diff avec
 * la somme precedente
 * */

int		existing_piece(char **shape)
{
	int i;
	int height;
	int width;
	int sum[4];

	i = 0;
	while (i < 4)
	{
		tab[i] = shape[i][0] + shape[i][1];
		printf("shape[%d][0] : %c\n", i, shape[i][0]);
		i++;
	}
}

int		main(void)
{
	

}
