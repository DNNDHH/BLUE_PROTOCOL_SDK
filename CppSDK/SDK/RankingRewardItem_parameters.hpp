#pragma once

 

// Package: RankingRewardItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function RankingRewardItem.RankingRewardItem_C.SetData
// 0x0180 (0x0180 - 0x0000)
struct RankingRewardItem_C_SetData final
{
public:
	struct FRankingRewardData                     RankingRewardData;                                 // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          TotallingEnd;                                      // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Trophy;                                            // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_904E[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        RewardMaster;                                      // 0x0034(0x0014)(Edit, BlueprintVisible, NoDestructor)
	TArray<class UQuestRewardIcon_C*>             IconList;                                          // 0x0048(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FRankingRewardData                     Master;                                            // 0x0058(0x0030)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_904F[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9050[0x2];                                     // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9051[0x1];                                     // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9052[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetAmount2VisibilityByAmount_bVisible;    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9053[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9054[0x2];                                     // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UQuestRewardIcon_C*>             K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FRankingTablereRewardData              CallFunc_Array_Get_Item_2;                         // 0x0108(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9055[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x011C(0x0014)(NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0130(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0148(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0160(0x0018)()
	int32                                         K2Node_Select_Default_2;                           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingRewardItem_C_SetData) == 0x000008, "Wrong alignment on RankingRewardItem_C_SetData");
static_assert(sizeof(RankingRewardItem_C_SetData) == 0x000180, "Wrong size on RankingRewardItem_C_SetData");
static_assert(offsetof(RankingRewardItem_C_SetData, RankingRewardData) == 0x000000, "Member 'RankingRewardItem_C_SetData::RankingRewardData' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, TotallingEnd) == 0x000030, "Member 'RankingRewardItem_C_SetData::TotallingEnd' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Trophy) == 0x000031, "Member 'RankingRewardItem_C_SetData::Trophy' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, RewardMaster) == 0x000034, "Member 'RankingRewardItem_C_SetData::RewardMaster' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, IconList) == 0x000048, "Member 'RankingRewardItem_C_SetData::IconList' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Master) == 0x000058, "Member 'RankingRewardItem_C_SetData::Master' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_bool_Variable) == 0x000088, "Member 'RankingRewardItem_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Variable) == 0x00008C, "Member 'RankingRewardItem_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Variable_1) == 0x000090, "Member 'RankingRewardItem_C_SetData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Variable_2) == 0x000094, "Member 'RankingRewardItem_C_SetData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Variable_3) == 0x000098, "Member 'RankingRewardItem_C_SetData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Variable_4) == 0x00009C, "Member 'RankingRewardItem_C_SetData::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'RankingRewardItem_C_SetData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'RankingRewardItem_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000A5, "Member 'RankingRewardItem_C_SetData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Variable_5) == 0x0000A8, "Member 'RankingRewardItem_C_SetData::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Loop_Counter_Variable) == 0x0000AC, "Member 'RankingRewardItem_C_SetData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Loop_Counter_Variable_1) == 0x0000B0, "Member 'RankingRewardItem_C_SetData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'RankingRewardItem_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'RankingRewardItem_C_SetData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_int_Array_Index_Variable_1) == 0x0000BC, "Member 'RankingRewardItem_C_SetData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, Temp_bool_Variable_1) == 0x0000C0, "Member 'RankingRewardItem_C_SetData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000C1, "Member 'RankingRewardItem_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000C2, "Member 'RankingRewardItem_C_SetData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, K2Node_Select_Default) == 0x0000C4, "Member 'RankingRewardItem_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, K2Node_Select_Default_1) == 0x0000C8, "Member 'RankingRewardItem_C_SetData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_GetMasterDataManager_IsValid) == 0x0000C9, "Member 'RankingRewardItem_C_SetData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D0, "Member 'RankingRewardItem_C_SetData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'RankingRewardItem_C_SetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'RankingRewardItem_C_SetData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_SetAmount2VisibilityByAmount_bVisible) == 0x0000E8, "Member 'RankingRewardItem_C_SetData::CallFunc_SetAmount2VisibilityByAmount_bVisible' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Array_Length_ReturnValue) == 0x0000EC, "Member 'RankingRewardItem_C_SetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Array_Length_ReturnValue_1) == 0x0000F0, "Member 'RankingRewardItem_C_SetData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'RankingRewardItem_C_SetData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F5, "Member 'RankingRewardItem_C_SetData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, K2Node_MakeArray_Array) == 0x0000F8, "Member 'RankingRewardItem_C_SetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Array_Get_Item_2) == 0x000108, "Member 'RankingRewardItem_C_SetData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Array_Length_ReturnValue_2) == 0x000114, "Member 'RankingRewardItem_C_SetData::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Less_IntInt_ReturnValue_2) == 0x000118, "Member 'RankingRewardItem_C_SetData::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_FindMasterReward_IsExists) == 0x000119, "Member 'RankingRewardItem_C_SetData::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_FindMasterReward_ReturnValue) == 0x00011C, "Member 'RankingRewardItem_C_SetData::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x000130, "Member 'RankingRewardItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000148, "Member 'RankingRewardItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000160, "Member 'RankingRewardItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingRewardItem_C_SetData, K2Node_Select_Default_2) == 0x000178, "Member 'RankingRewardItem_C_SetData::K2Node_Select_Default_2' has a wrong offset!");

}

