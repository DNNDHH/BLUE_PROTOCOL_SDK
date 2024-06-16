#pragma once

 

// Package: PartyMemberInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PartyMemberInfo.PartyMemberInfo_C.ExecuteUbergraph_PartyMemberInfo
// 0x0080 (0x0080 - 0x0000)
struct PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_567C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<struct FPlayerProfileSummaryData>& PlayerProfileSummaryData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerProfileSummaryData>      K2Node_CustomEvent_PlayerProfileSummaryData;       // 0x0040(0x0010)(ConstParm, ReferenceParm)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerProfileSummaryData>      CallFunc_GetFriendList_ReturnValue;                // 0x0058(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_Event_InSameMap;                            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_567D[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo) == 0x000008, "Wrong alignment on PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo");
static_assert(sizeof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo) == 0x000080, "Wrong size on PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, EntryPoint) == 0x000000, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, Temp_bool_Variable) == 0x000004, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, Temp_struct_Variable) == 0x000018, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, Temp_struct_Variable_1) == 0x000028, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, CallFunc_GetSBPlayerController_ReturnValue) == 0x000038, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, K2Node_CustomEvent_PlayerProfileSummaryData) == 0x000040, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::K2Node_CustomEvent_PlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, CallFunc_GetConcernedList_ReturnValue) == 0x000050, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, CallFunc_GetFriendList_ReturnValue) == 0x000058, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::CallFunc_GetFriendList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, K2Node_Event_InSameMap) == 0x000068, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::K2Node_Event_InSameMap' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo, K2Node_Select_Default) == 0x00006C, "Member 'PartyMemberInfo_C_ExecuteUbergraph_PartyMemberInfo::K2Node_Select_Default' has a wrong offset!");

// Function PartyMemberInfo.PartyMemberInfo_C.OnChangeSameMap
// 0x0001 (0x0001 - 0x0000)
struct PartyMemberInfo_C_OnChangeSameMap final
{
public:
	bool                                          InSameMap;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_C_OnChangeSameMap) == 0x000001, "Wrong alignment on PartyMemberInfo_C_OnChangeSameMap");
static_assert(sizeof(PartyMemberInfo_C_OnChangeSameMap) == 0x000001, "Wrong size on PartyMemberInfo_C_OnChangeSameMap");
static_assert(offsetof(PartyMemberInfo_C_OnChangeSameMap, InSameMap) == 0x000000, "Member 'PartyMemberInfo_C_OnChangeSameMap::InSameMap' has a wrong offset!");

// Function PartyMemberInfo.PartyMemberInfo_C.CustomEvent_2
// 0x0010 (0x0010 - 0x0000)
struct PartyMemberInfo_C_CustomEvent_2 final
{
public:
	TArray<struct FPlayerProfileSummaryData>      PlayerProfileSummaryData;                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PartyMemberInfo_C_CustomEvent_2) == 0x000008, "Wrong alignment on PartyMemberInfo_C_CustomEvent_2");
static_assert(sizeof(PartyMemberInfo_C_CustomEvent_2) == 0x000010, "Wrong size on PartyMemberInfo_C_CustomEvent_2");
static_assert(offsetof(PartyMemberInfo_C_CustomEvent_2, PlayerProfileSummaryData) == 0x000000, "Member 'PartyMemberInfo_C_CustomEvent_2::PlayerProfileSummaryData' has a wrong offset!");

