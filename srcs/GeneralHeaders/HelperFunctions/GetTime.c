/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetTime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:56:25 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/21 18:25:41 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.h"

int	GetTimeMS(struct timeval TimeStart)
{
	struct timeval	TimeCurr;
	float			Delta;

	gettimeofday(&TimeCurr);
	if (TimeCurr.tv_usec > TimeStart.tv_usec)
		Delta = (TimeCurr.tv_usec - TimeStart.tv_usec) / 1000;
	else
		Delta = 999999 - TimeStart.tv_usec + TimeCurr.tv_usec;
	Delta += (TimeCurr.tv_sec - TimeStart.tv_sec) * 1000;
}