#pragma once

#include "CoreMinimal.h"
#include "StreetMapVertex.generated.h"

/** A single vertex on a street map mesh */
USTRUCT()
struct STREETMAPRUNTIME_API FStreetMapVertex
{
    GENERATED_BODY()

public:
    /** Location of the vertex in local space */
    UPROPERTY()
    FVector3f Position;

    /** Texture coordinate */
    UPROPERTY()
    FVector2f TextureCoordinate;

    /** Tangent vector X */
    UPROPERTY()
    FVector3f TangentX;

    /** Tangent vector Z (normal) */
    UPROPERTY()
    FVector3f TangentZ;

    /** Color */
    UPROPERTY()
    FColor Color;

    /** Default constructor */
    FStreetMapVertex()
        : Position(FVector3f::ZeroVector)
        , TextureCoordinate(FVector2f::ZeroVector)
        , TangentX(FVector3f::ZeroVector)
        , TangentZ(FVector3f::ZeroVector)
        , Color(FColor::White)
    {
    }

    /** Construct with a supplied position and tangents for the vertex */
    FStreetMapVertex(const FVector& InitLocation, const FVector2D& InitTextureCoordinate, const FVector& InitTangentX, const FVector& InitTangentZ, const FColor& InitColor)
        : Position(InitLocation)
        , TextureCoordinate(InitTextureCoordinate)
        , TangentX(InitTangentX)
        , TangentZ(InitTangentZ)
        , Color(InitColor)
    {
    }
};
