/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:12:28 by marco-fe          #+#    #+#             */
/*   Updated: 2023/02/12 16:42:41 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_right(int *p_array)
{
	int	c_right;
	int	counter;
	int	comparation;
	int	validation;

	c_right = 1;
	counter = 1;
	while (counter <= 3)
	{
		comparation = 1;
		validation = 0;
		while (comparation <= counter)
		{
			if (p_array[3 - counter] > p_array[4 - comparation])
				validation++;
		comparation++;
		}
		if (validation == comparation - 1)
			c_right++;
		counter++;
	}
	return (c_right);
}
