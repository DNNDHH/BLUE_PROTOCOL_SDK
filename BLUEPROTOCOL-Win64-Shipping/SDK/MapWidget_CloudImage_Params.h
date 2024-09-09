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
	 * Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetVisibleDebugText
	 */
	struct UMapWidget_CloudImage_C_SetVisibleDebugText_Params
	{	};

	/**
	 * Function MapWidget_CloudImage.MapWidget_CloudImage_C.GetName
	 */
	struct UMapWidget_CloudImage_C_GetName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetName
	 */
	struct UMapWidget_CloudImage_C_SetName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CloudImage.MapWidget_CloudImage_C.Setup
	 */
	struct UMapWidget_CloudImage_C_Setup_Params
	{
	public:
		struct FAnchors                                            InAnchors;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FVector2D                                           InPosition;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InSize;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Texture;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CloudImage.MapWidget_CloudImage_C.Construct
	 */
	struct UMapWidget_CloudImage_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_CloudImage.MapWidget_CloudImage_C.ExecuteUbergraph_MapWidget_CloudImage
	 */
	struct UMapWidget_CloudImage_C_ExecuteUbergraph_MapWidget_CloudImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
