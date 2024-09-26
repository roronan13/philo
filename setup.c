/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:29:40 by rpothier          #+#    #+#             */
/*   Updated: 2024/09/26 19:13:07 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	set_args(int argc, char **argv, int *tab_args)
{
	int	i;

	i = 0;
	tab_args = malloc(sizeof(int) * (argc - 1));
	if (!tab_args)
	{
		printf("Error\nMalloc failed !\n");
		return (1);
	}
	while ()
	
}
