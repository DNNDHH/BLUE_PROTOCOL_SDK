#pragma once

 

// Package: FilterRadioButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function FilterRadioButton.FilterRadioButton_C.ChangeChecked__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct FilterRadioButton_C_ChangeChecked__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69A0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   Checked;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterRadioButton_C_ChangeChecked__DelegateSignature) == 0x000008, "Wrong alignment on FilterRadioButton_C_ChangeChecked__DelegateSignature");
static_assert(sizeof(FilterRadioButton_C_ChangeChecked__DelegateSignature) == 0x000018, "Wrong size on FilterRadioButton_C_ChangeChecked__DelegateSignature");
static_assert(offsetof(FilterRadioButton_C_ChangeChecked__DelegateSignature, IsChecked) == 0x000000, "Member 'FilterRadioButton_C_ChangeChecked__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ChangeChecked__DelegateSignature, Checked) == 0x000008, "Member 'FilterRadioButton_C_ChangeChecked__DelegateSignature::Checked' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ChangeChecked__DelegateSignature, Param_Index) == 0x000010, "Member 'FilterRadioButton_C_ChangeChecked__DelegateSignature::Param_Index' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.ExecuteUbergraph_FilterRadioButton
// 0x0090 (0x0090 - 0x0000)
struct FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69A1[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0008(0x0018)()
	int32                                         K2Node_CustomEvent_InTextId_1;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsChecked;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                K2Node_CustomEvent_InCheckedState;                 // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69A2[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69A3[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InTextId;                       // 0x0054(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69A4[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69A5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
};
static_assert(alignof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton) == 0x000008, "Wrong alignment on FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton");
static_assert(sizeof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton) == 0x000090, "Wrong size on FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, EntryPoint) == 0x000000, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, K2Node_ComponentBoundEvent_bIsChecked) == 0x000005, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, K2Node_CustomEvent_InText) == 0x000008, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, K2Node_CustomEvent_InTextId_1) == 0x000020, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::K2Node_CustomEvent_InTextId_1' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, K2Node_CustomEvent_InIsChecked) == 0x000025, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::K2Node_CustomEvent_InIsChecked' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, K2Node_CustomEvent_InCheckedState) == 0x000026, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::K2Node_CustomEvent_InCheckedState' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, K2Node_CustomEvent_InTextId) == 0x000054, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::K2Node_CustomEvent_InTextId' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000060, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, CallFunc_NotEqual_NameName_ReturnValue) == 0x000070, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.SetNameTextId
// 0x0008 (0x0008 - 0x0000)
struct FilterRadioButton_C_SetNameTextId final
{
public:
	class FName                                   InTextID;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterRadioButton_C_SetNameTextId) == 0x000004, "Wrong alignment on FilterRadioButton_C_SetNameTextId");
static_assert(sizeof(FilterRadioButton_C_SetNameTextId) == 0x000008, "Wrong size on FilterRadioButton_C_SetNameTextId");
static_assert(offsetof(FilterRadioButton_C_SetNameTextId, InTextID) == 0x000000, "Member 'FilterRadioButton_C_SetNameTextId::InTextID' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.SetCheckedStyle
// 0x0001 (0x0001 - 0x0000)
struct FilterRadioButton_C_SetCheckedStyle final
{
public:
	ECheckBoxState                                InCheckedState;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterRadioButton_C_SetCheckedStyle) == 0x000001, "Wrong alignment on FilterRadioButton_C_SetCheckedStyle");
static_assert(sizeof(FilterRadioButton_C_SetCheckedStyle) == 0x000001, "Wrong size on FilterRadioButton_C_SetCheckedStyle");
static_assert(offsetof(FilterRadioButton_C_SetCheckedStyle, InCheckedState) == 0x000000, "Member 'FilterRadioButton_C_SetCheckedStyle::InCheckedState' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.SetChecked
// 0x0001 (0x0001 - 0x0000)
struct FilterRadioButton_C_SetChecked final
{
public:
	bool                                          InIsChecked;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButton_C_SetChecked) == 0x000001, "Wrong alignment on FilterRadioButton_C_SetChecked");
static_assert(sizeof(FilterRadioButton_C_SetChecked) == 0x000001, "Wrong size on FilterRadioButton_C_SetChecked");
static_assert(offsetof(FilterRadioButton_C_SetChecked, InIsChecked) == 0x000000, "Member 'FilterRadioButton_C_SetChecked::InIsChecked' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.SetTextId
// 0x0004 (0x0004 - 0x0000)
struct FilterRadioButton_C_SetTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FilterRadioButton_C_SetTextId) == 0x000004, "Wrong alignment on FilterRadioButton_C_SetTextId");
static_assert(sizeof(FilterRadioButton_C_SetTextId) == 0x000004, "Wrong size on FilterRadioButton_C_SetTextId");
static_assert(offsetof(FilterRadioButton_C_SetTextId, InTextID) == 0x000000, "Member 'FilterRadioButton_C_SetTextId::InTextID' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct FilterRadioButton_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FilterRadioButton_C_SetText) == 0x000008, "Wrong alignment on FilterRadioButton_C_SetText");
static_assert(sizeof(FilterRadioButton_C_SetText) == 0x000018, "Wrong size on FilterRadioButton_C_SetText");
static_assert(offsetof(FilterRadioButton_C_SetText, InText) == 0x000000, "Member 'FilterRadioButton_C_SetText::InText' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function FilterRadioButton.FilterRadioButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FilterRadioButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FilterRadioButton_C_PreConstruct) == 0x000001, "Wrong alignment on FilterRadioButton_C_PreConstruct");
static_assert(sizeof(FilterRadioButton_C_PreConstruct) == 0x000001, "Wrong size on FilterRadioButton_C_PreConstruct");
static_assert(offsetof(FilterRadioButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FilterRadioButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

