#pragma once

 

// Package: UMG_MatchingMenu_Headder

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.ExecuteUbergraph_UMG_MatchingMenu_Headder
// 0x0004 (0x0004 - 0x0000)
struct UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder");
static_assert(sizeof(UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder) == 0x000004, "Wrong size on UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder::EntryPoint' has a wrong offset!");

// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.SetDungeonInfo
// 0x0250 (0x0250 - 0x0000)
struct UMG_MatchingMenu_Headder_C_SetDungeonInfo final
{
public:
	class FName                                   InDungeonId;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0010(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19C1[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDungeonDisplayName_ReturnValue;        // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0208(0x0018)()
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19C2[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDungeonRuleDesc_ReturnValue;           // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0238(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Headder_C_SetDungeonInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Headder_C_SetDungeonInfo");
static_assert(sizeof(UMG_MatchingMenu_Headder_C_SetDungeonInfo) == 0x000250, "Wrong size on UMG_MatchingMenu_Headder_C_SetDungeonInfo");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, InDungeonId) == 0x000000, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::InDungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, Param_Index) == 0x000008, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000010, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x0001F0, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, CallFunc_GetDungeonDisplayName_ReturnValue) == 0x0001F8, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::CallFunc_GetDungeonDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000208, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, K2Node_SwitchString_CmpSuccess) == 0x000220, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, CallFunc_GetDungeonRuleDesc_ReturnValue) == 0x000228, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::CallFunc_GetDungeonRuleDesc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000238, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.SetButtonVisible
// 0x0001 (0x0001 - 0x0000)
struct UMG_MatchingMenu_Headder_C_SetButtonVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Headder_C_SetButtonVisible) == 0x000001, "Wrong alignment on UMG_MatchingMenu_Headder_C_SetButtonVisible");
static_assert(sizeof(UMG_MatchingMenu_Headder_C_SetButtonVisible) == 0x000001, "Wrong size on UMG_MatchingMenu_Headder_C_SetButtonVisible");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetButtonVisible, Param_IsVisible) == 0x000000, "Member 'UMG_MatchingMenu_Headder_C_SetButtonVisible::Param_IsVisible' has a wrong offset!");

// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.SetDungeonInfo2
// 0x00A0 (0x00A0 - 0x0000)
struct UMG_MatchingMenu_Headder_C_SetDungeonInfo2 final
{
public:
	int32                                         HelpModeId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19C3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_bExists; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19C4[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBHelpMatchingModeInfo                CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_ReturnValue; // 0x0030(0x0028)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       CallFunc_Conv_SBTextTableHashToInt_ReturnValue;    // 0x0074(0x0004)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetHelpMatchingModeText_ReturnValue;      // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0088(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Headder_C_SetDungeonInfo2");
static_assert(sizeof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2) == 0x0000A0, "Wrong size on UMG_MatchingMenu_Headder_C_SetDungeonInfo2");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, HelpModeId) == 0x000000, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::HelpModeId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, Param_Index) == 0x000004, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_GetMasterDataManager_IsValid) == 0x000008, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_bExists) == 0x000028, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_BP_GetHelpMatchingModeInfoMasterDataById_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_Conv_StringToInt_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_Conv_SBTextTableHashToInt_ReturnValue) == 0x000074, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_Conv_SBTextTableHashToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_GetHelpMatchingModeText_ReturnValue) == 0x000078, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_GetHelpMatchingModeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Headder_C_SetDungeonInfo2, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000088, "Member 'UMG_MatchingMenu_Headder_C_SetDungeonInfo2::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

