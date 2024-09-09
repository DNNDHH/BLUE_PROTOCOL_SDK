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
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.SetGatherImage
	 */
	struct UObjectSelectCursor_C_SetGatherImage_Params
	{
	public:
		class USBInteractionTargetComponent*                       TargetComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.Construct
	 */
	struct UObjectSelectCursor_C_Construct_Params
	{	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.Tick
	 */
	struct UObjectSelectCursor_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.ChargeUp
	 */
	struct UObjectSelectCursor_C_ChargeUp_Params
	{	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.Fade In
	 */
	struct UObjectSelectCursor_C_FadeIn_Params
	{	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.Fade Out
	 */
	struct UObjectSelectCursor_C_FadeOut_Params
	{	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.OnAnimationFinished
	 */
	struct UObjectSelectCursor_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.SEreset
	 */
	struct UObjectSelectCursor_C_SEreset_Params
	{	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.ExecuteUbergraph_ObjectSelectCursor
	 */
	struct UObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ObjectSelectCursor.ObjectSelectCursor_C.FinishedFade__DelegateSignature
	 */
	struct UObjectSelectCursor_C_FinishedFade__DelegateSignature_Params
	{
	public:
		bool                                                       IsFadeIn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
