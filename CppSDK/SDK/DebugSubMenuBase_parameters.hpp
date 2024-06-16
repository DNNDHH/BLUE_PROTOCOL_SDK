#pragma once

 

// Package: DebugSubMenuBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function DebugSubMenuBase.DebugSubMenuBase_C.ExecuteUbergraph_DebugSubMenuBase
// 0x0178 (0x0178 - 0x0000)
struct DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UDebugButton_C* DebugButton)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UDebugButton_C* DebugButton)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   K2Node_CustomEvent_ButtonLabel;                    // 0x0028(0x0018)()
	class UDebugButton_C*                         K2Node_CustomEvent_DebugButton_1;                  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugButton_C*                         CallFunc_AddButton_Internal_NewButton;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           K2Node_CustomEvent_ButtonLabels;                   // 0x0050(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504C[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0068(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDebugParameter                      K2Node_CustomEvent_InParam;                        // 0x0088(0x00A0)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_504D[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0130(0x0018)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0148(0x0018)()
	class UDebugButton_C*                         K2Node_CustomEvent_DebugButton;                    // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugButton_C*                         CallFunc_AddButton_Internal_NewButton_1;           // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase");
static_assert(sizeof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase) == 0x000178, "Wrong size on DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, EntryPoint) == 0x000000, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, Temp_int_Array_Index_Variable) == 0x000014, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, K2Node_CustomEvent_ButtonLabel) == 0x000028, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::K2Node_CustomEvent_ButtonLabel' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, K2Node_CustomEvent_DebugButton_1) == 0x000040, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::K2Node_CustomEvent_DebugButton_1' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_AddButton_Internal_NewButton) == 0x000048, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_AddButton_Internal_NewButton' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, K2Node_CustomEvent_ButtonLabels) == 0x000050, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::K2Node_CustomEvent_ButtonLabels' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_Array_Get_Item) == 0x000068, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, K2Node_CustomEvent_InParam) == 0x000088, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_Conv_StringToText_ReturnValue) == 0x000130, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_Conv_NameToText_ReturnValue) == 0x000148, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, K2Node_CustomEvent_DebugButton) == 0x000160, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::K2Node_CustomEvent_DebugButton' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_AddButton_Internal_NewButton_1) == 0x000168, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_AddButton_Internal_NewButton_1' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct DebugSubMenuBase_C_CustomEvent_0 final
{
public:
	class UDebugButton_C*                         DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugSubMenuBase_C_CustomEvent_0) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_CustomEvent_0");
