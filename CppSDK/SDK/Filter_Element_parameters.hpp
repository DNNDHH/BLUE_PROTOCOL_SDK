#pragma once

 

// Package: Filter_Element

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Filter_Element.Filter_Element_C.ExecuteUbergraph_Filter_Element
// 0x0030 (0x0030 - 0x0000)
struct Filter_Element_C_ExecuteUbergraph_Filter_Element final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6905[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EItemFilterType>                       K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6906[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_Element_C_ExecuteUbergraph_Filter_Element) == 0x000008, "Wrong alignment on Filter_Element_C_ExecuteUbergraph_Filter_Element");
static_assert(sizeof(Filter_Element_C_ExecuteUbergraph_Filter_Element) == 0x000030, "Wrong size on Filter_Element_C_ExecuteUbergraph_Filter_Element");
static_assert(offsetof(Filter_Element_C_ExecuteUbergraph_Filter_Element, EntryPoint) == 0x000000, "Member 'Filter_Element_C_ExecuteUbergraph_Filter_Element::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_Element_C_ExecuteUbergraph_Filter_Element, K2Node_MakeArray_Array) == 0x000008, "Member 'Filter_Element_C_ExecuteUbergraph_Filter_Element::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Filter_Element_C_ExecuteUbergraph_Filter_Element, K2Node_ComponentBoundEvent_IsChecked) == 0x000018, "Member 'Filter_Element_C_ExecuteUbergraph_Filter_Element::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_Element_C_ExecuteUbergraph_Filter_Element, K2Node_ComponentBoundEvent_RadioButton) == 0x000020, "Member 'Filter_Element_C_ExecuteUbergraph_Filter_Element::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_Element_C_ExecuteUbergraph_Filter_Element, K2Node_ComponentBoundEvent_Index) == 0x000028, "Member 'Filter_Element_C_ExecuteUbergraph_Filter_Element::K2Node_ComponentBoundEvent_Index' has a wrong offset!");

// Function Filter_Element.Filter_Element_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6907[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_Element_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

}

