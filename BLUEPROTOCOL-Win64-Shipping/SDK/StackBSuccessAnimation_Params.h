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
	 * Function StackBSuccessAnimation.StackBSuccessAnimation_C.AnimaterinComplete
	 */
	struct UStackBSuccessAnimation_C_AnimaterinComplete_Params
	{	};

	/**
	 * Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimationFinished
	 */
	struct UStackBSuccessAnimation_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackBSuccessAnimation.StackBSuccessAnimation_C.Play
	 */
	struct UStackBSuccessAnimation_C_Play_Params
	{	};

	/**
	 * Function StackBSuccessAnimation.StackBSuccessAnimation_C.ExecuteUbergraph_StackBSuccessAnimation
	 */
	struct UStackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N911[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimPlayed__DelegateSignature
	 */
	struct UStackBSuccessAnimation_C_OnAnimPlayed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
