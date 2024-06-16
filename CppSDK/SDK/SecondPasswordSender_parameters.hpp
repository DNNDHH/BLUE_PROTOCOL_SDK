#pragma once

 

// Package: SecondPasswordSender

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SecondPasswordSenderStartType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SecondPasswordSenderEndReason_structs.hpp"


namespace SDK::Params
{

// Function SecondPasswordSender.SecondPasswordSender_C.OnEnd__DelegateSignature
// 0x0003 (0x0003 - 0x0000)
struct SecondPasswordSender_C_OnEnd__DelegateSignature final
{
public:
	ESendSecondPasswordRole                       Param_Role;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderEndReason                Reason;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderStartType                StartType;                                         // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SecondPasswordSender_C_OnEnd__DelegateSignature) == 0x000001, "Wrong alignment on SecondPasswordSender_C_OnEnd__DelegateSignature");
static_assert(sizeof(SecondPasswordSender_C_OnEnd__DelegateSignature) == 0x000003, "Wrong size on SecondPasswordSender_C_OnEnd__DelegateSignature");
static_assert(offsetof(SecondPasswordSender_C_OnEnd__DelegateSignature, Param_Role) == 0x000000, "Member 'SecondPasswordSender_C_OnEnd__DelegateSignature::Param_Role' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_OnEnd__DelegateSignature, Reason) == 0x000001, "Member 'SecondPasswordSender_C_OnEnd__DelegateSignature::Reason' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_OnEnd__DelegateSignature, StartType) == 0x000002, "Member 'SecondPasswordSender_C_OnEnd__DelegateSignature::StartType' has a wrong offset!");

// Function SecondPasswordSender.SecondPasswordSender_C.ExecuteUbergraph_SecondPasswordSender
// 0x0088 (0x0088 - 0x0000)
struct SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderStartType                Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESecondPasswordSenderStartType                Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E59[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          K2Node_Event_bWasSuccessful;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E5A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_ExpireCount;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESendSecondPasswordRole                       K2Node_Event_Role;                                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasAuthorized;                       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESendSecondPasswordRole                       Temp_byte_Variable_2;                              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESendSecondPasswordRole                       Temp_byte_Variable_3;                              // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESendSecondPasswordRole                       Temp_byte_Variable_4;                              // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESendSecondPasswordRole                       K2Node_Select_Default;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E5B[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0070(0x0018)()
};
static_assert(alignof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender) == 0x000008, "Wrong alignment on SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender");
static_assert(sizeof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender) == 0x000088, "Wrong size on SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, EntryPoint) == 0x000000, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::EntryPoint' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_byte_Variable) == 0x000004, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_bool_Variable) == 0x000005, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_bool_Variable_1) == 0x000006, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_bool_Variable_2) == 0x000007, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_byte_Variable_1) == 0x000018, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_Event_bWasSuccessful) == 0x000048, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_Event_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_Event_ExpireCount) == 0x00004C, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_Event_ExpireCount' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_Event_Role) == 0x000050, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_Event_Role' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_Event_bWasAuthorized) == 0x000051, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_Event_bWasAuthorized' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_SwitchEnum_CmpSuccess) == 0x000052, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000053, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000054, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_byte_Variable_2) == 0x000055, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_byte_Variable_3) == 0x000056, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, Temp_byte_Variable_4) == 0x000057, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_Select_Default) == 0x000058, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, K2Node_Select_Default_1) == 0x000059, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000060, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000070, "Member 'SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function SecondPasswordSender.SecondPasswordSender_C.OnAuthorizeSecondPassword
// 0x000C (0x000C - 0x0000)
struct SecondPasswordSender_C_OnAuthorizeSecondPassword final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E5C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ExpireCount;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESendSecondPasswordRole                       Param_Role;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasAuthorized;                                    // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SecondPasswordSender_C_OnAuthorizeSecondPassword) == 0x000004, "Wrong alignment on SecondPasswordSender_C_OnAuthorizeSecondPassword");
static_assert(sizeof(SecondPasswordSender_C_OnAuthorizeSecondPassword) == 0x00000C, "Wrong size on SecondPasswordSender_C_OnAuthorizeSecondPassword");
static_assert(offsetof(SecondPasswordSender_C_OnAuthorizeSecondPassword, bWasSuccessful) == 0x000000, "Member 'SecondPasswordSender_C_OnAuthorizeSecondPassword::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_OnAuthorizeSecondPassword, ExpireCount) == 0x000004, "Member 'SecondPasswordSender_C_OnAuthorizeSecondPassword::ExpireCount' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_OnAuthorizeSecondPassword, Param_Role) == 0x000008, "Member 'SecondPasswordSender_C_OnAuthorizeSecondPassword::Param_Role' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_OnAuthorizeSecondPassword, bWasAuthorized) == 0x000009, "Member 'SecondPasswordSender_C_OnAuthorizeSecondPassword::bWasAuthorized' has a wrong offset!");

