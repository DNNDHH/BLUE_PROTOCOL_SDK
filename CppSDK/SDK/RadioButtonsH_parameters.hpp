#pragma once

 

// Package: RadioButtonsH

#include "Basic.hpp"

#include "RadioButtonData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function RadioButtonsH.RadioButtonsH_C.SetCheck
// 0x0018 (0x0018 - 0x0000)
struct RadioButtonsH_C_SetCheck final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadioButton_C*                         CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtonsH_C_SetCheck) == 0x000008, "Wrong alignment on RadioButtonsH_C_SetCheck");
static_assert(sizeof(RadioButtonsH_C_SetCheck) == 0x000018, "Wrong size on RadioButtonsH_C_SetCheck");
static_assert(offsetof(RadioButtonsH_C_SetCheck, Param_Index) == 0x000000, "Member 'RadioButtonsH_C_SetCheck::Param_Index' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_SetCheck, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'RadioButtonsH_C_SetCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_SetCheck, CallFunc_Array_Get_Item) == 0x000008, "Member 'RadioButtonsH_C_SetCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_SetCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'RadioButtonsH_C_SetCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function RadioButtonsH.RadioButtonsH_C.CreateRadioButton
// 0x0040 (0x0040 - 0x0000)
struct RadioButtonsH_C_CreateRadioButton final
{
public:
	struct FRadioButtonData                       Param_RadioButtonData;                             // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadioButton_C*                         CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtonsH_C_CreateRadioButton) == 0x000008, "Wrong alignment on RadioButtonsH_C_CreateRadioButton");
static_assert(sizeof(RadioButtonsH_C_CreateRadioButton) == 0x000040, "Wrong size on RadioButtonsH_C_CreateRadioButton");
static_assert(offsetof(RadioButtonsH_C_CreateRadioButton, Param_RadioButtonData) == 0x000000, "Member 'RadioButtonsH_C_CreateRadioButton::Param_RadioButtonData' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_CreateRadioButton, Param_Index) == 0x000020, "Member 'RadioButtonsH_C_CreateRadioButton::Param_Index' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_CreateRadioButton, ReturnValue) == 0x000028, "Member 'RadioButtonsH_C_CreateRadioButton::ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_CreateRadioButton, CallFunc_Create_ReturnValue) == 0x000030, "Member 'RadioButtonsH_C_CreateRadioButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_CreateRadioButton, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'RadioButtonsH_C_CreateRadioButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function RadioButtonsH.RadioButtonsH_C.OnSelectButtons
// 0x0020 (0x0020 - 0x0000)
struct RadioButtonsH_C_OnSelectButtons final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URadioButton_C*                         CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtonsH_C_OnSelectButtons) == 0x000008, "Wrong alignment on RadioButtonsH_C_OnSelectButtons");
static_assert(sizeof(RadioButtonsH_C_OnSelectButtons) == 0x000020, "Wrong size on RadioButtonsH_C_OnSelectButtons");
static_assert(offsetof(RadioButtonsH_C_OnSelectButtons, Temp_int_Array_Index_Variable) == 0x000000, "Member 'RadioButtonsH_C_OnSelectButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_OnSelectButtons, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'RadioButtonsH_C_OnSelectButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_OnSelectButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RadioButtonsH_C_OnSelectButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_OnSelectButtons, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'RadioButtonsH_C_OnSelectButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_OnSelectButtons, CallFunc_Array_Get_Item) == 0x000010, "Member 'RadioButtonsH_C_OnSelectButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_OnSelectButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'RadioButtonsH_C_OnSelectButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function RadioButtonsH.RadioButtonsH_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RadioButtonsH_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RadioButtonsH_C_PreConstruct) == 0x000001, "Wrong alignment on RadioButtonsH_C_PreConstruct");
static_assert(sizeof(RadioButtonsH_C_PreConstruct) == 0x000001, "Wrong size on RadioButtonsH_C_PreConstruct");
static_assert(offsetof(RadioButtonsH_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RadioButtonsH_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function RadioButtonsH.RadioButtonsH_C.Changed
// 0x0018 (0x0018 - 0x0000)
struct RadioButtonsH_C_Changed final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E7F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         Checked;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadioButtonsH_C_Changed) == 0x000008, "Wrong alignment on RadioButtonsH_C_Changed");
static_assert(sizeof(RadioButtonsH_C_Changed) == 0x000018, "Wrong size on RadioButtonsH_C_Changed");
static_assert(offsetof(RadioButtonsH_C_Changed, IsChecked) == 0x000000, "Member 'RadioButtonsH_C_Changed::IsChecked' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_Changed, Checked) == 0x000008, "Member 'RadioButtonsH_C_Changed::Checked' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_Changed, Param_Index) == 0x000010, "Member 'RadioButtonsH_C_Changed::Param_Index' has a wrong offset!");

// Function RadioButtonsH.RadioButtonsH_C.ExecuteUbergraph_RadioButtonsH
// 0x0098 (0x0098 - 0x0000)
struct RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsChecked, class URadioButton_C* Checked, int32 Index)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0014(0x0008)(NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E80[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRadioButtonData                       CallFunc_Array_Get_Item;                           // 0x0030(0x0020)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E81[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         CallFunc_CreateRadioButton_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E82[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E83[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         K2Node_CustomEvent_Checked;                        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E84[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH) == 0x000008, "Wrong alignment on RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH");
static_assert(sizeof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH) == 0x000098, "Wrong size on RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, EntryPoint) == 0x000000, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::EntryPoint' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, K2Node_MakeStruct_SlateChildSize) == 0x000014, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, K2Node_Event_IsDesignTime) == 0x000028, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_Array_Get_Item) == 0x000030, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_CreateRadioButton_ReturnValue) == 0x000058, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_CreateRadioButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000068, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, K2Node_CustomEvent_isChecked) == 0x000070, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, K2Node_CustomEvent_Checked) == 0x000078, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::K2Node_CustomEvent_Checked' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, K2Node_CustomEvent_Index) == 0x000080, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_AddChild_ReturnValue) == 0x000088, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH, CallFunc_Array_Add_ReturnValue) == 0x000090, "Member 'RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function RadioButtonsH.RadioButtonsH_C.SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct RadioButtonsH_C_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E85[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadioButton_C*                         RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RadioButtonsH_C_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on RadioButtonsH_C_SelectButton__DelegateSignature");
static_assert(sizeof(RadioButtonsH_C_SelectButton__DelegateSignature) == 0x000018, "Wrong size on RadioButtonsH_C_SelectButton__DelegateSignature");
static_assert(offsetof(RadioButtonsH_C_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'RadioButtonsH_C_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'RadioButtonsH_C_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(RadioButtonsH_C_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'RadioButtonsH_C_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

}

