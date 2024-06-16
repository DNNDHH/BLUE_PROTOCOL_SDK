#pragma once

 

// Package: Filter_Fusion_ItemClassType

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "FilterRadioButtonData_structs.hpp"


namespace SDK::Params
{

// Function Filter_Fusion_ItemClassType.Filter_Fusion_ItemClassType_C.ExecuteUbergraph_Filter_Fusion_ItemClassType
// 0x0018 (0x0018 - 0x0000)
struct Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9747[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Class2FusionItemFilter_ReturnValue;       // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType) == 0x000008, "Wrong alignment on Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType");
static_assert(sizeof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType) == 0x000018, "Wrong size on Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, EntryPoint) == 0x000000, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, K2Node_ComponentBoundEvent_IsChecked) == 0x000005, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, K2Node_ComponentBoundEvent_RadioButton) == 0x000008, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, K2Node_ComponentBoundEvent_Index) == 0x000010, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, CallFunc_Conv_IntToByte_ReturnValue) == 0x000014, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, CallFunc_GetValidValue_ReturnValue) == 0x000015, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType, CallFunc_Class2FusionItemFilter_ReturnValue) == 0x000016, "Member 'Filter_Fusion_ItemClassType_C_ExecuteUbergraph_Filter_Fusion_ItemClassType::CallFunc_Class2FusionItemFilter_ReturnValue' has a wrong offset!");

// Function Filter_Fusion_ItemClassType.Filter_Fusion_ItemClassType_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9748[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_Fusion_ItemClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

// Function Filter_Fusion_ItemClassType.Filter_Fusion_ItemClassType_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Filter_Fusion_ItemClassType_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Filter_Fusion_ItemClassType_C_PreConstruct) == 0x000001, "Wrong alignment on Filter_Fusion_ItemClassType_C_PreConstruct");
static_assert(sizeof(Filter_Fusion_ItemClassType_C_PreConstruct) == 0x000001, "Wrong size on Filter_Fusion_ItemClassType_C_PreConstruct");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Filter_Fusion_ItemClassType_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Filter_Fusion_ItemClassType.Filter_Fusion_ItemClassType_C.Gen
// 0x0078 (0x0078 - 0x0000)
struct Filter_Fusion_ItemClassType_C_Gen final
{
public:
	TArray<struct FFilterRadioButtonData>         Buttons;                                           // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9749[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0020(0x0010)(ReferenceParm)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerClassRedistered_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_974A[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterRadioButtonData                 K2Node_MakeStruct_FilterRadioButtonData;           // 0x0038(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_974B[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_Fusion_ItemClassType_C_Gen) == 0x000008, "Wrong alignment on Filter_Fusion_ItemClassType_C_Gen");
static_assert(sizeof(Filter_Fusion_ItemClassType_C_Gen) == 0x000078, "Wrong size on Filter_Fusion_ItemClassType_C_Gen");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, Buttons) == 0x000000, "Member 'Filter_Fusion_ItemClassType_C_Gen::Buttons' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Filter_Fusion_ItemClassType_C_Gen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'Filter_Fusion_ItemClassType_C_Gen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000020, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_Array_Get_Item) == 0x000030, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_IsPlayerClassRedistered_ReturnValue) == 0x000031, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_IsPlayerClassRedistered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, K2Node_MakeStruct_FilterRadioButtonData) == 0x000038, "Member 'Filter_Fusion_ItemClassType_C_Gen::K2Node_MakeStruct_FilterRadioButtonData' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_Fusion_ItemClassType_C_Gen, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'Filter_Fusion_ItemClassType_C_Gen::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

