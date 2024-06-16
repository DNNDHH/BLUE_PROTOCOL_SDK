#pragma once

 

// Package: UMG_Notification_Match

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_Notification_Match.UMG_Notification_Match_C.ExecuteUbergraph_UMG_Notification_Match
// 0x00B8 (0x00B8 - 0x0000)
struct UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D65[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D66[0x1];                                     // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCurrentGameContentId_ReturnValue;      // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D67[0x1];                                     // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
};
static_assert(alignof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match");
static_assert(sizeof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match) == 0x0000B8, "Wrong size on UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, EntryPoint) == 0x000000, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000004, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_IsGathered_ReturnValue) == 0x000010, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_IsConfirmed_ReturnValue) == 0x000011, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_IsMatched_ReturnValue) == 0x000012, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, K2Node_Event_MyGeometry) == 0x000014, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetPlayerManager_ReturnValue) == 0x000068, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetPlayerManager_ReturnValue_1) == 0x000070, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue) == 0x000078, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue) == 0x000080, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetSomeOfPartyMemberIsInMissionResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_NotEqual_NameName_ReturnValue) == 0x000081, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_Not_PreBool_ReturnValue) == 0x000082, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetCurrentGameContentId_ReturnValue) == 0x000084, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetCurrentGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x00008C, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_BooleanAND_ReturnValue_1) == 0x00008D, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_BooleanAND_ReturnValue_2) == 0x00008E, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_GetTextFromAsset_ReturnValue) == 0x000090, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.Tick
// 0x003C (0x003C - 0x0000)
struct UMG_Notification_Match_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Match_C_Tick) == 0x000004, "Wrong alignment on UMG_Notification_Match_C_Tick");
static_assert(sizeof(UMG_Notification_Match_C_Tick) == 0x00003C, "Wrong size on UMG_Notification_Match_C_Tick");
static_assert(offsetof(UMG_Notification_Match_C_Tick, MyGeometry) == 0x000000, "Member 'UMG_Notification_Match_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Tick, InDeltaTime) == 0x000038, "Member 'UMG_Notification_Match_C_Tick::InDeltaTime' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.Init
// 0x0060 (0x0060 - 0x0000)
struct UMG_Notification_Match_C_Init final
{
public:
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0000(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0018(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_2;                    // 0x0030(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_3;                    // 0x0048(0x0018)()
};
static_assert(alignof(UMG_Notification_Match_C_Init) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_Init");
static_assert(sizeof(UMG_Notification_Match_C_Init) == 0x000060, "Wrong size on UMG_Notification_Match_C_Init");
static_assert(offsetof(UMG_Notification_Match_C_Init, CallFunc_GetText_ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_Init::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Init, CallFunc_GetText_ReturnValue_1) == 0x000018, "Member 'UMG_Notification_Match_C_Init::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Init, CallFunc_GetText_ReturnValue_2) == 0x000030, "Member 'UMG_Notification_Match_C_Init::CallFunc_GetText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Init, CallFunc_GetText_ReturnValue_3) == 0x000048, "Member 'UMG_Notification_Match_C_Init::CallFunc_GetText_ReturnValue_3' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Applying_CurNumText_Text_0
// 0x0030 (0x0030 - 0x0000)
struct UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0");
static_assert(sizeof(UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0) == 0x000030, "Wrong size on UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0");
static_assert(offsetof(UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Applying_MaxNumText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D68[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNeedParticipantNumber_ReturnValue;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D69[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0");
static_assert(sizeof(UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0) == 0x000048, "Wrong size on UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0");
static_assert(offsetof(UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000018, "Member 'UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0, CallFunc_GetNeedParticipantNumber_ReturnValue) == 0x000028, "Member 'UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0::CallFunc_GetNeedParticipantNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Accepting_CountText_Text_0
// 0x0030 (0x0030 - 0x0000)
struct UMG_Notification_Match_C_Get_Accepting_CountText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0018(0x0018)()
};
static_assert(alignof(UMG_Notification_Match_C_Get_Accepting_CountText_Text_0) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_Get_Accepting_CountText_Text_0");
static_assert(sizeof(UMG_Notification_Match_C_Get_Accepting_CountText_Text_0) == 0x000030, "Wrong size on UMG_Notification_Match_C_Get_Accepting_CountText_Text_0");
static_assert(offsetof(UMG_Notification_Match_C_Get_Accepting_CountText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_Get_Accepting_CountText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_Get_Accepting_CountText_Text_0, CallFunc_Conv_FloatToText_ReturnValue) == 0x000018, "Member 'UMG_Notification_Match_C_Get_Accepting_CountText_Text_0::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.GetQuickAccessKeyText
// 0x00A0 (0x00A0 - 0x0000)
struct UMG_Notification_Match_C_GetQuickAccessKeyText final
{
public:
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBookMarkTypeKey_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(UMG_Notification_Match_C_GetQuickAccessKeyText) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_GetQuickAccessKeyText");
static_assert(sizeof(UMG_Notification_Match_C_GetQuickAccessKeyText) == 0x0000A0, "Wrong size on UMG_Notification_Match_C_GetQuickAccessKeyText");
static_assert(offsetof(UMG_Notification_Match_C_GetQuickAccessKeyText, CallFunc_MakeLiteralString_ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_GetQuickAccessKeyText::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetQuickAccessKeyText, CallFunc_GetBookMarkTypeKey_ReturnValue) == 0x000010, "Member 'UMG_Notification_Match_C_GetQuickAccessKeyText::CallFunc_GetBookMarkTypeKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetQuickAccessKeyText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_Notification_Match_C_GetQuickAccessKeyText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetQuickAccessKeyText, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'UMG_Notification_Match_C_GetQuickAccessKeyText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetQuickAccessKeyText, K2Node_MakeArray_Array) == 0x000078, "Member 'UMG_Notification_Match_C_GetQuickAccessKeyText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetQuickAccessKeyText, CallFunc_Format_ReturnValue) == 0x000088, "Member 'UMG_Notification_Match_C_GetQuickAccessKeyText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.GetOperateMode
// 0x0018 (0x0018 - 0x0000)
struct UMG_Notification_Match_C_GetOperateMode final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D6A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Match_C_GetOperateMode) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_GetOperateMode");
static_assert(sizeof(UMG_Notification_Match_C_GetOperateMode) == 0x000018, "Wrong size on UMG_Notification_Match_C_GetOperateMode");
static_assert(offsetof(UMG_Notification_Match_C_GetOperateMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'UMG_Notification_Match_C_GetOperateMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetOperateMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'UMG_Notification_Match_C_GetOperateMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetOperateMode, CallFunc_GetOperateMode_ReturnValue) == 0x000010, "Member 'UMG_Notification_Match_C_GetOperateMode::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_GetOperateMode, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'UMG_Notification_Match_C_GetOperateMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.SetMatchingText
// 0x0068 (0x0068 - 0x0000)
struct UMG_Notification_Match_C_SetMatchingText final
{
public:
	class UTextBlock*                             OutText;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BaseText;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(UMG_Notification_Match_C_SetMatchingText) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_SetMatchingText");
static_assert(sizeof(UMG_Notification_Match_C_SetMatchingText) == 0x000068, "Wrong size on UMG_Notification_Match_C_SetMatchingText");
static_assert(offsetof(UMG_Notification_Match_C_SetMatchingText, OutText) == 0x000000, "Member 'UMG_Notification_Match_C_SetMatchingText::OutText' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_SetMatchingText, BaseText) == 0x000008, "Member 'UMG_Notification_Match_C_SetMatchingText::BaseText' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_SetMatchingText, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'UMG_Notification_Match_C_SetMatchingText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_SetMatchingText, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000030, "Member 'UMG_Notification_Match_C_SetMatchingText::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_SetMatchingText, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'UMG_Notification_Match_C_SetMatchingText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_SetMatchingText, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'UMG_Notification_Match_C_SetMatchingText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.PlayAnimationForwardIfNotVisible
// 0x0008 (0x0008 - 0x0000)
struct UMG_Notification_Match_C_PlayAnimationForwardIfNotVisible final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Match_C_PlayAnimationForwardIfNotVisible) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_PlayAnimationForwardIfNotVisible");
static_assert(sizeof(UMG_Notification_Match_C_PlayAnimationForwardIfNotVisible) == 0x000008, "Wrong size on UMG_Notification_Match_C_PlayAnimationForwardIfNotVisible");
static_assert(offsetof(UMG_Notification_Match_C_PlayAnimationForwardIfNotVisible, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_PlayAnimationForwardIfNotVisible::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.ShowBright
// 0x0004 (0x0004 - 0x0000)
struct UMG_Notification_Match_C_ShowBright final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Match_C_ShowBright) == 0x000004, "Wrong alignment on UMG_Notification_Match_C_ShowBright");
static_assert(sizeof(UMG_Notification_Match_C_ShowBright) == 0x000004, "Wrong size on UMG_Notification_Match_C_ShowBright");
static_assert(offsetof(UMG_Notification_Match_C_ShowBright, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_ShowBright::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.UpdateConfirmTime
// 0x0018 (0x0018 - 0x0000)
struct UMG_Notification_Match_C_UpdateConfirmTime final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D6B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetConfirmLimitTime_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Match_C_UpdateConfirmTime) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_UpdateConfirmTime");
static_assert(sizeof(UMG_Notification_Match_C_UpdateConfirmTime) == 0x000018, "Wrong size on UMG_Notification_Match_C_UpdateConfirmTime");
static_assert(offsetof(UMG_Notification_Match_C_UpdateConfirmTime, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_UpdateConfirmTime::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateConfirmTime, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'UMG_Notification_Match_C_UpdateConfirmTime::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateConfirmTime, CallFunc_GetMatchedState_bExists) == 0x000005, "Member 'UMG_Notification_Match_C_UpdateConfirmTime::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateConfirmTime, CallFunc_GetMatchedState_ReturnValue) == 0x000008, "Member 'UMG_Notification_Match_C_UpdateConfirmTime::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateConfirmTime, CallFunc_GetConfirmLimitTime_ReturnValue) == 0x000010, "Member 'UMG_Notification_Match_C_UpdateConfirmTime::CallFunc_GetConfirmLimitTime_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Match.UMG_Notification_Match_C.UpdateParticipantNumber
// 0x0018 (0x0018 - 0x0000)
struct UMG_Notification_Match_C_UpdateParticipantNumber final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D6C[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetParticipantNumber_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Match_C_UpdateParticipantNumber) == 0x000008, "Wrong alignment on UMG_Notification_Match_C_UpdateParticipantNumber");
static_assert(sizeof(UMG_Notification_Match_C_UpdateParticipantNumber) == 0x000018, "Wrong size on UMG_Notification_Match_C_UpdateParticipantNumber");
static_assert(offsetof(UMG_Notification_Match_C_UpdateParticipantNumber, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'UMG_Notification_Match_C_UpdateParticipantNumber::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateParticipantNumber, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'UMG_Notification_Match_C_UpdateParticipantNumber::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateParticipantNumber, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000005, "Member 'UMG_Notification_Match_C_UpdateParticipantNumber::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateParticipantNumber, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_Notification_Match_C_UpdateParticipantNumber::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Match_C_UpdateParticipantNumber, CallFunc_GetParticipantNumber_ReturnValue) == 0x000010, "Member 'UMG_Notification_Match_C_UpdateParticipantNumber::CallFunc_GetParticipantNumber_ReturnValue' has a wrong offset!");

}

