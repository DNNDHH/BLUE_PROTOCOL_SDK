#pragma once

 

// Package: UMG_MatchingMenu_Wait

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ExecuteUbergraph_UMG_MatchingMenu_Wait
// 0x00D0 (0x00D0 - 0x0000)
struct UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F2F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F30[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0048(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F31[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMatchingManager_IsValid;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F32[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingManager*                     CallFunc_GetMatchingManager_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetMatchingStartTime_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue_1;  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AdvanceMatching_CallApi;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidForceMatching_ReturnValue;           // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait) == 0x0000D0, "Wrong size on UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, K2Node_CustomEvent_Result) == 0x000004, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, K2Node_Event_MyGeometry) == 0x000048, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, K2Node_Event_InDeltaTime) == 0x000080, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000088, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_GetMatchingManager_IsValid) == 0x000090, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_GetMatchingManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_GetMatchingManager_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_GetMatchingManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_GetMatchingStartTime_ReturnValue) == 0x0000A0, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_GetMatchingStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_SBUtcNow_ReturnValue) == 0x0000A8, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_UtcNow_ReturnValue) == 0x0000B0, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x0000B8, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_Subtract_DateTimeDateTime_ReturnValue_1) == 0x0000C0, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_Subtract_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_AdvanceMatching_CallApi) == 0x0000C8, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_AdvanceMatching_CallApi' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait, CallFunc_ValidForceMatching_ReturnValue) == 0x0000C9, "Member 'UMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait::CallFunc_ValidForceMatching_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Tick
// 0x003C (0x003C - 0x0000)
struct UMG_MatchingMenu_Wait_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_Tick) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Wait_C_Tick");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_Tick) == 0x00003C, "Wrong size on UMG_MatchingMenu_Wait_C_Tick");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Tick, MyGeometry) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Tick, InDeltaTime) == 0x000038, "Member 'UMG_MatchingMenu_Wait_C_Tick::InDeltaTime' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.RequestClose
// 0x0001 (0x0001 - 0x0000)
struct UMG_MatchingMenu_Wait_C_RequestClose final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_RequestClose) == 0x000001, "Wrong alignment on UMG_MatchingMenu_Wait_C_RequestClose");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_RequestClose) == 0x000001, "Wrong size on UMG_MatchingMenu_Wait_C_RequestClose");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_RequestClose, Result) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_RequestClose::Result' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_MaxMembers_Text
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F33[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F34[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text) == 0x000048, "Wrong size on UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000018, "Member 'UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Wait_C_Get_MaxMembers_Text::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_CurrentMembers_Text
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F35[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParticipantNumber_ReturnValue;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F36[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text) == 0x000048, "Wrong size on UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000018, "Member 'UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text, CallFunc_GetParticipantNumber_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text::CallFunc_GetParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateWaitTimer
// 0x00C8 (0x00C8 - 0x0000)
struct UMG_MatchingMenu_Wait_C_UpdateWaitTimer final
{
public:
	struct FTimespan                              InTime;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F37[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0040(0x0018)()
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F38[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F39[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchingManager_IsValid;               // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F3A[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingManager*                     CallFunc_GetMatchingManager_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidForceMatching_ReturnValue;           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F3B[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetMatchingStartTime_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F3C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Wait_C_UpdateWaitTimer");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer) == 0x0000C8, "Wrong size on UMG_MatchingMenu_Wait_C_UpdateWaitTimer");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, InTime) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::InTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_BreakTimespan_Days) == 0x000008, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_BreakTimespan_Hours) == 0x00000C, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_BreakTimespan_Minutes) == 0x000010, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_BreakTimespan_Seconds) == 0x000014, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_BreakTimespan_Milliseconds) == 0x000018, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetTotalSeconds_ReturnValue) == 0x00001C, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_Round_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000040, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetGameConfigValueString_OutValue) == 0x000058, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000070, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000080, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_Conv_StringToInt_ReturnValue) == 0x000084, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x000088, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_SelectInt_ReturnValue) == 0x00008C, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_SelectInt_ReturnValue_1) == 0x000090, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000094, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetMatchingManager_IsValid) == 0x000095, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetMatchingManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetMatchingManager_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetMatchingManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_ValidForceMatching_ReturnValue) == 0x0000A0, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_ValidForceMatching_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_GetMatchingStartTime_ReturnValue) == 0x0000A8, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_GetMatchingStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x0000B0, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_SBUtcNow_ReturnValue) == 0x0000B8, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_Not_PreBool_ReturnValue) == 0x0000C0, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_BooleanAND_ReturnValue) == 0x0000C1, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateWaitTimer, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C2, "Member 'UMG_MatchingMenu_Wait_C_UpdateWaitTimer::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateAnimation
// 0x0058 (0x0058 - 0x0000)
struct UMG_MatchingMenu_Wait_C_UpdateAnimation final
{
public:
	struct FTimespan                              InTime;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Anim4;                                             // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Anim3;                                             // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Anim2;                                             // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Anim1;                                             // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         TotalSeconds;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F3D[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F3E[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_2;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_3;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_UpdateAnimation) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Wait_C_UpdateAnimation");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_UpdateAnimation) == 0x000058, "Wrong size on UMG_MatchingMenu_Wait_C_UpdateAnimation");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, InTime) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::InTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, Anim4) == 0x000008, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::Anim4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, Anim3) == 0x000009, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::Anim3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, Anim2) == 0x00000A, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::Anim2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, Anim1) == 0x00000B, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::Anim1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, TotalSeconds) == 0x00000C, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::TotalSeconds' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_GetTotalSeconds_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Not_PreBool_ReturnValue_1) == 0x000015, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Not_PreBool_ReturnValue_2) == 0x000016, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Not_PreBool_ReturnValue_3) == 0x000017, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Lerp_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000028, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Lerp_ReturnValue_1) == 0x000030, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000034, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x000038, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Lerp_ReturnValue_2) == 0x00003C, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Divide_FloatFloat_ReturnValue_3) == 0x000040, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Divide_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Lerp_ReturnValue_3) == 0x000044, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000048, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Less_FloatFloat_ReturnValue) == 0x000049, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x00004A, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x00004C, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Less_FloatFloat_ReturnValue_2) == 0x000050, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Less_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_UpdateAnimation, CallFunc_Less_FloatFloat_ReturnValue_3) == 0x000051, "Member 'UMG_MatchingMenu_Wait_C_UpdateAnimation::CallFunc_Less_FloatFloat_ReturnValue_3' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.AdvanceMatching
// 0x0030 (0x0030 - 0x0000)
struct UMG_MatchingMenu_Wait_C_AdvanceMatching final
{
public:
	bool                                          CallApi;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F3F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue_1;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_AdvanceMatching) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Wait_C_AdvanceMatching");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_AdvanceMatching) == 0x000030, "Wrong size on UMG_MatchingMenu_Wait_C_AdvanceMatching");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_AdvanceMatching, CallApi) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_AdvanceMatching::CallApi' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_AdvanceMatching, CallFunc_SBUtcNow_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Wait_C_AdvanceMatching::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_AdvanceMatching, CallFunc_SBUtcNow_ReturnValue_1) == 0x000010, "Member 'UMG_MatchingMenu_Wait_C_AdvanceMatching::CallFunc_SBUtcNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_AdvanceMatching, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Wait_C_AdvanceMatching::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_AdvanceMatching, CallFunc_GetTotalSeconds_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Wait_C_AdvanceMatching::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_AdvanceMatching, CallFunc_Round_ReturnValue) == 0x000024, "Member 'UMG_MatchingMenu_Wait_C_AdvanceMatching::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_AdvanceMatching, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_Wait_C_AdvanceMatching::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ResetParam
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_Wait_C_ResetParam final
{
public:
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Wait_C_ResetParam) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Wait_C_ResetParam");
static_assert(sizeof(UMG_MatchingMenu_Wait_C_ResetParam) == 0x000008, "Wrong size on UMG_MatchingMenu_Wait_C_ResetParam");
static_assert(offsetof(UMG_MatchingMenu_Wait_C_ResetParam, CallFunc_MakeDateTime_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Wait_C_ResetParam::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");

}

