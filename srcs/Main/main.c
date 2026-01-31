/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:44:43 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/31 22:37:00 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.h"
#include "Textures.h"
#include "Parsing.h"
#include "TestFunctions.h"

int	main(int argc, char **argv)
{
	Map			GameMap;
	Textures	GameTextures;

	if (argc > 2 || argc < 2)
		E_ArgumentCount();
	InitializeMap(&GameMap);
	InitializeTextures(&GameTextures);
	InputFileParser(argv[1], &GameMap, &GameTextures);
	PrintTextures(&GameTextures);
	PrintMap(&GameMap);
	FreeMap(&GameMap);
	FreeTextures(&GameTextures);
	return (0);
}
