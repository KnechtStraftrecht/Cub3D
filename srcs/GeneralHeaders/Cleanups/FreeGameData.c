/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeGameData.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:59:12 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/21 21:54:25 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cleanups.h"

// Frees GameData struct, closes Mlx
// - Frees Map
// - Frees Textures
// - Clears Mlx
// 		- Destroys Window
// 		- Closes Connection
// 		- Frees Screen Img;
void	FreeGameData(GameData *Data)
{
	FreeMap(Data->Map);
	FreeTextures(Data->Textures);
	FreeMlx(Data->MlxVars);
	exit(0);
}
