#pragma once

 

// Package: RadioButtons

#include "Basic.hpp"

#include "RadioButtonData_structs.hpp"


namespace SDK::Params
{

// Function RadioButtons.RadioButtons_C.CreateRadioButton
// 0x0040 (0x0040 - 0x0000)
struct RadioButtons_C_CreateRadioButton final
{
public:
	struct FRadioButtonData                       Param_RadioButtonData;                             // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69D0[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadioButton_C*                         CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtons_C_CreateRadioButton) == 0x000008, "Wrong alignment on RadioButtons_C_CreateRadioButton");
static_assert(sizeof(RadioButtons_C_CreateRadioButton) == 0x000040, "Wrong size on RadioButtons_C_CreateRadioButton");
static_assert(offsetof(RadioButtons_C_CreateRadioButton, Param_RadioButtonData) == 0x000000, "Member 'RadioButtons_C_CreateRadioButton::Param_RadioButtonData' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_CreateRadioButton, Param_Index) == 0x000020, "Member 'RadioButtons_C_CreateRadioButton::Param_Index' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_CreateRadioButton, ReturnValue) == 0x000028, "Member 'RadioButtons_C_CreateRadioButton::ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_CreateRadioButton, CallFunc_Create_ReturnValue) == 0x000030, "Member 'RadioButtons_C_CreateRadioButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_CreateRadioButton, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'RadioButtons_C_CreateRadioButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function RadioButtons.RadioButtons_C.OnSelectButtons
// 0x0020 (0x0020 - 0x0000)
struct RadioButtons_C_OnSelectButtons final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadioButton_C*                         CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtons_C_OnSelectButtons) == 0x000008, "Wrong alignment on RadioButtons_C_OnSelectButtons");
static_assert(sizeof(RadioButtons_C_OnSelectButtons) == 0x000020, "Wrong size on RadioButtons_C_OnSelectButtons");
static_assert(offsetof(RadioButtons_C_OnSelectButtons, Temp_int_Array_Index_Variable) == 0x000000, "Member 'RadioButtons_C_OnSelectButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_OnSelectButtons, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'RadioButtons_C_OnSelectButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_OnSelectButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RadioButtons_C_OnSelectButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_OnSelectButtons, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'RadioButtons_C_OnSelectButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_OnSelectButtons, CallFunc_Array_Get_Item) == 0x000010, "Member 'RadioButtons_C_OnSelectButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_OnSelectButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'RadioButtons_C_OnSelectButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function RadioButtons.RadioButtons_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RadioButtons_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtons_C_PreConstruct) == 0x000001, "Wrong alignment on RadioButtons_C_PreConstruct");
static_assert(sizeof(RadioButtons_C_PreConstruct) == 0x000001, "Wrong size on RadioButtons_C_PreConstruct");
static_assert(offsetof(RadioButtons_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RadioButtons_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function RadioButtons.RadioButtons_C.Changed
// 0x0018 (0x0018 - 0x0000)
struct RadioButtons_C_Changed final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69D1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         Checked;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadioButtons_C_Changed) == 0x000008, "Wrong alignment on RadioButtons_C_Changed");
static_assert(sizeof(RadioButtons_C_Changed) == 0x000018, "Wrong size on RadioButtons_C_Changed");
static_assert(offsetof(RadioButtons_C_Changed, IsChecked) == 0x000000, "Member 'RadioButtons_C_Changed::IsChecked' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_Changed, Checked) == 0x000008, "Member 'RadioButtons_C_Changed::Checked' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_Changed, Param_Index) == 0x000010, "Member 'RadioButtons_C_Changed::Param_Index' has a wrong offset!");

// Function RadioButtons.RadioButtons_C.SetCheck
// 0x0004 (0x0004 - 0x0000)
struct RadioButtons_C_SetCheck final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadioButtons_C_SetCheck) == 0x000004, "Wrong alignment on RadioButtons_C_SetCheck");
static_assert(sizeof(RadioButtons_C_SetCheck) == 0x000004, "Wrong size on RadioButtons_C_SetCheck");
static_assert(offsetof(RadioButtons_C_SetCheck, Param_Index) == 0x000000, "Member 'RadioButtons_C_SetCheck::Param_Index' has a wrong offset!");

// Function RadioButtons.RadioButtons_C.ExecuteUbergraph_RadioButtons
// 0x0098 (0x0098 - 0x0000)
struct RadioButtons_C_ExecuteUbergraph_RadioButtons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsChecked, class URadioButton_C* Checked, int32 Index)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69D2[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         K2Node_CustomEvent_Checked;                        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69D3[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRadioButtonData                       CallFunc_Array_Get_Item;                           // 0x0038(0x0020)(HasGetValueTypeHash)
	class URadioButton_C*                         CallFunc_CreateRadioButton_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69D4[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69D5[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadioButton_C*                         K2Node_DynamicCast_AsRadio_Button;                 // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtons_C_ExecuteUbergraph_RadioButtons) == 0x000008, "Wrong alignment on RadioButtons_C_ExecuteUbergraph_RadioButtons");
static_assert(sizeof(RadioButtons_C_ExecuteUbergraph_RadioButtons) == 0x000098, "Wrong size on RadioButtons_C_ExecuteUbergraph_RadioButtons");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, EntryPoint) == 0x000000, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::EntryPoint' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, Temp_int_Array_Index_Variable) == 0x000014, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_Event_IsDesignTime) == 0x000020, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_CustomEvent_isChecked) == 0x000021, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_CustomEvent_Checked) == 0x000028, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_CustomEvent_Checked' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_CustomEvent_Index_1) == 0x000030, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_Array_Get_Item) == 0x000038, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_CreateRadioButton_ReturnValue) == 0x000058, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_CreateRadioButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_AddChild_ReturnValue) == 0x000068, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_CustomEvent_Index) == 0x000070, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007C, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, CallFunc_GetChildAt_ReturnValue) == 0x000080, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_DynamicCast_AsRadio_Button) == 0x000088, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_DynamicCast_AsRadio_Button' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_ExecuteUbergraph_RadioButtons, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'RadioButtons_C_ExecuteUbergraph_RadioButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function RadioButtons.RadioButtons_C.SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct RadioButtons_C_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69D6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadioButtons_C_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on RadioButtons_C_SelectButton__DelegateSignature");
static_assert(sizeof(RadioButtons_C_SelectButton__DelegateSignature) == 0x000018, "Wrong size on RadioButtons_C_SelectButton__DelegateSignature");
static_assert(offsetof(RadioButtons_C_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'RadioButtons_C_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'RadioButtons_C_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(RadioButtons_C_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'RadioButtons_C_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

}

