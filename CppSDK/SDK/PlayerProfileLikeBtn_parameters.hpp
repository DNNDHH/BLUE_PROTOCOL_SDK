#pragma once

 

// Package: PlayerProfileLikeBtn

#include "Basic.hpp"

#include "ESendLikeError_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SendLikeErrorStruct_structs.hpp"


namespace SDK::Params
{

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.ExecuteUbergraph_PlayerProfileLikeBtn
// 0x0110 (0x0110 - 0x0000)
struct PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 RetCode, int32 Warning)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9013[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLikeSend>                      K2Node_CustomEvent_SendLikeList;                   // 0x0018(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0039(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9014[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x003C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Warning;                        // 0x0040(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9015[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0050(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9016[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InWarning;                      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsSystemMessage;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9017[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9018[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSendLikeErrorStruct                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9019[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901A[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F0(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn) == 0x000008, "Wrong alignment on PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn");
static_assert(sizeof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn) == 0x000110, "Wrong size on PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, EntryPoint) == 0x000000, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_CustomEvent_SendLikeList) == 0x000018, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_CustomEvent_SendLikeList' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000030, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_CustomEvent_bWasSuccessful) == 0x000039, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_CustomEvent_RetCode) == 0x00003C, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_CustomEvent_Warning) == 0x000040, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_CustomEvent_Warning' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetConcernedList_ReturnValue) == 0x000048, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetSBRetMessage_ReturnValue) == 0x000050, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetPlayerController_ReturnValue_1) == 0x000078, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000080, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_CustomEvent_InWarning) == 0x00008C, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_CustomEvent_InWarning' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, K2Node_CustomEvent_InIsSystemMessage) == 0x000090, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::K2Node_CustomEvent_InIsSystemMessage' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetConcernedList_ReturnValue_1) == 0x000098, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A0, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_Conv_IntToString_ReturnValue) == 0x0000A8, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B8, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000C0, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D0, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000D8, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000E8, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F0, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn, CallFunc_BooleanOR_ReturnValue) == 0x000108, "Member 'PlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonErrorType
// 0x0008 (0x0008 - 0x0000)
struct PlayerProfileLikeBtn_C_SetButtonErrorType final
{
public:
	int32                                         InWarning;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsSystemMessage;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfileLikeBtn_C_SetButtonErrorType) == 0x000004, "Wrong alignment on PlayerProfileLikeBtn_C_SetButtonErrorType");
static_assert(sizeof(PlayerProfileLikeBtn_C_SetButtonErrorType) == 0x000008, "Wrong size on PlayerProfileLikeBtn_C_SetButtonErrorType");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetButtonErrorType, InWarning) == 0x000000, "Member 'PlayerProfileLikeBtn_C_SetButtonErrorType::InWarning' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetButtonErrorType, InIsSystemMessage) == 0x000004, "Member 'PlayerProfileLikeBtn_C_SetButtonErrorType::InIsSystemMessage' has a wrong offset!");

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.OnSendLikeEvent
// 0x000C (0x000C - 0x0000)
struct PlayerProfileLikeBtn_C_OnSendLikeEvent final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Warning;                                           // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfileLikeBtn_C_OnSendLikeEvent) == 0x000004, "Wrong alignment on PlayerProfileLikeBtn_C_OnSendLikeEvent");
static_assert(sizeof(PlayerProfileLikeBtn_C_OnSendLikeEvent) == 0x00000C, "Wrong size on PlayerProfileLikeBtn_C_OnSendLikeEvent");
static_assert(offsetof(PlayerProfileLikeBtn_C_OnSendLikeEvent, bWasSuccessful) == 0x000000, "Member 'PlayerProfileLikeBtn_C_OnSendLikeEvent::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_OnSendLikeEvent, RetCode) == 0x000004, "Member 'PlayerProfileLikeBtn_C_OnSendLikeEvent::RetCode' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_OnSendLikeEvent, Warning) == 0x000008, "Member 'PlayerProfileLikeBtn_C_OnSendLikeEvent::Warning' has a wrong offset!");

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SendLike
// 0x0010 (0x0010 - 0x0000)
struct PlayerProfileLikeBtn_C_SendLike final
{
public:
	TArray<struct FLikeSend>                      SendLikeList;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerProfileLikeBtn_C_SendLike) == 0x000008, "Wrong alignment on PlayerProfileLikeBtn_C_SendLike");
static_assert(sizeof(PlayerProfileLikeBtn_C_SendLike) == 0x000010, "Wrong size on PlayerProfileLikeBtn_C_SendLike");
static_assert(offsetof(PlayerProfileLikeBtn_C_SendLike, SendLikeList) == 0x000000, "Member 'PlayerProfileLikeBtn_C_SendLike::SendLikeList' has a wrong offset!");

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetData
// 0x000C (0x000C - 0x0000)
struct PlayerProfileLikeBtn_C_SetData final
{
public:
	bool                                          IsSendLIke;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OnlineStatus;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PSOnlyDiff;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfileLikeBtn_C_SetData) == 0x000004, "Wrong alignment on PlayerProfileLikeBtn_C_SetData");
static_assert(sizeof(PlayerProfileLikeBtn_C_SetData) == 0x00000C, "Wrong size on PlayerProfileLikeBtn_C_SetData");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetData, IsSendLIke) == 0x000000, "Member 'PlayerProfileLikeBtn_C_SetData::IsSendLIke' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetData, OnlineStatus) == 0x000004, "Member 'PlayerProfileLikeBtn_C_SetData::OnlineStatus' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetData, PSOnlyDiff) == 0x000008, "Member 'PlayerProfileLikeBtn_C_SetData::PSOnlyDiff' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetData, ReturnValue) == 0x000009, "Member 'PlayerProfileLikeBtn_C_SetData::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000A, "Member 'PlayerProfileLikeBtn_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetData, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'PlayerProfileLikeBtn_C_SetData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonEnable
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfileLikeBtn_C_SetButtonEnable final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfileLikeBtn_C_SetButtonEnable) == 0x000001, "Wrong alignment on PlayerProfileLikeBtn_C_SetButtonEnable");
static_assert(sizeof(PlayerProfileLikeBtn_C_SetButtonEnable) == 0x000001, "Wrong size on PlayerProfileLikeBtn_C_SetButtonEnable");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetButtonEnable, bInIsEnabled) == 0x000000, "Member 'PlayerProfileLikeBtn_C_SetButtonEnable::bInIsEnabled' has a wrong offset!");

// Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonType
// 0x0002 (0x0002 - 0x0000)
struct PlayerProfileLikeBtn_C_SetButtonType final
{
public:
	ESendLikeError                                Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfileLikeBtn_C_SetButtonType) == 0x000001, "Wrong alignment on PlayerProfileLikeBtn_C_SetButtonType");
static_assert(sizeof(PlayerProfileLikeBtn_C_SetButtonType) == 0x000002, "Wrong size on PlayerProfileLikeBtn_C_SetButtonType");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetButtonType, Selection) == 0x000000, "Member 'PlayerProfileLikeBtn_C_SetButtonType::Selection' has a wrong offset!");
static_assert(offsetof(PlayerProfileLikeBtn_C_SetButtonType, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'PlayerProfileLikeBtn_C_SetButtonType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

