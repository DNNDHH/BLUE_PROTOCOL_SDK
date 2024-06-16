#pragma once

 

// Package: ErrorTooltip

#include "Basic.hpp"

#include "GuildErrorDisplay_structs.hpp"


namespace SDK::Params
{

// Function ErrorTooltip.ErrorTooltip_C.ExecuteUbergraph_ErrorTooltip
// 0x0040 (0x0040 - 0x0000)
struct ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildErrorDisplay                            K2Node_CustomEvent_ErrorType;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildErrorDisplay                            Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FE3[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FE4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip) == 0x000008, "Wrong alignment on ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip");
static_assert(sizeof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip) == 0x000040, "Wrong size on ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, EntryPoint) == 0x000000, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, K2Node_CustomEvent_ErrorType) == 0x000004, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::K2Node_CustomEvent_ErrorType' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, Temp_byte_Variable) == 0x000005, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, Temp_int_Variable) == 0x000008, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, Temp_int_Variable_1) == 0x00000C, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, K2Node_Select_Default) == 0x000014, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ErrorTooltip.ErrorTooltip_C.SetErrorType
// 0x0001 (0x0001 - 0x0000)
struct ErrorTooltip_C_SetErrorType final
{
public:
	EGuildErrorDisplay                            Param_ErrorType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErrorTooltip_C_SetErrorType) == 0x000001, "Wrong alignment on ErrorTooltip_C_SetErrorType");
static_assert(sizeof(ErrorTooltip_C_SetErrorType) == 0x000001, "Wrong size on ErrorTooltip_C_SetErrorType");
static_assert(offsetof(ErrorTooltip_C_SetErrorType, Param_ErrorType) == 0x000000, "Member 'ErrorTooltip_C_SetErrorType::Param_ErrorType' has a wrong offset!");

}

