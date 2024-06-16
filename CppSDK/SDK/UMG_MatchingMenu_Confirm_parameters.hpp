#pragma once

 

// Package: UMG_MatchingMenu_Confirm

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.ExecuteUbergraph_UMG_MatchingMenu_Confirm
// 0x02B8 (0x02B8 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableQualifyLevel_Enable;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7492[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0038(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7493[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists_1;     // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7494[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue_1; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMatchingManager_IsValid;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7495[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingManager*                     CallFunc_GetMatchingManager_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlimit_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7496[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7497[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PenaltyLiftedAt;                // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_LeftBeforePenalty;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPenaltyInfo_ReturnValue;               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7498[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7499[0x2];                                     // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0104(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0108(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate;              // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_749A[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0120(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0124(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_749B[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0158(0x0040)(HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x0198(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_749C[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01C8(0x0018)()
	class FName                                   CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue; // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E8(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0208(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0230(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0258(0x0028)()
	TDelegate<void(bool bWasSuccessful, int32 PenaltyLiftedAt, int32 LeftBeforePenalty)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0280(0x0010)(ZeroConstructor, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0290(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchingManager_IsValid_1;             // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_749D[0x5];                                     // 0x0293(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingManager*                     CallFunc_GetMatchingManager_ReturnValue_1;         // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_749E[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x02A8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm) == 0x0002B8, "Wrong size on UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, Temp_int_Variable) == 0x000004, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, Temp_int_Variable_1) == 0x000008, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_IsEnableQualifyLevel_Enable) == 0x00000C, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_IsEnableQualifyLevel_Enable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_Event_MyGeometry) == 0x000038, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_Event_InDeltaTime) == 0x000070, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000074, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000078, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, Temp_bool_Variable) == 0x000080, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetCurrentMatchmakingState_bExists_1) == 0x000081, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetCurrentMatchmakingState_bExists_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetCurrentMatchmakingState_ReturnValue_1) == 0x000088, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetCurrentMatchmakingState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetMatchingManager_IsValid) == 0x000090, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetMatchingManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetMatchingManager_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetMatchingManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_IsUnlimit_ReturnValue) == 0x0000A0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_IsUnlimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000A8, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CustomEvent_bWasSuccessful) == 0x0000B0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CustomEvent_PenaltyLiftedAt) == 0x0000B4, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CustomEvent_PenaltyLiftedAt' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CustomEvent_LeftBeforePenalty) == 0x0000B8, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CustomEvent_LeftBeforePenalty' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetPenaltyInfo_ReturnValue) == 0x0000BC, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetPenaltyInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_MakeStruct_FormatArgumentData) == 0x0000C0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_Greater_IntInt_ReturnValue) == 0x000100, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000101, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, Temp_int_Variable_2) == 0x000104, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_Select_Default) == 0x000108, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CreateDelegate_OutputDelegate) == 0x00010C, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, Temp_bool_Variable_1) == 0x00011C, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, Temp_int_Variable_3) == 0x000120, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_Select_Default_1) == 0x000124, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000128, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, Temp_bool_Variable_2) == 0x000138, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_MakeStruct_FormatArgumentData_1) == 0x000158, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_Select_Default_2) == 0x000198, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_MakeArray_Array) == 0x0001A0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0001B0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0001C0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001C8, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue) == 0x0001E0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_Format_ReturnValue) == 0x0001E8, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000200, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_MakeStruct_SlateColor) == 0x000208, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_MakeStruct_SlateColor_1) == 0x000230, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_MakeStruct_SlateColor_2) == 0x000258, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CreateDelegate_OutputDelegate_1) == 0x000280, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CustomEvent_Result) == 0x000290, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000291, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetMatchingManager_IsValid_1) == 0x000292, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetMatchingManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_GetMatchingManager_ReturnValue_1) == 0x000298, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_GetMatchingManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CustomEvent_RetCode) == 0x0002A0, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002A4, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002A8, "Member 'UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.OnNoticeButtonUpdate_Event
// 0x0004 (0x0004 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event) == 0x000004, "Wrong size on UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event, RetCode) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event::RetCode' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.OnEndDeclineDialog
// 0x0001 (0x0001 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog) == 0x000001, "Wrong alignment on UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog) == 0x000001, "Wrong size on UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog, Result) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog::Result' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.OnGetPenaltyInfo
// 0x000C (0x000C - 0x0000)
struct UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_749F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PenaltyLiftedAt;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LeftBeforePenalty;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo) == 0x00000C, "Wrong size on UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo, bWasSuccessful) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo, PenaltyLiftedAt) == 0x000004, "Member 'UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo::PenaltyLiftedAt' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo, LeftBeforePenalty) == 0x000008, "Member 'UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo::LeftBeforePenalty' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Tick
// 0x003C (0x003C - 0x0000)
struct UMG_MatchingMenu_Confirm_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_Tick) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Confirm_C_Tick");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_Tick) == 0x00003C, "Wrong size on UMG_MatchingMenu_Confirm_C_Tick");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Tick, MyGeometry) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Tick, InDeltaTime) == 0x000038, "Member 'UMG_MatchingMenu_Confirm_C_Tick::InDeltaTime' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_TimeLimitText_Text_0
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	float                                         LimitTime;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74A0[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0020(0x0018)()
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A1[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetConfirmLimitTime_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0) == 0x000050, "Wrong size on UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0, LimitTime) == 0x000018, "Member 'UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0::LimitTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0, CallFunc_Conv_FloatToText_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000038, "Member 'UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0, CallFunc_GetConfirmLimitTime_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0::CallFunc_GetConfirmLimitTime_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.CancelInvite
// 0x0098 (0x0098 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_CancelInvite final
{
public:
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo;       // 0x0000(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A3[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo_1;     // 0x0058(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue_1;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_CancelInvite) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_CancelInvite");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_CancelInvite) == 0x000098, "Wrong size on UMG_MatchingMenu_Confirm_C_CancelInvite");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CancelInvite, CallFunc_GetPendingInviteInfo_OutInviteInfo) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_CancelInvite::CallFunc_GetPendingInviteInfo_OutInviteInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CancelInvite, CallFunc_GetPendingInviteInfo_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_Confirm_C_CancelInvite::CallFunc_GetPendingInviteInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CancelInvite, CallFunc_GetGameInstance_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_Confirm_C_CancelInvite::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CancelInvite, K2Node_DynamicCast_AsSBGame_Instance) == 0x000048, "Member 'UMG_MatchingMenu_Confirm_C_CancelInvite::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CancelInvite, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'UMG_MatchingMenu_Confirm_C_CancelInvite::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CancelInvite, CallFunc_GetPendingInviteInfo_OutInviteInfo_1) == 0x000058, "Member 'UMG_MatchingMenu_Confirm_C_CancelInvite::CallFunc_GetPendingInviteInfo_OutInviteInfo_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CancelInvite, CallFunc_GetPendingInviteInfo_ReturnValue_1) == 0x000090, "Member 'UMG_MatchingMenu_Confirm_C_CancelInvite::CallFunc_GetPendingInviteInfo_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.IsEnableQualifyLevel
// 0x0220 (0x0220 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GameContentId;                                     // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMapInfo                             CallFunc_GetDungeonMapInfo_MapInfo;                // 0x0018(0x01E0)()
	bool                                          CallFunc_GetDungeonMapInfo_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A5[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A6[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetGameContentId_ReturnValue;             // 0x020C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel) == 0x000220, "Wrong size on UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, Enable) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::Enable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, GameContentId) == 0x000004, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::GameContentId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetClassLevel_ReturnValue) == 0x00000C, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetDungeonMapInfo_MapInfo) == 0x000018, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetDungeonMapInfo_MapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetDungeonMapInfo_ReturnValue) == 0x0001F8, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetDungeonMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetCurrentMatchmakingState_bExists) == 0x0001F9, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000200, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000208, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetGameContentId_ReturnValue) == 0x00020C, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GetTotalPower_ReturnValue) == 0x000214, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000218, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel, CallFunc_BooleanAND_ReturnValue) == 0x000219, "Member 'UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_JoinButton_bIsEnabled_0
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A7[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsJoinable_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0) == 0x000018, "Wrong size on UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000001, "Member 'UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0, CallFunc_IsJoinable_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0::CallFunc_IsJoinable_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.checkButtonEnable
// 0x0040 (0x0040 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_CheckButtonEnable final
{
public:
	bool                                          CallFunc_IsTraveling_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_JoinButton_bIsEnabled_0_ReturnValue;  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_IsConfirmed_ReturnValue;              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_JoinButton_bIsEnabled_0_ReturnValue_1; // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_CheckButtonEnable");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable) == 0x000040, "Wrong size on UMG_MatchingMenu_Confirm_C_CheckButtonEnable");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_IsTraveling_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_IsTraveling_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_Get_JoinButton_bIsEnabled_0_ReturnValue) == 0x000031, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_Get_JoinButton_bIsEnabled_0_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_Get_IsConfirmed_ReturnValue) == 0x000033, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_Get_IsConfirmed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_Not_PreBool_ReturnValue_1) == 0x000034, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_IsVisible_ReturnValue) == 0x000035, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_Get_JoinButton_bIsEnabled_0_ReturnValue_1) == 0x000036, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_Get_JoinButton_bIsEnabled_0_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_BooleanAND_ReturnValue_1) == 0x000037, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_CheckButtonEnable, CallFunc_IsVisible_ReturnValue_1) == 0x000038, "Member 'UMG_MatchingMenu_Confirm_C_CheckButtonEnable::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_IsConfirmed
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_Get_IsConfirmed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74A9[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_Get_IsConfirmed) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_Get_IsConfirmed");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_Get_IsConfirmed) == 0x000018, "Wrong size on UMG_MatchingMenu_Confirm_C_Get_IsConfirmed");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_IsConfirmed, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_Get_IsConfirmed::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_IsConfirmed, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000001, "Member 'UMG_MatchingMenu_Confirm_C_Get_IsConfirmed::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_IsConfirmed, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Confirm_C_Get_IsConfirmed::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_IsConfirmed, CallFunc_IsConfirmed_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Confirm_C_Get_IsConfirmed::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.IsTraveling
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_IsTraveling final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74AA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTraveling_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_IsTraveling) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_IsTraveling");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_IsTraveling) == 0x000018, "Wrong size on UMG_MatchingMenu_Confirm_C_IsTraveling");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsTraveling, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_IsTraveling::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsTraveling, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000001, "Member 'UMG_MatchingMenu_Confirm_C_IsTraveling::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsTraveling, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Confirm_C_IsTraveling::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsTraveling, CallFunc_IsConfirmed_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Confirm_C_IsTraveling::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_IsTraveling, CallFunc_IsTraveling_ReturnValue) == 0x000011, "Member 'UMG_MatchingMenu_Confirm_C_IsTraveling::CallFunc_IsTraveling_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_NeedParticipantNumberText_1_Text_0
// 0x0058 (0x0058 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	int32                                         RemainingTime;                                     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74AB[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRemainingTime_ReturnValue;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMinutes_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74AC[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0040(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0) == 0x000058, "Wrong size on UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, RemainingTime) == 0x000018, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::RemainingTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, CallFunc_GetCurrentMatchmakingState_bExists) == 0x00001C, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, CallFunc_GetRemainingTime_ReturnValue) == 0x00002C, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::CallFunc_GetRemainingTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, CallFunc_FromSeconds_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::CallFunc_FromSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, CallFunc_GetTotalMinutes_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::CallFunc_GetTotalMinutes_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0, CallFunc_Conv_FloatToText_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.SetSwitcherEnterOrJoin
// 0x00A0 (0x00A0 - 0x0000)
struct UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin final
{
public:
	class UVerticalBox*                           VerticalBox;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameContentId;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMatchingGameState*                   CurrentMatchmakingState;                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentMatchmakingStateExists;                     // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBackfill_Result_ReturnValue;            // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetGameLimitTimeOfMissionInWhichPartyMemberIsParticipating_ReturnValue; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74AD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours;                      // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74AE[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0048(0x0018)()
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74AF[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue; // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74B0[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74B1[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBox*                           K2Node_Select_Default_2;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           K2Node_Select_Default_3;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74B2[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin");
static_assert(sizeof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin) == 0x0000A0, "Wrong size on UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, VerticalBox) == 0x000000, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::VerticalBox' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, GameContentId) == 0x000008, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::GameContentId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CurrentMatchmakingState) == 0x000010, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CurrentMatchmakingState' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CurrentMatchmakingStateExists) == 0x000018, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CurrentMatchmakingStateExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, Temp_bool_Variable) == 0x000019, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, Temp_bool_Variable_1) == 0x00001A, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, Temp_bool_Variable_2) == 0x00001B, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, Temp_bool_Variable_3) == 0x00001C, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, Temp_byte_Variable) == 0x00001D, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, Temp_byte_Variable_1) == 0x00001E, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_IsBackfill_Result_ReturnValue) == 0x00001F, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_IsBackfill_Result_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_GetGameLimitTimeOfMissionInWhichPartyMemberIsParticipating_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_GetGameLimitTimeOfMissionInWhichPartyMemberIsParticipating_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_FromSeconds_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_FromSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_BreakTimespan_Days) == 0x000030, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_BreakTimespan_Hours) == 0x000034, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_BreakTimespan_Minutes) == 0x000038, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_BreakTimespan_Seconds) == 0x00003C, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_BreakTimespan_Milliseconds) == 0x000040, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_NotEqual_NameName_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_GetGameContentIdPartyMemberIsParticipatingIn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, K2Node_Select_Default) == 0x000070, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, K2Node_Select_Default_1) == 0x000078, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, K2Node_Select_Default_2) == 0x000080, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, K2Node_Select_Default_3) == 0x000088, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000090, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_Confirm_C_SetSwitcherEnterOrJoin::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");

}

