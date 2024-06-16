#pragma once

 

// Package: BP_MatchingFunctionLiblary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsPartyLeader
// 0x0028 (0x0028 - 0x0000)
struct BP_MatchingFunctionLiblary_C_IsPartyLeader final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60F5[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_IsPartyLeader) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_IsPartyLeader");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_IsPartyLeader) == 0x000028, "Wrong size on BP_MatchingFunctionLiblary_C_IsPartyLeader");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsPartyLeader, __WorldContext) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_IsPartyLeader::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsPartyLeader, ReturnValue) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_IsPartyLeader::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsPartyLeader, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_IsPartyLeader::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsPartyLeader, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_IsPartyLeader::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsPartyLeader, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_MatchingFunctionLiblary_C_IsPartyLeader::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsPartyLeader, CallFunc_IsPartyLeader_ReturnValue) == 0x000021, "Member 'BP_MatchingFunctionLiblary_C_IsPartyLeader::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsSendingParty
// 0x0050 (0x0050 - 0x0000)
struct BP_MatchingFunctionLiblary_C_IsSendingParty final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60F6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60F7[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBPartyMemberState*>            CallFunc_GetAllPartyMembers_PartyMembers;          // 0x0020(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F8[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_IsSendingParty) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_IsSendingParty");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_IsSendingParty) == 0x000050, "Wrong size on BP_MatchingFunctionLiblary_C_IsSendingParty");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, __WorldContext) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, Ret) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::Ret' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, CallFunc_GetCurrentParty_OutPartyState) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, CallFunc_GetCurrentParty_ReturnValue) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, CallFunc_GetAllPartyMembers_PartyMembers) == 0x000020, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::CallFunc_GetAllPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsSendingParty, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_MatchingFunctionLiblary_C_IsSendingParty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsMaxParty
// 0x0040 (0x0040 - 0x0000)
struct BP_MatchingFunctionLiblary_C_IsMaxParty final
{
public:
	int32                                         MaxMember;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60FA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60FB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetAllPartyMembers_PartyMembers;          // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_IsMaxParty) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_IsMaxParty");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_IsMaxParty) == 0x000040, "Wrong size on BP_MatchingFunctionLiblary_C_IsMaxParty");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, MaxMember) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::MaxMember' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, __WorldContext) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, Ret) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::Ret' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, CallFunc_GetCurrentParty_OutPartyState) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, CallFunc_GetCurrentParty_ReturnValue) == 0x000020, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, CallFunc_GetAllPartyMembers_PartyMembers) == 0x000028, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::CallFunc_GetAllPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsMaxParty, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BP_MatchingFunctionLiblary_C_IsMaxParty::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnStartMatchmaking
// 0x0120 (0x0120 - 0x0000)
struct BP_MatchingFunctionLiblary_C_OnStartMatchmaking final
{
public:
	class USBMatchingMenu*                        MatchingMenu;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMapInfo>                     DungeonMapInfoArray;                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bUnlimit;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Backfill;                                          // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60FC[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMatchingMenuStartMatchResult               CallFunc_StartMatchmaking_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60FD[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00B8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x00F0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0108(0x0018)()
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_OnStartMatchmaking");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking) == 0x000120, "Wrong size on BP_MatchingFunctionLiblary_C_OnStartMatchmaking");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, MatchingMenu) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::MatchingMenu' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, DungeonMapInfoArray) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::DungeonMapInfoArray' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, bUnlimit) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::bUnlimit' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, Backfill) == 0x000019, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::Backfill' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, __WorldContext) == 0x000020, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, Result) == 0x000028, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::Result' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_StartMatchmaking_ReturnValue) == 0x000029, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_StartMatchmaking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000040, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000080, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000090, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000A0, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000B8, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x0000D0, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0000E0, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0000F0, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnStartMatchmaking, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000108, "Member 'BP_MatchingFunctionLiblary_C_OnStartMatchmaking::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.OnCancelMatchmaking
// 0x0018 (0x0018 - 0x0000)
struct BP_MatchingFunctionLiblary_C_OnCancelMatchmaking final
{
public:
	class USBMatchingMenu*                        MatchingMenu;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMatchingMenuCancelMatchResult              CallFunc_CancelMatchmaking_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_OnCancelMatchmaking) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_OnCancelMatchmaking");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_OnCancelMatchmaking) == 0x000018, "Wrong size on BP_MatchingFunctionLiblary_C_OnCancelMatchmaking");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnCancelMatchmaking, MatchingMenu) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_OnCancelMatchmaking::MatchingMenu' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnCancelMatchmaking, __WorldContext) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_OnCancelMatchmaking::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnCancelMatchmaking, Result) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_OnCancelMatchmaking::Result' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnCancelMatchmaking, CallFunc_CancelMatchmaking_ReturnValue) == 0x000011, "Member 'BP_MatchingFunctionLiblary_C_OnCancelMatchmaking::CallFunc_CancelMatchmaking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_OnCancelMatchmaking, K2Node_SwitchEnum_CmpSuccess) == 0x000012, "Member 'BP_MatchingFunctionLiblary_C_OnCancelMatchmaking::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinLevel
// 0x0060 (0x0060 - 0x0000)
struct BP_MatchingFunctionLiblary_C_GetPartyMinLevel final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewParam;                                          // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinLevel;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60FE[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60FF[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetAllPartyMembers_PartyMembers;          // 0x0028(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue_1;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6100[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_GetPartyMinLevel");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel) == 0x000060, "Wrong size on BP_MatchingFunctionLiblary_C_GetPartyMinLevel");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, __WorldContext) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, NewParam) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::NewParam' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, MinLevel) == 0x00000C, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::MinLevel' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_GetClassLevel_ReturnValue) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_GetCurrentParty_OutPartyState) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_GetCurrentParty_ReturnValue) == 0x000020, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_GetAllPartyMembers_PartyMembers) == 0x000028, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_GetAllPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_GetClassLevel_ReturnValue_1) == 0x000048, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_GetClassLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinLevel, CallFunc_Min_ReturnValue) == 0x000058, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinLevel::CallFunc_Min_ReturnValue' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.GetPartyMinTotalPower
// 0x0060 (0x0060 - 0x0000)
struct BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Result;                                            // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinTotalPower;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6101[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6102[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetJoinedPartyMembers_PartyMembers;       // 0x0028(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPower_ReturnValue_1;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6103[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower) == 0x000060, "Wrong size on BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, __WorldContext) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, Result) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::Result' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, MinTotalPower) == 0x00000C, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::MinTotalPower' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_GetTotalPower_ReturnValue) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_GetCurrentParty_OutPartyState) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_GetCurrentParty_ReturnValue) == 0x000020, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_GetJoinedPartyMembers_PartyMembers) == 0x000028, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_GetJoinedPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_GetTotalPower_ReturnValue_1) == 0x000048, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_GetTotalPower_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower, CallFunc_Min_ReturnValue) == 0x000058, "Member 'BP_MatchingFunctionLiblary_C_GetPartyMinTotalPower::CallFunc_Min_ReturnValue' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonStart
// 0x01F0 (0x01F0 - 0x0000)
struct BP_MatchingFunctionLiblary_C_IsEnableDungeonStart final
{
public:
	struct FSBMapInfo                             InMapInfo;                                         // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x01E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x01E8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_IsEnableDungeonStart) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_IsEnableDungeonStart");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_IsEnableDungeonStart) == 0x0001F0, "Wrong size on BP_MatchingFunctionLiblary_C_IsEnableDungeonStart");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonStart, InMapInfo) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonStart::InMapInfo' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonStart, __WorldContext) == 0x0001E0, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonStart::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonStart, IsEnable) == 0x0001E8, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonStart::IsEnable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonStart, K2Node_SwitchString_CmpSuccess) == 0x0001E9, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonStart::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMatching
// 0x01F0 (0x01F0 - 0x0000)
struct BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching final
{
public:
	struct FSBMapInfo                             InMapInfo;                                         // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                __WorldContext;                                    // 0x01E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x01E8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching) == 0x0001F0, "Wrong size on BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching, InMapInfo) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching::InMapInfo' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching, __WorldContext) == 0x0001E0, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching, IsEnable) == 0x0001E8, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching::IsEnable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching, K2Node_SwitchString_CmpSuccess) == 0x0001E9, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMatching::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsEnableDungeonMemberNum
// 0x0038 (0x0038 - 0x0000)
struct BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum final
{
public:
	int32                                         MaxMember;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6104[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6105[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetCurrentPartyMember_OutPartyMembers;    // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetCurrentPartyMember_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6106[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum) == 0x000038, "Wrong size on BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum, MaxMember) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum::MaxMember' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum, __WorldContext) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum, IsEnable) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum::IsEnable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum, CallFunc_GetCurrentPartyMember_OutPartyMembers) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum::CallFunc_GetCurrentPartyMember_OutPartyMembers' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum, CallFunc_GetCurrentPartyMember_ReturnValue) == 0x000028, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum::CallFunc_GetCurrentPartyMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'BP_MatchingFunctionLiblary_C_IsEnableDungeonMemberNum::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MatchingFunctionLiblary.BP_MatchingFunctionLiblary_C.IsRecruitParty
// 0x00F8 (0x00F8 - 0x0000)
struct BP_MatchingFunctionLiblary_C_IsRecruitParty final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6107[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPartyRecruitData                    CallFunc_GetRecruitPartyInfo_ReturnValue;          // 0x0018(0x00D8)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchingFunctionLiblary_C_IsRecruitParty) == 0x000008, "Wrong alignment on BP_MatchingFunctionLiblary_C_IsRecruitParty");
static_assert(sizeof(BP_MatchingFunctionLiblary_C_IsRecruitParty) == 0x0000F8, "Wrong size on BP_MatchingFunctionLiblary_C_IsRecruitParty");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsRecruitParty, __WorldContext) == 0x000000, "Member 'BP_MatchingFunctionLiblary_C_IsRecruitParty::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsRecruitParty, IsEnable) == 0x000008, "Member 'BP_MatchingFunctionLiblary_C_IsRecruitParty::IsEnable' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsRecruitParty, CallFunc_GetNetworkDataCache_IsValid) == 0x000009, "Member 'BP_MatchingFunctionLiblary_C_IsRecruitParty::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsRecruitParty, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'BP_MatchingFunctionLiblary_C_IsRecruitParty::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsRecruitParty, CallFunc_GetRecruitPartyInfo_ReturnValue) == 0x000018, "Member 'BP_MatchingFunctionLiblary_C_IsRecruitParty::CallFunc_GetRecruitPartyInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchingFunctionLiblary_C_IsRecruitParty, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000F0, "Member 'BP_MatchingFunctionLiblary_C_IsRecruitParty::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

}

