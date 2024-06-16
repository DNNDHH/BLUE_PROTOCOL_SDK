#pragma once

 

// Package: UMG_MatchingMenu_EntryCondition

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_EntryCondition.UMG_MatchingMenu_EntryCondition_C.ExecuteUbergraph_UMG_MatchingMenu_EntryCondition
// 0x00B8 (0x00B8 - 0x0000)
struct UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86B6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindMasterDungeonEntryCondition_bExists; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86B7[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDungeonEntryConditionMasterData     CallFunc_BP_FindMasterDungeonEntryCondition_ReturnValue; // 0x0018(0x0030)(ConstParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86B8[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86B9[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDungeonEntryConditionEquipCondition CallFunc_Array_Get_Item;                           // 0x0068(0x0014)(NoDestructor)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItemByItemIndex_ReturnValue;   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86BA[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86BB[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition");
static_assert(sizeof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition) == 0x0000B8, "Wrong size on UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_BP_FindMasterDungeonEntryCondition_bExists) == 0x000011, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_BP_FindMasterDungeonEntryCondition_bExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_BP_FindMasterDungeonEntryCondition_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_BP_FindMasterDungeonEntryCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_Create_ReturnValue) == 0x000050, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_MakeLiteralInt_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, Temp_int_Array_Index_Variable) == 0x000060, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_Array_Get_Item) == 0x000068, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_Percent_IntInt_ReturnValue) == 0x00007C, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_IsEquipmentItemByItemIndex_ReturnValue) == 0x000080, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_IsEquipmentItemByItemIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, K2Node_SwitchEnum_CmpSuccess) == 0x000081, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_Divide_IntInt_ReturnValue) == 0x000084, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_AddChildToGrid_ReturnValue) == 0x000088, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, K2Node_MakeStruct_Margin) == 0x000094, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_PlayAnimation_ReturnValue) == 0x0000A8, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B0, "Member 'UMG_MatchingMenu_EntryCondition_C_ExecuteUbergraph_UMG_MatchingMenu_EntryCondition::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

