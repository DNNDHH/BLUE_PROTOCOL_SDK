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
	 * Function LevelExtension.LandscapeWallBase.Rebuild
	 */
	struct ALandscapeWallBase_Rebuild_Params
	{	};

	/**
	 * Function LevelExtension.LandscapeWallBase.GetWallComponent
	 */
	struct ALandscapeWallBase_GetWallComponent_Params
	{
	public:
		class ULandscapeWallComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelExtension.LandscapeWallBase.GetHalfThickness
	 */
	struct ALandscapeWallBase_GetHalfThickness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelExtension.LandscapeWallBase.GetHalfHeight
	 */
	struct ALandscapeWallBase_GetHalfHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelExtension.LandscapeWallBase.GetDecalClass
	 */
	struct ALandscapeWallBase_GetDecalClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelExtension.LandscapeWallSpline.GetSplineComponent
	 */
	struct ALandscapeWallSpline_GetSplineComponent_Params
	{
	public:
		class ULandscapeWallSplineComponent*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
