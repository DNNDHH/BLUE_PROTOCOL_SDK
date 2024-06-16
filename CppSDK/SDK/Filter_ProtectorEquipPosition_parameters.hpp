#pragma once

 

// Package: Filter_ProtectorEquipPosition

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "FilterRadioButtonData_structs.hpp"


namespace SDK::Params
{

// Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.ExecuteUbergraph_Filter_ProtectorEquipPosition
// 0x0020 (0x0020 - 0x0000)
struct Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Protector2ItemFilter_ReturnValue;         // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition) == 0x000008, "Wrong alignment on Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition");
static_assert(sizeof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition) == 0x000020, "Wrong size on Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, EntryPoint) == 0x000000, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, Temp_bool_Variable) == 0x000004, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, Temp_byte_Variable) == 0x000005, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, K2Node_Event_IsDesignTime) == 0x000006, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, K2Node_ComponentBoundEvent_IsChecked) == 0x000007, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, K2Node_ComponentBoundEvent_RadioButton) == 0x000008, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, K2Node_ComponentBoundEvent_Index) == 0x000010, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, CallFunc_Conv_IntToByte_ReturnValue) == 0x000015, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, CallFunc_GetValidValue_ReturnValue) == 0x000016, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, CallFunc_Protector2ItemFilter_ReturnValue) == 0x000017, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::CallFunc_Protector2ItemFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition, K2Node_Select_Default) == 0x000018, "Member 'Filter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition::K2Node_Select_Default' has a wrong offset!");

// Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6788[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

// Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Filter_ProtectorEquipPosition_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Filter_ProtectorEquipPosition_C_PreConstruct) == 0x000001, "Wrong alignment on Filter_ProtectorEquipPosition_C_PreConstruct");
static_assert(sizeof(Filter_ProtectorEquipPosition_C_PreConstruct) == 0x000001, "Wrong size on Filter_ProtectorEquipPosition_C_PreConstruct");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Filter_ProtectorEquipPosition_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.Generate
// 0x00A8 (0x00A8 - 0x0000)
struct Filter_ProtectorEquipPosition_C_Generate final
{
public:
	TArray<struct FFilterRadioButtonData>         ButtonData;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6789[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsProtectorCategoryAccessory_ReturnValue; // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_678A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanNOR_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_678B[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_678C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterRadioButtonData                 K2Node_MakeStruct_FilterRadioButtonData;           // 0x0038(0x0030)(HasGetValueTypeHash)
	struct FFilterRadioButtonData                 K2Node_MakeStruct_FilterRadioButtonData_1;         // 0x0068(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_678D[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_ProtectorEquipPosition_C_Generate) == 0x000008, "Wrong alignment on Filter_ProtectorEquipPosition_C_Generate");
static_assert(sizeof(Filter_ProtectorEquipPosition_C_Generate) == 0x0000A8, "Wrong size on Filter_ProtectorEquipPosition_C_Generate");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, ButtonData) == 0x000000, "Member 'Filter_ProtectorEquipPosition_C_Generate::ButtonData' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, Temp_int_Variable) == 0x000010, "Member 'Filter_ProtectorEquipPosition_C_Generate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, Temp_int_Variable_1) == 0x000014, "Member 'Filter_ProtectorEquipPosition_C_Generate::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Conv_IntToByte_ReturnValue) == 0x000018, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_GetValidValue_ReturnValue) == 0x000020, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000021, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000022, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000023, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_IsProtectorCategoryAccessory_ReturnValue) == 0x000024, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_IsProtectorCategoryAccessory_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_BooleanNOR_ReturnValue) == 0x00002C, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000030, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, K2Node_MakeStruct_FilterRadioButtonData) == 0x000038, "Member 'Filter_ProtectorEquipPosition_C_Generate::K2Node_MakeStruct_FilterRadioButtonData' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, K2Node_MakeStruct_FilterRadioButtonData_1) == 0x000068, "Member 'Filter_ProtectorEquipPosition_C_Generate::K2Node_MakeStruct_FilterRadioButtonData_1' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_MakeLiteralInt_ReturnValue) == 0x000098, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Array_Add_ReturnValue) == 0x00009C, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_ProtectorEquipPosition_C_Generate, CallFunc_Array_Add_ReturnValue_1) == 0x0000A4, "Member 'Filter_ProtectorEquipPosition_C_Generate::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

}

