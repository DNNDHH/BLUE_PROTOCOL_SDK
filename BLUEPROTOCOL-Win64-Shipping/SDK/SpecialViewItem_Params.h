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
	 * Function SpecialViewItem.SpecialViewItem_C.Set Rarity
	 */
	struct USpecialViewItem_C_SetRarity_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItem;                                                 // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.UpdateWeaponText
	 */
	struct USpecialViewItem_C_UpdateWeaponText_Params
	{	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.GetData
	 */
	struct USpecialViewItem_C_GetData_Params
	{
	public:
		struct FOwnItemInfo                                        ItemData;                                                // 0x0000(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.SetData
	 */
	struct USpecialViewItem_C_SetData_Params
	{
	public:
		struct FOwnItemInfo                                        ItemData;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.UpdateText
	 */
	struct USpecialViewItem_C_UpdateText_Params
	{	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.BP_OnEntryReleased
	 */
	struct USpecialViewItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.BP_OnItemExpansionChanged
	 */
	struct USpecialViewItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.OnListItemObjectSet
	 */
	struct USpecialViewItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.BP_OnItemSelectionChanged
	 */
	struct USpecialViewItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.OnMouseEnter
	 */
	struct USpecialViewItem_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.OnMouseLeave
	 */
	struct USpecialViewItem_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.ExecuteUbergraph_SpecialViewItem
	 */
	struct USpecialViewItem_C_ExecuteUbergraph_SpecialViewItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpecialViewItem.SpecialViewItem_C.OnSelect__DelegateSignature
	 */
	struct USpecialViewItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		class USpecialViewItem_C*                                  Select;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
