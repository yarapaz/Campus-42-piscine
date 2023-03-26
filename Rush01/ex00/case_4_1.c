/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_4_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:55:58 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 18:56:05 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	case_4_1(int ***memoria)
{
	int	i;
	int	n_possibilities;

	n_possibilities = 1;
	i = 1;
	*memoria = (int **) malloc((n_possibilities + 1) * sizeof(int *));
	(*memoria)[0] = (int *) malloc (1 * sizeof(int));
	while (i <= n_possibilities)
	{
		(*memoria)[i] = (int *) malloc(4 * sizeof(int));
		i++;
	}
	(*memoria)[0][0] = n_possibilities;
	(*memoria)[1][0] = 1;
	(*memoria)[1][1] = 2;
	(*memoria)[1][2] = 3;
	(*memoria)[1][3] = 4;
}
