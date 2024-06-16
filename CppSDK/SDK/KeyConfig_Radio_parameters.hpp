#pragma once

 

// Package: KeyConfig_Radio

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "RadioButtonData_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"


namespace SDK::Params
{

// Function KeyConfig_Radio.KeyConfig_Radio_C.SetChanged
// 0x0005 (0x0005 - 0x0000)
struct KeyConfig_Radio_C_SetChanged final
{
public:
	bool                                          Param_bChanged;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Radio_C_SetChanged) == 0x000001, "Wrong alignment on KeyConfig_Radio_C_SetChanged");
static_assert(sizeof(KeyConfig_Radio_C_SetChanged) == 0x000005, "Wrong size on KeyConfig_Radio_C_SetChanged");
static_assert(offsetof(KeyConfig_Radio_C_SetChanged, Param_bChanged) == 0x000000, "Member 'KeyConfig_Radio_C_SetChanged::Param_bChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_SetChanged, Temp_bool_Variable) == 0x000001, "Member 'KeyConfig_Radio_C_SetChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_SetChanged, Temp_byte_Variable) == 0x000002, "Member 'KeyConfig_Radio_C_SetChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_SetChanged, Temp_byte_Variable_1) == 0x000003, "Member 'KeyConfig_Radio_C_SetChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_SetChanged, K2Node_Select_Default) == 0x000004, "Member 'KeyConfig_Radio_C_SetChanged::K2Node_Select_Default' has a wrong offset!");

// Function KeyConfig_Radio.KeyConfig_Radio_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_Radio_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_Radio_C_PreConstruct) == 0x000001, "Wrong alignment on KeyConfig_Radio_C_PreConstruct");
static_assert(sizeof(KeyConfig_Radio_C_PreConstruct) == 0x000001, "Wrong size on KeyConfig_Radio_C_PreConstruct");
static_assert(offsetof(KeyConfig_Radio_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'KeyConfig_Radio_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function KeyConfig_Radio.KeyConfig_Radio_C.ReInitData
// 0x0010 (0x0010 - 0x0000)
struct KeyConfig_Radio_C_ReInitData final
{
public:
	TArray<struct FRadioButtonData>               Param_RadioButtonData;                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(KeyConfig_Radio_C_ReInitData) == 0x000008, "Wrong alignment on KeyConfig_Radio_C_ReInitData");
static_assert(sizeof(KeyConfig_Radio_C_ReInitData) == 0x000010, "Wrong size on KeyConfig_Radio_C_ReInitData");
static_assert(offsetof(KeyConfig_Radio_C_ReInitData, Param_RadioButtonData) == 0x000000, "Member 'KeyConfig_Radio_C_ReInitData::Param_RadioButtonData' has a wrong offset!");

// Function KeyConfig_Radio.KeyConfig_Radio_C.SelectButton
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_Radio_C_SelectButton final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Radio_C_SelectButton) == 0x000008, "Wrong alignment on KeyConfig_Radio_C_SelectButton");
static_assert(sizeof(KeyConfig_Radio_C_SelectButton) == 0x000018, "Wrong size on KeyConfig_Radio_C_SelectButton");
static_assert(offsetof(KeyConfig_Radio_C_SelectButton, IsChecked) == 0x000000, "Member 'KeyConfig_Radio_C_SelectButton::IsChecked' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_SelectButton, RadioButton) == 0x000008, "Member 'KeyConfig_Radio_C_SelectButton::RadioButton' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_SelectButton, Param_Index) == 0x000010, "Member 'KeyConfig_Radio_C_SelectButton::Param_Index' has a wrong offset!");

// Function KeyConfig_Radio.KeyConfig_Radio_C.Set Focus
// 0x0004 (0x0004 - 0x0000)
struct KeyConfig_Radio_C_Set_Focus final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Radio_C_Set_Focus) == 0x000004, "Wrong alignment on KeyConfig_Radio_C_Set_Focus");
static_assert(sizeof(KeyConfig_Radio_C_Set_Focus) == 0x000004, "Wrong size on KeyConfig_Radio_C_Set_Focus");
static_assert(offsetof(KeyConfig_Radio_C_Set_Focus, Param_Index) == 0x000000, "Member 'KeyConfig_Radio_C_Set_Focus::Param_Index' has a wrong offset!");

// Function KeyConfig_Radio.KeyConfig_Radio_C.ExecuteUbergraph_KeyConfig_Radio
// 0x0070 (0x0070 - 0x0000)
struct KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsChecked, class URadioButton_C* RadioButton, int32 Index)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRadioButtonData>               K2Node_CustomEvent_RadioButtonData;                // 0x0020(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         K2Node_CustomEvent_RadioButton;                    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_671F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
};
static_assert(alignof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio) == 0x000008, "Wrong alignment on KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio");
static_assert(sizeof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio) == 0x000070, "Wrong size on KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, EntryPoint) == 0x000000, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, K2Node_CustomEvent_Index) == 0x000004, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, K2Node_Event_IsDesignTime) == 0x000018, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, K2Node_CustomEvent_RadioButtonData) == 0x000020, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::K2Node_CustomEvent_RadioButtonData' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, K2Node_CustomEvent_isChecked) == 0x000030, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, K2Node_CustomEvent_RadioButton) == 0x000038, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::K2Node_CustomEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, K2Node_CustomEvent_Index_1) == 0x000040, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function KeyConfig_Radio.KeyConfig_Radio_C.SelectRadioButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct KeyConfig_Radio_C_SelectRadioButton__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Param_Type;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Radio_C_SelectRadioButton__DelegateSignature) == 0x000004, "Wrong alignment on KeyConfig_Radio_C_SelectRadioButton__DelegateSignature");
static_assert(sizeof(KeyConfig_Radio_C_SelectRadioButton__DelegateSignature) == 0x000008, "Wrong size on KeyConfig_Radio_C_SelectRadioButton__DelegateSignature");
static_assert(offsetof(KeyConfig_Radio_C_SelectRadioButton__DelegateSignature, Param_Index) == 0x000000, "Member 'KeyConfig_Radio_C_SelectRadioButton__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(KeyConfig_Radio_C_SelectRadioButton__DelegateSignature, Param_Type) == 0x000004, "Member 'KeyConfig_Radio_C_SelectRadioButton__DelegateSignature::Param_Type' has a wrong offset!");

}

