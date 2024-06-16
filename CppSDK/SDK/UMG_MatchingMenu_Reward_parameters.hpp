#pragma once

 

// Package: UMG_MatchingMenu_Reward

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SBMasterRewardWithAmountRange_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ExecuteUbergraph_UMG_MatchingMenu_Reward
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8655[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_CustomEvent_Sender;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward) == 0x000010, "Wrong size on UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward, K2Node_CustomEvent_Sender) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward::K2Node_CustomEvent_Sender' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIconEvent
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_Reward_C_OnClickIconEvent final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_OnClickIconEvent) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_OnClickIconEvent");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_OnClickIconEvent) == 0x000008, "Wrong size on UMG_MatchingMenu_Reward_C_OnClickIconEvent");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_OnClickIconEvent, Sender) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_OnClickIconEvent::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Setup
// 0x0020 (0x0020 - 0x0000)
struct UMG_MatchingMenu_Reward_C_Setup final
{
public:
	class FString                                 Param_GameMode;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Param_MapId;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_Setup) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_Setup");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_Setup) == 0x000020, "Wrong size on UMG_MatchingMenu_Reward_C_Setup");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_Setup, Param_GameMode) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_Setup::Param_GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_Setup, Param_MapId) == 0x000010, "Member 'UMG_MatchingMenu_Reward_C_Setup::Param_MapId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_Setup, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Reward_C_Setup::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_Setup, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'UMG_MatchingMenu_Reward_C_Setup::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward
