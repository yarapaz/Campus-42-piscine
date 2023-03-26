/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:48:53 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 18:48:59 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	case_3_1(int ***memoria)
{
	int	i;
	int	n_possibilities;

	n_possibilities = 3;
	i = 1;
	*memoria = (int **) malloc((n_possibilities + 1) * sizeof(int *));
	(*memoria)[0] = (int *) malloc (1 * sizeof(int));
	while (i <= n_possibilities)
	{
		(*memoria)[i] = (int *) malloc(4 * sizeof(int));
		i++;
	}
	(*memoria)[0][0] = n_possibilities;
	(*memoria)[1][0] = 2;
	(*memoria)[1][1] = 1;
	(*memoria)[1][2] = 3;
	(*memoria)[1][3] = 4;
	(*memoria)[2][0] = 2;
	(*memoria)[2][1] = 3;
	(*memoria)[2][2] = 1;
	(*memoria)[2][3] = 4;
	(*memoria)[3][0] = 1;
	(*memoria)[3][1] = 3;
	(*memoria)[3][2] = 2;
	(*memoria)[3][3] = 4;
}
