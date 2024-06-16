#pragma once

 

// Package: Fang_expedition_AreaListSelectWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnListItemClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.ExecuteUbergraph_Fang_expedition_AreaListSelectWindow
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow) == 0x000004, "Wrong alignment on Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow");
static_assert(sizeof(Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow) == 0x000004, "Wrong size on Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow, EntryPoint) == 0x000000, "Member 'Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow::EntryPoint' has a wrong offset!");

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.Clear
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_AreaListSelectWindow_C_Clear final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6096[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_AreaListItem_C*        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListSelectWindow_C_Clear) == 0x000008, "Wrong alignment on Fang_expedition_AreaListSelectWindow_C_Clear");
static_assert(sizeof(Fang_expedition_AreaListSelectWindow_C_Clear) == 0x000020, "Wrong size on Fang_expedition_AreaListSelectWindow_C_Clear");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_Clear, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Fang_expedition_AreaListSelectWindow_C_Clear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_Clear, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Fang_expedition_AreaListSelectWindow_C_Clear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_Clear, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_AreaListSelectWindow_C_Clear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_Clear, CallFunc_Array_Get_Item) == 0x000010, "Member 'Fang_expedition_AreaListSelectWindow_C_Clear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_Clear, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Fang_expedition_AreaListSelectWindow_C_Clear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_Clear, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_AreaListSelectWindow_C_Clear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.AddData
// 0x00E8 (0x00E8 - 0x0000)
struct Fang_expedition_AreaListSelectWindow_C_AddData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFang_expedition_AreaListItem_C*        Widget;                                            // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkIndex;                                         // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6097[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6098[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_AreaListItem_C*        CallFunc_Create_ReturnValue;                       // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListSelectWindow_C_AddData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListSelectWindow_C_AddData");
static_assert(sizeof(Fang_expedition_AreaListSelectWindow_C_AddData) == 0x0000E8, "Wrong size on Fang_expedition_AreaListSelectWindow_C_AddData");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, AreaData) == 0x000000, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, Widget) == 0x0000A8, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::Widget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, WorkIndex) == 0x0000B0, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::WorkIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, CallFunc_AddChild_ReturnValue) == 0x0000C8, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, CallFunc_Array_Add_ReturnValue) == 0x0000D0, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, CallFunc_Create_ReturnValue) == 0x0000D8, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_AddData, CallFunc_Array_Add_ReturnValue_1) == 0x0000E0, "Member 'Fang_expedition_AreaListSelectWindow_C_AddData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.CB_OnClick
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListSelectWindow_C_CB_OnClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListSelectWindow_C_CB_OnClick) == 0x000004, "Wrong alignment on Fang_expedition_AreaListSelectWindow_C_CB_OnClick");
static_assert(sizeof(Fang_expedition_AreaListSelectWindow_C_CB_OnClick) == 0x000004, "Wrong size on Fang_expedition_AreaListSelectWindow_C_CB_OnClick");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_CB_OnClick, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListSelectWindow_C_CB_OnClick::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.GetData
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_AreaListSelectWindow_C_GetData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6099[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0008(0x00A8)(Parm, OutParm)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListSelectWindow_C_GetData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListSelectWindow_C_GetData");
static_assert(sizeof(Fang_expedition_AreaListSelectWindow_C_GetData) == 0x0000B8, "Wrong size on Fang_expedition_AreaListSelectWindow_C_GetData");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_GetData, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListSelectWindow_C_GetData::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_GetData, AreaData) == 0x000008, "Member 'Fang_expedition_AreaListSelectWindow_C_GetData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_GetData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000B0, "Member 'Fang_expedition_AreaListSelectWindow_C_GetData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.SetStatus
// 0x0003 (0x0003 - 0x0000)
struct Fang_expedition_AreaListSelectWindow_C_SetStatus final
{
public:
	ESBFang_expeditionStatus                      Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Time;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          New;                                               // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListSelectWindow_C_SetStatus) == 0x000001, "Wrong alignment on Fang_expedition_AreaListSelectWindow_C_SetStatus");
static_assert(sizeof(Fang_expedition_AreaListSelectWindow_C_SetStatus) == 0x000003, "Wrong size on Fang_expedition_AreaListSelectWindow_C_SetStatus");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_SetStatus, Status) == 0x000000, "Member 'Fang_expedition_AreaListSelectWindow_C_SetStatus::Status' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_SetStatus, Time) == 0x000001, "Member 'Fang_expedition_AreaListSelectWindow_C_SetStatus::Time' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListSelectWindow_C_SetStatus, New) == 0x000002, "Member 'Fang_expedition_AreaListSelectWindow_C_SetStatus::New' has a wrong offset!");

}

