/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:44:43 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/18 19:28:06 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../GeneralHeaders/Map.h"
#include "../GeneralHeaders/Textures.h"

int	main(int argc, char **argv)
{
	Map			GameMap;
	Textures	GameTextures;

	MapFileParser(argv[1], &GameMap, &GameTextures);
	return (0);
}
