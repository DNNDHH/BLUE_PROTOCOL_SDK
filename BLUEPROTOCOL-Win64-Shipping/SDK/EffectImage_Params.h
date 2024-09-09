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
	 * Function EffectImage.EffectImage_C.SetSize
	 */
	struct UEffectImage_C_SetSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EffectImage.EffectImage_C.StartAnimation
	 */
	struct UEffectImage_C_StartAnimation_Params
	{	};

	/**
	 * Function EffectImage.EffectImage_C.SetFlip
	 */
	struct UEffectImage_C_SetFlip_Params
	{
	public:
		bool                                                       bHorizontal;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bVertical;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EffectImage.EffectImage_C.SetPosition
	 */
	struct UEffectImage_C_SetPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
