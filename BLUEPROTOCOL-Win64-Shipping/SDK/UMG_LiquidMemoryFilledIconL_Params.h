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
	 * Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PlayDrinkingAnimation
	 */
	struct UUMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetFilledLevel
	 */
	struct UUMG_LiquidMemoryFilledIconL_C_SetFilledLevel_Params
	{
	public:
		int32_t                                                    InFilledLevel;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetLiquidMemory
	 */
	struct UUMG_LiquidMemoryFilledIconL_C_SetLiquidMemory_Params
	{
	public:
		int32_t                                                    InLiquidMemoryId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InFilledLevel;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PreConstruct
	 */
	struct UUMG_LiquidMemoryFilledIconL_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnAnimationFinished
	 */
	struct UUMG_LiquidMemoryFilledIconL_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.ExecuteUbergraph_UMG_LiquidMemoryFilledIconL
	 */
	struct UUMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnDrinkingAnimationFinished__DelegateSignature
	 */
	struct UUMG_LiquidMemoryFilledIconL_C_OnDrinkingAnimationFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
