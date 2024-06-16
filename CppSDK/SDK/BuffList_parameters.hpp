#pragma once

 

// Package: BuffList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BuffList.BuffList_C.ExecuteUbergraph_BuffList
// 0x0038 (0x0038 - 0x0000)
struct BuffList_C_ExecuteUbergraph_BuffList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A8D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A8E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_ReturnValue_1;   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuffList_C_ExecuteUbergraph_BuffList) == 0x000008, "Wrong alignment on BuffList_C_ExecuteUbergraph_BuffList");
static_assert(sizeof(BuffList_C_ExecuteUbergraph_BuffList) == 0x000038, "Wrong size on BuffList_C_ExecuteUbergraph_BuffList");
static_assert(offsetof(BuffList_C_ExecuteUbergraph_BuffList, EntryPoint) == 0x000000, "Member 'BuffList_C_ExecuteUbergraph_BuffList::EntryPoint' has a wrong offset!");
static_assert(offsetof(BuffList_C_ExecuteUbergraph_BuffList, CallFunc_GetBattleStatusComponent_ReturnValue) == 0x000008, "Member 'BuffList_C_ExecuteUbergraph_BuffList::CallFunc_GetBattleStatusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffList_C_ExecuteUbergraph_BuffList, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BuffList_C_ExecuteUbergraph_BuffList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffList_C_ExecuteUbergraph_BuffList, CallFunc_GetBattleStatusComponent_ReturnValue_1) == 0x000018, "Member 'BuffList_C_ExecuteUbergraph_BuffList::CallFunc_GetBattleStatusComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BuffList_C_ExecuteUbergraph_BuffList, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BuffList_C_ExecuteUbergraph_BuffList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BuffList_C_ExecuteUbergraph_BuffList, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BuffList_C_ExecuteUbergraph_BuffList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BuffList.BuffList_C.UpdateList
// 0x0050 (0x0050 - 0x0000)
struct BuffList_C_UpdateList final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A8F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A90[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A91[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BuffList_C_UpdateList) == 0x000008, "Wrong alignment on BuffList_C_UpdateList");
static_assert(sizeof(BuffList_C_UpdateList) == 0x000050, "Wrong size on BuffList_C_UpdateList");
static_assert(offsetof(BuffList_C_UpdateList, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BuffList_C_UpdateList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BuffList_C_UpdateList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BuffList_C_UpdateList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, K2Node_MakeStruct_Margin) == 0x00000C, "Member 'BuffList_C_UpdateList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'BuffList_C_UpdateList::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BuffList_C_UpdateList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, CallFunc_Array_Get_Item) == 0x000038, "Member 'BuffList_C_UpdateList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BuffList_C_UpdateList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffList_C_UpdateList, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000048, "Member 'BuffList_C_UpdateList::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");

// Function BuffList.BuffList_C.OnCreateIcon
// 0x0010 (0x0010 - 0x0000)
struct BuffList_C_OnCreateIcon final
{
public:
	class USBBuffIcon*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBuffIcon_C*                            CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BuffList_C_OnCreateIcon) == 0x000008, "Wrong alignment on BuffList_C_OnCreateIcon");
static_assert(sizeof(BuffList_C_OnCreateIcon) == 0x000010, "Wrong size on BuffList_C_OnCreateIcon");
static_assert(offsetof(BuffList_C_OnCreateIcon, ReturnValue) == 0x000000, "Member 'BuffList_C_OnCreateIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffList_C_OnCreateIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BuffList_C_OnCreateIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BuffList.BuffList_C.GetList
// 0x0008 (0x0008 - 0x0000)
struct BuffList_C_GetList final
{
public:
	class UPanelWidget*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BuffList_C_GetList) == 0x000008, "Wrong alignment on BuffList_C_GetList");
static_assert(sizeof(BuffList_C_GetList) == 0x000008, "Wrong size on BuffList_C_GetList");
static_assert(offsetof(BuffList_C_GetList, ReturnValue) == 0x000000, "Member 'BuffList_C_GetList::ReturnValue' has a wrong offset!");

}

