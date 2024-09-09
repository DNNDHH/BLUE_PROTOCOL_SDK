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
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.GetAbility
	 */
	struct UAbilityInfoDescView_C_GetAbility_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.SetAbility
	 */
	struct UAbilityInfoDescView_C_SetAbility_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnEntryReleased
	 */
	struct UAbilityInfoDescView_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnItemExpansionChanged
	 */
	struct UAbilityInfoDescView_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.Construct
	 */
	struct UAbilityInfoDescView_C_Construct_Params
	{	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.OnListItemObjectSet
	 */
	struct UAbilityInfoDescView_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnItemSelectionChanged
	 */
	struct UAbilityInfoDescView_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.OnMouseEnter
	 */
	struct UAbilityInfoDescView_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.OnMouseLeave
	 */
	struct UAbilityInfoDescView_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function AbilityInfoDescView.AbilityInfoDescView_C.ExecuteUbergraph_AbilityInfoDescView
	 */
	struct UAbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
