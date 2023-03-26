/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vld.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:13:51 by marco-fe          #+#    #+#             */
/*   Updated: 2023/02/12 23:07:06 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checker(int *p_array);
int		count_left(int *p_array);
int		count_right(int *p_array);
int		vld(int*p_cmb_0, int *p_cmb_1, int *p_cmb_2, int *p_cmb_3, int *p_input);
void	print_matrix(int *linea1, int *linea2, int *linea3, int *linea4);
void	writeline(int *linea);

int	vld(int *p_cmb_0, int *p_cmb_1, int *p_cmb_2, int *p_cmb_3, int *p_input)
{
	int	position;
	int	column[4];
	int	validation;

	position = 0;
	validation = 1;
	while (position <= 3)
	{
		column[0] = p_cmb_0[position];
		column[1] = p_cmb_1[position];
		column[2] = p_cmb_2[position];
		column[3] = p_cmb_3[position];
		if (checker(column) == 0)
			validation = 0;
		if (count_left(column) != p_input[position])
			validation = 0;
		if (count_right(column) != p_input[position + 4])
			validation = 0;
		position++;
	}
	if (validation == 1)
		print_matrix(p_cmb_0, p_cmb_1, p_cmb_2, p_cmb_3);
	return (validation);
}

void	print_matrix(int *linea1, int *linea2, int *linea3, int *linea4)
{
	writeline(linea1);
	writeline(linea2);
	writeline(linea3);
	writeline(linea4);
}

void	writeline(int *linea)
{
	int		i;
	char	temp;
	char	enter;

	i = 0;
	enter = '\n';
	while (i < 4)
	{
		temp = '0' + linea[i];
		write(1, &temp, 1);
		if (i != 3)
			write(1, " ", 1);
		i++;
	}
	write(1, &enter, 1);
}
