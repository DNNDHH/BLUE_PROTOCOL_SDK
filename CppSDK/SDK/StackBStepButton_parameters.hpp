#pragma once

 

// Package: StackBStepButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function StackBStepButton.StackBStepButton_C.ExecuteUbergraph_StackBStepButton
// 0x0010 (0x0010 - 0x0000)
struct StackBStepButton_C_ExecuteUbergraph_StackBStepButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C6F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBStepButton_C_ExecuteUbergraph_StackBStepButton) == 0x000008, "Wrong alignment on StackBStepButton_C_ExecuteUbergraph_StackBStepButton");
static_assert(sizeof(StackBStepButton_C_ExecuteUbergraph_StackBStepButton) == 0x000010, "Wrong size on StackBStepButton_C_ExecuteUbergraph_StackBStepButton");
static_assert(offsetof(StackBStepButton_C_ExecuteUbergraph_StackBStepButton, EntryPoint) == 0x000000, "Member 'StackBStepButton_C_ExecuteUbergraph_StackBStepButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_ExecuteUbergraph_StackBStepButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'StackBStepButton_C_ExecuteUbergraph_StackBStepButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function StackBStepButton.StackBStepButton_C.SetSelectedView
// 0x0010 (0x0010 - 0x0000)
struct StackBStepButton_C_SetSelectedView final
{
public:
	class UUserWidget*                            Param_AppendedWidget;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBStepButton_C_SetSelectedView) == 0x000008, "Wrong alignment on StackBStepButton_C_SetSelectedView");
static_assert(sizeof(StackBStepButton_C_SetSelectedView) == 0x000010, "Wrong size on StackBStepButton_C_SetSelectedView");
static_assert(offsetof(StackBStepButton_C_SetSelectedView, Param_AppendedWidget) == 0x000000, "Member 'StackBStepButton_C_SetSelectedView::Param_AppendedWidget' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetSelectedView, CallFunc_AddChildToCanvas_ReturnValue) == 0x000008, "Member 'StackBStepButton_C_SetSelectedView::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function StackBStepButton.StackBStepButton_C.Terminate
// 0x0001 (0x0001 - 0x0000)
struct StackBStepButton_C_Terminate final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackBStepButton_C_Terminate) == 0x000001, "Wrong alignment on StackBStepButton_C_Terminate");
static_assert(sizeof(StackBStepButton_C_Terminate) == 0x000001, "Wrong size on StackBStepButton_C_Terminate");
static_assert(offsetof(StackBStepButton_C_Terminate, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'StackBStepButton_C_Terminate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StackBStepButton.StackBStepButton_C.GetAppendedView
// 0x0008 (0x0008 - 0x0000)
struct StackBStepButton_C_GetAppendedView final
{
public:
	class UUserWidget*                            View;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBStepButton_C_GetAppendedView) == 0x000008, "Wrong alignment on StackBStepButton_C_GetAppendedView");
static_assert(sizeof(StackBStepButton_C_GetAppendedView) == 0x000008, "Wrong size on StackBStepButton_C_GetAppendedView");
static_assert(offsetof(StackBStepButton_C_GetAppendedView, View) == 0x000000, "Member 'StackBStepButton_C_GetAppendedView::View' has a wrong offset!");

// Function StackBStepButton.StackBStepButton_C.SelectView
// 0x0010 (0x0010 - 0x0000)
struct StackBStepButton_C_SelectView final
{
public:
	bool                                          bButton;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C70[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBStepButton_C_SelectView) == 0x000008, "Wrong alignment on StackBStepButton_C_SelectView");
static_assert(sizeof(StackBStepButton_C_SelectView) == 0x000010, "Wrong size on StackBStepButton_C_SelectView");
static_assert(offsetof(StackBStepButton_C_SelectView, bButton) == 0x000000, "Member 'StackBStepButton_C_SelectView::bButton' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SelectView, Temp_bool_Variable) == 0x000001, "Member 'StackBStepButton_C_SelectView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SelectView, K2Node_Select_Default) == 0x000008, "Member 'StackBStepButton_C_SelectView::K2Node_Select_Default' has a wrong offset!");

// Function StackBStepButton.StackBStepButton_C.ClearSelectedView
// 0x0001 (0x0001 - 0x0000)
struct StackBStepButton_C_ClearSelectedView final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackBStepButton_C_ClearSelectedView) == 0x000001, "Wrong alignment on StackBStepButton_C_ClearSelectedView");
static_assert(sizeof(StackBStepButton_C_ClearSelectedView) == 0x000001, "Wrong size on StackBStepButton_C_ClearSelectedView");
static_assert(offsetof(StackBStepButton_C_ClearSelectedView, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'StackBStepButton_C_ClearSelectedView::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StackBStepButton.StackBStepButton_C.SetButtonNo
// 0x0048 (0x0048 - 0x0000)
struct StackBStepButton_C_SetButtonNo final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_2;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBStepButton_C_SetButtonNo) == 0x000008, "Wrong alignment on StackBStepButton_C_SetButtonNo");
static_assert(sizeof(StackBStepButton_C_SetButtonNo) == 0x000048, "Wrong size on StackBStepButton_C_SetButtonNo");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Number) == 0x000000, "Member 'StackBStepButton_C_SetButtonNo::Number' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable) == 0x000004, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_object_Variable) == 0x000008, "Member 'StackBStepButton_C_SetButtonNo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable_1) == 0x000010, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable_2) == 0x000014, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable_3) == 0x000018, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable_4) == 0x00001C, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable_5) == 0x000020, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable_6) == 0x000024, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_int_Variable_7) == 0x000028, "Member 'StackBStepButton_C_SetButtonNo::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, K2Node_Select_Default) == 0x00002C, "Member 'StackBStepButton_C_SetButtonNo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, Temp_object_Variable_1) == 0x000030, "Member 'StackBStepButton_C_SetButtonNo::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, K2Node_Select_Default_1) == 0x000038, "Member 'StackBStepButton_C_SetButtonNo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StackBStepButton_C_SetButtonNo, K2Node_Select_Default_2) == 0x000040, "Member 'StackBStepButton_C_SetButtonNo::K2Node_Select_Default_2' has a wrong offset!");

// Function StackBStepButton.StackBStepButton_C.SetButtonName
// 0x0004 (0x0004 - 0x0000)
struct StackBStepButton_C_SetButtonName final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBStepButton_C_SetButtonName) == 0x000004, "Wrong alignment on StackBStepButton_C_SetButtonName");
static_assert(sizeof(StackBStepButton_C_SetButtonName) == 0x000004, "Wrong size on StackBStepButton_C_SetButtonName");
static_assert(offsetof(StackBStepButton_C_SetButtonName, TextId) == 0x000000, "Member 'StackBStepButton_C_SetButtonName::TextId' has a wrong offset!");

}

