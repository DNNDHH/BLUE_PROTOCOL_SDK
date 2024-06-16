#pragma once

 

// Package: Filter_AbilityType

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "FilterRadioButtonData_structs.hpp"


namespace SDK::Params
{

// Function Filter_AbilityType.Filter_AbilityType_C.ExecuteUbergraph_Filter_AbilityType
// 0x0020 (0x0020 - 0x0000)
struct Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               Temp_byte_Variable_4;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9757[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType) == 0x000008, "Wrong alignment on Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType");
static_assert(sizeof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType) == 0x000020, "Wrong size on Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, EntryPoint) == 0x000000, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, Temp_int_Variable) == 0x000004, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, Temp_byte_Variable) == 0x000008, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, Temp_byte_Variable_1) == 0x000009, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, Temp_byte_Variable_2) == 0x00000A, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, Temp_byte_Variable_3) == 0x00000B, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, Temp_byte_Variable_4) == 0x00000C, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, K2Node_Event_IsDesignTime) == 0x00000D, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, K2Node_ComponentBoundEvent_IsChecked) == 0x00000E, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, K2Node_ComponentBoundEvent_RadioButton) == 0x000010, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, K2Node_ComponentBoundEvent_Index) == 0x000018, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType, K2Node_Select_Default) == 0x00001C, "Member 'Filter_AbilityType_C_ExecuteUbergraph_Filter_AbilityType::K2Node_Select_Default' has a wrong offset!");

// Function Filter_AbilityType.Filter_AbilityType_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9758[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_AbilityType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

// Function Filter_AbilityType.Filter_AbilityType_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Filter_AbilityType_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Filter_AbilityType_C_PreConstruct) == 0x000001, "Wrong alignment on Filter_AbilityType_C_PreConstruct");
static_assert(sizeof(Filter_AbilityType_C_PreConstruct) == 0x000001, "Wrong size on Filter_AbilityType_C_PreConstruct");
static_assert(offsetof(Filter_AbilityType_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Filter_AbilityType_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Filter_AbilityType.Filter_AbilityType_C.Generate
// 0x0070 (0x0070 - 0x0000)
struct Filter_AbilityType_C_Generate final
{
public:
	TArray<struct FFilterRadioButtonData>         Buttons;                                           // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9759[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_975A[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_975B[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterRadioButtonData                 K2Node_MakeStruct_FilterRadioButtonData;           // 0x0038(0x0030)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_975C[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_AbilityType_C_Generate) == 0x000008, "Wrong alignment on Filter_AbilityType_C_Generate");
static_assert(sizeof(Filter_AbilityType_C_Generate) == 0x000070, "Wrong size on Filter_AbilityType_C_Generate");
static_assert(offsetof(Filter_AbilityType_C_Generate, Buttons) == 0x000000, "Member 'Filter_AbilityType_C_Generate::Buttons' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_MakeLiteralInt_ReturnValue) == 0x000010, "Member 'Filter_AbilityType_C_Generate::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, Temp_int_Variable) == 0x000014, "Member 'Filter_AbilityType_C_Generate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, Temp_int_Variable_1) == 0x000018, "Member 'Filter_AbilityType_C_Generate::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Conv_IntToByte_ReturnValue) == 0x00001C, "Member 'Filter_AbilityType_C_Generate::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'Filter_AbilityType_C_Generate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_GetValidValue_ReturnValue) == 0x000024, "Member 'Filter_AbilityType_C_Generate::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000025, "Member 'Filter_AbilityType_C_Generate::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'Filter_AbilityType_C_Generate::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002C, "Member 'Filter_AbilityType_C_Generate::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'Filter_AbilityType_C_Generate::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000034, "Member 'Filter_AbilityType_C_Generate::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, K2Node_MakeStruct_FilterRadioButtonData) == 0x000038, "Member 'Filter_AbilityType_C_Generate::K2Node_MakeStruct_FilterRadioButtonData' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'Filter_AbilityType_C_Generate::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Less_IntInt_ReturnValue) == 0x000069, "Member 'Filter_AbilityType_C_Generate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AbilityType_C_Generate, CallFunc_Array_Add_ReturnValue) == 0x00006C, "Member 'Filter_AbilityType_C_Generate::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

