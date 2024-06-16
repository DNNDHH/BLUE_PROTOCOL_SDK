#pragma once

 

// Package: UMG_RewardBoostTooltip

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.ExecuteUbergraph_UMG_RewardBoostTooltip
// 0x0004 (0x0004 - 0x0000)
struct UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip) == 0x000004, "Wrong alignment on UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip");
static_assert(sizeof(UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip) == 0x000004, "Wrong size on UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip");
static_assert(offsetof(UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip, EntryPoint) == 0x000000, "Member 'UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip::EntryPoint' has a wrong offset!");

// Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.SetDataList
// 0x0080 (0x0080 - 0x0000)
struct UMG_RewardBoostTooltip_C_SetDataList final
{
public:
	TArray<struct FSBRewardBoostTooltipData>      DataList;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D86[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRewardBoostTooltipData              CallFunc_Array_Get_Item;                           // 0x0020(0x0030)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D87[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D88[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltopElement_C*       CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_RewardBoostTooltip_C_SetDataList) == 0x000008, "Wrong alignment on UMG_RewardBoostTooltip_C_SetDataList");
static_assert(sizeof(UMG_RewardBoostTooltip_C_SetDataList) == 0x000080, "Wrong size on UMG_RewardBoostTooltip_C_SetDataList");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, DataList) == 0x000000, "Member 'UMG_RewardBoostTooltip_C_SetDataList::DataList' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'UMG_RewardBoostTooltip_C_SetDataList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, Temp_int_Array_Index_Variable) == 0x000014, "Member 'UMG_RewardBoostTooltip_C_SetDataList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'UMG_RewardBoostTooltip_C_SetDataList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, CallFunc_Array_Get_Item) == 0x000020, "Member 'UMG_RewardBoostTooltip_C_SetDataList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'UMG_RewardBoostTooltip_C_SetDataList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'UMG_RewardBoostTooltip_C_SetDataList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'UMG_RewardBoostTooltip_C_SetDataList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, CallFunc_Create_ReturnValue) == 0x000060, "Member 'UMG_RewardBoostTooltip_C_SetDataList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000068, "Member 'UMG_RewardBoostTooltip_C_SetDataList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_RewardBoostTooltip_C_SetDataList, K2Node_MakeStruct_Margin) == 0x000070, "Member 'UMG_RewardBoostTooltip_C_SetDataList::K2Node_MakeStruct_Margin' has a wrong offset!");

}

