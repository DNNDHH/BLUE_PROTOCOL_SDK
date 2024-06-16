#pragma once

 

// Package: UIBlocker

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UIBlocker.UIBlocker_C.ExecuteUbergraph_UIBlocker
// 0x0040 (0x0040 - 0x0000)
struct UIBlocker_C_ExecuteUbergraph_UIBlocker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DA5[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DA6[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DA7[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DA8[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Event_InVisibility;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DA9[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIBlockerType                              K2Node_CustomEvent_UIBlockerType;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_CustomEvent_IsVisibility;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIBlocker_C_ExecuteUbergraph_UIBlocker) == 0x000004, "Wrong alignment on UIBlocker_C_ExecuteUbergraph_UIBlocker");
static_assert(sizeof(UIBlocker_C_ExecuteUbergraph_UIBlocker) == 0x000040, "Wrong size on UIBlocker_C_ExecuteUbergraph_UIBlocker");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, EntryPoint) == 0x000000, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000008, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x00000C, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000010, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, Temp_int_Variable) == 0x000014, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Conv_IntToByte_ReturnValue) == 0x000018, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x00001C, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_GetValidValue_ReturnValue) == 0x000020, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, K2Node_Event_InVisibility) == 0x000028, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::K2Node_Event_InVisibility' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_GetVisibility_ReturnValue) == 0x000029, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00002A, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, K2Node_SwitchEnum_CmpSuccess) == 0x00002B, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, Temp_int_Variable_1) == 0x00002C, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x000030, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000034, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_GetValidValue_ReturnValue_1) == 0x000035, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000036, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, K2Node_CustomEvent_UIBlockerType) == 0x00003C, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::K2Node_CustomEvent_UIBlockerType' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, K2Node_CustomEvent_IsVisibility) == 0x00003D, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::K2Node_CustomEvent_IsVisibility' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, K2Node_SwitchEnum_CmpSuccess_1) == 0x00003E, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(UIBlocker_C_ExecuteUbergraph_UIBlocker, CallFunc_GetVisibility_ReturnValue_1) == 0x00003F, "Member 'UIBlocker_C_ExecuteUbergraph_UIBlocker::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");

// Function UIBlocker.UIBlocker_C.UpdateBlockInputByVisibility
// 0x0001 (0x0001 - 0x0000)
struct UIBlocker_C_UpdateBlockInputByVisibility final
{
public:
	ESlateVisibility                              IsVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIBlocker_C_UpdateBlockInputByVisibility) == 0x000001, "Wrong alignment on UIBlocker_C_UpdateBlockInputByVisibility");
static_assert(sizeof(UIBlocker_C_UpdateBlockInputByVisibility) == 0x000001, "Wrong size on UIBlocker_C_UpdateBlockInputByVisibility");
static_assert(offsetof(UIBlocker_C_UpdateBlockInputByVisibility, IsVisibility) == 0x000000, "Member 'UIBlocker_C_UpdateBlockInputByVisibility::IsVisibility' has a wrong offset!");

// Function UIBlocker.UIBlocker_C.ChangeUiBlockerType
// 0x0001 (0x0001 - 0x0000)
struct UIBlocker_C_ChangeUiBlockerType final
{
public:
	ESBUIBlockerType                              Param_UIBlockerType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIBlocker_C_ChangeUiBlockerType) == 0x000001, "Wrong alignment on UIBlocker_C_ChangeUiBlockerType");
static_assert(sizeof(UIBlocker_C_ChangeUiBlockerType) == 0x000001, "Wrong size on UIBlocker_C_ChangeUiBlockerType");
static_assert(offsetof(UIBlocker_C_ChangeUiBlockerType, Param_UIBlockerType) == 0x000000, "Member 'UIBlocker_C_ChangeUiBlockerType::Param_UIBlockerType' has a wrong offset!");

// Function UIBlocker.UIBlocker_C.BP_SetVisibility
// 0x0001 (0x0001 - 0x0000)
struct UIBlocker_C_BP_SetVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIBlocker_C_BP_SetVisibility) == 0x000001, "Wrong alignment on UIBlocker_C_BP_SetVisibility");
static_assert(sizeof(UIBlocker_C_BP_SetVisibility) == 0x000001, "Wrong size on UIBlocker_C_BP_SetVisibility");
static_assert(offsetof(UIBlocker_C_BP_SetVisibility, InVisibility) == 0x000000, "Member 'UIBlocker_C_BP_SetVisibility::InVisibility' has a wrong offset!");

}

