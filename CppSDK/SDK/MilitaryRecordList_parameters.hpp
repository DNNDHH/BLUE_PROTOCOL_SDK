#pragma once

 

// Package: MilitaryRecordList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MilitaryRecordList.MilitaryRecordList_C.ExecuteUbergraph_MilitaryRecordList
// 0x0050 (0x0050 - 0x0000)
struct MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C7[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMilitaryRecordData>            K2Node_CustomEvent_InMilitaryRecordData;           // 0x0018(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_InIsMilitalyRecordOpen;         // 0x0028(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMilitaryRecordListItem_C*              CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMilitaryRecordData                    CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList) == 0x000008, "Wrong alignment on MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList");
static_assert(sizeof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList) == 0x000050, "Wrong size on MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, EntryPoint) == 0x000000, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_Percent_IntInt_ReturnValue) == 0x00000C, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_Conv_IntToBool_ReturnValue) == 0x000010, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, K2Node_CustomEvent_InMilitaryRecordData) == 0x000018, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::K2Node_CustomEvent_InMilitaryRecordData' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, K2Node_CustomEvent_InIsMilitalyRecordOpen) == 0x000028, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::K2Node_CustomEvent_InIsMilitalyRecordOpen' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_Create_ReturnValue) == 0x000030, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_Array_Get_Item) == 0x000040, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'MilitaryRecordList_C_ExecuteUbergraph_MilitaryRecordList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MilitaryRecordList.MilitaryRecordList_C.SetData
// 0x0018 (0x0018 - 0x0000)
struct MilitaryRecordList_C_SetData final
{
public:
	TArray<struct FMilitaryRecordData>            InMilitaryRecordData;                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InIsMilitalyRecordOpen;                            // 0x0010(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MilitaryRecordList_C_SetData) == 0x000008, "Wrong alignment on MilitaryRecordList_C_SetData");
static_assert(sizeof(MilitaryRecordList_C_SetData) == 0x000018, "Wrong size on MilitaryRecordList_C_SetData");
static_assert(offsetof(MilitaryRecordList_C_SetData, InMilitaryRecordData) == 0x000000, "Member 'MilitaryRecordList_C_SetData::InMilitaryRecordData' has a wrong offset!");
static_assert(offsetof(MilitaryRecordList_C_SetData, InIsMilitalyRecordOpen) == 0x000010, "Member 'MilitaryRecordList_C_SetData::InIsMilitalyRecordOpen' has a wrong offset!");

}

