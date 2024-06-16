#pragma once

 

// Package: SBSelectableTextButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SBSelectableTextButton.SBSelectableTextButton_C.ExecuteUbergraph_SBSelectableTextButton
// 0x0610 (0x0610 - 0x0000)
struct SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B0[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B1[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B2[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B3[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B4[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_3;                           // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_4;                           // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00C8(0x0028)()
	struct FSlateBrush                            K2Node_Select_Default_5;                           // 0x00F0(0x0088)()
	struct FSlateBrush                            K2Node_Select_Default_6;                           // 0x0178(0x0088)()
	struct FSlateBrush                            K2Node_Select_Default_7;                           // 0x0200(0x0088)()
	struct FSlateBrush                            K2Node_Select_Default_8;                           // 0x0288(0x0088)()
	struct FSlateBrush                            K2Node_Select_Default_9;                           // 0x0310(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0398(0x0278)()
};
static_assert(alignof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton) == 0x000008, "Wrong alignment on SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton");
static_assert(sizeof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton) == 0x000610, "Wrong size on SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, EntryPoint) == 0x000000, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable) == 0x000004, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_1) == 0x000005, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_2) == 0x000006, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_3) == 0x000007, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_4) == 0x000008, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_5) == 0x000009, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_6) == 0x00000A, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_7) == 0x00004C, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_int_Array_Index_Variable) == 0x000058, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_8) == 0x00005C, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, CallFunc_Array_Get_Item) == 0x000060, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default) == 0x000070, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_1) == 0x000080, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Event_IsDesignTime) == 0x000090, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000091, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000092, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, Temp_bool_Variable_9) == 0x000093, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, CallFunc_BooleanAND_ReturnValue) == 0x000094, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_2) == 0x000098, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_3) == 0x0000A8, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_4) == 0x0000B8, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_MakeStruct_SlateColor) == 0x0000C8, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_5) == 0x0000F0, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_6) == 0x000178, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_7) == 0x000200, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_8) == 0x000288, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_Select_Default_9) == 0x000310, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton, K2Node_MakeStruct_ButtonStyle) == 0x000398, "Member 'SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

// Function SBSelectableTextButton.SBSelectableTextButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SBSelectableTextButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SBSelectableTextButton_C_PreConstruct) == 0x000001, "Wrong alignment on SBSelectableTextButton_C_PreConstruct");
static_assert(sizeof(SBSelectableTextButton_C_PreConstruct) == 0x000001, "Wrong size on SBSelectableTextButton_C_PreConstruct");
static_assert(offsetof(SBSelectableTextButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SBSelectableTextButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SBSelectableTextButton.SBSelectableTextButton_C.InitBothStyle
// 0x0280 (0x0280 - 0x0000)
struct SBSelectableTextButton_C_InitBothStyle final
{
public:
	struct FButtonStyle                           Param_SelectedStyle;                               // 0x0000(0x0278)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SBSelectableTextButton_C_InitBothStyle) == 0x000008, "Wrong alignment on SBSelectableTextButton_C_InitBothStyle");
static_assert(sizeof(SBSelectableTextButton_C_InitBothStyle) == 0x000280, "Wrong size on SBSelectableTextButton_C_InitBothStyle");
static_assert(offsetof(SBSelectableTextButton_C_InitBothStyle, Param_SelectedStyle) == 0x000000, "Member 'SBSelectableTextButton_C_InitBothStyle::Param_SelectedStyle' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitBothStyle, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000278, "Member 'SBSelectableTextButton_C_InitBothStyle::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitBothStyle, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000279, "Member 'SBSelectableTextButton_C_InitBothStyle::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

// Function SBSelectableTextButton.SBSelectableTextButton_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct SBSelectableTextButton_C_SetSelected final
{
public:
	bool                                          bSelect;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SBSelectableTextButton_C_SetSelected) == 0x000001, "Wrong alignment on SBSelectableTextButton_C_SetSelected");
static_assert(sizeof(SBSelectableTextButton_C_SetSelected) == 0x000001, "Wrong size on SBSelectableTextButton_C_SetSelected");
static_assert(offsetof(SBSelectableTextButton_C_SetSelected, bSelect) == 0x000000, "Member 'SBSelectableTextButton_C_SetSelected::bSelect' has a wrong offset!");

// Function SBSelectableTextButton.SBSelectableTextButton_C.InitChildText
// 0x0030 (0x0030 - 0x0000)
struct SBSelectableTextButton_C_InitChildText final
{
public:
	class UPanelWidget*                           PanelWidget;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             K2Node_DynamicCast_AsText;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B5[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_DynamicCast_AsPanel_Widget;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B6[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SBSelectableTextButton_C_InitChildText) == 0x000008, "Wrong alignment on SBSelectableTextButton_C_InitChildText");
static_assert(sizeof(SBSelectableTextButton_C_InitChildText) == 0x000030, "Wrong size on SBSelectableTextButton_C_InitChildText");
static_assert(offsetof(SBSelectableTextButton_C_InitChildText, PanelWidget) == 0x000000, "Member 'SBSelectableTextButton_C_InitChildText::PanelWidget' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitChildText, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'SBSelectableTextButton_C_InitChildText::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitChildText, K2Node_DynamicCast_AsText) == 0x000010, "Member 'SBSelectableTextButton_C_InitChildText::K2Node_DynamicCast_AsText' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitChildText, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SBSelectableTextButton_C_InitChildText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitChildText, K2Node_DynamicCast_AsPanel_Widget) == 0x000020, "Member 'SBSelectableTextButton_C_InitChildText::K2Node_DynamicCast_AsPanel_Widget' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitChildText, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'SBSelectableTextButton_C_InitChildText::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_InitChildText, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'SBSelectableTextButton_C_InitChildText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function SBSelectableTextButton.SBSelectableTextButton_C.IsSelected
// 0x0001 (0x0001 - 0x0000)
struct SBSelectableTextButton_C_IsSelected final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SBSelectableTextButton_C_IsSelected) == 0x000001, "Wrong alignment on SBSelectableTextButton_C_IsSelected");
static_assert(sizeof(SBSelectableTextButton_C_IsSelected) == 0x000001, "Wrong size on SBSelectableTextButton_C_IsSelected");
static_assert(offsetof(SBSelectableTextButton_C_IsSelected, bIsSelected) == 0x000000, "Member 'SBSelectableTextButton_C_IsSelected::bIsSelected' has a wrong offset!");

// Function SBSelectableTextButton.SBSelectableTextButton_C.SearchChildText
// 0x0050 (0x0050 - 0x0000)
struct SBSelectableTextButton_C_SearchChildText final
{
public:
	class UPanelWidget*                           PanelWidget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92B7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B8[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             K2Node_DynamicCast_AsText;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92B9[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_DynamicCast_AsPanel_Widget;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92BA[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SBSelectableTextButton_C_SearchChildText) == 0x000008, "Wrong alignment on SBSelectableTextButton_C_SearchChildText");
static_assert(sizeof(SBSelectableTextButton_C_SearchChildText) == 0x000050, "Wrong size on SBSelectableTextButton_C_SearchChildText");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, PanelWidget) == 0x000000, "Member 'SBSelectableTextButton_C_SearchChildText::PanelWidget' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'SBSelectableTextButton_C_SearchChildText::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, Temp_int_Variable) == 0x00000C, "Member 'SBSelectableTextButton_C_SearchChildText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'SBSelectableTextButton_C_SearchChildText::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'SBSelectableTextButton_C_SearchChildText::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'SBSelectableTextButton_C_SearchChildText::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, K2Node_DynamicCast_AsText) == 0x000028, "Member 'SBSelectableTextButton_C_SearchChildText::K2Node_DynamicCast_AsText' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SBSelectableTextButton_C_SearchChildText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, K2Node_DynamicCast_AsPanel_Widget) == 0x000038, "Member 'SBSelectableTextButton_C_SearchChildText::K2Node_DynamicCast_AsPanel_Widget' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'SBSelectableTextButton_C_SearchChildText::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'SBSelectableTextButton_C_SearchChildText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBSelectableTextButton_C_SearchChildText, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'SBSelectableTextButton_C_SearchChildText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

