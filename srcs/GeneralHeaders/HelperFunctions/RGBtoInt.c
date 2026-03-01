/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RGBtoInt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:00:01 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/02/21 16:20:32 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Helper.h"

// Converts RGB values saved in an array of 3 to an int value
int	RGBtoInt(int RGBs[3])
{
	return ((RGBs[0] << 16) | (RGBs[1] << 8) | (RGBs[2]));
}