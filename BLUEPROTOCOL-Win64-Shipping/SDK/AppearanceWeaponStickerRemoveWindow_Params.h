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
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetWindowPosition
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_SetWindowPosition_Params
	{
	public:
		struct FVector2D                                           InWindowPosition;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetIsDecideButtonEnabled
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BlockUIInput
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_BlockUIInput_Params
	{
	public:
		bool                                                       InBlockInput;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.HideWindow
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_HideWindow_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ShowWindow
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_ShowWindow_Params
	{
	public:
		bool                                                       InIsStickerIndefinite;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InHaveWeaponStickerRemoveItem;                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A6BQ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InWeaponStickerRemoveItemHoldNum;                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnPress_Cancel
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature_Params
	{
	public:
		class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature_Params
	{
	public:
		class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnDecideButtonPressed__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsStickerDiscardSelected;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnHideWindowFinished__DelegateSignature
	 */
	struct UAppearanceWeaponStickerRemoveWindow_C_OnHideWindowFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
