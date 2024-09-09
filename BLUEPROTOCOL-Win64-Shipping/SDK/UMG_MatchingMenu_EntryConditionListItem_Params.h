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
	 * Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.SetVisibleUnderline
	 */
	struct UUMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.GetPosition
	 */
	struct UUMG_MatchingMenu_EntryConditionListItem_C_GetPosition_Params
	{
	public:
		struct FVector2D                                           OutPosition;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.PreConstruct
	 */
	struct UUMG_MatchingMenu_EntryConditionListItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_MatchingMenu_EntryConditionListItem_C_BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem
	 */
	struct UUMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.OnPressedButton__DelegateSignature
	 */
	struct UUMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