// 0x0150 (0x0150 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetReward final
{
public:
	class FName                                   RewardInfo;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FloorNum;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FloorMax;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0010(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8656[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterRewardWithAmountRange> RewardList;                                        // 0x0040(0x0010)(Edit, BlueprintVisible)
	struct FSBMasterRewardWithAmountRange         MasterRewardWithRange;                             // 0x0050(0x002C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8657[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterDungeonReward>         DungeonRewardArray;                                // 0x0080(0x0010)(Edit, BlueprintVisible)
	class UQuestRewardIcon_C*                     CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8658[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterRewardWithAmountRange> CallFunc_GetRewardList_OutRewardList;              // 0x00A8(0x0010)(ReferenceParm)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetRewardAmount_AmountFixed;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardAmount_AmountLottery;            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRewardAmount_AmountChanged;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8659[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_865A[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UQuestRewardIcon_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_865B[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_865C[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterRewardWithAmountRange         CallFunc_Array_Get_Item;                           // 0x0118(0x002C)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetReward) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetReward");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetReward) == 0x000150, "Wrong size on UMG_MatchingMenu_Reward_C_SetReward");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, RewardInfo) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetReward::RewardInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, FloorNum) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_SetReward::FloorNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, FloorMax) == 0x00000C, "Member 'UMG_MatchingMenu_Reward_C_SetReward::FloorMax' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, RewardBoostData) == 0x000010, "Member 'UMG_MatchingMenu_Reward_C_SetReward::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, RewardBoostIsValid) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_SetReward::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, RewardList) == 0x000040, "Member 'UMG_MatchingMenu_Reward_C_SetReward::RewardList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, MasterRewardWithRange) == 0x000050, "Member 'UMG_MatchingMenu_Reward_C_SetReward::MasterRewardWithRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, DungeonRewardArray) == 0x000080, "Member 'UMG_MatchingMenu_Reward_C_SetReward::DungeonRewardArray' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Create_ReturnValue) == 0x000090, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, Temp_int_Array_Index_Variable) == 0x000098, "Member 'UMG_MatchingMenu_Reward_C_SetReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, Temp_int_Loop_Counter_Variable) == 0x00009C, "Member 'UMG_MatchingMenu_Reward_C_SetReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetRewardList_OutRewardList) == 0x0000A8, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetRewardList_OutRewardList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, K2Node_MakeStruct_Margin) == 0x0000B8, "Member 'UMG_MatchingMenu_Reward_C_SetReward::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetRewardAmount_AmountFixed) == 0x0000C8, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetRewardAmount_AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetRewardAmount_AmountLottery) == 0x0000CC, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetRewardAmount_AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetRewardAmount_AmountChanged) == 0x0000D0, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetRewardAmount_AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D4, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetChildrenCount_ReturnValue) == 0x0000D8, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Divide_IntInt_ReturnValue) == 0x0000DC, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Percent_IntInt_ReturnValue) == 0x0000E0, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0000E4, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E9, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, K2Node_CreateDelegate_OutputDelegate) == 0x0000EC, "Member 'UMG_MatchingMenu_Reward_C_SetReward::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000100, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetMasterDataManager_IsValid) == 0x000108, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_GetMasterDataManager_ReturnValue) == 0x000110, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Array_Get_Item) == 0x000118, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Array_Length_ReturnValue) == 0x000144, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_Less_IntInt_ReturnValue) == 0x000148, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000149, "Member 'UMG_MatchingMenu_Reward_C_SetReward::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward2
// 0x0150 (0x0150 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetReward2 final
{
public:
	class FName                                   RewardInfo;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FloorNum;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FloorMax;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0010(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_865D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterRewardWithAmountRange> RewardList;                                        // 0x0040(0x0010)(Edit, BlueprintVisible)
	struct FSBMasterRewardWithAmountRange         MasterRewardWithRange;                             // 0x0050(0x002C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_865E[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterDungeonReward>         DungeonRewardArray;                                // 0x0080(0x0010)(Edit, BlueprintVisible)
	class UQuestRewardIcon_C*                     CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_865F[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterRewardWithAmountRange> CallFunc_GetRewardList_OutRewardList;              // 0x00A8(0x0010)(ReferenceParm)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetRewardAmount_AmountFixed;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardAmount_AmountLottery;            // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRewardAmount_AmountChanged;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8660[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8661[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UQuestRewardIcon_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8662[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8663[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterRewardWithAmountRange         CallFunc_Array_Get_Item;                           // 0x0118(0x002C)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetReward2) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetReward2");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetReward2) == 0x000150, "Wrong size on UMG_MatchingMenu_Reward_C_SetReward2");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, RewardInfo) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::RewardInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, FloorNum) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::FloorNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, FloorMax) == 0x00000C, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::FloorMax' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, RewardBoostData) == 0x000010, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, RewardBoostIsValid) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, RewardList) == 0x000040, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::RewardList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, MasterRewardWithRange) == 0x000050, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::MasterRewardWithRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, DungeonRewardArray) == 0x000080, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::DungeonRewardArray' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Create_ReturnValue) == 0x000090, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, Temp_int_Array_Index_Variable) == 0x000098, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, Temp_int_Loop_Counter_Variable) == 0x00009C, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetRewardList_OutRewardList) == 0x0000A8, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetRewardList_OutRewardList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, K2Node_MakeStruct_Margin) == 0x0000B8, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetRewardAmount_AmountFixed) == 0x0000C8, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetRewardAmount_AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetRewardAmount_AmountLottery) == 0x0000CC, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetRewardAmount_AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetRewardAmount_AmountChanged) == 0x0000D0, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetRewardAmount_AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D4, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetChildrenCount_ReturnValue) == 0x0000D8, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Divide_IntInt_ReturnValue) == 0x0000DC, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Percent_IntInt_ReturnValue) == 0x0000E0, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0000E4, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E9, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, K2Node_CreateDelegate_OutputDelegate) == 0x0000EC, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000100, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetMasterDataManager_IsValid) == 0x000108, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_GetMasterDataManager_ReturnValue) == 0x000110, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Array_Get_Item) == 0x000118, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Array_Length_ReturnValue) == 0x000144, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_Less_IntInt_ReturnValue) == 0x000148, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetReward2, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000149, "Member 'UMG_MatchingMenu_Reward_C_SetReward2::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardRanked
// 0x0064 (0x0064 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetRewardRanked final
{
public:
	ESBRewardSetType                              Param_RewardSetType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8664[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0004(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x002C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8665[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           MasterDungeonRankedReward;                         // 0x0030(0x0018)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_ShouldRankedRewardBeAdded_ShouldBeAdded;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataDungeonRankedReward_bExist;  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8666[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward; // 0x004C(0x0018)(NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetRewardRanked) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetRewardRanked");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetRewardRanked) == 0x000064, "Wrong size on UMG_MatchingMenu_Reward_C_SetRewardRanked");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardRanked, Param_RewardSetType) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetRewardRanked::Param_RewardSetType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardRanked, RewardBoostData) == 0x000004, "Member 'UMG_MatchingMenu_Reward_C_SetRewardRanked::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardRanked, RewardBoostIsValid) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_SetRewardRanked::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardRanked, MasterDungeonRankedReward) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_SetRewardRanked::MasterDungeonRankedReward' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardRanked, CallFunc_ShouldRankedRewardBeAdded_ShouldBeAdded) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_SetRewardRanked::CallFunc_ShouldRankedRewardBeAdded_ShouldBeAdded' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardRanked, CallFunc_GetMasterDataDungeonRankedReward_bExist) == 0x000049, "Member 'UMG_MatchingMenu_Reward_C_SetRewardRanked::CallFunc_GetMasterDataDungeonRankedReward_bExist' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardRanked, CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward) == 0x00004C, "Member 'UMG_MatchingMenu_Reward_C_SetRewardRanked::CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardTower
// 0x0268 (0x0268 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetRewardTower final
{
public:
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8667[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8668[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8669[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_866A[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_866B[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_866C[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0068(0x01E0)()
	bool                                          CallFunc_FindMasterDungeonRankedReward_IsExists;   // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_866D[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           CallFunc_FindMasterDungeonRankedReward_ReturnValue; // 0x024C(0x0018)(NoDestructor)
	bool                                          CallFunc_ShouldTheFirstRewardBeRemoved_Individually_ShouldBeRemoved; // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetRewardTower) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetRewardTower");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetRewardTower) == 0x000268, "Wrong size on UMG_MatchingMenu_Reward_C_SetRewardTower");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, RewardBoostData) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, RewardBoostIsValid) == 0x000028, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, Temp_int_Variable) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, Temp_int_Variable_1) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_Conv_IntToByte_ReturnValue) == 0x000034, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_GetValidValue_ReturnValue) == 0x00003C, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00003D, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00003E, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00003F, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000040, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000044, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x000049, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x00004A, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, K2Node_SwitchEnum_CmpSuccess) == 0x00004B, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_BooleanAND_ReturnValue) == 0x00004C, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_BooleanAND_ReturnValue_1) == 0x00004D, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_BooleanAND_ReturnValue_2) == 0x00004E, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_MakeLiteralInt_ReturnValue) == 0x000050, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_BooleanAND_ReturnValue_3) == 0x000054, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_Less_IntInt_ReturnValue) == 0x000055, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_GetMasterDataManager_IsValid) == 0x000056, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_GetMapInfo_IsExists) == 0x000060, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_GetMapInfo_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_FindMasterDungeonRankedReward_IsExists) == 0x000248, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_FindMasterDungeonRankedReward_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_FindMasterDungeonRankedReward_ReturnValue) == 0x00024C, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_FindMasterDungeonRankedReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetRewardTower, CallFunc_ShouldTheFirstRewardBeRemoved_Individually_ShouldBeRemoved) == 0x000264, "Member 'UMG_MatchingMenu_Reward_C_SetRewardTower::CallFunc_ShouldTheFirstRewardBeRemoved_Individually_ShouldBeRemoved' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetCaption
// 0x0088 (0x0088 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetCaption final
{
public:
	ESBRewardSetType                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_866E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDungeonEvaluation                          Temp_byte_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_866F[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_6;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_7;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_8;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8670[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetCaption) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetCaption");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetCaption) == 0x000088, "Wrong size on UMG_MatchingMenu_Reward_C_SetCaption");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_byte_Variable) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable) == 0x000004, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable_1) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable_2) == 0x00000C, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable_3) == 0x000010, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable_4) == 0x000014, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable_5) == 0x000018, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable_6) == 0x00001C, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_int_Variable_7) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_byte_Variable_1) == 0x000024, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable) == 0x000028, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_1) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_2) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_3) == 0x000040, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_4) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_5) == 0x000050, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_6) == 0x000058, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_7) == 0x000060, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, Temp_object_Variable_8) == 0x000068, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, K2Node_Select_Default) == 0x000074, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, K2Node_Select_Default_1) == 0x000078, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, K2Node_SwitchEnum_CmpSuccess) == 0x000080, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetCaption, K2Node_SwitchString_CmpSuccess) == 0x000081, "Member 'UMG_MatchingMenu_Reward_C_SetCaption::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineTime
// 0x0038 (0x0038 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetClearLineTime final
{
public:
	bool                                          CallFunc_GetMasterDataDungeonRankedReward_bExist;  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8671[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward; // 0x0004(0x0018)(NoDestructor)
	uint8                                         Pad_8672[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_ConvertMaximumValueToTime_Text;           // 0x0020(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetClearLineTime) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetClearLineTime");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetClearLineTime) == 0x000038, "Wrong size on UMG_MatchingMenu_Reward_C_SetClearLineTime");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineTime, CallFunc_GetMasterDataDungeonRankedReward_bExist) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineTime::CallFunc_GetMasterDataDungeonRankedReward_bExist' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineTime, CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward) == 0x000004, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineTime::CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineTime, CallFunc_ConvertMaximumValueToTime_Text) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineTime::CallFunc_ConvertMaximumValueToTime_Text' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineScore
// 0x00B0 (0x00B0 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetClearLineScore final
{
public:
	bool                                          CallFunc_GetMasterDataDungeonRankedReward_bExist;  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8673[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward; // 0x0004(0x0018)(NoDestructor)
	uint8                                         Pad_8674[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetClearLineScore) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetClearLineScore");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetClearLineScore) == 0x0000B0, "Wrong size on UMG_MatchingMenu_Reward_C_SetClearLineScore");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineScore, CallFunc_GetMasterDataDungeonRankedReward_bExist) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineScore::CallFunc_GetMasterDataDungeonRankedReward_bExist' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineScore, CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward) == 0x000004, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineScore::CallFunc_GetMasterDataDungeonRankedReward_MasterDataDungeonRankedReward' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineScore, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineScore::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineScore, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineScore::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineScore, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineScore::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineScore, K2Node_MakeArray_Array) == 0x000088, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineScore::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetClearLineScore, CallFunc_Format_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_Reward_C_SetClearLineScore::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetMasterDataDungeonRankedReward
// 0x0230 (0x0230 - 0x0000)
struct UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward final
{
public:
	bool                                          bExist;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8675[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           MasterDataDungeonRankedReward;                     // 0x0004(0x0018)(Parm, OutParm, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  Temp_byte_Variable;                                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8676[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8677[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0030(0x01E0)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_Select_Default;                             // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterDungeonRankedReward_IsExists;   // 0x0213(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMasterDungeonRankedReward           CallFunc_FindMasterDungeonRankedReward_ReturnValue; // 0x0214(0x0018)(NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward) == 0x000230, "Wrong size on UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, bExist) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::bExist' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, MasterDataDungeonRankedReward) == 0x000004, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::MasterDataDungeonRankedReward' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, Temp_bool_Variable) == 0x00001C, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, Temp_byte_Variable) == 0x00001D, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_GetMasterDataManager_IsValid) == 0x00001E, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_GetMapInfo_IsExists) == 0x000028, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_GetMapInfo_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000210, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_GetClassType_ReturnValue) == 0x000211, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, K2Node_Select_Default) == 0x000212, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_FindMasterDungeonRankedReward_IsExists) == 0x000213, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_FindMasterDungeonRankedReward_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward, CallFunc_FindMasterDungeonRankedReward_ReturnValue) == 0x000214, "Member 'UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward::CallFunc_FindMasterDungeonRankedReward_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ConvertMaximumValueToTime
// 0x01A0 (0x01A0 - 0x0000)
struct UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime final
{
public:
	int32                                         MaximumValue;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8678[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	int32                                         L_MSec;                                            // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Sec;                                             // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Min;                                             // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8679[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_2;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_867A[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0120(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0138(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime) == 0x0001A0, "Wrong size on UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, MaximumValue) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::MaximumValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, Text) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::Text' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, L_MSec) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::L_MSec' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, L_Sec) == 0x000024, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::L_Sec' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, L_Min) == 0x000028, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::L_Min' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Divide_IntInt_ReturnValue) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Percent_IntInt_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000090, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000094, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Divide_IntInt_ReturnValue_2) == 0x000098, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Divide_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A0, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000B0, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E0, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000120, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, K2Node_MakeStruct_FormatArgumentData_2) == 0x000138, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, K2Node_MakeArray_Array) == 0x000178, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime, CallFunc_Format_ReturnValue) == 0x000188, "Member 'UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmount
// 0x00C0 (0x00C0 - 0x0000)
struct UMG_MatchingMenu_Reward_C_GetRewardAmount final
{
public:
	struct FSBMasterRewardWithAmountRange         MasterRewardWithAmountRange;                       // 0x0000(0x002C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x002C(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0054(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_867B[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountFixed;                                       // 0x0058(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountLottery;                                     // 0x005C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AmountChanged;                                     // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AmountCahnged;                                     // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_867C[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardWithAmountRange         TmpMasterRewardWithAmoutRange;                     // 0x0064(0x002C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardAmountByLiquidMemory_AmountFixed; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardAmountByLiquidMemory_AmountLottery; // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRewardAmountByLiquidMemory_AmountChanged; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_867D[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRewardAmountByNetworkCafe_AmountFixed; // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardAmountByNetworkCafe_AmountLottery; // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRewardAmountByNetworkCafe_AmountChanged; // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_867E[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRewardAmountByItem_AmountFixed;        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardAmountByItem_AmountLottery;      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRewardAmountByItem_AmountChanged;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_867F[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAmountByRewardBoost_AmountFixed;       // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAmountByRewardBoost_AmountLottery;     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAmountByRewardBoost_AmountChanged;     // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_GetRewardAmount) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Reward_C_GetRewardAmount");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_GetRewardAmount) == 0x0000C0, "Wrong size on UMG_MatchingMenu_Reward_C_GetRewardAmount");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, MasterRewardWithAmountRange) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::MasterRewardWithAmountRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, RewardBoostData) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, RewardBoostIsValid) == 0x000054, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, AmountFixed) == 0x000058, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, AmountLottery) == 0x00005C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, AmountChanged) == 0x000060, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, AmountCahnged) == 0x000061, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::AmountCahnged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, TmpMasterRewardWithAmoutRange) == 0x000064, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::TmpMasterRewardWithAmoutRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByLiquidMemory_AmountFixed) == 0x000090, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByLiquidMemory_AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByLiquidMemory_AmountLottery) == 0x000094, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByLiquidMemory_AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByLiquidMemory_AmountChanged) == 0x000098, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByLiquidMemory_AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByNetworkCafe_AmountFixed) == 0x00009C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByNetworkCafe_AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByNetworkCafe_AmountLottery) == 0x0000A0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByNetworkCafe_AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByNetworkCafe_AmountChanged) == 0x0000A4, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByNetworkCafe_AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByItem_AmountFixed) == 0x0000A8, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByItem_AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByItem_AmountLottery) == 0x0000AC, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByItem_AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetRewardAmountByItem_AmountChanged) == 0x0000B0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetRewardAmountByItem_AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetAmountByRewardBoost_AmountFixed) == 0x0000B4, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetAmountByRewardBoost_AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetAmountByRewardBoost_AmountLottery) == 0x0000B8, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetAmountByRewardBoost_AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmount, CallFunc_GetAmountByRewardBoost_AmountChanged) == 0x0000BC, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmount::CallFunc_GetAmountByRewardBoost_AmountChanged' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetAmountByRewardBoost
// 0x01C0 (0x01C0 - 0x0000)
struct UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost final
{
public:
	struct FSBMasterRewardWithAmountRange         MasterRewardWithAmountRange;                       // 0x0000(0x002C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardBoostMissionMasterData        RewardBoostData;                                   // 0x002C(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          RewardBoostIsValid;                                // 0x0054(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8680[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountFixed;                                       // 0x0058(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountLottery;                                     // 0x005C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AmountChanged;                                     // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8681[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8682[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8683[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8684[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8685[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_3;          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_1;                      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8686[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8687[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_4;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_5;          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_2;                      // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_3;                      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8688[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8689[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_4;                      // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_868A[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x00E0(0x00D0)()
	bool                                          Temp_bool_Variable_1;                              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_868B[0x2];                                     // 0x01B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_4;             // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_5;                      // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost) == 0x0001C0, "Wrong size on UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, MasterRewardWithAmountRange) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::MasterRewardWithAmountRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, RewardBoostData) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::RewardBoostData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, RewardBoostIsValid) == 0x000054, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::RewardBoostIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, AmountFixed) == 0x000058, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, AmountLottery) == 0x00005C, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, AmountChanged) == 0x000060, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, Temp_float_Variable) == 0x000064, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00006C, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Add_FloatFloat_ReturnValue) == 0x000074, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_BooleanOR_ReturnValue) == 0x000078, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00007C, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000080, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000084, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000088, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Multiply_IntFloat_ReturnValue_2) == 0x00008C, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Multiply_IntFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Multiply_IntFloat_ReturnValue_3) == 0x000090, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Multiply_IntFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_FCeil_ReturnValue) == 0x000094, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_FCeil_ReturnValue_1) == 0x000098, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_FCeil_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Greater_FloatFloat_ReturnValue_2) == 0x00009C, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Greater_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0000A0, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000A4, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Multiply_IntFloat_ReturnValue_4) == 0x0000A8, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Multiply_IntFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Multiply_IntFloat_ReturnValue_5) == 0x0000AC, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Multiply_IntFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_FCeil_ReturnValue_2) == 0x0000B0, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_FCeil_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_FCeil_ReturnValue_3) == 0x0000B4, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_FCeil_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B9, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, Temp_bool_Variable) == 0x0000BA, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, Temp_float_Variable_1) == 0x0000BC, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, K2Node_Select_Default) == 0x0000C0, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x0000C4, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_GetMasterDataManager_IsValid) == 0x0000C8, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000D0, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_FCeil_ReturnValue_4) == 0x0000D8, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_FCeil_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_GetItemMasterData_IsExists) == 0x0000DC, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_GetItemMasterData_ReturnValue) == 0x0000E0, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, Temp_bool_Variable_1) == 0x0001B0, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001B1, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, K2Node_Select_Default_1) == 0x0001B4, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_Add_FloatFloat_ReturnValue_4) == 0x0001B8, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_Add_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost, CallFunc_FCeil_ReturnValue_5) == 0x0001BC, "Member 'UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost::CallFunc_FCeil_ReturnValue_5' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByItem
// 0x0270 (0x0270 - 0x0000)
struct UMG_MatchingMenu_Reward_C_GetRewardAmountByItem final
{
public:
	struct FSBMasterRewardWithAmountRange         MasterRewardWithAmountRange;                       // 0x0000(0x002C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountFixed;                                       // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountLottery;                                     // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AmountChanged;                                     // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_868C[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        ItemMasterData;                                    // 0x0038(0x00D0)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_868D[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_868E[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBActiveItemData>              CallFunc_GetActiveItems_BP_ReturnValue;            // 0x0130(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_868F[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBActiveItemData                      CallFunc_Array_Get_Item;                           // 0x0148(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8690[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0170(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8691[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8692[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8693[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8694[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_1;                      // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_GetRewardAmountByItem");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem) == 0x000270, "Wrong size on UMG_MatchingMenu_Reward_C_GetRewardAmountByItem");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, MasterRewardWithAmountRange) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::MasterRewardWithAmountRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, AmountFixed) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, AmountLottery) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, AmountChanged) == 0x000034, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, ItemMasterData) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::ItemMasterData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, MasterDataManager) == 0x000108, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::MasterDataManager' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, Temp_int_Array_Index_Variable) == 0x000110, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, Temp_int_Loop_Counter_Variable) == 0x000114, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Add_IntInt_ReturnValue) == 0x000118, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000120, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000128, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_GetActiveItems_BP_ReturnValue) == 0x000130, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_GetActiveItems_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000140, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Array_Get_Item) == 0x000148, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Array_Length_ReturnValue) == 0x000168, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Less_IntInt_ReturnValue) == 0x00016C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_FindItemMaster_bIsValid) == 0x00016D, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_FindItemMaster_ItemMaster) == 0x000170, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000240, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000244, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_BooleanAND_ReturnValue) == 0x000248, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00024C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Add_FloatFloat_ReturnValue) == 0x000250, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000254, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000258, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_BooleanAND_ReturnValue_1) == 0x00025C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_FCeil_ReturnValue) == 0x000260, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000264, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByItem, CallFunc_FCeil_ReturnValue_1) == 0x000268, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByItem::CallFunc_FCeil_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByNetworkCafe
// 0x00B8 (0x00B8 - 0x0000)
struct UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe final
{
public:
	struct FSBMasterRewardWithAmountRange         MasterRewardWithAmountRange;                       // 0x0000(0x002C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountFixed;                                       // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountLottery;                                     // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AmountChanged;                                     // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8695[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBNetworkCafeBuffsMasterData>  NetworkCafeBuffMasterData;                         // 0x0038(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBNetworkCafeBuffsMasterData          CallFunc_Array_Get_Item;                           // 0x0054(0x000C)(NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8696[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8697[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8698[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_1;                      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8699[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBNetworkCafeBuffsMasterData>  CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue; // 0x0098(0x0010)(ReferenceParm)
	class USBNetworkCafeMessageManager*           CallFunc_GetNetworkCafeMessageManager_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNetworkCafe_ReturnValue;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe) == 0x0000B8, "Wrong size on UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, MasterRewardWithAmountRange) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::MasterRewardWithAmountRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, AmountFixed) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, AmountLottery) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, AmountChanged) == 0x000034, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, NetworkCafeBuffMasterData) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::NetworkCafeBuffMasterData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, Temp_int_Array_Index_Variable) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Array_Get_Item) == 0x000054, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Add_FloatFloat_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00006C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00006D, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00006E, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_BooleanAND_ReturnValue) == 0x00006F, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_BooleanAND_ReturnValue_1) == 0x000070, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00007C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000080, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_FCeil_ReturnValue) == 0x000084, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_FCeil_ReturnValue_1) == 0x000088, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_FCeil_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_GetMasterDataManager_IsValid) == 0x00008C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_BP_GetNetworkCafeBuffsMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_GetNetworkCafeMessageManager_ReturnValue) == 0x0000A8, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_GetNetworkCafeMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe, CallFunc_IsNetworkCafe_ReturnValue) == 0x0000B0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe::CallFunc_IsNetworkCafe_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByLiquidMemory
// 0x0080 (0x0080 - 0x0000)
struct UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory final
{
public:
	struct FSBMasterRewardWithAmountRange         MasterRewardWithAmountRange;                       // 0x0000(0x002C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountFixed;                                       // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountLottery;                                     // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AmountChanged;                                     // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_869A[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    NetworkDataCache;                                  // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_869B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_869C[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindMasterTokenUseID_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_869D[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue_1;                      // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory) == 0x000080, "Wrong size on UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, MasterRewardWithAmountRange) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::MasterRewardWithAmountRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, AmountFixed) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::AmountFixed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, AmountLottery) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::AmountLottery' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, AmountChanged) == 0x000034, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::AmountChanged' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, NetworkDataCache) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::NetworkDataCache' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_GetMasterDataManager_IsValid) == 0x000040, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_GetMasterDataManager_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid) == 0x000050, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_OutIsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue) == 0x000054, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_GetOwnActivatedLiquidMemoryEfficacyValue_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_FindMasterTokenUseID_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_FindMasterTokenUseID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_Add_FloatFloat_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000065, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_GetNetworkDataCache_IsValid) == 0x000066, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000074, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_FCeil_ReturnValue) == 0x000078, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory, CallFunc_FCeil_ReturnValue_1) == 0x00007C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory::CallFunc_FCeil_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardList
// 0x0270 (0x0270 - 0x0000)
struct UMG_MatchingMenu_Reward_C_GetRewardList final
{
public:
	class FName                                   RewardInfo;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterRewardWithAmountRange> OutRewardList;                                     // 0x0008(0x0010)(Parm, OutParm)
	TArray<struct FSBMissionListInfo>             ActivatedDungeonList;                              // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         ArrayIndex;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterDungeonReward                 MasterDungeonReward;                               // 0x002C(0x0038)(Edit, BlueprintVisible, NoDestructor)
	struct FSBMasterReward                        MasterReward;                                      // 0x0064(0x0014)(Edit, BlueprintVisible, NoDestructor)
	bool                                          bBreak;                                            // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_869E[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterRewardWithAmountRange> RewardList;                                        // 0x0080(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSBMasterDungeonReward>         DungeonRewardArray;                                // 0x0090(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterDungeonReward                 CallFunc_Array_Get_Item;                           // 0x00A4(0x0038)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_869F[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A0[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A1[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A2[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A3[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A4[0x1];                                     // 0x010F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_2;                  // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldTheFirstRewardBeRemoved_All_ShouldBeRemoved; // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A5[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterRewardWithAmountRange         K2Node_MakeStruct_SBMasterRewardWithAmountRange;   // 0x0128(0x002C)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0156(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0157(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86A6[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventTermDataInstantNow_ReturnValue; // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A7[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterRewardWithAmountRange         K2Node_MakeStruct_SBMasterRewardWithAmountRange_1; // 0x0184(0x002C)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A8[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86A9[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x01C4(0x0014)(NoDestructor)
	int32                                         K2Node_Select_Default_2;                           // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterRewardWithAmountRange         K2Node_MakeStruct_SBMasterRewardWithAmountRange_2; // 0x01E0(0x002C)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterRewardWithAmountRange         CallFunc_Array_Get_Item_1;                         // 0x0214(0x002C)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0246(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0247(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x024B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x024D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86AA[0x2];                                     // 0x024E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0256(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0257(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterDungeonReward>         CallFunc_GetMasterDungeonRewardArray_ReturnValue;  // 0x0260(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_GetRewardList) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_GetRewardList");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_GetRewardList) == 0x000270, "Wrong size on UMG_MatchingMenu_Reward_C_GetRewardList");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, RewardInfo) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::RewardInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, OutRewardList) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::OutRewardList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, ActivatedDungeonList) == 0x000018, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::ActivatedDungeonList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, ArrayIndex) == 0x000028, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::ArrayIndex' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, MasterDungeonReward) == 0x00002C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::MasterDungeonReward' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, MasterReward) == 0x000064, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::MasterReward' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, bBreak) == 0x000078, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::bBreak' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, RewardList) == 0x000080, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::RewardList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, DungeonRewardArray) == 0x000090, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::DungeonRewardArray' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Array_Get_Item) == 0x0000A4, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Array_Length_ReturnValue) == 0x0000DC, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_int_Variable) == 0x0000E0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_bool_Variable) == 0x0000E4, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_int_Variable_1) == 0x0000E8, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_bool_Variable_1) == 0x0000EC, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_int_Loop_Counter_Variable) == 0x0000F0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_bool_True_if_break_was_hit_Variable) == 0x0000FC, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_int_Array_Index_Variable_1) == 0x000100, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Not_PreBool_ReturnValue) == 0x000104, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000108, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00010C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Less_IntInt_ReturnValue_1) == 0x00010D, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Less_IntInt_ReturnValue_2) == 0x00010E, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_SelectInt_ReturnValue) == 0x000110, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_SelectInt_ReturnValue_1) == 0x000114, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_SelectInt_ReturnValue_2) == 0x000118, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_SelectInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_ShouldTheFirstRewardBeRemoved_All_ShouldBeRemoved) == 0x00011C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_ShouldTheFirstRewardBeRemoved_All_ShouldBeRemoved' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000120, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Abs_Int_ReturnValue) == 0x000124, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, K2Node_MakeStruct_SBMasterRewardWithAmountRange) == 0x000128, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::K2Node_MakeStruct_SBMasterRewardWithAmountRange' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_bool_Variable_2) == 0x000154, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000155, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000156, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000157, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000158, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000159, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_BooleanOR_ReturnValue) == 0x00015A, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_bool_Variable_3) == 0x00015B, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Add_IntInt_ReturnValue_2) == 0x00015C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, K2Node_Select_Default) == 0x000160, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Conv_NameToString_ReturnValue) == 0x000168, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Add_IntInt_ReturnValue_3) == 0x000178, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_CheckEventTermDataInstantNow_ReturnValue) == 0x00017C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_CheckEventTermDataInstantNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, K2Node_Select_Default_1) == 0x000180, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, K2Node_MakeStruct_SBMasterRewardWithAmountRange_1) == 0x000184, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::K2Node_MakeStruct_SBMasterRewardWithAmountRange_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_GetMasterDataManager_IsValid) == 0x0001B1, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001B8, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_FindMasterReward_IsExists) == 0x0001C0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_FindMasterReward_ReturnValue) == 0x0001C4, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, K2Node_Select_Default_2) == 0x0001D8, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, K2Node_Select_Default_3) == 0x0001DC, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, K2Node_MakeStruct_SBMasterRewardWithAmountRange_2) == 0x0001E0, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::K2Node_MakeStruct_SBMasterRewardWithAmountRange_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Array_Add_ReturnValue) == 0x00020C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, Temp_int_Loop_Counter_Variable_1) == 0x000210, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Array_Get_Item_1) == 0x000214, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Array_Length_ReturnValue_1) == 0x000240, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Less_IntInt_ReturnValue_3) == 0x000244, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000245, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_BooleanAND_ReturnValue) == 0x000246, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000247, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000248, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000249, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_BooleanAND_ReturnValue_1) == 0x00024A, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_BooleanAND_ReturnValue_2) == 0x00024B, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00024C, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x00024D, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_Add_IntInt_ReturnValue_4) == 0x000250, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_BooleanAND_ReturnValue_3) == 0x000254, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_BooleanAND_ReturnValue_4) == 0x000255, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000256, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_GetMasterDataManager_IsValid_1) == 0x000257, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000258, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_GetRewardList, CallFunc_GetMasterDungeonRewardArray_ReturnValue) == 0x000260, "Member 'UMG_MatchingMenu_Reward_C_GetRewardList::CallFunc_GetMasterDungeonRewardArray_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_All
// 0x0068 (0x0068 - 0x0000)
struct UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All final
{
public:
	bool                                          ShouldBeRemoved;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86AB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMissionListInfo>             ActivatedDungeonList;                              // 0x0008(0x0010)(Edit, BlueprintVisible)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86AC[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDungeonRecordList*                   CallFunc_GetDungeonRecordList_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonRecord                       CallFunc_GetDungeonRecord_OutRecord;               // 0x0030(0x0030)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All) == 0x000068, "Wrong size on UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, ShouldBeRemoved) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::ShouldBeRemoved' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, ActivatedDungeonList) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::ActivatedDungeonList' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_GetNetworkDataCache_IsValid) == 0x000019, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_GetDungeonRecordList_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_GetDungeonRecordList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_GetDungeonRecord_OutRecord) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_GetDungeonRecord_OutRecord' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000061, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_Greater_IntInt_ReturnValue) == 0x000062, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_BooleanAND_ReturnValue) == 0x000063, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000064, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_BooleanAND_ReturnValue_1) == 0x000065, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All, CallFunc_BooleanAND_ReturnValue_2) == 0x000066, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_Individually
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually final
{
public:
	int32                                         ClearLine;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldBeRemoved;                                   // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86AD[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDungeonRecordList*                   CallFunc_GetDungeonRecordList_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonRecord                       CallFunc_GetDungeonRecord_OutRecord;               // 0x0018(0x0030)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually) == 0x000050, "Wrong size on UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, ClearLine) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::ClearLine' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, ShouldBeRemoved) == 0x000004, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::ShouldBeRemoved' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, CallFunc_GetNetworkDataCache_IsValid) == 0x000006, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, CallFunc_GetDungeonRecordList_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::CallFunc_GetDungeonRecordList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, CallFunc_GetDungeonRecord_OutRecord) == 0x000018, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::CallFunc_GetDungeonRecord_OutRecord' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000048, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually, CallFunc_BooleanAND_ReturnValue) == 0x000049, "Member 'UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldRankedRewardBeAdded
// 0x0258 (0x0258 - 0x0000)
struct UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded final
{
public:
	ESBRewardSetType                              Param_RewardSetType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86AE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           MasterDungeonRankedReward;                         // 0x0004(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          ShouldBeAdded;                                     // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMapInfo                             CallFunc_GetMapInfoByGameContentId_OutMapInfo;     // 0x0020(0x01E0)()
	bool                                          CallFunc_GetMapInfoByGameContentId_ReturnValue;    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86AF[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86B0[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDungeonRecordList*                   CallFunc_GetDungeonRecordList_ReturnValue;         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonRecord                       CallFunc_GetDungeonRecord_OutRecord;               // 0x0220(0x0030)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded) == 0x000258, "Wrong size on UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, Param_RewardSetType) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::Param_RewardSetType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, MasterDungeonRankedReward) == 0x000004, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::MasterDungeonRankedReward' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, ShouldBeAdded) == 0x00001C, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::ShouldBeAdded' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001D, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001E, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_BooleanAND_ReturnValue) == 0x00001F, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_GetMapInfoByGameContentId_OutMapInfo) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_GetMapInfoByGameContentId_OutMapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_GetMapInfoByGameContentId_ReturnValue) == 0x000200, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_GetMapInfoByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_GetNetworkDataCache_IsValid) == 0x000201, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000208, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, K2Node_SwitchString_CmpSuccess) == 0x000210, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_GetDungeonRecordList_ReturnValue) == 0x000218, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_GetDungeonRecordList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_GetDungeonRecord_OutRecord) == 0x000220, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_GetDungeonRecord_OutRecord' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_Less_IntInt_ReturnValue) == 0x000250, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded, CallFunc_Greater_IntInt_ReturnValue) == 0x000251, "Member 'UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetTerm
// 0x0090 (0x0090 - 0x0000)
struct UMG_MatchingMenu_Reward_C_SetTerm final
{
public:
	class FName                                   RewardId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterDungeonReward>         DungeonRewardArray;                                // 0x0008(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86B1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86B2[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_MakeDateTime_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86B3[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonReward                 CallFunc_Array_Get_Item;                           // 0x0038(0x0038)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterDungeonReward>         CallFunc_GetMasterDungeonRewardArray_ReturnValue;  // 0x0080(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(UMG_MatchingMenu_Reward_C_SetTerm) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Reward_C_SetTerm");
static_assert(sizeof(UMG_MatchingMenu_Reward_C_SetTerm) == 0x000090, "Wrong size on UMG_MatchingMenu_Reward_C_SetTerm");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, RewardId) == 0x000000, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::RewardId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, DungeonRewardArray) == 0x000008, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::DungeonRewardArray' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_MakeDateTime_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_MakeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_SetDateTime_ReturnValue) == 0x000034, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_Array_Get_Item) == 0x000038, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000075, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_BooleanAND_ReturnValue) == 0x000076, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_GetMasterDataManager_IsValid) == 0x000077, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_GetMasterDataManager_ReturnValue) == 0x000078, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Reward_C_SetTerm, CallFunc_GetMasterDungeonRewardArray_ReturnValue) == 0x000080, "Member 'UMG_MatchingMenu_Reward_C_SetTerm::CallFunc_GetMasterDungeonRewardArray_ReturnValue' has a wrong offset!");

}

