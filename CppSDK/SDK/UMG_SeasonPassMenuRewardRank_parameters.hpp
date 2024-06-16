#pragma once

 

// Package: UMG_SeasonPassMenuRewardRank

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.OnClickItemIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_OnClickItemIcon__DelegateSignature::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.ExecuteUbergraph_UMG_SeasonPassMenuRewardRank
// 0x00C8 (0x00C8 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D19[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D1A[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardRankData*        K2Node_CustomEvent_Data;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_ComponentBoundEvent_Data_3;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_ComponentBoundEvent_Data_2;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_ComponentBoundEvent_Data_1;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_ComponentBoundEvent_Data;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCanReceiveItemData_ReturnValue;        // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLastReward_ReturnValue;                 // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAchieved_ReturnValue;                   // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D1B[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaidPlanSubscribed_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D1C[0x5];                                     // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0070(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0098(0x0028)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bPaidPlanSubscribed;            // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank) == 0x0000C8, "Wrong size on UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, Temp_bool_Variable) == 0x000004, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_MakeLiteralByte_ReturnValue) == 0x000020, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000021, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_Event_IsDesignTime) == 0x000022, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_CustomEvent_Data) == 0x000028, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_ComponentBoundEvent_Data_3) == 0x000030, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_ComponentBoundEvent_Data_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_ComponentBoundEvent_Data_2) == 0x000038, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_ComponentBoundEvent_Data_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_ComponentBoundEvent_Data_1) == 0x000040, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_ComponentBoundEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_ComponentBoundEvent_Data) == 0x000048, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_BooleanAND_ReturnValue) == 0x000050, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_HasCanReceiveItemData_ReturnValue) == 0x000051, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_HasCanReceiveItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_IsLastReward_ReturnValue) == 0x000052, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_IsLastReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_IsAchieved_ReturnValue) == 0x000053, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_IsAchieved_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_GetSBPlayerController_ReturnValue) == 0x000058, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000060, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_IsPaidPlanSubscribed_ReturnValue) == 0x000068, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_IsPaidPlanSubscribed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000069, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, Temp_bool_Variable_1) == 0x00006A, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_MakeStruct_SlateColor) == 0x000070, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_MakeStruct_SlateColor_1) == 0x000098, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000C0, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_Select_Default) == 0x0000C1, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C2, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_CustomEvent_bPaidPlanSubscribed) == 0x0000C3, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_CustomEvent_bPaidPlanSubscribed' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, CallFunc_BooleanAND_ReturnValue_2) == 0x0000C4, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank, K2Node_Select_Default_1) == 0x0000C5, "Member 'UMG_SeasonPassMenuRewardRank_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRank::K2Node_Select_Default_1' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.DesignCheck
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_DesignCheck final
{
public:
	bool                                          Param_bPaidPlanSubscribed;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_DesignCheck) == 0x000001, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_DesignCheck");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_DesignCheck) == 0x000001, "Wrong size on UMG_SeasonPassMenuRewardRank_C_DesignCheck");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_DesignCheck, Param_bPaidPlanSubscribed) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_DesignCheck::Param_bPaidPlanSubscribed' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_BndEvt__FreeRewardIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_BndEvt__SubscribedRewardIcon1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_SetData final
{
public:
	class USBSeasonPassMenuRewardRankData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_SetData) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_SetData");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_SetData) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardRank_C_SetData");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetData, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_SetData::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_PreConstruct");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_PreConstruct) == 0x000001, "Wrong size on UMG_SeasonPassMenuRewardRank_C_PreConstruct");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardRank.UMG_SeasonPassMenuRewardRank_C.SetRewardData
// 0x0080 (0x0080 - 0x0000)
struct UMG_SeasonPassMenuRewardRank_C_SetRewardData final
{
public:
	class USBSeasonPassMenuRewardRankData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bExistsAchieved;                                   // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D1D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBSeasonPassMenuRewardItemData*> RewardDataList;                                    // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class UUMG_SeasonPassMenuRewardItem_C*> RewardIconList;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D1E[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBSeasonPassMenuRewardItemData*> K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D1F[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardItemData*        CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D20[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_SeasonPassMenuRewardItem_C*        CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_SeasonPassMenuRewardItem_C*> K2Node_MakeArray_Array_1;                          // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(UMG_SeasonPassMenuRewardRank_C_SetRewardData) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardRank_C_SetRewardData");
static_assert(sizeof(UMG_SeasonPassMenuRewardRank_C_SetRewardData) == 0x000080, "Wrong size on UMG_SeasonPassMenuRewardRank_C_SetRewardData");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, bExistsAchieved) == 0x000008, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::bExistsAchieved' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, RewardDataList) == 0x000010, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::RewardDataList' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, RewardIconList) == 0x000020, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::RewardIconList' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, Temp_int_Array_Index_Variable) == 0x000030, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, K2Node_MakeArray_Array) == 0x000038, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, CallFunc_Array_Get_Item) == 0x000050, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardRank_C_SetRewardData, K2Node_MakeArray_Array_1) == 0x000070, "Member 'UMG_SeasonPassMenuRewardRank_C_SetRewardData::K2Node_MakeArray_Array_1' has a wrong offset!");

}

