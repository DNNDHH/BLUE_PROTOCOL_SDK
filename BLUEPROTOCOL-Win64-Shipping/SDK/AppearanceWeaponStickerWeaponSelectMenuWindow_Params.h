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
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SetWndPos
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos_Params
	{
	public:
		struct FVector2D                                           WndPos;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideAllSlotListItem
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SortList
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList_Params
	{
	public:
		class USBOwnItemListContainer*                             InOwnItemListContainer;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBItemSortType                                            InSortType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OAKB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFilterGroup>                                InSortFilterGroup;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBWeaponType                                              InWeaponType;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G4PK[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutCandidateItemCount;                                   // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ChangeActiveWindow
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow_Params
	{
	public:
		bool                                                       bInActivateListWindow;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInUseAnimation;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SelectAll
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4QVI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.CreateEmptySlotList
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideWindow
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWindow
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow_Params
	{
	public:
		ESBWeaponType                                              InWeaponType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RWAG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWeaponUnchangeableMessageDialog
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog_Params
	{
	public:
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    InUnchangeableRetValue;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.Construct
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_Construct_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnAnimationFinished
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnPress_Cancel
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnSelect_ItemIcon
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon_Params
	{
	public:
		class UItemIconBtn_C*                                      InSelectedIcon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.UiInputBlock
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock_Params
	{
	public:
		bool                                                       InIsBlock;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnWeaponIconSelected_イベント
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected__Params
	{
	public:
		class UItemIconBtn_C*                                      InSelectedItemIconBtn;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnHideWindowEnd__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature_Params
	{
	public:
		bool                                                       InIsHideWindowCalledByDecide;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnDecide__DelegateSignature
	 */
	struct UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature_Params
	{
	public:
		class FString                                              InSelectedWeaponUniqueItemId;                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
