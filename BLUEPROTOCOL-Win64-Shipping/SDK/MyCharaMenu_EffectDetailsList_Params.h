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
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.AddEffectDetailItemToList
	 */
	struct UMyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList_Params
	{
	public:
		class FText                                                InEffectNameText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InEffectDescText;                                        // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Setup
	 */
	struct UMyCharaMenu_EffectDetailsList_C_Setup_Params
	{	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.HideWindow
	 */
	struct UMyCharaMenu_EffectDetailsList_C_HideWindow_Params
	{	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ShowWindow
	 */
	struct UMyCharaMenu_EffectDetailsList_C_ShowWindow_Params
	{	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Construct
	 */
	struct UMyCharaMenu_EffectDetailsList_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnAnimationFinished
	 */
	struct UMyCharaMenu_EffectDetailsList_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_EffectDetailsList_C_BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnPress_Cancel
	 */
	struct UMyCharaMenu_EffectDetailsList_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UMyCharaMenu_EffectDetailsList_C_BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ExecuteUbergraph_MyCharaMenu_EffectDetailsList
	 */
	struct UMyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S5XE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
