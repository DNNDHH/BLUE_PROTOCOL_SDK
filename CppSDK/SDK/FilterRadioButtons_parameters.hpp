#pragma once

 

// Package: FilterRadioButtons

#include "Basic.hpp"

#include "FilterRadioButtonData_structs.hpp"


namespace SDK::Params
{

// Function FilterRadioButtons.FilterRadioButtons_C.SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct FilterRadioButtons_C_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EC8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterRadioButtons_C_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on FilterRadioButtons_C_SelectButton__DelegateSignature");
static_assert(sizeof(FilterRadioButtons_C_SelectButton__DelegateSignature) == 0x000018, "Wrong size on FilterRadioButtons_C_SelectButton__DelegateSignature");
static_assert(offsetof(FilterRadioButtons_C_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'FilterRadioButtons_C_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'FilterRadioButtons_C_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'FilterRadioButtons_C_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

// Function FilterRadioButtons.FilterRadioButtons_C.ExecuteUbergraph_FilterRadioButtons
// 0x00B0 (0x00B0 - 0x0000)
struct FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsChecked, class UFilterRadioButton_C* Checked, int32 Index)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EC9[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_CustomEvent_Checked;                        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7ECA[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterRadioButtonData                 CallFunc_Array_Get_Item;                           // 0x0038(0x0030)(HasGetValueTypeHash)
	class UFilterRadioButton_C*                   CallFunc_CreateRadioButton_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ECB[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7ECC[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ECD[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         K2Node_DynamicCast_AsRadio_Button;                 // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons) == 0x000008, "Wrong alignment on FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons");
static_assert(sizeof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons) == 0x0000B0, "Wrong size on FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, EntryPoint) == 0x000000, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::EntryPoint' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, Temp_int_Array_Index_Variable) == 0x000014, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_Event_IsDesignTime) == 0x000020, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_CustomEvent_isChecked) == 0x000021, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_CustomEvent_Checked) == 0x000028, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_CustomEvent_Checked' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_CustomEvent_Index_1) == 0x000030, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_Array_Get_Item) == 0x000038, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_CreateRadioButton_ReturnValue) == 0x000068, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_CreateRadioButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_AddChild_ReturnValue) == 0x000078, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_CustomEvent_Index) == 0x000080, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_Array_Add_ReturnValue) == 0x000084, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_GetChildAt_ReturnValue) == 0x000090, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, CallFunc_Less_IntInt_ReturnValue_1) == 0x000098, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_DynamicCast_AsRadio_Button) == 0x0000A0, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_DynamicCast_AsRadio_Button' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function FilterRadioButtons.FilterRadioButtons_C.SetCheck
// 0x0004 (0x0004 - 0x0000)
struct FilterRadioButtons_C_SetCheck final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterRadioButtons_C_SetCheck) == 0x000004, "Wrong alignment on FilterRadioButtons_C_SetCheck");
static_assert(sizeof(FilterRadioButtons_C_SetCheck) == 0x000004, "Wrong size on FilterRadioButtons_C_SetCheck");
static_assert(offsetof(FilterRadioButtons_C_SetCheck, Param_Index) == 0x000000, "Member 'FilterRadioButtons_C_SetCheck::Param_Index' has a wrong offset!");

// Function FilterRadioButtons.FilterRadioButtons_C.Changed
// 0x0018 (0x0018 - 0x0000)
struct FilterRadioButtons_C_Changed final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ECE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   Checked;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterRadioButtons_C_Changed) == 0x000008, "Wrong alignment on FilterRadioButtons_C_Changed");
static_assert(sizeof(FilterRadioButtons_C_Changed) == 0x000018, "Wrong size on FilterRadioButtons_C_Changed");
static_assert(offsetof(FilterRadioButtons_C_Changed, IsChecked) == 0x000000, "Member 'FilterRadioButtons_C_Changed::IsChecked' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_Changed, Checked) == 0x000008, "Member 'FilterRadioButtons_C_Changed::Checked' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_Changed, Param_Index) == 0x000010, "Member 'FilterRadioButtons_C_Changed::Param_Index' has a wrong offset!");

// Function FilterRadioButtons.FilterRadioButtons_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FilterRadioButtons_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButtons_C_PreConstruct) == 0x000001, "Wrong alignment on FilterRadioButtons_C_PreConstruct");
static_assert(sizeof(FilterRadioButtons_C_PreConstruct) == 0x000001, "Wrong size on FilterRadioButtons_C_PreConstruct");
static_assert(offsetof(FilterRadioButtons_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FilterRadioButtons_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FilterRadioButtons.FilterRadioButtons_C.OnSelectButtons
// 0x0020 (0x0020 - 0x0000)
struct FilterRadioButtons_C_OnSelectButtons final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFilterRadioButton_C*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButtons_C_OnSelectButtons) == 0x000008, "Wrong alignment on FilterRadioButtons_C_OnSelectButtons");
static_assert(sizeof(FilterRadioButtons_C_OnSelectButtons) == 0x000020, "Wrong size on FilterRadioButtons_C_OnSelectButtons");
static_assert(offsetof(FilterRadioButtons_C_OnSelectButtons, Temp_int_Array_Index_Variable) == 0x000000, "Member 'FilterRadioButtons_C_OnSelectButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_OnSelectButtons, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'FilterRadioButtons_C_OnSelectButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_OnSelectButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'FilterRadioButtons_C_OnSelectButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_OnSelectButtons, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'FilterRadioButtons_C_OnSelectButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_OnSelectButtons, CallFunc_Array_Get_Item) == 0x000010, "Member 'FilterRadioButtons_C_OnSelectButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_OnSelectButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'FilterRadioButtons_C_OnSelectButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function FilterRadioButtons.FilterRadioButtons_C.CreateRadioButton
// 0x0050 (0x0050 - 0x0000)
struct FilterRadioButtons_C_CreateRadioButton final
{
public:
	struct FFilterRadioButtonData                 Param_RadioButtonData;                             // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7ECF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFilterRadioButton_C*                   CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButtons_C_CreateRadioButton) == 0x000008, "Wrong alignment on FilterRadioButtons_C_CreateRadioButton");
static_assert(sizeof(FilterRadioButtons_C_CreateRadioButton) == 0x000050, "Wrong size on FilterRadioButtons_C_CreateRadioButton");
static_assert(offsetof(FilterRadioButtons_C_CreateRadioButton, Param_RadioButtonData) == 0x000000, "Member 'FilterRadioButtons_C_CreateRadioButton::Param_RadioButtonData' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_CreateRadioButton, Param_Index) == 0x000030, "Member 'FilterRadioButtons_C_CreateRadioButton::Param_Index' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_CreateRadioButton, ReturnValue) == 0x000038, "Member 'FilterRadioButtons_C_CreateRadioButton::ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_CreateRadioButton, CallFunc_Create_ReturnValue) == 0x000040, "Member 'FilterRadioButtons_C_CreateRadioButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_CreateRadioButton, CallFunc_NotEqual_NameName_ReturnValue) == 0x000048, "Member 'FilterRadioButtons_C_CreateRadioButton::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_CreateRadioButton, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'FilterRadioButtons_C_CreateRadioButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function FilterRadioButtons.FilterRadioButtons_C.SetChildWidthOverride
// 0x0028 (0x0028 - 0x0000)
struct FilterRadioButtons_C_SetChildWidthOverride final
{
public:
	float                                         InWidth;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InHeight;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFilterRadioButton_C*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButtons_C_SetChildWidthOverride) == 0x000008, "Wrong alignment on FilterRadioButtons_C_SetChildWidthOverride");
static_assert(sizeof(FilterRadioButtons_C_SetChildWidthOverride) == 0x000028, "Wrong size on FilterRadioButtons_C_SetChildWidthOverride");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, InWidth) == 0x000000, "Member 'FilterRadioButtons_C_SetChildWidthOverride::InWidth' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, InHeight) == 0x000004, "Member 'FilterRadioButtons_C_SetChildWidthOverride::InHeight' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, Temp_int_Array_Index_Variable) == 0x000008, "Member 'FilterRadioButtons_C_SetChildWidthOverride::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'FilterRadioButtons_C_SetChildWidthOverride::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'FilterRadioButtons_C_SetChildWidthOverride::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'FilterRadioButtons_C_SetChildWidthOverride::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, CallFunc_Array_Get_Item) == 0x000018, "Member 'FilterRadioButtons_C_SetChildWidthOverride::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FilterRadioButtons_C_SetChildWidthOverride, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'FilterRadioButtons_C_SetChildWidthOverride::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

