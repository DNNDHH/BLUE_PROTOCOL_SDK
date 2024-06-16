#pragma once

 

// Package: MapWidget_CompoundBox

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnItemSelected__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature final
{
public:
	class FString                                 InSelectedItemName;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InSelectedItemId;                                  // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature");
static_assert(sizeof(MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature) == 0x000018, "Wrong size on MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature");
static_assert(offsetof(MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature, InSelectedItemName) == 0x000000, "Member 'MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature::InSelectedItemName' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature, InSelectedItemId) == 0x000010, "Member 'MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature::InSelectedItemId' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ExecuteUbergraph_MapWidget_CompoundBox
// 0x0028 (0x0028 - 0x0000)
struct MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_804B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOptionIndex_ReturnValue;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_804C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox");
static_assert(sizeof(MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox) == 0x000028, "Wrong size on MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox");
static_assert(offsetof(MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox, EntryPoint) == 0x000000, "Member 'MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox, CallFunc_GetSelectedOptionIndex_ReturnValue) == 0x000008, "Member 'MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox::CallFunc_GetSelectedOptionIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox, K2Node_ComponentBoundEvent_SelectedItem) == 0x000010, "Member 'MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox, K2Node_ComponentBoundEvent_SelectionType) == 0x000020, "Member 'MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.AddItemToComboBox
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_CompoundBox_C_AddItemToComboBox final
{
public:
	class FString                                 InItemName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CompoundBox_C_AddItemToComboBox) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_AddItemToComboBox");
static_assert(sizeof(MapWidget_CompoundBox_C_AddItemToComboBox) == 0x000018, "Wrong size on MapWidget_CompoundBox_C_AddItemToComboBox");
static_assert(offsetof(MapWidget_CompoundBox_C_AddItemToComboBox, InItemName) == 0x000000, "Member 'MapWidget_CompoundBox_C_AddItemToComboBox::InItemName' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_AddItemToComboBox, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MapWidget_CompoundBox_C_AddItemToComboBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxItemSelected
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_CompoundBox_C_SetComboBoxItemSelected final
{
public:
	class FString                                 InItemName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CompoundBox_C_SetComboBoxItemSelected) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_SetComboBoxItemSelected");
static_assert(sizeof(MapWidget_CompoundBox_C_SetComboBoxItemSelected) == 0x000018, "Wrong size on MapWidget_CompoundBox_C_SetComboBoxItemSelected");
static_assert(offsetof(MapWidget_CompoundBox_C_SetComboBoxItemSelected, InItemName) == 0x000000, "Member 'MapWidget_CompoundBox_C_SetComboBoxItemSelected::InItemName' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_SetComboBoxItemSelected, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MapWidget_CompoundBox_C_SetComboBoxItemSelected::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetWidgetToOptionCanvas
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_CompoundBox_C_SetWidgetToOptionCanvas final
{
public:
	class UUserWidget*                            InUserWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_804D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CompoundBox_C_SetWidgetToOptionCanvas) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_SetWidgetToOptionCanvas");
static_assert(sizeof(MapWidget_CompoundBox_C_SetWidgetToOptionCanvas) == 0x000018, "Wrong size on MapWidget_CompoundBox_C_SetWidgetToOptionCanvas");
static_assert(offsetof(MapWidget_CompoundBox_C_SetWidgetToOptionCanvas, InUserWidget) == 0x000000, "Member 'MapWidget_CompoundBox_C_SetWidgetToOptionCanvas::InUserWidget' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_SetWidgetToOptionCanvas, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MapWidget_CompoundBox_C_SetWidgetToOptionCanvas::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_SetWidgetToOptionCanvas, CallFunc_AddChildToCanvas_ReturnValue) == 0x000010, "Member 'MapWidget_CompoundBox_C_SetWidgetToOptionCanvas::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetOptionWidgetVisibility
// 0x0005 (0x0005 - 0x0000)
struct MapWidget_CompoundBox_C_SetOptionWidgetVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CompoundBox_C_SetOptionWidgetVisibility) == 0x000001, "Wrong alignment on MapWidget_CompoundBox_C_SetOptionWidgetVisibility");
static_assert(sizeof(MapWidget_CompoundBox_C_SetOptionWidgetVisibility) == 0x000005, "Wrong size on MapWidget_CompoundBox_C_SetOptionWidgetVisibility");
static_assert(offsetof(MapWidget_CompoundBox_C_SetOptionWidgetVisibility, Param_IsVisible) == 0x000000, "Member 'MapWidget_CompoundBox_C_SetOptionWidgetVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_SetOptionWidgetVisibility, Temp_bool_Variable) == 0x000001, "Member 'MapWidget_CompoundBox_C_SetOptionWidgetVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_SetOptionWidgetVisibility, Temp_byte_Variable) == 0x000002, "Member 'MapWidget_CompoundBox_C_SetOptionWidgetVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_SetOptionWidgetVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'MapWidget_CompoundBox_C_SetOptionWidgetVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_SetOptionWidgetVisibility, K2Node_Select_Default) == 0x000004, "Member 'MapWidget_CompoundBox_C_SetOptionWidgetVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleText
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_CompoundBox_C_SetTitleText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_CompoundBox_C_SetTitleText) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_SetTitleText");
static_assert(sizeof(MapWidget_CompoundBox_C_SetTitleText) == 0x000018, "Wrong size on MapWidget_CompoundBox_C_SetTitleText");
static_assert(offsetof(MapWidget_CompoundBox_C_SetTitleText, InText) == 0x000000, "Member 'MapWidget_CompoundBox_C_SetTitleText::InText' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleTextId
// 0x0004 (0x0004 - 0x0000)
struct MapWidget_CompoundBox_C_SetTitleTextId final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CompoundBox_C_SetTitleTextId) == 0x000004, "Wrong alignment on MapWidget_CompoundBox_C_SetTitleTextId");
static_assert(sizeof(MapWidget_CompoundBox_C_SetTitleTextId) == 0x000004, "Wrong size on MapWidget_CompoundBox_C_SetTitleTextId");
static_assert(offsetof(MapWidget_CompoundBox_C_SetTitleTextId, InTextID) == 0x000000, "Member 'MapWidget_CompoundBox_C_SetTitleTextId::InTextID' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxEnable
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_CompoundBox_C_SetComboBoxEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CompoundBox_C_SetComboBoxEnable) == 0x000001, "Wrong alignment on MapWidget_CompoundBox_C_SetComboBoxEnable");
static_assert(sizeof(MapWidget_CompoundBox_C_SetComboBoxEnable) == 0x000001, "Wrong size on MapWidget_CompoundBox_C_SetComboBoxEnable");
static_assert(offsetof(MapWidget_CompoundBox_C_SetComboBoxEnable, IsEnable) == 0x000000, "Member 'MapWidget_CompoundBox_C_SetComboBoxEnable::IsEnable' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.On_CBox_1_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0) == 0x000008, "Wrong alignment on MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0");
static_assert(sizeof(MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0) == 0x000038, "Wrong size on MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0");
static_assert(offsetof(MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0, Item) == 0x000000, "Member 'MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ClearComboBox
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_CompoundBox_C_ClearComboBox final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CompoundBox_C_ClearComboBox) == 0x000001, "Wrong alignment on MapWidget_CompoundBox_C_ClearComboBox");
static_assert(sizeof(MapWidget_CompoundBox_C_ClearComboBox) == 0x000001, "Wrong size on MapWidget_CompoundBox_C_ClearComboBox");
static_assert(offsetof(MapWidget_CompoundBox_C_ClearComboBox, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MapWidget_CompoundBox_C_ClearComboBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

