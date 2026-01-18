/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:46:07 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 21:01:51 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
	#define MAP_H

typedef struct s_Map
{
	char	**Map;
	int		PlayerPos[2];
	int		nbRows;
	int		nbColums;
}	Map;

#endif
