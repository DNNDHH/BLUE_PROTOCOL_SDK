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
	 * Function ClassChangedJingle.ClassChangedJingle_C.Construct
	 */
	struct UClassChangedJingle_C_Construct_Params
	{	};

	/**
	 * Function ClassChangedJingle.ClassChangedJingle_C.SetBeforeClass
	 */
	struct UClassChangedJingle_C_SetBeforeClass_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ClassChangedJingle.ClassChangedJingle_C.WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_1
	 */
	struct UClassChangedJingle_C_WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ClassChangedJingle.ClassChangedJingle_C.PlayAnim
	 */
	struct UClassChangedJingle_C_PlayAnim_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ClassChangedJingle.ClassChangedJingle_C.ForceStopAnim
	 */
	struct UClassChangedJingle_C_ForceStopAnim_Params
	{	};

	/**
	 * Function ClassChangedJingle.ClassChangedJingle_C.ExecuteUbergraph_ClassChangedJingle
	 */
	struct UClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ClassChangedJingle.ClassChangedJingle_C.OnPlayedAnim__DelegateSignature
	 */
	struct UClassChangedJingle_C_OnPlayedAnim__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
