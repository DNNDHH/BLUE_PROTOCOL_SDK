#pragma once

 

// Package: ImagePlate

#include "Basic.hpp"

#include "ImagePlate_structs.hpp"


namespace SDK::Params
{

// Function ImagePlate.ImagePlateComponent.SetImagePlate
// 0x0038 (0x0038 - 0x0000)
struct ImagePlateComponent_SetImagePlate final
{
public:
	struct FImagePlateParameters                  Param_Plate;                                       // 0x0000(0x0038)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ImagePlateComponent_SetImagePlate) == 0x000008, "Wrong alignment on ImagePlateComponent_SetImagePlate");
static_assert(sizeof(ImagePlateComponent_SetImagePlate) == 0x000038, "Wrong size on ImagePlateComponent_SetImagePlate");
static_assert(offsetof(ImagePlateComponent_SetImagePlate, Param_Plate) == 0x000000, "Member 'ImagePlateComponent_SetImagePlate::Param_Plate' has a wrong offset!");

// Function ImagePlate.ImagePlateComponent.GetPlate
// 0x0038 (0x0038 - 0x0000)
struct ImagePlateComponent_GetPlate final
{
public:
	struct FImagePlateParameters                  ReturnValue;                                       // 0x0000(0x0038)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ImagePlateComponent_GetPlate) == 0x000008, "Wrong alignment on ImagePlateComponent_GetPlate");
static_assert(sizeof(ImagePlateComponent_GetPlate) == 0x000038, "Wrong size on ImagePlateComponent_GetPlate");
static_assert(offsetof(ImagePlateComponent_GetPlate, ReturnValue) == 0x000000, "Member 'ImagePlateComponent_GetPlate::ReturnValue' has a wrong offset!");

}
