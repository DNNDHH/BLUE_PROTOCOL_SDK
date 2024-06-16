#pragma once

 

// Package: SBTextButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SBTextButton.SBTextButton_C.ExecuteUbergraph_SBTextButton
// 0x00B0 (0x00B0 - 0x0000)
struct SBTextButton_C_ExecuteUbergraph_SBTextButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D9C[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPressed_ReturnValue;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D9D[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D9E[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0088(0x0028)()
};
static_assert(alignof(SBTextButton_C_ExecuteUbergraph_SBTextButton) == 0x000008, "Wrong alignment on SBTextButton_C_ExecuteUbergraph_SBTextButton");
static_assert(sizeof(SBTextButton_C_ExecuteUbergraph_SBTextButton) == 0x0000B0, "Wrong size on SBTextButton_C_ExecuteUbergraph_SBTextButton");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, EntryPoint) == 0x000000, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, Temp_bool_Variable) == 0x000044, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, Temp_bool_Variable_1) == 0x000045, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, Temp_int_Array_Index_Variable) == 0x000050, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, CallFunc_IsPressed_ReturnValue) == 0x000054, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::CallFunc_IsPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, CallFunc_IsHovered_ReturnValue) == 0x000055, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, CallFunc_Array_Get_Item) == 0x000058, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, K2Node_Select_Default) == 0x000068, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, K2Node_Select_Default_1) == 0x000078, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_ExecuteUbergraph_SBTextButton, K2Node_MakeStruct_SlateColor) == 0x000088, "Member 'SBTextButton_C_ExecuteUbergraph_SBTextButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function SBTextButton.SBTextButton_C.InitChildText
// 0x0030 (0x0030 - 0x0000)
struct SBTextButton_C_InitChildText final
{
public:
	class UPanelWidget*                           PanelWidget;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             K2Node_DynamicCast_AsText;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D9F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_DynamicCast_AsPanel_Widget;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DA0[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SBTextButton_C_InitChildText) == 0x000008, "Wrong alignment on SBTextButton_C_InitChildText");
static_assert(sizeof(SBTextButton_C_InitChildText) == 0x000030, "Wrong size on SBTextButton_C_InitChildText");
static_assert(offsetof(SBTextButton_C_InitChildText, PanelWidget) == 0x000000, "Member 'SBTextButton_C_InitChildText::PanelWidget' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_InitChildText, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'SBTextButton_C_InitChildText::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_InitChildText, K2Node_DynamicCast_AsText) == 0x000010, "Member 'SBTextButton_C_InitChildText::K2Node_DynamicCast_AsText' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_InitChildText, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SBTextButton_C_InitChildText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_InitChildText, K2Node_DynamicCast_AsPanel_Widget) == 0x000020, "Member 'SBTextButton_C_InitChildText::K2Node_DynamicCast_AsPanel_Widget' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_InitChildText, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'SBTextButton_C_InitChildText::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_InitChildText, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'SBTextButton_C_InitChildText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function SBTextButton.SBTextButton_C.SearchChildText
// 0x0050 (0x0050 - 0x0000)
struct SBTextButton_C_SearchChildText final
{
public:
	class UPanelWidget*                           PanelWidget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DA1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DA2[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             K2Node_DynamicCast_AsText;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DA3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_DynamicCast_AsPanel_Widget;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DA4[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SBTextButton_C_SearchChildText) == 0x000008, "Wrong alignment on SBTextButton_C_SearchChildText");
static_assert(sizeof(SBTextButton_C_SearchChildText) == 0x000050, "Wrong size on SBTextButton_C_SearchChildText");
static_assert(offsetof(SBTextButton_C_SearchChildText, PanelWidget) == 0x000000, "Member 'SBTextButton_C_SearchChildText::PanelWidget' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'SBTextButton_C_SearchChildText::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, Temp_int_Variable) == 0x00000C, "Member 'SBTextButton_C_SearchChildText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'SBTextButton_C_SearchChildText::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'SBTextButton_C_SearchChildText::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'SBTextButton_C_SearchChildText::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, K2Node_DynamicCast_AsText) == 0x000028, "Member 'SBTextButton_C_SearchChildText::K2Node_DynamicCast_AsText' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SBTextButton_C_SearchChildText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, K2Node_DynamicCast_AsPanel_Widget) == 0x000038, "Member 'SBTextButton_C_SearchChildText::K2Node_DynamicCast_AsPanel_Widget' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'SBTextButton_C_SearchChildText::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'SBTextButton_C_SearchChildText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextButton_C_SearchChildText, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'SBTextButton_C_SearchChildText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

