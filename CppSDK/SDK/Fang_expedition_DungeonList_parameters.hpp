#pragma once

 

// Package: Fang_expedition_DungeonList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnDungeonAreaSelect__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5474[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0008(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature");
static_assert(sizeof(Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature) == 0x0000B0, "Wrong size on Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature");
static_assert(offsetof(Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature, AreaData) == 0x000008, "Member 'Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature::AreaData' has a wrong offset!");

// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ExecuteUbergraph_Fang_expedition_DungeonList
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList) == 0x000004, "Wrong alignment on Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList");
static_assert(sizeof(Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList) == 0x000004, "Wrong size on Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList");
static_assert(offsetof(Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList, EntryPoint) == 0x000000, "Member 'Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList::EntryPoint' has a wrong offset!");

// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.SetData
// 0x00F8 (0x00F8 - 0x0000)
struct Fang_expedition_DungeonList_C_SetData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFang_expedition_AreaListItem_C*        WorkWidget;                                        // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrollBoxSlot*                         K2Node_DynamicCast_AsScroll_Box_Slot;              // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5475[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        CallFunc_Create_ReturnValue;                       // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonList_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_DungeonList_C_SetData");
static_assert(sizeof(Fang_expedition_DungeonList_C_SetData) == 0x0000F8, "Wrong size on Fang_expedition_DungeonList_C_SetData");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, AreaData) == 0x000000, "Member 'Fang_expedition_DungeonList_C_SetData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, WorkWidget) == 0x0000A8, "Member 'Fang_expedition_DungeonList_C_SetData::WorkWidget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, Temp_int_Variable) == 0x0000B0, "Member 'Fang_expedition_DungeonList_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'Fang_expedition_DungeonList_C_SetData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'Fang_expedition_DungeonList_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, K2Node_MakeStruct_Margin) == 0x0000C8, "Member 'Fang_expedition_DungeonList_C_SetData::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, CallFunc_AddChild_ReturnValue) == 0x0000D8, "Member 'Fang_expedition_DungeonList_C_SetData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, K2Node_DynamicCast_AsScroll_Box_Slot) == 0x0000E0, "Member 'Fang_expedition_DungeonList_C_SetData::K2Node_DynamicCast_AsScroll_Box_Slot' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'Fang_expedition_DungeonList_C_SetData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, CallFunc_Array_Add_ReturnValue) == 0x0000EC, "Member 'Fang_expedition_DungeonList_C_SetData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_SetData, CallFunc_Create_ReturnValue) == 0x0000F0, "Member 'Fang_expedition_DungeonList_C_SetData::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.Clear
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DungeonList_C_Clear final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonList_C_Clear) == 0x000008, "Wrong alignment on Fang_expedition_DungeonList_C_Clear");
static_assert(sizeof(Fang_expedition_DungeonList_C_Clear) == 0x000020, "Wrong size on Fang_expedition_DungeonList_C_Clear");
static_assert(offsetof(Fang_expedition_DungeonList_C_Clear, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Fang_expedition_DungeonList_C_Clear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_Clear, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Fang_expedition_DungeonList_C_Clear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_Clear, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_DungeonList_C_Clear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_Clear, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'Fang_expedition_DungeonList_C_Clear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_Clear, CallFunc_Array_Get_Item) == 0x000010, "Member 'Fang_expedition_DungeonList_C_Clear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_Clear, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DungeonList_C_Clear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.CB_ItemSelect
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_DungeonList_C_CB_ItemSelect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5476[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_AreaListItem_C*        CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionAreaData             CallFunc_GetData_AreaData;                         // 0x0010(0x00A8)()
};
static_assert(alignof(Fang_expedition_DungeonList_C_CB_ItemSelect) == 0x000008, "Wrong alignment on Fang_expedition_DungeonList_C_CB_ItemSelect");
static_assert(sizeof(Fang_expedition_DungeonList_C_CB_ItemSelect) == 0x0000B8, "Wrong size on Fang_expedition_DungeonList_C_CB_ItemSelect");
static_assert(offsetof(Fang_expedition_DungeonList_C_CB_ItemSelect, Param_Index) == 0x000000, "Member 'Fang_expedition_DungeonList_C_CB_ItemSelect::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_CB_ItemSelect, CallFunc_Array_Get_Item) == 0x000008, "Member 'Fang_expedition_DungeonList_C_CB_ItemSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonList_C_CB_ItemSelect, CallFunc_GetData_AreaData) == 0x000010, "Member 'Fang_expedition_DungeonList_C_CB_ItemSelect::CallFunc_GetData_AreaData' has a wrong offset!");

// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ShowEmptyText
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_DungeonList_C_ShowEmptyText final
{
public:
	bool                                          InParam;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonList_C_ShowEmptyText) == 0x000001, "Wrong alignment on Fang_expedition_DungeonList_C_ShowEmptyText");
static_assert(sizeof(Fang_expedition_DungeonList_C_ShowEmptyText) == 0x000001, "Wrong size on Fang_expedition_DungeonList_C_ShowEmptyText");
static_assert(offsetof(Fang_expedition_DungeonList_C_ShowEmptyText, InParam) == 0x000000, "Member 'Fang_expedition_DungeonList_C_ShowEmptyText::InParam' has a wrong offset!");

}

