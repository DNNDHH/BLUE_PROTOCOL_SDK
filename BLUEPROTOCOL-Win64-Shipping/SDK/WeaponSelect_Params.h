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
	 * Function WeaponSelect.WeaponSelect_C.Terminate
	 */
	struct UWeaponSelect_C_Terminate_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.Initialize
	 */
	struct UWeaponSelect_C_Initialize_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.Destruct
	 */
	struct UWeaponSelect_C_Destruct_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.RequestClose
	 */
	struct UWeaponSelect_C_RequestClose_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.End
	 */
	struct UWeaponSelect_C_End_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
	 */
	struct UWeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.Construct
	 */
	struct UWeaponSelect_C_Construct_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 */
	struct UWeaponSelect_C_BndEvt__WeaponSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.Cancel
	 */
	struct UWeaponSelect_C_Cancel_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWeaponSelect_C_BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.Event On Begin Selected Weapon
	 */
	struct UWeaponSelect_C_EventOnBeginSelectedWeapon_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.Event On End Selected Weapon
	 */
	struct UWeaponSelect_C_EventOnEndSelectedWeapon_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.Event On Abort Selected Weapon
	 */
	struct UWeaponSelect_C_EventOnAbortSelectedWeapon_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UWeaponSelect_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.ExecuteUbergraph_WeaponSelect
	 */
	struct UWeaponSelect_C_ExecuteUbergraph_WeaponSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.OnClose__DelegateSignature
	 */
	struct UWeaponSelect_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponSelect.WeaponSelect_C.WeaponSelectApply__DelegateSignature
	 */
	struct UWeaponSelect_C_WeaponSelectApply__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
