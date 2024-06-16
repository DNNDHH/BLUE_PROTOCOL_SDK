#pragma once

 

// Package: Filter_AdventureBoard

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "FilterRadioButtonData_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Filter_AdventureBoard.Filter_AdventureBoard_C.ExecuteUbergraph_Filter_AdventureBoard
// 0x0018 (0x0018 - 0x0000)
struct Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88F2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   K2Node_ComponentBoundEvent_RadioButton;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Index;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_AdventureBoardFilter_ReturnValue;         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard) == 0x000008, "Wrong alignment on Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard");
static_assert(sizeof(Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard) == 0x000018, "Wrong size on Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard");
static_assert(offsetof(Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard, EntryPoint) == 0x000000, "Member 'Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard::EntryPoint' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard, K2Node_ComponentBoundEvent_IsChecked) == 0x000004, "Member 'Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard, K2Node_ComponentBoundEvent_RadioButton) == 0x000008, "Member 'Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard::K2Node_ComponentBoundEvent_RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard, K2Node_ComponentBoundEvent_Index) == 0x000010, "Member 'Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard::K2Node_ComponentBoundEvent_Index' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard, CallFunc_AdventureBoardFilter_ReturnValue) == 0x000014, "Member 'Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard::CallFunc_AdventureBoardFilter_ReturnValue' has a wrong offset!");

// Function Filter_AdventureBoard.Filter_AdventureBoard_C.BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88F3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFilterRadioButton_C*                   RadioButton;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000008, "Wrong alignment on Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(sizeof(Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature) == 0x000018, "Wrong size on Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
static_assert(offsetof(Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, IsChecked) == 0x000000, "Member 'Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::IsChecked' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, RadioButton) == 0x000008, "Member 'Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::RadioButton' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature, Param_Index) == 0x000010, "Member 'Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature::Param_Index' has a wrong offset!");

// Function Filter_AdventureBoard.Filter_AdventureBoard_C.CreateFilterList
// 0x00B8 (0x00B8 - 0x0000)
struct Filter_AdventureBoard_C_CreateFilterList final
{
public:
	TArray<struct FFilterRadioButtonData>         ButtonList;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFilterActive_IsActive;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88F4[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88F5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88F6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterRadioButtonData                 CallFunc_Array_Get_Item;                           // 0x0048(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88F7[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterRadioButtonData                 K2Node_MakeStruct_FilterRadioButtonData;           // 0x0080(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88F8[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Filter_AdventureBoard_C_CreateFilterList) == 0x000008, "Wrong alignment on Filter_AdventureBoard_C_CreateFilterList");
static_assert(sizeof(Filter_AdventureBoard_C_CreateFilterList) == 0x0000B8, "Wrong size on Filter_AdventureBoard_C_CreateFilterList");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, ButtonList) == 0x000000, "Member 'Filter_AdventureBoard_C_CreateFilterList::ButtonList' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Filter_AdventureBoard_C_CreateFilterList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'Filter_AdventureBoard_C_CreateFilterList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_IsFilterActive_IsActive) == 0x000018, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_IsFilterActive_IsActive' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Multiply_IntInt_ReturnValue) == 0x000030, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_MakeVector2D_ReturnValue) == 0x00003C, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Array_Get_Item) == 0x000048, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, K2Node_MakeStruct_FilterRadioButtonData) == 0x000080, "Member 'Filter_AdventureBoard_C_CreateFilterList::K2Node_MakeStruct_FilterRadioButtonData' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_CreateFilterList, CallFunc_Array_Add_ReturnValue) == 0x0000B4, "Member 'Filter_AdventureBoard_C_CreateFilterList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function Filter_AdventureBoard.Filter_AdventureBoard_C.IsFilterActive
// 0x0010 (0x0010 - 0x0000)
struct Filter_AdventureBoard_C_IsFilterActive final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsActive;                                     // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88F9[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerClassRedistered_ReturnValue;      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Filter_AdventureBoard_C_IsFilterActive) == 0x000004, "Wrong alignment on Filter_AdventureBoard_C_IsFilterActive");
static_assert(sizeof(Filter_AdventureBoard_C_IsFilterActive) == 0x000010, "Wrong size on Filter_AdventureBoard_C_IsFilterActive");
static_assert(offsetof(Filter_AdventureBoard_C_IsFilterActive, InIndex) == 0x000000, "Member 'Filter_AdventureBoard_C_IsFilterActive::InIndex' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_IsFilterActive, IsActive) == 0x000004, "Member 'Filter_AdventureBoard_C_IsFilterActive::IsActive' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_IsFilterActive, LocalIsActive) == 0x000005, "Member 'Filter_AdventureBoard_C_IsFilterActive::LocalIsActive' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_IsFilterActive, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'Filter_AdventureBoard_C_IsFilterActive::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_IsFilterActive, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'Filter_AdventureBoard_C_IsFilterActive::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Filter_AdventureBoard_C_IsFilterActive, CallFunc_IsPlayerClassRedistered_ReturnValue) == 0x00000D, "Member 'Filter_AdventureBoard_C_IsFilterActive::CallFunc_IsPlayerClassRedistered_ReturnValue' has a wrong offset!");

}

