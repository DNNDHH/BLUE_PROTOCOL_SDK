#pragma once

 

// Package: Fang_expedition_DetailPlayData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         TimeIndex;                                         // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangValue;                                         // 0x00AC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature) == 0x0000B0, "Wrong size on Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature, AreaData) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature, TimeIndex) == 0x0000A8, "Member 'Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature::TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature, FangValue) == 0x0000AC, "Member 'Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature::FangValue' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionFinish__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature final
{
public:
	class FString                                 ExpeditionId;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature, ExpeditionId) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature::ExpeditionId' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickTicketWindowOpen__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature final
{
public:
	TArray<int32>                                 SelectedTokenIds;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature, SelectedTokenIds) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature::SelectedTokenIds' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionStart__DelegateSignature
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 TokenIds;                                          // 0x00A8(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature) == 0x0000B8, "Wrong size on Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature, AreaData) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature, TokenIds) == 0x0000A8, "Member 'Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature::TokenIds' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView_PlayData__DelegateSignature
// 0x0120 (0x0120 - 0x0000)
struct Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature) == 0x000120, "Wrong size on Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature, PlayData) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature::PlayData' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.ExecuteUbergraph_Fang_expedition_DetailPlayData
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5E47[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData) == 0x000058, "Wrong size on Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData, CallFunc_Create_ReturnValue) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetPlayData
// 0x01B8 (0x01B8 - 0x0000)
struct Fang_expedition_DetailPlayData_C_SetPlayData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CancelCount;                                       // 0x0120(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkTime;                                          // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E48[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBFang_expeditionRandomRewardListData> RandomRewards;                                     // 0x0130(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0140(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E49[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E4A[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E4B[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterReward>                CallFunc_GetExpeditionDetailFixedRewardData_RewardDatas; // 0x0168(0x0010)(ReferenceParm)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E4C[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x017C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBFang_expeditionRandomRewardData> CallFunc_GetExpeditionDetailRewardData_RewardData; // 0x0188(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E4D[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E4E[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E4F[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_SetPlayData) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_SetPlayData");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_SetPlayData) == 0x0001B8, "Wrong size on Fang_expedition_DetailPlayData_C_SetPlayData");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, PlayData) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CancelCount) == 0x000120, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CancelCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, WorkTime) == 0x000124, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::WorkTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, LoopEnd) == 0x000128, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, RandomRewards) == 0x000130, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::RandomRewards' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_int_Variable) == 0x000140, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_bool_Variable) == 0x000144, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_int_Variable_1) == 0x000148, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_int_Variable_2) == 0x00014C, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_bool_Variable_1) == 0x000150, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_int_Variable_3) == 0x000154, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_int_Variable_4) == 0x000158, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000160, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_GetExpeditionDetailFixedRewardData_RewardDatas) == 0x000168, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_GetExpeditionDetailFixedRewardData_RewardDatas' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000178, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, Temp_int_Variable_5) == 0x00017C, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000180, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_GetExpeditionDetailRewardData_RewardData) == 0x000188, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_GetExpeditionDetailRewardData_RewardData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000198, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_Array_Find_ReturnValue) == 0x00019C, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001A0, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_Array_Find_ReturnValue_1) == 0x0001A4, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, K2Node_Select_Default) == 0x0001A8, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001AC, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, K2Node_Select_Default_1) == 0x0001B0, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetPlayData, CallFunc_Add_IntInt_ReturnValue) == 0x0001B4, "Member 'Fang_expedition_DetailPlayData_C_SetPlayData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetFangSelectMode
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_DetailPlayData_C_SetFangSelectMode final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         TimeIndex;                                         // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E50[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TypeCountCheck;                                    // 0x00B0(0x0010)(Edit, BlueprintVisible)
	class FString                                 TimeStr;                                           // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TimeM;                                             // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeH;                                             // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBFang_expeditionRandomRewardListData> WorkRandomReward;                                  // 0x00D8(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E51[0x1];                                     // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionRandomRewardListData CallFunc_Array_Get_Item;                           // 0x00F8(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E52[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UsableTokenCheck_WasUseToken;             // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_SetFangSelectMode) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_SetFangSelectMode");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_SetFangSelectMode) == 0x000128, "Wrong size on Fang_expedition_DetailPlayData_C_SetFangSelectMode");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, AreaData) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, TimeIndex) == 0x0000A8, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, TypeCountCheck) == 0x0000B0, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::TypeCountCheck' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, TimeStr) == 0x0000C0, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::TimeStr' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, TimeM) == 0x0000D0, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::TimeM' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, TimeH) == 0x0000D4, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::TimeH' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, WorkRandomReward) == 0x0000D8, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::WorkRandomReward' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, Temp_bool_Variable) == 0x0000E8, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, Temp_byte_Variable) == 0x0000E9, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, Temp_byte_Variable_1) == 0x0000EA, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_Array_Length_ReturnValue) == 0x0000EC, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, Temp_int_Array_Index_Variable) == 0x0000F0, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, Temp_int_Loop_Counter_Variable) == 0x0000F4, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_Add_IntInt_ReturnValue) == 0x000114, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_Array_Add_ReturnValue) == 0x000118, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_Array_Find_ReturnValue) == 0x00011C, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000120, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, CallFunc_UsableTokenCheck_WasUseToken) == 0x000121, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::CallFunc_UsableTokenCheck_WasUseToken' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetFangSelectMode, K2Node_Select_Default) == 0x000122, "Member 'Fang_expedition_DetailPlayData_C_SetFangSelectMode::K2Node_Select_Default' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetSelectFangIds
