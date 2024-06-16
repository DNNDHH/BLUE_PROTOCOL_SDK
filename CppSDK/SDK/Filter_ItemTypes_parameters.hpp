#pragma once

 

// Package: Filter_ItemTypes

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Filter_ItemTypes.Filter_ItemTypes_C.ExecuteUbergraph_Filter_ItemTypes
// 0x0020 (0x0020 - 0x0000)
struct Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_554D[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes) == 0x000008, "Wrong alignment on Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes");
static_assert(sizeof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes) == 0x000020, "Wrong size on Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, EntryPoint) == 0x000000, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, Temp_int_Variable) == 0x000004, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, Temp_byte_Variable) == 0x000008, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, Temp_byte_Variable_1) == 0x000009, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, Temp_byte_Variable_2) == 0x00000A, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, Temp_byte_Variable_3) == 0x00000B, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, K2Node_ComponentBoundEvent_IsChecked) == 0x00000C, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, K2Node_ComponentBoundEvent_RadioButton) == 0x000010, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, K2Node_ComponentBoundEvent_Index) == 0x000018, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes, K2Node_Select_Default) == 0x00001C, "Member 'Filter_ItemTypes_C_ExecuteUbergraph_Filter_ItemTypes::K2Node_Select_Default' has a wrong offset!");

// Function Filter_ItemTypes.Filter_ItemTypes_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_554E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_ItemTypes_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

}

