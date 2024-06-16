#pragma once

 

// Package: UMG_DungeonFinder_Button

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnMatchingState__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature final
{
public:
	bool                                          IsStart;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature) == 0x000001, "Wrong alignment on UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature");
static_assert(sizeof(UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature) == 0x000001, "Wrong size on UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature");
static_assert(offsetof(UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature, IsStart) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature::IsStart' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ExecuteUbergraph_UMG_DungeonFinder_Button
// 0x0070 (0x0070 - 0x0000)
struct UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78DE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_1;              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUpdateMatch_Ret;                        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78DF[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E0[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x002C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button");
static_assert(sizeof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button) == 0x000070, "Wrong size on UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, EntryPoint) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_InDungeonGame_ReturnValue) == 0x000004, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000005, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_IsGathered_ReturnValue) == 0x000010, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_IsMatched_ReturnValue) == 0x000011, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_InDungeonGame_ReturnValue_1) == 0x000013, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_InDungeonGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_IsUpdateMatch_Ret) == 0x000014, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_IsUpdateMatch_Ret' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, K2Node_Event_MyGeometry) == 0x00002C, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, K2Node_Event_InDeltaTime) == 0x000064, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000068, "Member 'UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Tick
// 0x003C (0x003C - 0x0000)
struct UMG_DungeonFinder_Button_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_Tick) == 0x000004, "Wrong alignment on UMG_DungeonFinder_Button_C_Tick");
static_assert(sizeof(UMG_DungeonFinder_Button_C_Tick) == 0x00003C, "Wrong size on UMG_DungeonFinder_Button_C_Tick");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Tick, MyGeometry) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Tick, InDeltaTime) == 0x000038, "Member 'UMG_DungeonFinder_Button_C_Tick::InDeltaTime' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ResetButtonState
// 0x0030 (0x0030 - 0x0000)
struct UMG_DungeonFinder_Button_C_ResetButtonState final
{
public:
	bool                                          CallFunc_IsAbleToTravel_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue; // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue; // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E2[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_ResetButtonState) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_ResetButtonState");
static_assert(sizeof(UMG_DungeonFinder_Button_C_ResetButtonState) == 0x000030, "Wrong size on UMG_DungeonFinder_Button_C_ResetButtonState");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_IsAbleToTravel_ReturnValue) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_IsAbleToTravel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000004, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue) == 0x00000C, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue) == 0x000014, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_NotEqual_NameName_ReturnValue) == 0x000016, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000017, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_BooleanAND_ReturnValue_1) == 0x000019, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_BooleanAND_ReturnValue_2) == 0x00001A, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_InDungeonGame_ReturnValue) == 0x00001B, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_GetCurrentMatchmakingState_bExists) == 0x00001C, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_ResetButtonState, CallFunc_IsMatched_ReturnValue) == 0x000028, "Member 'UMG_DungeonFinder_Button_C_ResetButtonState::CallFunc_IsMatched_ReturnValue' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowParticipantSizeText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParticipantNumber_ReturnValue;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78E4[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0");
static_assert(sizeof(UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0) == 0x000048, "Wrong size on UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_GetParticipantNumber_ReturnValue) == 0x000028, "Member 'UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_GetParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_ServerWaitText_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsParticipantNumberCompleted_bCompleted;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0) == 0x000001, "Wrong alignment on UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0");
static_assert(sizeof(UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0) == 0x000002, "Wrong size on UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0, ReturnValue) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0, CallFunc_IsParticipantNumberCompleted_bCompleted) == 0x000001, "Member 'UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0::CallFunc_IsParticipantNumberCompleted_bCompleted' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NeedParticipantSizeText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E5[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78E6[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0");
static_assert(sizeof(UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0) == 0x000048, "Wrong size on UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000028, "Member 'UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MatchingText_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsParticipantNumberCompleted_bCompleted;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0) == 0x000001, "Wrong alignment on UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0");
static_assert(sizeof(UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0) == 0x000002, "Wrong size on UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0, ReturnValue) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0, CallFunc_IsParticipantNumberCompleted_bCompleted) == 0x000001, "Member 'UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0::CallFunc_IsParticipantNumberCompleted_bCompleted' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MaxConfirmCountText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78E8[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0");
static_assert(sizeof(UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0) == 0x000048, "Wrong size on UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_GetMatchedState_bExists) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_GetMatchedState_ReturnValue) == 0x000020, "Member 'UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000028, "Member 'UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowConfirmCountText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetConfirmedParticipantNumber_ReturnValue; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78EA[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0");
static_assert(sizeof(UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0) == 0x000048, "Wrong size on UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_GetMatchedState_bExists) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_GetMatchedState_ReturnValue) == 0x000020, "Member 'UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_GetConfirmedParticipantNumber_ReturnValue) == 0x000028, "Member 'UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_GetConfirmedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.PlayBtnAnim
// 0x0020 (0x0020 - 0x0000)
struct UMG_DungeonFinder_Button_C_PlayBtnAnim final
{
public:
	bool                                          bInActive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78EB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_PlayBtnAnim) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_PlayBtnAnim");
static_assert(sizeof(UMG_DungeonFinder_Button_C_PlayBtnAnim) == 0x000020, "Wrong size on UMG_DungeonFinder_Button_C_PlayBtnAnim");
static_assert(offsetof(UMG_DungeonFinder_Button_C_PlayBtnAnim, bInActive) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_PlayBtnAnim::bInActive' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_PlayBtnAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_DungeonFinder_Button_C_PlayBtnAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_PlayBtnAnim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UMG_DungeonFinder_Button_C_PlayBtnAnim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_PlayBtnAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_PlayBtnAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_PlayBtnAnim, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000019, "Member 'UMG_DungeonFinder_Button_C_PlayBtnAnim::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsUpdateMatch
// 0x0018 (0x0018 - 0x0000)
struct UMG_DungeonFinder_Button_C_IsUpdateMatch final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetMatched;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Result;                                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78EC[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_IsUpdateMatch) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_IsUpdateMatch");
static_assert(sizeof(UMG_DungeonFinder_Button_C_IsUpdateMatch) == 0x000018, "Wrong size on UMG_DungeonFinder_Button_C_IsUpdateMatch");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, Ret) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::Ret' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, RetMatched) == 0x000001, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::RetMatched' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, Result) == 0x000002, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::Result' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000003, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_InDungeonGame_ReturnValue) == 0x000004, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000005, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_IsGathered_ReturnValue) == 0x000010, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_IsMatched_ReturnValue) == 0x000011, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsUpdateMatch, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000013, "Member 'UMG_DungeonFinder_Button_C_IsUpdateMatch::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.SetBtn
// 0x0001 (0x0001 - 0x0000)
struct UMG_DungeonFinder_Button_C_SetBtn final
{
public:
	bool                                          Param_bActive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_SetBtn) == 0x000001, "Wrong alignment on UMG_DungeonFinder_Button_C_SetBtn");
static_assert(sizeof(UMG_DungeonFinder_Button_C_SetBtn) == 0x000001, "Wrong size on UMG_DungeonFinder_Button_C_SetBtn");
static_assert(offsetof(UMG_DungeonFinder_Button_C_SetBtn, Param_bActive) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_SetBtn::Param_bActive' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.UpdateExclamation
// 0x0005 (0x0005 - 0x0000)
struct UMG_DungeonFinder_Button_C_UpdateExclamation final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_UpdateExclamation) == 0x000001, "Wrong alignment on UMG_DungeonFinder_Button_C_UpdateExclamation");
static_assert(sizeof(UMG_DungeonFinder_Button_C_UpdateExclamation) == 0x000005, "Wrong size on UMG_DungeonFinder_Button_C_UpdateExclamation");
static_assert(offsetof(UMG_DungeonFinder_Button_C_UpdateExclamation, IsShow) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_UpdateExclamation::IsShow' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_UpdateExclamation, Temp_bool_Variable) == 0x000001, "Member 'UMG_DungeonFinder_Button_C_UpdateExclamation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_UpdateExclamation, Temp_byte_Variable) == 0x000002, "Member 'UMG_DungeonFinder_Button_C_UpdateExclamation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_UpdateExclamation, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_DungeonFinder_Button_C_UpdateExclamation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_UpdateExclamation, K2Node_Select_Default) == 0x000004, "Member 'UMG_DungeonFinder_Button_C_UpdateExclamation::K2Node_Select_Default' has a wrong offset!");

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsParticipantNumberCompleted
// 0x0020 (0x0020 - 0x0000)
struct UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted final
{
public:
	bool                                          bCompleted;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78ED[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParticipantNumber_ReturnValue;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted) == 0x000008, "Wrong alignment on UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted");
static_assert(sizeof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted) == 0x000020, "Wrong size on UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted, bCompleted) == 0x000000, "Member 'UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted::bCompleted' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000001, "Member 'UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000010, "Member 'UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted, CallFunc_GetParticipantNumber_ReturnValue) == 0x000014, "Member 'UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted::CallFunc_GetParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

