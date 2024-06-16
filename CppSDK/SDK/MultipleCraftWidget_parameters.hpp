#pragma once

 

// Package: MultipleCraftWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function MultipleCraftWidget.MultipleCraftWidget_C.OnCreateNumChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature final
{
public:
	int32                                         Param_Now;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature) == 0x000004, "Wrong alignment on MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature");
static_assert(sizeof(MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature) == 0x000004, "Wrong size on MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature");
static_assert(offsetof(MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature, Param_Now) == 0x000000, "Member 'MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature::Param_Now' has a wrong offset!");

// Function MultipleCraftWidget.MultipleCraftWidget_C.ExecuteUbergraph_MultipleCraftWidget
// 0x0050 (0x0050 - 0x0000)
struct MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67BA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget) == 0x000008, "Wrong alignment on MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget");
static_assert(sizeof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget) == 0x000050, "Wrong size on MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, EntryPoint) == 0x000000, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, Temp_int_Variable) == 0x000004, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, Temp_int_Variable_1) == 0x000008, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, CallFunc_Clamp_ReturnValue) == 0x000040, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function MultipleCraftWidget.MultipleCraftWidget_C.SetValue
// 0x0028 (0x0028 - 0x0000)
struct MultipleCraftWidget_C_SetValue final
{
public:
	int32                                         Param_SetValue;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SetedValue;                                        // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67BB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(MultipleCraftWidget_C_SetValue) == 0x000008, "Wrong alignment on MultipleCraftWidget_C_SetValue");
static_assert(sizeof(MultipleCraftWidget_C_SetValue) == 0x000028, "Wrong size on MultipleCraftWidget_C_SetValue");
static_assert(offsetof(MultipleCraftWidget_C_SetValue, Param_SetValue) == 0x000000, "Member 'MultipleCraftWidget_C_SetValue::Param_SetValue' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_SetValue, SetedValue) == 0x000004, "Member 'MultipleCraftWidget_C_SetValue::SetedValue' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_SetValue, CallFunc_Clamp_ReturnValue) == 0x000008, "Member 'MultipleCraftWidget_C_SetValue::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultipleCraftWidget_C_SetValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'MultipleCraftWidget_C_SetValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

