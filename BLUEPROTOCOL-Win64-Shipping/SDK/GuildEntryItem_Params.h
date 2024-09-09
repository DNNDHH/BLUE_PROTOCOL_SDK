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
	 * Function GuildEntryItem.GuildEntryItem_C.Construct
	 */
	struct UGuildEntryItem_C_Construct_Params
	{	};

	/**
	 * Function GuildEntryItem.GuildEntryItem_C.BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildEntryItem_C_BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildEntryItem.GuildEntryItem_C.Unselected
	 */
	struct UGuildEntryItem_C_Unselected_Params
	{	};

	/**
	 * Function GuildEntryItem.GuildEntryItem_C.Selected
	 */
	struct UGuildEntryItem_C_Selected_Params
	{	};

	/**
	 * Function GuildEntryItem.GuildEntryItem_C.ExecuteUbergraph_GuildEntryItem
	 */
	struct UGuildEntryItem_C_ExecuteUbergraph_GuildEntryItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntryItem.GuildEntryItem_C.OnClicked_GuildEntry__DelegateSignature
	 */
	struct UGuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntry;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UGuildEntryItem_C*                                   SelectedBtn;                                             // 0x00E0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