static_assert(sizeof(DebugSubMenuBase_C_CustomEvent_0) == 0x000008, "Wrong size on DebugSubMenuBase_C_CustomEvent_0");
static_assert(offsetof(DebugSubMenuBase_C_CustomEvent_0, DebugButton) == 0x000000, "Member 'DebugSubMenuBase_C_CustomEvent_0::DebugButton' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonEx
// 0x00A0 (0x00A0 - 0x0000)
struct DebugSubMenuBase_C_AddButtonEx final
{
public:
	struct FSBDebugParameter                      InParam;                                           // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DebugSubMenuBase_C_AddButtonEx) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_AddButtonEx");
static_assert(sizeof(DebugSubMenuBase_C_AddButtonEx) == 0x0000A0, "Wrong size on DebugSubMenuBase_C_AddButtonEx");
static_assert(offsetof(DebugSubMenuBase_C_AddButtonEx, InParam) == 0x000000, "Member 'DebugSubMenuBase_C_AddButtonEx::InParam' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonFromArray
// 0x0010 (0x0010 - 0x0000)
struct DebugSubMenuBase_C_AddButtonFromArray final
{
public:
	TArray<class FText>                           ButtonLabels;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(DebugSubMenuBase_C_AddButtonFromArray) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_AddButtonFromArray");
static_assert(sizeof(DebugSubMenuBase_C_AddButtonFromArray) == 0x000010, "Wrong size on DebugSubMenuBase_C_AddButtonFromArray");
static_assert(offsetof(DebugSubMenuBase_C_AddButtonFromArray, ButtonLabels) == 0x000000, "Member 'DebugSubMenuBase_C_AddButtonFromArray::ButtonLabels' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.EventDispatcher_OnClicked_Event_0
// 0x0008 (0x0008 - 0x0000)
struct DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0 final
{
public:
	class UDebugButton_C*                         DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0");
static_assert(sizeof(DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0) == 0x000008, "Wrong size on DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0");
static_assert(offsetof(DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0, DebugButton) == 0x000000, "Member 'DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0::DebugButton' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton
// 0x0018 (0x0018 - 0x0000)
struct DebugSubMenuBase_C_AddButton final
{
public:
	class FText                                   ButtonLabel;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DebugSubMenuBase_C_AddButton) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_AddButton");
static_assert(sizeof(DebugSubMenuBase_C_AddButton) == 0x000018, "Wrong size on DebugSubMenuBase_C_AddButton");
static_assert(offsetof(DebugSubMenuBase_C_AddButton, ButtonLabel) == 0x000000, "Member 'DebugSubMenuBase_C_AddButton::ButtonLabel' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton_Internal
// 0x0030 (0x0030 - 0x0000)
struct DebugSubMenuBase_C_AddButton_Internal final
{
public:
	class FText                                   ButtonLabel;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDebugButton_C*                         NewButton;                                         // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugButton_C*                         TmpNewButton;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugButton_C*                         CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugSubMenuBase_C_AddButton_Internal) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_AddButton_Internal");
static_assert(sizeof(DebugSubMenuBase_C_AddButton_Internal) == 0x000030, "Wrong size on DebugSubMenuBase_C_AddButton_Internal");
static_assert(offsetof(DebugSubMenuBase_C_AddButton_Internal, ButtonLabel) == 0x000000, "Member 'DebugSubMenuBase_C_AddButton_Internal::ButtonLabel' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddButton_Internal, NewButton) == 0x000018, "Member 'DebugSubMenuBase_C_AddButton_Internal::NewButton' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddButton_Internal, TmpNewButton) == 0x000020, "Member 'DebugSubMenuBase_C_AddButton_Internal::TmpNewButton' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddButton_Internal, CallFunc_Create_ReturnValue) == 0x000028, "Member 'DebugSubMenuBase_C_AddButton_Internal::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.OnButtonClicked
// 0x0008 (0x0008 - 0x0000)
struct DebugSubMenuBase_C_OnButtonClicked final
{
public:
	class UDebugButton_C*                         DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugSubMenuBase_C_OnButtonClicked) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_OnButtonClicked");
static_assert(sizeof(DebugSubMenuBase_C_OnButtonClicked) == 0x000008, "Wrong size on DebugSubMenuBase_C_OnButtonClicked");
static_assert(offsetof(DebugSubMenuBase_C_OnButtonClicked, DebugButton) == 0x000000, "Member 'DebugSubMenuBase_C_OnButtonClicked::DebugButton' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.SetFocusItem
// 0x0018 (0x0018 - 0x0000)
struct DebugSubMenuBase_C_SetFocusItem final
{
public:
	int32                                         FocusItemIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugSubMenuBase_C_SetFocusItem) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_SetFocusItem");
static_assert(sizeof(DebugSubMenuBase_C_SetFocusItem) == 0x000018, "Wrong size on DebugSubMenuBase_C_SetFocusItem");
static_assert(offsetof(DebugSubMenuBase_C_SetFocusItem, FocusItemIndex) == 0x000000, "Member 'DebugSubMenuBase_C_SetFocusItem::FocusItemIndex' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_SetFocusItem, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'DebugSubMenuBase_C_SetFocusItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_SetFocusItem, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'DebugSubMenuBase_C_SetFocusItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_SetFocusItem, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'DebugSubMenuBase_C_SetFocusItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.AddChildMenu
// 0x0040 (0x0040 - 0x0000)
struct DebugSubMenuBase_C_AddChildMenu final
{
public:
	class UUserWidget*                            InChildMenu;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugSubMenuBase_C_AddChildMenu) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_AddChildMenu");
static_assert(sizeof(DebugSubMenuBase_C_AddChildMenu) == 0x000040, "Wrong size on DebugSubMenuBase_C_AddChildMenu");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, InChildMenu) == 0x000000, "Member 'DebugSubMenuBase_C_AddChildMenu::InChildMenu' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_BreakVector2D_X) == 0x000010, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_Add_FloatFloat_ReturnValue) == 0x000018, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_GetDesiredSize_ReturnValue) == 0x00001C, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_BreakVector2D_X_1) == 0x000024, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_BreakVector2D_Y_1) == 0x000028, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000030, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddChildMenu, CallFunc_MakeVector2D_ReturnValue) == 0x000034, "Member 'DebugSubMenuBase_C_AddChildMenu::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function DebugSubMenuBase.DebugSubMenuBase_C.AddMenuItem
// 0x0020 (0x0020 - 0x0000)
struct DebugSubMenuBase_C_AddMenuItem final
{
public:
	class UUserWidget*                            InItemWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_504F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5050[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugSubMenuBase_C_AddMenuItem) == 0x000008, "Wrong alignment on DebugSubMenuBase_C_AddMenuItem");
static_assert(sizeof(DebugSubMenuBase_C_AddMenuItem) == 0x000020, "Wrong size on DebugSubMenuBase_C_AddMenuItem");
static_assert(offsetof(DebugSubMenuBase_C_AddMenuItem, InItemWidget) == 0x000000, "Member 'DebugSubMenuBase_C_AddMenuItem::InItemWidget' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddMenuItem, CallFunc_AddFocusableWidget_ReturnValue) == 0x000008, "Member 'DebugSubMenuBase_C_AddMenuItem::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddMenuItem, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'DebugSubMenuBase_C_AddMenuItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddMenuItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'DebugSubMenuBase_C_AddMenuItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugSubMenuBase_C_AddMenuItem, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000018, "Member 'DebugSubMenuBase_C_AddMenuItem::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

}

