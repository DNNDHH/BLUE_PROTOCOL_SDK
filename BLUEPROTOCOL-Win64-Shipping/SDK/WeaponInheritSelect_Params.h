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
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.UpdateBuildData
	 */
	struct UWeaponInheritSelect_C_UpdateBuildData_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgSubVitalId
	 */
	struct UWeaponInheritSelect_C_FindArgSubVitalId_Params
	{
	public:
		struct FOwnItemInfo                                        ArrayElement;                                            // 0x0000(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.HowSubManyAbility
	 */
	struct UWeaponInheritSelect_C_HowSubManyAbility_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                OwnItems;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        Target;                                                  // 0x0010(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    sum;                                                     // 0x0160(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WYCJ[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.HowManyAbility
	 */
	struct UWeaponInheritSelect_C_HowManyAbility_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                OwnItems;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        Target;                                                  // 0x0010(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    sum;                                                     // 0x0160(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SH9D[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.CloseSubWindow
	 */
	struct UWeaponInheritSelect_C_CloseSubWindow_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgViralId
	 */
	struct UWeaponInheritSelect_C_FindArgViralId_Params
	{
	public:
		struct FOwnItemInfo                                        ArrayElement;                                            // 0x0000(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.IsModalWindowOpen
	 */
	struct UWeaponInheritSelect_C_IsModalWindowOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.CloseWindow
	 */
	struct UWeaponInheritSelect_C_CloseWindow_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.AddViewChild
	 */
	struct UWeaponInheritSelect_C_AddViewChild_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.Initialize
	 */
	struct UWeaponInheritSelect_C_Initialize_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelectedNewVitalType
	 */
	struct UWeaponInheritSelect_C_OnSelectedNewVitalType_Params
	{
	public:
		struct FOwnItemInfo                                        OnSelect;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.OnCloseVitalSelect
	 */
	struct UWeaponInheritSelect_C_OnCloseVitalSelect_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature_Params
	{
	public:
		struct FSBStackBPerk                                       ChangeTarget;                                            // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.OnClosePerkSelect
	 */
	struct UWeaponInheritSelect_C_OnClosePerkSelect_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.ChangePerks
	 */
	struct UWeaponInheritSelect_C_ChangePerks_Params
	{
	public:
		struct FSBStackBPerk                                       Before;                                                  // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSBStackBPerk                                       Select;                                                  // 0x0030(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature_Params
	{
	public:
		struct FSBStackBPerk                                       PurgeTarget;                                             // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.Construct
	 */
	struct UWeaponInheritSelect_C_Construct_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.Destruct
	 */
	struct UWeaponInheritSelect_C_Destruct_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.OnRequestClose
	 */
	struct UWeaponInheritSelect_C_OnRequestClose_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.OnCheckedInhelit
	 */
	struct UWeaponInheritSelect_C_OnCheckedInhelit_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.CustomEvent2
	 */
	struct UWeaponInheritSelect_C_CustomEvent2_Params
	{
	public:
		struct FOwnItemInfo                                        OnSelect;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.CustomEvent_3
	 */
	struct UWeaponInheritSelect_C_CustomEvent_3_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_BtnVitalChange_1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_BndEvt__WeaponInheritSelect_BtnVitalChange_1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.RequestClose
	 */
	struct UWeaponInheritSelect_C_RequestClose_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.Event On Begin Selected Weapon Inherit
	 */
	struct UWeaponInheritSelect_C_EventOnBeginSelectedWeaponInherit_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.Event On Abort Selected Weapon Inherit
	 */
	struct UWeaponInheritSelect_C_EventOnAbortSelectedWeaponInherit_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.Event On End Selected Weapon Inherit
	 */
	struct UWeaponInheritSelect_C_EventOnEndSelectedWeaponInherit_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UWeaponInheritSelect_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.ExecuteUbergraph_WeaponInheritSelect
	 */
	struct UWeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OD5V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelected__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_OnSelected__DelegateSignature_Params
	{
	public:
		class FString                                              SpecialPerkUID;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SubPerkUID;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FSBStackBPerk>                               SelectedPerks;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponInheritSelect.WeaponInheritSelect_C.OnClose__DelegateSignature
	 */
	struct UWeaponInheritSelect_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
