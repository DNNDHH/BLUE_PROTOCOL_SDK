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
	 * Function GuildEntryListItem.GuildEntryListItem_C.GetEntry
	 */
	struct UGuildEntryListItem_C_GetEntry_Params
	{
	public:
		struct FGuildEntryData                                     EntryData;                                               // 0x0000(0x00E0)  (Parm, OutParm)
	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.InitializeEntryData
	 */
	struct UGuildEntryListItem_C_InitializeEntryData_Params
	{	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.Set EntryData
	 */
	struct UGuildEntryListItem_C_SetEntryData_Params
	{
	public:
		struct FGuildEntryData                                     Entry;                                                   // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.BP_OnEntryReleased
	 */
	struct UGuildEntryListItem_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemExpansionChanged
	 */
	struct UGuildEntryListItem_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.OnListItemObjectSet
	 */
	struct UGuildEntryListItem_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemSelectionChanged
	 */
	struct UGuildEntryListItem_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.LoadFaceIcon
	 */
	struct UGuildEntryListItem_C_LoadFaceIcon_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.Unselected
	 */
	struct UGuildEntryListItem_C_Unselected_Params
	{	};

	/**
	 * Function GuildEntryListItem.GuildEntryListItem_C.ExecuteUbergraph_GuildEntryListItem
	 */
	struct UGuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
