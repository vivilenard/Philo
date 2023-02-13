/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:32:51 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/13 16:31:21 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

	
int main (int argc, char **argv)
{
	t_struct	*s;
	int			number;

	s = NULL;
	if (argc != 5)
		return (0);
	number = ft_atoi(argv[1]);
	s = initstruct(argv, number);
	if (!s)
		return (0);
	//printf("hallo\n");
	cometothetable(s);
	agreement(s);
	pthread_mutex_destroy(&s->lock);
	return(0);
}