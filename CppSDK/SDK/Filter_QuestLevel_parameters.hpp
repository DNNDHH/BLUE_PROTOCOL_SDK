#pragma once

 

// Package: Filter_QuestLevel

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "FilterRadioButtonData_structs.hpp"


namespace SDK::Params
{

// Function Filter_QuestLevel.Filter_QuestLevel_C.ExecuteUbergraph_Filter_QuestLevel
// 0x0018 (0x0018 - 0x0000)
struct Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_973B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_GetQuestBoardClassLevelFilter_ReturnValue; // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel) == 0x000008, "Wrong alignment on Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel");
static_assert(sizeof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel) == 0x000018, "Wrong size on Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel");
static_assert(offsetof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel, EntryPoint) == 0x000000, "Member 'Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel, K2Node_ComponentBoundEvent_IsChecked) == 0x000005, "Member 'Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel, K2Node_ComponentBoundEvent_RadioButton) == 0x000008, "Member 'Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel, K2Node_ComponentBoundEvent_Index) == 0x000010, "Member 'Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel, CallFunc_GetQuestBoardClassLevelFilter_ReturnValue) == 0x000014, "Member 'Filter_QuestLevel_C_ExecuteUbergraph_Filter_QuestLevel::CallFunc_GetQuestBoardClassLevelFilter_ReturnValue' has a wrong offset!");

// Function Filter_QuestLevel.Filter_QuestLevel_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_973C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_QuestLevel_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

// Function Filter_QuestLevel.Filter_QuestLevel_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Filter_QuestLevel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Filter_QuestLevel_C_PreConstruct) == 0x000001, "Wrong alignment on Filter_QuestLevel_C_PreConstruct");
static_assert(sizeof(Filter_QuestLevel_C_PreConstruct) == 0x000001, "Wrong size on Filter_QuestLevel_C_PreConstruct");
static_assert(offsetof(Filter_QuestLevel_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Filter_QuestLevel_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Filter_QuestLevel.Filter_QuestLevel_C.Generate
// 0x0098 (0x0098 - 0x0000)
struct Filter_QuestLevel_C_Generate final
{
public:
	int32                                         MaxLevel;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_973D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterRadioButtonData>         ButtonData;                                        // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxClassLevel_ReturnValue;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_973E[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterRadioButtonData                 K2Node_MakeStruct_FilterRadioButtonData;           // 0x0058(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Filter_QuestLevel_C_Generate) == 0x000008, "Wrong alignment on Filter_QuestLevel_C_Generate");
static_assert(sizeof(Filter_QuestLevel_C_Generate) == 0x000098, "Wrong size on Filter_QuestLevel_C_Generate");
static_assert(offsetof(Filter_QuestLevel_C_Generate, MaxLevel) == 0x000000, "Member 'Filter_QuestLevel_C_Generate::MaxLevel' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, ButtonData) == 0x000008, "Member 'Filter_QuestLevel_C_Generate::ButtonData' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, Temp_int_Variable) == 0x000018, "Member 'Filter_QuestLevel_C_Generate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Multiply_IntInt_ReturnValue) == 0x00001C, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_GetMaxClassLevel_ReturnValue) == 0x000048, "Member 'Filter_QuestLevel_C_Generate::CallFunc_GetMaxClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Conv_StringToName_ReturnValue) == 0x00004C, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, K2Node_MakeStruct_FilterRadioButtonData) == 0x000058, "Member 'Filter_QuestLevel_C_Generate::K2Node_MakeStruct_FilterRadioButtonData' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_Divide_IntInt_ReturnValue) == 0x00008C, "Member 'Filter_QuestLevel_C_Generate::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_QuestLevel_C_Generate, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'Filter_QuestLevel_C_Generate::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

