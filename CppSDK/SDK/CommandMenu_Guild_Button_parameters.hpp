#pragma once

 

// Package: CommandMenu_Guild_Button

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.ExecuteUbergraph_CommandMenu_Guild_Button
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E64[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsShow;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button");
static_assert(sizeof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button) == 0x000020, "Wrong size on CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, EntryPoint) == 0x000000, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, Temp_byte_Variable) == 0x000004, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, K2Node_CustomEvent_IsShow) == 0x000018, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::K2Node_CustomEvent_IsShow' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000019, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, Temp_byte_Variable_1) == 0x00001A, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, Temp_bool_Variable) == 0x00001B, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, K2Node_Select_Default) == 0x00001C, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x00001D, "Member 'CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.UpdateExclamation
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_Guild_Button_C_UpdateExclamation final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_UpdateExclamation) == 0x000001, "Wrong alignment on CommandMenu_Guild_Button_C_UpdateExclamation");
static_assert(sizeof(CommandMenu_Guild_Button_C_UpdateExclamation) == 0x000001, "Wrong size on CommandMenu_Guild_Button_C_UpdateExclamation");
static_assert(offsetof(CommandMenu_Guild_Button_C_UpdateExclamation, IsShow) == 0x000000, "Member 'CommandMenu_Guild_Button_C_UpdateExclamation::IsShow' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowParticipantSizeText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E65[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParticipantNumber_ReturnValue;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E66[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0");
static_assert(sizeof(CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0) == 0x000048, "Wrong size on CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0, ReturnValue) == 0x000000, "Member 'CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000018, "Member 'CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_GetParticipantNumber_ReturnValue) == 0x000028, "Member 'CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_GetParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_ServerWaitText_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsParticipantNumberCompleted_bCompleted;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0) == 0x000001, "Wrong alignment on CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0");
static_assert(sizeof(CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0) == 0x000002, "Wrong size on CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0, ReturnValue) == 0x000000, "Member 'CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0, CallFunc_IsParticipantNumberCompleted_bCompleted) == 0x000001, "Member 'CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0::CallFunc_IsParticipantNumberCompleted_bCompleted' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NeedParticipantSizeText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E67[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E68[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0");
static_assert(sizeof(CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0) == 0x000048, "Wrong size on CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0, ReturnValue) == 0x000000, "Member 'CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000018, "Member 'CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000028, "Member 'CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MatchingText_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsParticipantNumberCompleted_bCompleted;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0) == 0x000001, "Wrong alignment on CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0");
static_assert(sizeof(CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0) == 0x000002, "Wrong size on CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0, ReturnValue) == 0x000000, "Member 'CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0, CallFunc_IsParticipantNumberCompleted_bCompleted) == 0x000001, "Member 'CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0::CallFunc_IsParticipantNumberCompleted_bCompleted' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MaxConfirmCountText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E69[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E6A[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0");
static_assert(sizeof(CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0) == 0x000048, "Wrong size on CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0, ReturnValue) == 0x000000, "Member 'CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_GetMatchedState_bExists) == 0x000018, "Member 'CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_GetMatchedState_ReturnValue) == 0x000020, "Member 'CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000028, "Member 'CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowConfirmCountText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E6B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetConfirmedParticipantNumber_ReturnValue; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E6C[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0");
static_assert(sizeof(CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0) == 0x000048, "Wrong size on CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0, ReturnValue) == 0x000000, "Member 'CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_GetMatchedState_bExists) == 0x000018, "Member 'CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_GetMatchedState_ReturnValue) == 0x000020, "Member 'CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_GetConfirmedParticipantNumber_ReturnValue) == 0x000028, "Member 'CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_GetConfirmedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.PlayBtnAnim
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_Guild_Button_C_PlayBtnAnim final
{
public:
	bool                                          bInActive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E6D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_PlayBtnAnim) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_PlayBtnAnim");
static_assert(sizeof(CommandMenu_Guild_Button_C_PlayBtnAnim) == 0x000020, "Wrong size on CommandMenu_Guild_Button_C_PlayBtnAnim");
static_assert(offsetof(CommandMenu_Guild_Button_C_PlayBtnAnim, bInActive) == 0x000000, "Member 'CommandMenu_Guild_Button_C_PlayBtnAnim::bInActive' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_PlayBtnAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenu_Guild_Button_C_PlayBtnAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_PlayBtnAnim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'CommandMenu_Guild_Button_C_PlayBtnAnim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_PlayBtnAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'CommandMenu_Guild_Button_C_PlayBtnAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_PlayBtnAnim, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000019, "Member 'CommandMenu_Guild_Button_C_PlayBtnAnim::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsUpdateMatch
// 0x0018 (0x0018 - 0x0000)
struct CommandMenu_Guild_Button_C_IsUpdateMatch final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetMatched;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Result;                                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E6E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_IsUpdateMatch) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_IsUpdateMatch");
static_assert(sizeof(CommandMenu_Guild_Button_C_IsUpdateMatch) == 0x000018, "Wrong size on CommandMenu_Guild_Button_C_IsUpdateMatch");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, Ret) == 0x000000, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::Ret' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, RetMatched) == 0x000001, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::RetMatched' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, Result) == 0x000002, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::Result' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000003, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_InDungeonGame_ReturnValue) == 0x000004, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000005, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_IsGathered_ReturnValue) == 0x000010, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_IsMatched_ReturnValue) == 0x000011, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsUpdateMatch, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000013, "Member 'CommandMenu_Guild_Button_C_IsUpdateMatch::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.SetBtn
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_Guild_Button_C_SetBtn final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_SetBtn) == 0x000001, "Wrong alignment on CommandMenu_Guild_Button_C_SetBtn");
static_assert(sizeof(CommandMenu_Guild_Button_C_SetBtn) == 0x000001, "Wrong size on CommandMenu_Guild_Button_C_SetBtn");
static_assert(offsetof(CommandMenu_Guild_Button_C_SetBtn, bActive) == 0x000000, "Member 'CommandMenu_Guild_Button_C_SetBtn::bActive' has a wrong offset!");

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsParticipantNumberCompleted
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_Guild_Button_C_IsParticipantNumberCompleted final
{
public:
	bool                                          bCompleted;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E6F[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParticipantNumber_ReturnValue;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted) == 0x000008, "Wrong alignment on CommandMenu_Guild_Button_C_IsParticipantNumberCompleted");
static_assert(sizeof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted) == 0x000020, "Wrong size on CommandMenu_Guild_Button_C_IsParticipantNumberCompleted");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted, bCompleted) == 0x000000, "Member 'CommandMenu_Guild_Button_C_IsParticipantNumberCompleted::bCompleted' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000001, "Member 'CommandMenu_Guild_Button_C_IsParticipantNumberCompleted::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'CommandMenu_Guild_Button_C_IsParticipantNumberCompleted::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000010, "Member 'CommandMenu_Guild_Button_C_IsParticipantNumberCompleted::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted, CallFunc_GetParticipantNumber_ReturnValue) == 0x000014, "Member 'CommandMenu_Guild_Button_C_IsParticipantNumberCompleted::CallFunc_GetParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_Guild_Button_C_IsParticipantNumberCompleted, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'CommandMenu_Guild_Button_C_IsParticipantNumberCompleted::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

