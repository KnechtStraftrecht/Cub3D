/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:44:43 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/16 21:11:54 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.h"

int	main(int argc, char **argv)
{
	Map			GameMap;
	Textures	GameTextures;
	MlxVars		MlxVars;
	GameData	Data;

	if (argc > 2 || argc < 2)
		E_ArgumentCount();
	InitializeMap(&GameMap);
	InitializeTextures(&GameTextures);
	InitializeMlx(&MlxVars);
	InputFileParser(argv[1], &GameMap, &GameTextures, &MlxVars);
	InitializeData(&Data, &MlxVars, &GameMap, &GameTextures);
	PrintTextures(&GameTextures);
	PrintMap(&GameMap);
	FreeGameData(&Data);
	return (SUCCESS);
}
