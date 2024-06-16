#pragma once

 

// Package: LibraryMenu_AchievementDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClickRewardIcon__DelegateSignature
// 0x0014 (0x0014 - 0x0000)
struct LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature final
{
public:
	struct FSBMasterReward                        InMasterReward;                                    // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature) == 0x000014, "Wrong size on LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature, InMasterReward) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature::InMasterReward' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClicked_AchievementRewardsBtn__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature final
{
public:
	TArray<struct FSBMailData>                    OutRewardsData;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 OutRewardsIds;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature) == 0x000020, "Wrong size on LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature, OutRewardsData) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature::OutRewardsData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature, OutRewardsIds) == 0x000010, "Member 'LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature::OutRewardsIds' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.ExecuteUbergraph_LibraryMenu_AchievementDetails
// 0x00F0 (0x00F0 - 0x0000)
struct LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A94[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A95[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_outIsSetAchievement;    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A96[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0038(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A97[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A98[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A99[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_CustomEvent_Sender;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_GetMasterReward_MasterReward;             // 0x0078(0x0014)(NoDestructor)
	uint8                                         Pad_5A9A[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A9B[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue_1; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A9C[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A9D[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue_2; // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00D0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A9E[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMailData>                    CallFunc_CheckAchievementReward_outMailDatas;      // 0x00D8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A9F[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x00EC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails) == 0x0000F0, "Wrong size on LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, EntryPoint) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, Temp_bool_Variable) == 0x000004, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_MakeArray_Array) == 0x000008, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, Temp_int_Variable) == 0x000018, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, Temp_bool_Variable_1) == 0x00001C, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, Temp_int_Variable_1) == 0x000020, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_ComponentBoundEvent_outIsSetAchievement) == 0x000024, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_ComponentBoundEvent_outIsSetAchievement' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_CustomEvent_Result) == 0x000038, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000058, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_CustomEvent_Sender) == 0x000068, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_GetPlayerController_ReturnValue_1) == 0x000070, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_GetMasterReward_MasterReward) == 0x000078, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_GetMasterReward_MasterReward' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000090, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_GetPlayerAchievementComponent_ReturnValue_1) == 0x0000A0, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_GetPlayerAchievementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000B0, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0000B8, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_DynamicCast_bSuccess_2) == 0x0000C0, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_Not_PreBool_ReturnValue) == 0x0000C1, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_GetPlayerAchievementComponent_ReturnValue_2) == 0x0000C8, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_GetPlayerAchievementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_Select_Default) == 0x0000D0, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_CheckAchievementReward_outMailDatas) == 0x0000D8, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_CheckAchievementReward_outMailDatas' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000E8, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails, K2Node_Select_Default_1) == 0x0000EC, "Member 'LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails::K2Node_Select_Default_1' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.RewardIconClick
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_AchievementDetails_C_RewardIconClick final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_RewardIconClick) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_RewardIconClick");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_RewardIconClick) == 0x000008, "Wrong size on LibraryMenu_AchievementDetails_C_RewardIconClick");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_RewardIconClick, Sender) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_RewardIconClick::Sender' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SaveAchievementSelectEvent
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent) == 0x000001, "Wrong alignment on LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent) == 0x000001, "Wrong size on LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent, Result) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent::Result' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature final
{
public:
	bool                                          OutIsSetAchievement;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature) == 0x000001, "Wrong alignment on LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature) == 0x000001, "Wrong size on LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature, OutIsSetAchievement) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature::OutIsSetAchievement' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetDetailsVisibility
// 0x0003 (0x0003 - 0x0000)
struct LibraryMenu_AchievementDetails_C_SetDetailsVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_SetDetailsVisibility) == 0x000001, "Wrong alignment on LibraryMenu_AchievementDetails_C_SetDetailsVisibility");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_SetDetailsVisibility) == 0x000003, "Wrong size on LibraryMenu_AchievementDetails_C_SetDetailsVisibility");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetDetailsVisibility, Visible) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_SetDetailsVisibility::Visible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetDetailsVisibility, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'LibraryMenu_AchievementDetails_C_SetDetailsVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetDetailsVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'LibraryMenu_AchievementDetails_C_SetDetailsVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Set Achievement Id
// 0x0168 (0x0168 - 0x0000)
struct LibraryMenu_AchievementDetails_C_Set_Achievement_Id final
{
public:
	struct FAchievementMasterData                 AchievementMasterData;                             // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBCharacterAchievementDataInfo        CharacterAchievementData;                          // 0x0078(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FDateTime                              InLoadDateTime;                                    // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPossession;                                      // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA0[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AA1[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A8(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA2[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAchievementDescription_ReturnValue;    // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA3[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0120(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA4[0x1];                                     // 0x013B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievementId_ReturnValue;             // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA5[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBAchievementMasterTitleFlag                 Temp_byte_Variable_2;                              // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AA6[0x1];                                     // 0x014B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA7[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementPossession_ReturnValue;      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_Set_Achievement_Id");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id) == 0x000168, "Wrong size on LibraryMenu_AchievementDetails_C_Set_Achievement_Id");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, AchievementMasterData) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::AchievementMasterData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CharacterAchievementData) == 0x000078, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CharacterAchievementData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, InLoadDateTime) == 0x000090, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::InLoadDateTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, IsPossession) == 0x000098, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::IsPossession' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, Temp_int_Variable) == 0x00009C, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, Temp_bool_Variable) == 0x0000A0, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, Temp_byte_Variable) == 0x0000A1, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, Temp_byte_Variable_1) == 0x0000A2, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GetAchievementDescription_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GetAchievementDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GetAchievementName_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000118, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000119, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000120, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000138, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, K2Node_Select_Default) == 0x000139, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_BooleanOR_ReturnValue) == 0x00013A, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GetAchievementId_ReturnValue) == 0x00013C, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GetAchievementId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000140, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, Temp_int_Variable_1) == 0x000144, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GetVisibility_ReturnValue) == 0x000148, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000149, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, Temp_byte_Variable_2) == 0x00014A, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, K2Node_Select_Default_1) == 0x00014C, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GetNetworkDataCache_IsValid) == 0x000150, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000158, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_Set_Achievement_Id, CallFunc_IsAchievementPossession_ReturnValue) == 0x000160, "Member 'LibraryMenu_AchievementDetails_C_Set_Achievement_Id::CallFunc_IsAchievementPossession_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetReward
// 0x00B8 (0x00B8 - 0x0000)
struct LibraryMenu_AchievementDetails_C_SetReward final
{
public:
	bool                                          IsEneble;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         RewardIdList;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsRecieved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AA9[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AAA[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AAB[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AAC[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_2;                         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_3;                         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UQuestRewardIcon_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5AAD[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AAE[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AAF[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x008C(0x0014)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB0[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_SetReward) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_SetReward");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_SetReward) == 0x0000B8, "Wrong size on LibraryMenu_AchievementDetails_C_SetReward");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, IsEneble) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_SetReward::IsEneble' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, RewardIdList) == 0x000008, "Member 'LibraryMenu_AchievementDetails_C_SetReward::RewardIdList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, IsRecieved) == 0x000018, "Member 'LibraryMenu_AchievementDetails_C_SetReward::IsRecieved' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, Temp_int_Array_Index_Variable) == 0x000020, "Member 'LibraryMenu_AchievementDetails_C_SetReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Array_Get_Item) == 0x000028, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000038, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Conv_StringToName_ReturnValue) == 0x00003C, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Create_ReturnValue) == 0x000048, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Array_Get_Item_2) == 0x000054, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Array_Get_Item_3) == 0x000058, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'LibraryMenu_AchievementDetails_C_SetReward::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000070, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_GetMasterDataManager_IsValid) == 0x000078, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_FindMasterReward_IsExists) == 0x000088, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_FindMasterReward_ReturnValue) == 0x00008C, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Array_Add_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'LibraryMenu_AchievementDetails_C_SetReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_GetChildrenCount_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AD, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetReward, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'LibraryMenu_AchievementDetails_C_SetReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetLimitedTime
// 0x00B0 (0x00B0 - 0x0000)
struct LibraryMenu_AchievementDetails_C_SetLimitedTime final
{
public:
	class FString                                 TeamID;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              InLoadDateTime;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AB2[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue_1;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB3[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEventTermsMasterData                CallFunc_GetMasterDataBP_OutMaster;                // 0x0050(0x0020)()
	bool                                          CallFunc_GetMasterDataBP_ReturnValue;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB4[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBEventTermsData                      CallFunc_Array_Get_Item;                           // 0x0078(0x0030)(NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue_1;                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_SetLimitedTime) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_SetLimitedTime");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_SetLimitedTime) == 0x0000B0, "Wrong size on LibraryMenu_AchievementDetails_C_SetLimitedTime");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, TeamID) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::TeamID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, InLoadDateTime) == 0x000010, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::InLoadDateTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000018, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_GetEventTermEndTime_OutEndTime) == 0x000020, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_GetEventTermEndTime_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x000029, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_SetDateTime_ReturnValue) == 0x00002A, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_SBUtcNow_ReturnValue) == 0x000030, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_GetSBGameInstance_ReturnValue) == 0x000038, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_Greater_DateTimeDateTime_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_Greater_DateTimeDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_GetEventScheduler_ReturnValue) == 0x000048, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_GetMasterDataBP_OutMaster) == 0x000050, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_GetMasterDataBP_OutMaster' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_GetMasterDataBP_ReturnValue) == 0x000070, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_GetMasterDataBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_Array_Get_Item) == 0x000078, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetLimitedTime, CallFunc_SetDateTime_ReturnValue_1) == 0x0000A9, "Member 'LibraryMenu_AchievementDetails_C_SetLimitedTime::CallFunc_SetDateTime_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.GetAchievementReward
// 0x0220 (0x0220 - 0x0000)
struct LibraryMenu_AchievementDetails_C_GetAchievementReward final
{
public:
	TArray<struct FSBMailData>                    OutMailData;                                       // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FSBMailData>                    TmpMailDatas;                                      // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_Array_Get_Item;                           // 0x002C(0x0014)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB5[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      K2Node_MakeStruct_SBMailAttachment;                // 0x0048(0x0040)()
	struct FSBMailData                            K2Node_MakeStruct_SBMailData;                      // 0x0088(0x0190)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_GetAchievementReward) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_GetAchievementReward");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_GetAchievementReward) == 0x000220, "Wrong size on LibraryMenu_AchievementDetails_C_GetAchievementReward");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, OutMailData) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::OutMailData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, TmpMailDatas) == 0x000010, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::TmpMailDatas' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, Temp_int_Array_Index_Variable) == 0x000020, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, CallFunc_Array_Get_Item) == 0x00002C, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, K2Node_MakeStruct_SBMailAttachment) == 0x000048, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::K2Node_MakeStruct_SBMailAttachment' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, K2Node_MakeStruct_SBMailData) == 0x000088, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::K2Node_MakeStruct_SBMailData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_GetAchievementReward, CallFunc_Array_Add_ReturnValue) == 0x000218, "Member 'LibraryMenu_AchievementDetails_C_GetAchievementReward::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRank
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_AchievementDetails_C_SetRank final
{
public:
	int32                                         InRankId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_SetRank) == 0x000004, "Wrong alignment on LibraryMenu_AchievementDetails_C_SetRank");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_SetRank) == 0x000004, "Wrong size on LibraryMenu_AchievementDetails_C_SetRank");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRank, InRankId) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_SetRank::InRankId' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRewardIconAlpha
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_AchievementDetails_C_SetRewardIconAlpha final
{
public:
	float                                         InAlpha;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AB6[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB7[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_SetRewardIconAlpha");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha) == 0x000058, "Wrong size on LibraryMenu_AchievementDetails_C_SetRewardIconAlpha");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, InAlpha) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::InAlpha' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, Temp_int_Array_Index_Variable) == 0x000014, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, CallFunc_Array_Get_Item) == 0x000038, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000048, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_SetRewardIconAlpha, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'LibraryMenu_AchievementDetails_C_SetRewardIconAlpha::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.CheckAchievementReward
// 0x0248 (0x0248 - 0x0000)
struct LibraryMenu_AchievementDetails_C_CheckAchievementReward final
{
public:
	TArray<struct FSBMailData>                    OutMailDatas;                                      // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FSBMailData>                    TmpMailDatas;                                      // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB8[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB9[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x0058(0x0014)(NoDestructor)
	uint8                                         Pad_5ABA[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailAttachment                      K2Node_MakeStruct_SBMailAttachment;                // 0x0070(0x0040)()
	struct FSBMailData                            K2Node_MakeStruct_SBMailData;                      // 0x00B0(0x0190)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_AchievementDetails_C_CheckAchievementReward) == 0x000008, "Wrong alignment on LibraryMenu_AchievementDetails_C_CheckAchievementReward");
static_assert(sizeof(LibraryMenu_AchievementDetails_C_CheckAchievementReward) == 0x000248, "Wrong size on LibraryMenu_AchievementDetails_C_CheckAchievementReward");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, OutMailDatas) == 0x000000, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::OutMailDatas' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, TmpMailDatas) == 0x000010, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::TmpMailDatas' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, Temp_int_Array_Index_Variable) == 0x000020, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_GetMasterDataManager_IsValid) == 0x00002C, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_GetMasterDataManager_ReturnValue) == 0x000030, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_Array_Get_Item) == 0x000038, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_Conv_StringToName_ReturnValue) == 0x00004C, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_FindMasterReward_IsExists) == 0x000055, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_FindMasterReward_ReturnValue) == 0x000058, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, K2Node_MakeStruct_SBMailAttachment) == 0x000070, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::K2Node_MakeStruct_SBMailAttachment' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, K2Node_MakeStruct_SBMailData) == 0x0000B0, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::K2Node_MakeStruct_SBMailData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_AchievementDetails_C_CheckAchievementReward, CallFunc_Array_Add_ReturnValue) == 0x000240, "Member 'LibraryMenu_AchievementDetails_C_CheckAchievementReward::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

