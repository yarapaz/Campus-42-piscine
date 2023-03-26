/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:12:28 by marco-fe          #+#    #+#             */
/*   Updated: 2023/02/12 18:49:43 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_left(int *p_array)
{
	int	c_left;
	int	counter;
	int	comparation;
	int	validation;

	c_left = 1;
	counter = 1;
	while (counter <= 3)
	{
		comparation = 1;
		validation = 0;
		while (comparation <= counter)
		{
			if (p_array[comparation - 1] < p_array[counter])
				validation++;
		comparation++;
		}
		if (validation == comparation - 1)
			c_left++;
		counter++;
	}
	return (c_left);
}
