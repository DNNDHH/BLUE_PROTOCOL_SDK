#pragma once

 

// Package: Fang_expedition_ProbabilityListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.OnClicked__DelegateSignature
// 0x0014 (0x0014 - 0x0000)
struct Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature final
{
public:
	struct FSBMasterReward                        Param_RewardData;                                  // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature");
static_assert(sizeof(Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature) == 0x000014, "Wrong size on Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature, Param_RewardData) == 0x000000, "Member 'Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature::Param_RewardData' has a wrong offset!");

// Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.ExecuteUbergraph_Fang_expedition_ProbabilityListItem
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem) == 0x000004, "Wrong alignment on Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem");
static_assert(sizeof(Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem) == 0x000004, "Wrong size on Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem, EntryPoint) == 0x000000, "Member 'Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem::EntryPoint' has a wrong offset!");

// Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.SetData
// 0x0130 (0x0130 - 0x0000)
struct Fang_expedition_ProbabilityListItem_C_SetData final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionRandomRewardData     RandomReward;                                      // 0x0004(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         BaseLottery;                                       // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA5[0x3];                                      // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA6[0x4];                                      // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA7[0x4];                                      // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA8[0x7];                                      // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00C8(0x0018)()
	class FText                                   CallFunc_GetRewardItemNameAndType2ByMasterReward_OutName; // 0x00E0(0x0018)()
	class FText                                   CallFunc_GetRewardItemNameAndType2ByMasterReward_OutType; // 0x00F8(0x0018)()
	bool                                          CallFunc_GetRewardItemNameAndType2ByMasterReward_OutNoName; // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA9[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0118(0x0018)()
};
static_assert(alignof(Fang_expedition_ProbabilityListItem_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityListItem_C_SetData");
static_assert(sizeof(Fang_expedition_ProbabilityListItem_C_SetData) == 0x000130, "Wrong size on Fang_expedition_ProbabilityListItem_C_SetData");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, Type) == 0x000000, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::Type' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, RandomReward) == 0x000004, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::RandomReward' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, BaseLottery) == 0x000024, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::BaseLottery' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, Temp_bool_Variable) == 0x000028, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Percent_IntInt_ReturnValue) == 0x00002C, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Divide_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000048, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Right_ReturnValue) == 0x000058, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000068, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000078, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Replace_ReturnValue) == 0x000080, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_FTrunc_ReturnValue) == 0x000090, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Replace_ReturnValue_1) == 0x000098, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, K2Node_SwitchInteger_CmpSuccess) == 0x0000C0, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x0000C8, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_GetRewardItemNameAndType2ByMasterReward_OutName) == 0x0000E0, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_GetRewardItemNameAndType2ByMasterReward_OutName' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_GetRewardItemNameAndType2ByMasterReward_OutType) == 0x0000F8, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_GetRewardItemNameAndType2ByMasterReward_OutType' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, CallFunc_GetRewardItemNameAndType2ByMasterReward_OutNoName) == 0x000110, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::CallFunc_GetRewardItemNameAndType2ByMasterReward_OutNoName' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityListItem_C_SetData, K2Node_Select_Default) == 0x000118, "Member 'Fang_expedition_ProbabilityListItem_C_SetData::K2Node_Select_Default' has a wrong offset!");

}

