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
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnEntryReleased
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemExpansionChanged
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemSelectionChanged
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnListItemObjectSet
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnUpdateData
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_OnUpdateData_Params
	{
	public:
		class USBAdminGotoBookmarkItem*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ApplyData
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_ApplyData_Params
	{	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.SetIdWarpMode
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode_Params
	{
	public:
		bool                                                       bFlag;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q8FF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnClickedMoveButton__DelegateSignature
	 */
	struct UUMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature_Params
	{
	public:
		class USBAdminGotoBookmarkItem*                            Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
