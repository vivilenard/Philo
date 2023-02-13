/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:32:51 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/13 18:28:49 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

int	timestamp()
{
	int timestamp;
	struct timeval time;

	timestamp = 0;
	gettimeofday(&time, NULL);
	printf("seconds : %ld\nmicro seconds : %d\n",
	time.tv_sec, time.tv_usec);
	return(timestamp);
}
int main (int argc, char **argv)
{
	t_struct	*s;

	s = NULL;
	if (argc != 5)
		return (0);
	timestamp();
	s = initstruct(argv);
	if (!s)
		return (0);
	//printf("hallo\n");
	cometothetable(s);
	agreement(s);
	pthread_mutex_destroy(&s->lock);
	return(0);
}