#pragma once

 

// Package: GuildEntryListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function GuildEntryListItem.GuildEntryListItem_C.ExecuteUbergraph_GuildEntryListItem
// 0x0120 (0x0120 - 0x0000)
struct GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FEE[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildEntryListItem_C*                  K2Node_DynamicCast_AsGuild_Entry_List_Item;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FEF[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData;                       // 0x0020(0x00E0)()
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem) == 0x000008, "Wrong alignment on GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem");
static_assert(sizeof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem) == 0x000120, "Wrong size on GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, EntryPoint) == 0x000000, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, Temp_byte_Variable) == 0x000004, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, Temp_byte_Variable_1) == 0x000005, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, K2Node_Event_bIsExpanded) == 0x000006, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, K2Node_Event_ListItemObject) == 0x000008, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, K2Node_DynamicCast_AsGuild_Entry_List_Item) == 0x000010, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::K2Node_DynamicCast_AsGuild_Entry_List_Item' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, K2Node_Event_bIsSelected) == 0x000019, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, CallFunc_GetEntry_EntryData) == 0x000020, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::CallFunc_GetEntry_EntryData' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, K2Node_CustomEvent_URL) == 0x000100, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, CallFunc_DownloadImage_ReturnValue) == 0x000110, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, Temp_bool_Variable) == 0x000118, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, CallFunc_IsValid_ReturnValue) == 0x000119, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem, K2Node_Select_Default) == 0x00011A, "Member 'GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem::K2Node_Select_Default' has a wrong offset!");

// Function GuildEntryListItem.GuildEntryListItem_C.LoadFaceIcon
// 0x0010 (0x0010 - 0x0000)
struct GuildEntryListItem_C_LoadFaceIcon final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntryListItem_C_LoadFaceIcon) == 0x000008, "Wrong alignment on GuildEntryListItem_C_LoadFaceIcon");
static_assert(sizeof(GuildEntryListItem_C_LoadFaceIcon) == 0x000010, "Wrong size on GuildEntryListItem_C_LoadFaceIcon");
static_assert(offsetof(GuildEntryListItem_C_LoadFaceIcon, URL) == 0x000000, "Member 'GuildEntryListItem_C_LoadFaceIcon::URL' has a wrong offset!");

// Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct GuildEntryListItem_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildEntryListItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on GuildEntryListItem_C_BP_OnItemSelectionChanged");
static_assert(sizeof(GuildEntryListItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on GuildEntryListItem_C_BP_OnItemSelectionChanged");
static_assert(offsetof(GuildEntryListItem_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'GuildEntryListItem_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function GuildEntryListItem.GuildEntryListItem_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct GuildEntryListItem_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntryListItem_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on GuildEntryListItem_C_OnListItemObjectSet");
static_assert(sizeof(GuildEntryListItem_C_OnListItemObjectSet) == 0x000008, "Wrong size on GuildEntryListItem_C_OnListItemObjectSet");
static_assert(offsetof(GuildEntryListItem_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'GuildEntryListItem_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct GuildEntryListItem_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildEntryListItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on GuildEntryListItem_C_BP_OnItemExpansionChanged");
static_assert(sizeof(GuildEntryListItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on GuildEntryListItem_C_BP_OnItemExpansionChanged");
static_assert(offsetof(GuildEntryListItem_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'GuildEntryListItem_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function GuildEntryListItem.GuildEntryListItem_C.Set EntryData
// 0x00E0 (0x00E0 - 0x0000)
struct GuildEntryListItem_C_Set_EntryData final
{
public:
	struct FGuildEntryData                        Entry;                                             // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildEntryListItem_C_Set_EntryData) == 0x000008, "Wrong alignment on GuildEntryListItem_C_Set_EntryData");
static_assert(sizeof(GuildEntryListItem_C_Set_EntryData) == 0x0000E0, "Wrong size on GuildEntryListItem_C_Set_EntryData");
static_assert(offsetof(GuildEntryListItem_C_Set_EntryData, Entry) == 0x000000, "Member 'GuildEntryListItem_C_Set_EntryData::Entry' has a wrong offset!");

// Function GuildEntryListItem.GuildEntryListItem_C.InitializeEntryData
// 0x00E8 (0x00E8 - 0x0000)
struct GuildEntryListItem_C_InitializeEntryData final
{
public:
	bool                                          bIsUGC;                                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF0[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x0020(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF1[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText; // 0x0050(0x0018)()
	bool                                          CallFunc_GetRemainTimeLimitGuideText_ReturnValue;  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FF2[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00D0(0x0018)()
};
static_assert(alignof(GuildEntryListItem_C_InitializeEntryData) == 0x000008, "Wrong alignment on GuildEntryListItem_C_InitializeEntryData");
static_assert(sizeof(GuildEntryListItem_C_InitializeEntryData) == 0x0000E8, "Wrong size on GuildEntryListItem_C_InitializeEntryData");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, bIsUGC) == 0x000000, "Member 'GuildEntryListItem_C_InitializeEntryData::bIsUGC' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, Temp_bool_Variable) == 0x000001, "Member 'GuildEntryListItem_C_InitializeEntryData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, Temp_bool_Variable_1) == 0x000002, "Member 'GuildEntryListItem_C_InitializeEntryData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_GetRestrictText_ReturnValue_1) == 0x000020, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000038, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000039, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_GetFaceImageURL_ReturnValue) == 0x000040, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText) == 0x000050, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_GetRemainTimeLimitGuideText_ReturnValue) == 0x000068, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_GetRemainTimeLimitGuideText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, K2Node_Select_Default) == 0x000088, "Member 'GuildEntryListItem_C_InitializeEntryData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A0, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B8, "Member 'GuildEntryListItem_C_InitializeEntryData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntryListItem_C_InitializeEntryData, K2Node_Select_Default_1) == 0x0000D0, "Member 'GuildEntryListItem_C_InitializeEntryData::K2Node_Select_Default_1' has a wrong offset!");

// Function GuildEntryListItem.GuildEntryListItem_C.GetEntry
// 0x00E0 (0x00E0 - 0x0000)
struct GuildEntryListItem_C_GetEntry final
{
public:
	struct FGuildEntryData                        Param_EntryData;                                   // 0x0000(0x00E0)(Parm, OutParm)
};
static_assert(alignof(GuildEntryListItem_C_GetEntry) == 0x000008, "Wrong alignment on GuildEntryListItem_C_GetEntry");
static_assert(sizeof(GuildEntryListItem_C_GetEntry) == 0x0000E0, "Wrong size on GuildEntryListItem_C_GetEntry");
static_assert(offsetof(GuildEntryListItem_C_GetEntry, Param_EntryData) == 0x000000, "Member 'GuildEntryListItem_C_GetEntry::Param_EntryData' has a wrong offset!");

}

