#pragma once

 

// Package: NumberInputBase

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NumberInputBase.NumberInputBase_C.OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct NumberInputBase_C_OnValueChanged__DelegateSignature final
{
public:
	int32                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputBase_C_OnValueChanged__DelegateSignature) == 0x000004, "Wrong alignment on NumberInputBase_C_OnValueChanged__DelegateSignature");
static_assert(sizeof(NumberInputBase_C_OnValueChanged__DelegateSignature) == 0x000004, "Wrong size on NumberInputBase_C_OnValueChanged__DelegateSignature");
static_assert(offsetof(NumberInputBase_C_OnValueChanged__DelegateSignature, Param_Value) == 0x000000, "Member 'NumberInputBase_C_OnValueChanged__DelegateSignature::Param_Value' has a wrong offset!");

// Function NumberInputBase.NumberInputBase_C.ExecuteUbergraph_NumberInputBase
// 0x0118 (0x0118 - 0x0000)
struct NumberInputBase_C_ExecuteUbergraph_NumberInputBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9521[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9522[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9523[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9524[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9525[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9526[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;     // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_CustomEvent_InChangeValue;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9527[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9528[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9529[0x1];                                     // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_952A[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0100(0x0018)()
};
static_assert(alignof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase) == 0x000008, "Wrong alignment on NumberInputBase_C_ExecuteUbergraph_NumberInputBase");
static_assert(sizeof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase) == 0x000118, "Wrong size on NumberInputBase_C_ExecuteUbergraph_NumberInputBase");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, EntryPoint) == 0x000000, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, Temp_bool_Variable) == 0x000009, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_3) == 0x000048, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_4) == 0x000058, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_IsValid_ReturnValue_2) == 0x00006A, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_5) == 0x00006C, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_BooleanAND_ReturnValue) == 0x00007C, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000080, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_BooleanAND_ReturnValue_1) == 0x000088, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_6) == 0x00008C, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x0000A0, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x0000A8, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_K2_IsTimerActiveHandle_ReturnValue_1) == 0x0000A9, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_K2_IsTimerActiveHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000AA, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Less_IntInt_ReturnValue) == 0x0000AB, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CustomEvent_InChangeValue) == 0x0000AC, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CustomEvent_InChangeValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B0, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000B1, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0000B8, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_Select_Default) == 0x0000BC, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_IsValid_ReturnValue_3) == 0x0000C1, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_IsValid_ReturnValue_4) == 0x0000C2, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000C4, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000D4, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_IsValid_ReturnValue_5) == 0x0000E4, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_IsValid_ReturnValue_6) == 0x0000E5, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000E8, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x0000F8, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_ExecuteUbergraph_NumberInputBase, CallFunc_Conv_IntToText_ReturnValue) == 0x000100, "Member 'NumberInputBase_C_ExecuteUbergraph_NumberInputBase::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function NumberInputBase.NumberInputBase_C.ChangeValue
// 0x0004 (0x0004 - 0x0000)
struct NumberInputBase_C_ChangeValue final
{
public:
	int32                                         InChangeValue;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputBase_C_ChangeValue) == 0x000004, "Wrong alignment on NumberInputBase_C_ChangeValue");
static_assert(sizeof(NumberInputBase_C_ChangeValue) == 0x000004, "Wrong size on NumberInputBase_C_ChangeValue");
static_assert(offsetof(NumberInputBase_C_ChangeValue, InChangeValue) == 0x000000, "Member 'NumberInputBase_C_ChangeValue::InChangeValue' has a wrong offset!");

// Function NumberInputBase.NumberInputBase_C.GetValue
// 0x0004 (0x0004 - 0x0000)
struct NumberInputBase_C_GetValue final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputBase_C_GetValue) == 0x000004, "Wrong alignment on NumberInputBase_C_GetValue");
static_assert(sizeof(NumberInputBase_C_GetValue) == 0x000004, "Wrong size on NumberInputBase_C_GetValue");
static_assert(offsetof(NumberInputBase_C_GetValue, Number) == 0x000000, "Member 'NumberInputBase_C_GetValue::Number' has a wrong offset!");

// Function NumberInputBase.NumberInputBase_C.InitializeValue
// 0x0014 (0x0014 - 0x0000)
struct NumberInputBase_C_InitializeValue final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberMin;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberMax;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NumberInputBase_C_InitializeValue) == 0x000004, "Wrong alignment on NumberInputBase_C_InitializeValue");
static_assert(sizeof(NumberInputBase_C_InitializeValue) == 0x000014, "Wrong size on NumberInputBase_C_InitializeValue");
static_assert(offsetof(NumberInputBase_C_InitializeValue, Number) == 0x000000, "Member 'NumberInputBase_C_InitializeValue::Number' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_InitializeValue, NumberMin) == 0x000004, "Member 'NumberInputBase_C_InitializeValue::NumberMin' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_InitializeValue, NumberMax) == 0x000008, "Member 'NumberInputBase_C_InitializeValue::NumberMax' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_InitializeValue, CallFunc_Clamp_ReturnValue) == 0x00000C, "Member 'NumberInputBase_C_InitializeValue::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NumberInputBase_C_InitializeValue, CallFunc_Max_ReturnValue) == 0x000010, "Member 'NumberInputBase_C_InitializeValue::CallFunc_Max_ReturnValue' has a wrong offset!");

}

