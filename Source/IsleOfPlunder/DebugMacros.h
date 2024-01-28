#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_BOX(Location, BoxSize) if (GetWorld()) DrawDebugBox(GetWorld(), Location, BoxSize, FColor::Purple, true);
#define DRAW_SPHERE(Location, Colour) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, Colour, true);
#define DRAW_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 5.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true);
#define DRAW_VECTOR(StartLocation, EndLocation) if (GetWorld()) \
	{ \
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 5.f); \
	DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true); \
	}

