#pragma once

 

// Package: CommonPagerWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommonPagerWidget.CommonPagerWidget_C.OnPageChange__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CommonPagerWidget_C_OnPageChange__DelegateSignature final
{
public:
	int32                                         Param_PageCurrent;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPagerWidget_C_OnPageChange__DelegateSignature) == 0x000004, "Wrong alignment on CommonPagerWidget_C_OnPageChange__DelegateSignature");
static_assert(sizeof(CommonPagerWidget_C_OnPageChange__DelegateSignature) == 0x000004, "Wrong size on CommonPagerWidget_C_OnPageChange__DelegateSignature");
static_assert(offsetof(CommonPagerWidget_C_OnPageChange__DelegateSignature, Param_PageCurrent) == 0x000000, "Member 'CommonPagerWidget_C_OnPageChange__DelegateSignature::Param_PageCurrent' has a wrong offset!");

// Function CommonPagerWidget.CommonPagerWidget_C.ExecuteUbergraph_CommonPagerWidget
// 0x0080 (0x0080 - 0x0000)
struct CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Fowerd;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7920[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7921[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	int32                                         K2Node_CustomEvent_PageCurrent;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PageMin;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PageMax;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7922[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0060(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget) == 0x000008, "Wrong alignment on CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget");
static_assert(sizeof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget) == 0x000080, "Wrong size on CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, EntryPoint) == 0x000000, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, Temp_int_Variable) == 0x000004, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, K2Node_CustomEvent_Fowerd) == 0x000008, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::K2Node_CustomEvent_Fowerd' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, Temp_int_Variable_1) == 0x00000C, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x000019, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, K2Node_CustomEvent_PageCurrent) == 0x000038, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::K2Node_CustomEvent_PageCurrent' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, K2Node_CustomEvent_PageMin) == 0x00003C, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::K2Node_CustomEvent_PageMin' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, K2Node_CustomEvent_PageMax) == 0x000040, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::K2Node_CustomEvent_PageMax' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000048, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000060, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000078, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Less_IntInt_ReturnValue_1) == 0x000079, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget, CallFunc_Greater_IntInt_ReturnValue_2) == 0x00007A, "Member 'CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");

// Function CommonPagerWidget.CommonPagerWidget_C.InitializePage
// 0x000C (0x000C - 0x0000)
struct CommonPagerWidget_C_InitializePage final
{
public:
	int32                                         Param_PageCurrent;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_PageMin;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_PageMax;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPagerWidget_C_InitializePage) == 0x000004, "Wrong alignment on CommonPagerWidget_C_InitializePage");
static_assert(sizeof(CommonPagerWidget_C_InitializePage) == 0x00000C, "Wrong size on CommonPagerWidget_C_InitializePage");
static_assert(offsetof(CommonPagerWidget_C_InitializePage, Param_PageCurrent) == 0x000000, "Member 'CommonPagerWidget_C_InitializePage::Param_PageCurrent' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_InitializePage, Param_PageMin) == 0x000004, "Member 'CommonPagerWidget_C_InitializePage::Param_PageMin' has a wrong offset!");
static_assert(offsetof(CommonPagerWidget_C_InitializePage, Param_PageMax) == 0x000008, "Member 'CommonPagerWidget_C_InitializePage::Param_PageMax' has a wrong offset!");

// Function CommonPagerWidget.CommonPagerWidget_C.SetBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct CommonPagerWidget_C_SetBtnEnable final
{
public:
	bool                                          Param_Fowerd;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPagerWidget_C_SetBtnEnable) == 0x000001, "Wrong alignment on CommonPagerWidget_C_SetBtnEnable");
static_assert(sizeof(CommonPagerWidget_C_SetBtnEnable) == 0x000001, "Wrong size on CommonPagerWidget_C_SetBtnEnable");
static_assert(offsetof(CommonPagerWidget_C_SetBtnEnable, Param_Fowerd) == 0x000000, "Member 'CommonPagerWidget_C_SetBtnEnable::Param_Fowerd' has a wrong offset!");

}

