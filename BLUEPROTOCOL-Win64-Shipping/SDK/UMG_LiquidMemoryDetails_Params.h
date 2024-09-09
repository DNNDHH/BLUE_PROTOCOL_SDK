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
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayAnimEffectOut
	 */
	struct UUMG_LiquidMemoryDetails_C_PlayAnimEffectOut_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayDrinkingAnimation
	 */
	struct UUMG_LiquidMemoryDetails_C_PlayDrinkingAnimation_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.SetFilledLevel
	 */
	struct UUMG_LiquidMemoryDetails_C_SetFilledLevel_Params
	{
	public:
		int32_t                                                    InFilledLevel;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.HideDetails
	 */
	struct UUMG_LiquidMemoryDetails_C_HideDetails_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnAnimationFinished
	 */
	struct UUMG_LiquidMemoryDetails_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ShowDetails
	 */
	struct UUMG_LiquidMemoryDetails_C_ShowDetails_Params
	{
	public:
		int32_t                                                    InLiquidMemoryId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InFilledLevel;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature
	 */
	struct UUMG_LiquidMemoryDetails_C_BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.Construct
	 */
	struct UUMG_LiquidMemoryDetails_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ExecuteUbergraph_UMG_LiquidMemoryDetails
	 */
	struct UUMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U6YD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnDrinkingAnimationFinished__DelegateSignature
	 */
	struct UUMG_LiquidMemoryDetails_C_OnDrinkingAnimationFinished__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnCloseAnimationFinished__DelegateSignature
	 */
	struct UUMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
