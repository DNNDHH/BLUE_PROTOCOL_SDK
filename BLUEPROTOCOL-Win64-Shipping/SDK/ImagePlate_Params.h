#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ImagePlate.ImagePlateComponent.SetImagePlate
	 */
	struct UImagePlateComponent_SetImagePlate_Params
	{
	public:
		struct FImagePlateParameters                               Plate;                                                   // 0x0000(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
	 */
	struct UImagePlateComponent_OnRenderTextureChanged_Params
	{	};

	/**
	 * Function ImagePlate.ImagePlateComponent.GetPlate
	 */
	struct UImagePlateComponent_GetPlate_Params
	{
	public:
		struct FImagePlateParameters                               ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
