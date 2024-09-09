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
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetFontColor
	 */
	struct ULibraryMenu_AchievementListItem_C_SetFontColor_Params
	{
	public:
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementEventTermIcon
	 */
	struct ULibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon_Params
	{
	public:
		bool                                                       IsVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementTitleIcon
	 */
	struct ULibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon_Params
	{
	public:
		bool                                                       IsVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetRewardIcon
	 */
	struct ULibraryMenu_AchievementListItem_C_SetRewardIcon_Params
	{
	public:
		TArray<class FString>                                      RewardIdList;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsClear;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRecievedReward;                                        // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTermEnd;                                               // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BNVO[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetProgress
	 */
	struct ULibraryMenu_AchievementListItem_C_SetProgress_Params
	{
	public:
		int32_t                                                    InObjectNum;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InProgress;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InObejectKind;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HMR5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetExcramationIconVisible
	 */
	struct ULibraryMenu_AchievementListItem_C_SetExcramationIconVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetBtnSelected
	 */
	struct ULibraryMenu_AchievementListItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Initialize
	 */
	struct ULibraryMenu_AchievementListItem_C_Initialize_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Construct
	 */
	struct ULibraryMenu_AchievementListItem_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_AchievementListItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_AchievementListItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_AchievementListItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.ExecuteUbergraph_LibraryMenu_AchievementListItem
	 */
	struct ULibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.EventCheckStateChanged__DelegateSignature
	 */
	struct ULibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I66T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    listIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.OnClick__DelegateSignature
	 */
	struct ULibraryMenu_AchievementListItem_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
