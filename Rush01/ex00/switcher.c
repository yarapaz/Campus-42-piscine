/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:51:10 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 18:51:18 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	case_1_2(int ***memoria);
void	case_1_3(int ***memoria);
void	case_1_4(int ***memoria);
void	case_2_2(int ***memoria);
void	case_2_3(int ***memoria);
void	case_3_1(int ***memoria);
void	case_3_2(int ***memoria);
void	case_4_1(int ***memoria);

void	switcher(int a, int b, int ***linea)
{
	if ((a == 1) && (b == 2))
		case_1_2(linea);
	else if ((a == 1) && (b == 3))
		case_1_3(linea);
	else if ((a == 1) && (b == 4))
		case_1_4(linea);
	else if ((a == 2) && (b == 2))
		case_2_2(linea);
	else if ((a == 2) && (b == 3))
		case_2_3(linea);
	else if ((a == 3) && (b == 1))
		case_3_1(linea);
	else if ((a == 3) && (b == 2))
		case_3_2(linea);
	else if ((a == 4) && (b == 1))
		case_4_1(linea);
	else
	{
		*linea = (int **) malloc(1 * sizeof(int *));
		(*linea)[0] = (int *) malloc (1 * sizeof(int));
		(*linea)[0][0] = 0;
	}
}
