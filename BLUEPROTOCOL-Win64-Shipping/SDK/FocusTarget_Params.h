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
	 * Function FocusTarget.FocusTarget_C.OnStopAnimOut
	 */
	struct UFocusTarget_C_OnStopAnimOut_Params
	{	};

	/**
	 * Function FocusTarget.FocusTarget_C.OnPlayAnimOut
	 */
	struct UFocusTarget_C_OnPlayAnimOut_Params
	{	};

	/**
	 * Function FocusTarget.FocusTarget_C.OnStopAnimIn
	 */
	struct UFocusTarget_C_OnStopAnimIn_Params
	{	};

	/**
	 * Function FocusTarget.FocusTarget_C.OnPlayAnimIn
	 */
	struct UFocusTarget_C_OnPlayAnimIn_Params
	{	};

	/**
	 * Function FocusTarget.FocusTarget_C.OnFadeOutDeath
	 */
	struct UFocusTarget_C_OnFadeOutDeath_Params
	{	};

	/**
	 * Function FocusTarget.FocusTarget_C.OnBindFadeOutDeath
	 */
	struct UFocusTarget_C_OnBindFadeOutDeath_Params
	{
	public:
		class ASBEnemyCharacter*                                   InEnemyCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FocusTarget.FocusTarget_C.OnUnbindFadeOutDeath
	 */
	struct UFocusTarget_C_OnUnbindFadeOutDeath_Params
	{
	public:
		class ASBEnemyCharacter*                                   InEnemyCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FocusTarget.FocusTarget_C.WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_1
	 */
	struct UFocusTarget_C_WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function FocusTarget.FocusTarget_C.ExecuteUbergraph_FocusTarget
	 */
	struct UFocusTarget_C_ExecuteUbergraph_FocusTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