// Function SecondPasswordSender.SecondPasswordSender_C.SendPassword
// 0x0020 (0x0020 - 0x0000)
struct SecondPasswordSender_C_SendPassword final
{
public:
	ESendSecondPasswordRole                       Param_Role;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E5D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPassword_Password;                     // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SecondPasswordSender_C_SendPassword) == 0x000008, "Wrong alignment on SecondPasswordSender_C_SendPassword");
static_assert(sizeof(SecondPasswordSender_C_SendPassword) == 0x000020, "Wrong size on SecondPasswordSender_C_SendPassword");
static_assert(offsetof(SecondPasswordSender_C_SendPassword, Param_Role) == 0x000000, "Member 'SecondPasswordSender_C_SendPassword::Param_Role' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SendPassword, CallFunc_GetPassword_Password) == 0x000008, "Member 'SecondPasswordSender_C_SendPassword::CallFunc_GetPassword_Password' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SendPassword, CallFunc_Conv_StringToInt_ReturnValue) == 0x000018, "Member 'SecondPasswordSender_C_SendPassword::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");

// Function SecondPasswordSender.SecondPasswordSender_C.SetCaption
// 0x0014 (0x0014 - 0x0000)
struct SecondPasswordSender_C_SetCaption final
{
public:
	ESecondPasswordSenderStartType                Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E5E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SecondPasswordSender_C_SetCaption) == 0x000004, "Wrong alignment on SecondPasswordSender_C_SetCaption");
static_assert(sizeof(SecondPasswordSender_C_SetCaption) == 0x000014, "Wrong size on SecondPasswordSender_C_SetCaption");
static_assert(offsetof(SecondPasswordSender_C_SetCaption, Temp_byte_Variable) == 0x000000, "Member 'SecondPasswordSender_C_SetCaption::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaption, Temp_int_Variable) == 0x000004, "Member 'SecondPasswordSender_C_SetCaption::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaption, Temp_int_Variable_1) == 0x000008, "Member 'SecondPasswordSender_C_SetCaption::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaption, Temp_int_Variable_2) == 0x00000C, "Member 'SecondPasswordSender_C_SetCaption::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaption, K2Node_Select_Default) == 0x000010, "Member 'SecondPasswordSender_C_SetCaption::K2Node_Select_Default' has a wrong offset!");

// Function SecondPasswordSender.SecondPasswordSender_C.SetCaptionFailure
// 0x00A0 (0x00A0 - 0x0000)
struct SecondPasswordSender_C_SetCaptionFailure final
{
public:
	int32                                         ExpireCount;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E5F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E60[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(SecondPasswordSender_C_SetCaptionFailure) == 0x000008, "Wrong alignment on SecondPasswordSender_C_SetCaptionFailure");
static_assert(sizeof(SecondPasswordSender_C_SetCaptionFailure) == 0x0000A0, "Wrong size on SecondPasswordSender_C_SetCaptionFailure");
static_assert(offsetof(SecondPasswordSender_C_SetCaptionFailure, ExpireCount) == 0x000000, "Member 'SecondPasswordSender_C_SetCaptionFailure::ExpireCount' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaptionFailure, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'SecondPasswordSender_C_SetCaptionFailure::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaptionFailure, CallFunc_MakeLiteralInt_ReturnValue) == 0x000018, "Member 'SecondPasswordSender_C_SetCaptionFailure::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaptionFailure, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'SecondPasswordSender_C_SetCaptionFailure::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaptionFailure, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'SecondPasswordSender_C_SetCaptionFailure::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaptionFailure, K2Node_MakeArray_Array) == 0x000078, "Member 'SecondPasswordSender_C_SetCaptionFailure::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SecondPasswordSender_C_SetCaptionFailure, CallFunc_Format_ReturnValue) == 0x000088, "Member 'SecondPasswordSender_C_SetCaptionFailure::CallFunc_Format_ReturnValue' has a wrong offset!");

}

