#pragma once

 

// Package: BP_RsDialog_ErrorCode

#include "Basic.hpp"

#include "RsDialogButtonType_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.ExecuteUbergraph_BP_RsDialog_ErrorCode
// 0x0030 (0x0030 - 0x0000)
struct BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode) == 0x000008, "Wrong alignment on BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode");
static_assert(sizeof(BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode) == 0x000030, "Wrong size on BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode");
static_assert(offsetof(BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode, EntryPoint) == 0x000000, "Member 'BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode, K2Node_CustomEvent_ErrorCode) == 0x000004, "Member 'BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode, CallFunc_GetSBRetMessage_ReturnValue) == 0x000008, "Member 'BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.SetText_ErrorCode
// 0x0004 (0x0004 - 0x0000)
struct BP_RsDialog_ErrorCode_C_SetText_ErrorCode final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_ErrorCode_C_SetText_ErrorCode) == 0x000004, "Wrong alignment on BP_RsDialog_ErrorCode_C_SetText_ErrorCode");
static_assert(sizeof(BP_RsDialog_ErrorCode_C_SetText_ErrorCode) == 0x000004, "Wrong size on BP_RsDialog_ErrorCode_C_SetText_ErrorCode");
static_assert(offsetof(BP_RsDialog_ErrorCode_C_SetText_ErrorCode, ErrorCode) == 0x000000, "Member 'BP_RsDialog_ErrorCode_C_SetText_ErrorCode::ErrorCode' has a wrong offset!");

}

