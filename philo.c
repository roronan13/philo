/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:46:57 by rpothier          #+#    #+#             */
/*   Updated: 2024/09/26 18:17:55 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*hello(void *arg)
{
	int *arg2;
	arg2 = (int *)arg;
	
	printf("Hello %d\n", *arg2);
	
	return (arg2);
}

int	main(int argc, char **argv)
{
	(void)argv;

	int	*tab_args;
	
	if (check_errors_args(argc, argv))
		return (0);
		
	tab_args = malloc(sizeof(int) * (argc - 1));
	
	set_args(argc, argv, tab_args);

	
	pthread_t id1;
	int		a;
	a = 4;

	
	pthread_create(&id1, NULL, hello, &a);
	pthread_join(id1, NULL);
	printf("id : %ld\n", id1);

	return (0);
}
