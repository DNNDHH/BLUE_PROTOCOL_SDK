#pragma once

 

// Package: Filter_CanReceive

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Filter_CanReceive.Filter_CanReceive_C.ExecuteUbergraph_Filter_CanReceive
// 0x0018 (0x0018 - 0x0000)
struct Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive) == 0x000008, "Wrong alignment on Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive");
static_assert(sizeof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive) == 0x000018, "Wrong size on Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, EntryPoint) == 0x000000, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, Temp_bool_Variable) == 0x000004, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, Temp_byte_Variable) == 0x000005, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, Temp_byte_Variable_1) == 0x000006, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, K2Node_ComponentBoundEvent_IsChecked) == 0x000007, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, K2Node_ComponentBoundEvent_RadioButton) == 0x000008, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, K2Node_ComponentBoundEvent_Index) == 0x000010, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive, K2Node_Select_Default) == 0x000015, "Member 'Filter_CanReceive_C_ExecuteUbergraph_Filter_CanReceive::K2Node_Select_Default' has a wrong offset!");

// Function Filter_CanReceive.Filter_CanReceive_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_975F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_CanReceive_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

}

