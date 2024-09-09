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
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.UnreachedSubAbility
	 */
	struct USubAbilityViewItem_C_UnreachedSubAbility_Params
	{	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.UpdateWeaponText
	 */
	struct USubAbilityViewItem_C_UpdateWeaponText_Params
	{	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.GetData
	 */
	struct USubAbilityViewItem_C_GetData_Params
	{
	public:
		struct FOwnItemInfo                                        ItemData;                                                // 0x0000(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.SetData
	 */
	struct USubAbilityViewItem_C_SetData_Params
	{
	public:
		struct FOwnItemInfo                                        ItemData;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.UpdateText
	 */
	struct USubAbilityViewItem_C_UpdateText_Params
	{	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.BP_OnEntryReleased
	 */
	struct USubAbilityViewItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.BP_OnItemExpansionChanged
	 */
	struct USubAbilityViewItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.OnListItemObjectSet
	 */
	struct USubAbilityViewItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.BP_OnItemSelectionChanged
	 */
	struct USubAbilityViewItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.OnMouseEnter
	 */
	struct USubAbilityViewItem_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.OnMouseLeave
	 */
	struct USubAbilityViewItem_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.ExecuteUbergraph_SubAbilityViewItem
	 */
	struct USubAbilityViewItem_C_ExecuteUbergraph_SubAbilityViewItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SubAbilityViewItem.SubAbilityViewItem_C.OnSelect__DelegateSignature
	 */
	struct USubAbilityViewItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		class USubAbilityViewItem_C*                               Select;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
