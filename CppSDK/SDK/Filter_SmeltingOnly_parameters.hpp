#pragma once

 

// Package: Filter_SmeltingOnly

#include "Basic.hpp"


namespace SDK::Params
{

// Function Filter_SmeltingOnly.Filter_SmeltingOnly_C.ExecuteUbergraph_Filter_SmeltingOnly
// 0x0018 (0x0018 - 0x0000)
struct Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_900A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly) == 0x000008, "Wrong alignment on Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly");
static_assert(sizeof(Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly) == 0x000018, "Wrong size on Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly");
static_assert(offsetof(Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly, EntryPoint) == 0x000000, "Member 'Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly, K2Node_ComponentBoundEvent_IsChecked) == 0x000004, "Member 'Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly, K2Node_ComponentBoundEvent_RadioButton) == 0x000008, "Member 'Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly, K2Node_ComponentBoundEvent_Index) == 0x000010, "Member 'Filter_SmeltingOnly_C_ExecuteUbergraph_Filter_SmeltingOnly::K2Node_ComponentBoundEvent_Index' has a wrong offset!");

// Function Filter_SmeltingOnly.Filter_SmeltingOnly_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_900B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_SmeltingOnly_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

}

