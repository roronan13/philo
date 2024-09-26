/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:03:37 by rpothier          #+#    #+#             */
/*   Updated: 2024/09/26 18:52:21 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_errors_args(int argc, char **argv)
{
	if (check_nbr_of_args(argc, argv))
		return (1);
	if (check_args(argc, argv))
		return (1);
	return (0);
}

int	check_nbr_of_args(int argc, char **argv)
{
	if (argc != 5 && argc != 6)
	{
		printf("Error\nWrong number of arguments !\n");
		return (1);
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	if (check_positive_nbr(argc, argv))
		return (1);
	if (check_long_nbr(argc, argv))
		return (1);
	return (0);
}

int	check_positive_nbr(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
				j++;
			else
			{
				printf("Error\nArguments are not valid !\n");
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	check_long_nbr(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
