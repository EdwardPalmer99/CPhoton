//
//  PolyhedralModels.h
//  CPhoton
//
//  Created by Edward on 30/01/2023.
//

#ifndef PolyhedralModels_h
#define PolyhedralModels_h

#include "Material.h"
#include "Matrix3.h"
#include "Primitive.h"
#include "Texture.h"
#include "Utility.h"
#include "Vector3.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

Primitive *makeTetrahedron(Point3 baseCenter, Vector3 rotationAngles, double sideLength, Material *material);
Primitive *makeStellatedOctahedron(Point3 center, double sideLength, Material *materialTop, Material *materialBottom);

#endif /* PolyhedralModels_h */