// Function PartyMemberInfo.PartyMemberInfo_C.SetHPMPGaugeVisibility
// 0x0005 (0x0005 - 0x0000)
struct PartyMemberInfo_C_SetHPMPGaugeVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_C_SetHPMPGaugeVisibility) == 0x000001, "Wrong alignment on PartyMemberInfo_C_SetHPMPGaugeVisibility");
static_assert(sizeof(PartyMemberInfo_C_SetHPMPGaugeVisibility) == 0x000005, "Wrong size on PartyMemberInfo_C_SetHPMPGaugeVisibility");
static_assert(offsetof(PartyMemberInfo_C_SetHPMPGaugeVisibility, Param_IsVisible) == 0x000000, "Member 'PartyMemberInfo_C_SetHPMPGaugeVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_SetHPMPGaugeVisibility, Temp_bool_Variable) == 0x000001, "Member 'PartyMemberInfo_C_SetHPMPGaugeVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_SetHPMPGaugeVisibility, Temp_byte_Variable) == 0x000002, "Member 'PartyMemberInfo_C_SetHPMPGaugeVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_SetHPMPGaugeVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'PartyMemberInfo_C_SetHPMPGaugeVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_SetHPMPGaugeVisibility, K2Node_Select_Default) == 0x000004, "Member 'PartyMemberInfo_C_SetHPMPGaugeVisibility::K2Node_Select_Default' has a wrong offset!");

// Function PartyMemberInfo.PartyMemberInfo_C.Update Follow Icon
// 0x0090 (0x0090 - 0x0000)
struct PartyMemberInfo_C_Update_Follow_Icon final
{
public:
	TArray<struct FPlayerProfileSummaryData>      InFriendList;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FPlayerProfileSummaryData>      FriendsList;                                       // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_567E[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFriendsToCharacterId_ReturnValue;       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_567F[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5680[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_C_Update_Follow_Icon) == 0x000008, "Wrong alignment on PartyMemberInfo_C_Update_Follow_Icon");
static_assert(sizeof(PartyMemberInfo_C_Update_Follow_Icon) == 0x000090, "Wrong size on PartyMemberInfo_C_Update_Follow_Icon");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, InFriendList) == 0x000000, "Member 'PartyMemberInfo_C_Update_Follow_Icon::InFriendList' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, FriendsList) == 0x000010, "Member 'PartyMemberInfo_C_Update_Follow_Icon::FriendsList' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, Param_Index) == 0x000020, "Member 'PartyMemberInfo_C_Update_Follow_Icon::Param_Index' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_Greater_IntInt_ReturnValue) == 0x000029, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_GetCharacterId_self_CastInput) == 0x000030, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_GetCharacterId_ReturnValue) == 0x000040, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_GetSBPlayerController_ReturnValue) == 0x000050, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_GetConcernedList_ReturnValue) == 0x000058, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_IsFriendsToCharacterId_ReturnValue) == 0x000061, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_IsFriendsToCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000068, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000070, "Member 'PartyMemberInfo_C_Update_Follow_Icon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'PartyMemberInfo_C_Update_Follow_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_GetValidPlayerState_ReturnValue) == 0x000080, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_Update_Follow_Icon, CallFunc_IsValid_ReturnValue_2) == 0x000088, "Member 'PartyMemberInfo_C_Update_Follow_Icon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function PartyMemberInfo.PartyMemberInfo_C.UpdatePartyIcon
// 0x0050 (0x0050 - 0x0000)
struct PartyMemberInfo_C_UpdatePartyIcon final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5681[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetParty_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPartyType                                  CallFunc_GetPartyType_ReturnValue;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5682[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5683[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5684[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuestJoined_ReturnValue;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_C_UpdatePartyIcon) == 0x000008, "Wrong alignment on PartyMemberInfo_C_UpdatePartyIcon");
static_assert(sizeof(PartyMemberInfo_C_UpdatePartyIcon) == 0x000050, "Wrong size on PartyMemberInfo_C_UpdatePartyIcon");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, Temp_bool_Variable) == 0x000000, "Member 'PartyMemberInfo_C_UpdatePartyIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_IsPartyLeader_ReturnValue) == 0x000001, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_GetParty_ReturnValue) == 0x000008, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_GetParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, Temp_byte_Variable) == 0x000010, "Member 'PartyMemberInfo_C_UpdatePartyIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_GetPartyType_ReturnValue) == 0x000012, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_GetPartyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, Temp_byte_Variable_1) == 0x000013, "Member 'PartyMemberInfo_C_UpdatePartyIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'PartyMemberInfo_C_UpdatePartyIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, K2Node_Select_Default) == 0x000015, "Member 'PartyMemberInfo_C_UpdatePartyIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000020, "Member 'PartyMemberInfo_C_UpdatePartyIcon::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PartyMemberInfo_C_UpdatePartyIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, K2Node_DynamicCast_AsSBPlayer_State) == 0x000030, "Member 'PartyMemberInfo_C_UpdatePartyIcon::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'PartyMemberInfo_C_UpdatePartyIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x000040, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_UpdatePartyIcon, CallFunc_IsQuestJoined_ReturnValue) == 0x000048, "Member 'PartyMemberInfo_C_UpdatePartyIcon::CallFunc_IsQuestJoined_ReturnValue' has a wrong offset!");

// Function PartyMemberInfo.PartyMemberInfo_C.GetBattleStatusComponent
// 0x0080 (0x0080 - 0x0000)
struct PartyMemberInfo_C_GetBattleStatusComponent final
{
public:
	class USBBattleStatusComponent*               OutBattleStatus;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5685[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5686[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBActorManager*                        CallFunc_GetActorManager_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_FindPlayerFromCharacterId_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5687[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleStatusInterface> CallFunc_GetBattleStatusComponent_self_CastInput;  // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_ReturnValue;     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyMemberInfo_C_GetBattleStatusComponent) == 0x000008, "Wrong alignment on PartyMemberInfo_C_GetBattleStatusComponent");
static_assert(sizeof(PartyMemberInfo_C_GetBattleStatusComponent) == 0x000080, "Wrong size on PartyMemberInfo_C_GetBattleStatusComponent");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, OutBattleStatus) == 0x000000, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::OutBattleStatus' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_GetCharacterId_self_CastInput) == 0x000010, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_GetCharacterId_ReturnValue) == 0x000020, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_GetGameInstance_ReturnValue) == 0x000030, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, K2Node_DynamicCast_AsSBGame_Instance) == 0x000038, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_GetActorManager_ReturnValue) == 0x000048, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_GetActorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_FindPlayerFromCharacterId_ReturnValue) == 0x000050, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_FindPlayerFromCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_IsValid_ReturnValue_2) == 0x000059, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_GetBattleStatusComponent_self_CastInput) == 0x000060, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_GetBattleStatusComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_GetBattleStatusComponent_ReturnValue) == 0x000070, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_GetBattleStatusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyMemberInfo_C_GetBattleStatusComponent, CallFunc_IsValid_ReturnValue_3) == 0x000078, "Member 'PartyMemberInfo_C_GetBattleStatusComponent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function PartyMemberInfo.PartyMemberInfo_C.OnSetBufIcon
// 0x0008 (0x0008 - 0x0000)
struct PartyMemberInfo_C_OnSetBufIcon final
{
public:
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_OutBattleStatus; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyMemberInfo_C_OnSetBufIcon) == 0x000008, "Wrong alignment on PartyMemberInfo_C_OnSetBufIcon");
static_assert(sizeof(PartyMemberInfo_C_OnSetBufIcon) == 0x000008, "Wrong size on PartyMemberInfo_C_OnSetBufIcon");
static_assert(offsetof(PartyMemberInfo_C_OnSetBufIcon, CallFunc_GetBattleStatusComponent_OutBattleStatus) == 0x000000, "Member 'PartyMemberInfo_C_OnSetBufIcon::CallFunc_GetBattleStatusComponent_OutBattleStatus' has a wrong offset!");

}