// 0x0070 (0x0070 - 0x0000)
struct Fang_expedition_DetailPlayData_C_SetSelectFangIds final
{
public:
	TArray<class FString>                         UniqueIds;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          AnimationSkip;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E53[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TypeCountCheck;                                    // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E54[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBFang_expeditionRandomRewardListData> RandomRewards;                                     // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E55[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E56[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E57[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetExpreditonFangTypeCount_OutCount;      // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_SetSelectFangIds) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_SetSelectFangIds");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_SetSelectFangIds) == 0x000070, "Wrong size on Fang_expedition_DetailPlayData_C_SetSelectFangIds");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, UniqueIds) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::UniqueIds' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, AnimationSkip) == 0x000010, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::AnimationSkip' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, TypeCountCheck) == 0x000018, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::TypeCountCheck' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, LoopEnd) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, RandomRewards) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::RandomRewards' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_Array_LastIndex_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, Temp_int_Variable) == 0x000050, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000058, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000059, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00005A, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_Array_Add_ReturnValue) == 0x00005C, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_Array_Find_ReturnValue) == 0x000060, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000064, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000065, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_BooleanOR_ReturnValue) == 0x000066, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_GetExpreditonFangTypeCount_OutCount) == 0x000068, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_GetExpreditonFangTypeCount_OutCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetSelectFangIds, CallFunc_Min_ReturnValue) == 0x00006C, "Member 'Fang_expedition_DetailPlayData_C_SetSelectFangIds::CallFunc_Min_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateTokenIconVisibility
// 0x0060 (0x0060 - 0x0000)
struct Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility final
{
public:
	class UCommonIcon_C*                          Icon;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonIcon_C*>                  Icons;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         LoopEnd;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E58[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E59[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonIcon_C*>                  K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility) == 0x000060, "Wrong size on Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, Icon) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, Icons) == 0x000008, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::Icons' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, LoopEnd) == 0x000018, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, Temp_int_Variable) == 0x00001C, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, Temp_int_Variable_1) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_Array_Get_Item) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000038, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_Add_IntInt_ReturnValue_2) == 0x00003C, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, K2Node_MakeArray_Array) == 0x000048, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility, CallFunc_Array_LastIndex_ReturnValue) == 0x000058, "Member 'Fang_expedition_DetailPlayData_C_UpdateTokenIconVisibility::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UsableTokenCheck
// 0x0038 (0x0038 - 0x0000)
struct Fang_expedition_DetailPlayData_C_UsableTokenCheck final
{
public:
	bool                                          WasUseToken;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetValue;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E5A[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E5B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E5C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetExpeditionUsableTokenIdList_TokenIds;  // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_UsableTokenCheck) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_UsableTokenCheck");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_UsableTokenCheck) == 0x000038, "Wrong size on Fang_expedition_DetailPlayData_C_UsableTokenCheck");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, WasUseToken) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::WasUseToken' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, RetValue) == 0x000001, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::RetValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, Temp_bool_True_if_break_was_hit_Variable) == 0x000002, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_GetExpeditionUsableTokenIdList_TokenIds) == 0x000018, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_GetExpeditionUsableTokenIdList_TokenIds' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_Array_Get_Item) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_GetTokenAmount_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_Greater_IntInt_ReturnValue) == 0x000035, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UsableTokenCheck, CallFunc_BooleanAND_ReturnValue) == 0x000036, "Member 'Fang_expedition_DetailPlayData_C_UsableTokenCheck::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetUseTokenData
// 0x00A8 (0x00A8 - 0x0000)
struct Fang_expedition_DetailPlayData_C_SetUseTokenData final
{
public:
	TArray<int32>                                 TokenList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         AddCount;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonIcon_C*>                  IconList;                                          // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E5D[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x003C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0040(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E5E[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E5F[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E60[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E61[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E62[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommonIcon_C*>                  K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_SetUseTokenData) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_SetUseTokenData");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_SetUseTokenData) == 0x0000A8, "Wrong size on Fang_expedition_DetailPlayData_C_SetUseTokenData");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, TokenList) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::TokenList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, AddCount) == 0x000010, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::AddCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, LoopEnd) == 0x000014, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, IconList) == 0x000018, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::IconList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable_1) == 0x00002C, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_bool_Variable) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable_2) == 0x000034, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable_3) == 0x000038, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable_4) == 0x00003C, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable_5) == 0x000040, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable_6) == 0x000044, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Array_Find_ReturnValue) == 0x000050, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Array_Find_ReturnValue_1) == 0x000054, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000058, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000059, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, K2Node_Select_Default) == 0x00005C, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_int_Variable_7) == 0x000064, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Array_Get_Item) == 0x000068, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000070, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Add_IntInt_ReturnValue_2) == 0x000074, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, Temp_bool_Variable_1) == 0x000078, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, K2Node_Select_Default_1) == 0x000088, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Add_IntInt_ReturnValue_3) == 0x00008C, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, CallFunc_Array_LastIndex_ReturnValue) == 0x000090, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetUseTokenData, K2Node_MakeArray_Array) == 0x000098, "Member 'Fang_expedition_DetailPlayData_C_SetUseTokenData::K2Node_MakeArray_Array' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTime
// 0x0138 (0x0138 - 0x0000)
struct Fang_expedition_DetailPlayData_C_SetShortTime final
{
public:
	int32                                         TimeIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkTime;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E63[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E64[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_3;                    // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0108(0x0018)()
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E65[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_SetShortTime) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_SetShortTime");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_SetShortTime) == 0x000138, "Wrong size on Fang_expedition_DetailPlayData_C_SetShortTime");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, TimeIndex) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, WorkTime) == 0x000004, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::WorkTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Percent_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000020, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000034, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000038, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000048, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000050, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Replace_ReturnValue) == 0x000070, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000098, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000A0, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Replace_ReturnValue_1) == 0x0000B0, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C0, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000D8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Replace_ReturnValue_2) == 0x0000E8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Replace_ReturnValue_3) == 0x0000F8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Replace_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000108, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000120, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000124, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000128, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00012C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000130, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTime, CallFunc_FFloor_ReturnValue) == 0x000134, "Member 'Fang_expedition_DetailPlayData_C_SetShortTime::CallFunc_FFloor_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetBaseTime
// 0x0128 (0x0128 - 0x0000)
struct Fang_expedition_DetailPlayData_C_SetBaseTime final
{
public:
	int32                                         TimeData;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkTime;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E66[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E67[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E68[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E69[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E6A[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E8(0x0018)()
	class FString                                 CallFunc_Replace_ReturnValue_3;                    // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0110(0x0018)()
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_SetBaseTime) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_SetBaseTime");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_SetBaseTime) == 0x000128, "Wrong size on Fang_expedition_DetailPlayData_C_SetBaseTime");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, TimeData) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::TimeData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, WorkTime) == 0x000004, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::WorkTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Percent_IntInt_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000038, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000040, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000050, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000060, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_GetTextFromAsset_ReturnValue) == 0x000068, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000078, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Replace_ReturnValue) == 0x000080, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000A8, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000B8, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Replace_ReturnValue_1) == 0x0000C8, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Replace_ReturnValue_2) == 0x0000D8, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E8, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Replace_ReturnValue_3) == 0x000100, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Replace_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetBaseTime, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000110, "Member 'Fang_expedition_DetailPlayData_C_SetBaseTime::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateRandomFixedReward
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward final
{
public:
	TArray<struct FSBMasterReward>                RewardData;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward) == 0x000010, "Wrong size on Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward, RewardData) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward::RewardData' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTimeEx
// 0x0160 (0x0160 - 0x0000)
struct Fang_expedition_DetailPlayData_C_SetShortTimeEx final
{
public:
	int32                                         TokenTime;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EffectTime;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BaseTime;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayTime;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEtcTime_EtcTime;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEtcTime_EtcTime_1;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E6B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetEtcTime_EtcTime_2;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEtcTime_EtcTime_3;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E6C[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E6D[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	class FString                                 CallFunc_Replace_ReturnValue_3;                    // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0130(0x0018)()
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E6E[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E6F[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_SetShortTimeEx) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_SetShortTimeEx");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_SetShortTimeEx) == 0x000160, "Wrong size on Fang_expedition_DetailPlayData_C_SetShortTimeEx");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, TokenTime) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::TokenTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, EffectTime) == 0x000004, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::EffectTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, BaseTime) == 0x000008, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::BaseTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, DisplayTime) == 0x00000C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::DisplayTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, Temp_int_Variable) == 0x000010, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GetEtcTime_EtcTime) == 0x000014, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GetEtcTime_EtcTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GetEtcTime_EtcTime_1) == 0x00001C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GetEtcTime_EtcTime_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GetEtcTime_EtcTime_2) == 0x000024, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GetEtcTime_EtcTime_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x00002C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GetEtcTime_EtcTime_3) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GetEtcTime_EtcTime_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, Temp_int_Variable_1) == 0x000034, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Replace_ReturnValue) == 0x000058, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000068, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Percent_IntInt_ReturnValue) == 0x000088, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Divide_IntInt_ReturnValue) == 0x00008C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000090, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0000A0, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Divide_IntInt_ReturnValue_1) == 0x0000B0, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Conv_IntToString_ReturnValue_3) == 0x0000B8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000C8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000D8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Replace_ReturnValue_1) == 0x0000E8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Replace_ReturnValue_2) == 0x0000F8, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Replace_ReturnValue_3) == 0x000120, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Replace_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000130, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000148, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00014C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Array_Find_ReturnValue) == 0x000150, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000154, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_Array_Find_ReturnValue_1) == 0x000158, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_SetShortTimeEx, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x00015C, "Member 'Fang_expedition_DetailPlayData_C_SetShortTimeEx::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.GetEtcTime
// 0x0048 (0x0048 - 0x0000)
struct Fang_expedition_DetailPlayData_C_GetEtcTime final
{
public:
	int32                                         SelectType;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EtcTime;                                           // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectValue;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TimeValue;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E70[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E71[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFangTokenMasterDataBP_bExists;        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E72[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFangTokenMasterData                 CallFunc_FindFangTokenMasterDataBP_ReturnValue;    // 0x0034(0x000C)(NoDestructor)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailPlayData_C_GetEtcTime) == 0x000008, "Wrong alignment on Fang_expedition_DetailPlayData_C_GetEtcTime");
static_assert(sizeof(Fang_expedition_DetailPlayData_C_GetEtcTime) == 0x000048, "Wrong size on Fang_expedition_DetailPlayData_C_GetEtcTime");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, SelectType) == 0x000000, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::SelectType' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, EtcTime) == 0x000004, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::EtcTime' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, EffectValue) == 0x000008, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::EffectValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, TimeValue) == 0x00000C, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::TimeValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000014, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_Divide_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_FindFangTokenMasterDataBP_bExists) == 0x000030, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_FindFangTokenMasterDataBP_bExists' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_FindFangTokenMasterDataBP_ReturnValue) == 0x000034, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_FindFangTokenMasterDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_Multiply_IntInt_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailPlayData_C_GetEtcTime, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000044, "Member 'Fang_expedition_DetailPlayData_C_GetEtcTime::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");

}

