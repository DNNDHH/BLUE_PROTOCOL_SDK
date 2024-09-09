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
	 * Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetDiffView
	 */
	struct UInheritButtonViewPerkListItem_C_SetDiffView_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetEmpty
	 */
	struct UInheritButtonViewPerkListItem_C_SetEmpty_Params
	{	};

	/**
	 * Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetData
	 */
	struct UInheritButtonViewPerkListItem_C_SetData_Params
	{
	public:
		struct FSBStackBPerk                                       SlotData;                                                // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Initialize
	 */
	struct UInheritButtonViewPerkListItem_C_Initialize_Params
	{	};

	/**
	 * Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Construct
	 */
	struct UInheritButtonViewPerkListItem_C_Construct_Params
	{	};

	/**
	 * Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.ExecuteUbergraph_InheritButtonViewPerkListItem
	 */
	struct UInheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
