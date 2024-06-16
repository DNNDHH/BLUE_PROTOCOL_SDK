#pragma once

 

// Package: Fang_expedition_DungeonStatus

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.OnTicketButtonClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature final
{
public:
	class UObject*                                ClickedObject;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature");
static_assert(sizeof(Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature) == 0x000008, "Wrong size on Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature, ClickedObject) == 0x000000, "Member 'Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature::ClickedObject' has a wrong offset!");

// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.ExecuteUbergraph_Fang_expedition_DungeonStatus
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus) == 0x000004, "Wrong alignment on Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus");
static_assert(sizeof(Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus) == 0x000008, "Wrong size on Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus, EntryPoint) == 0x000000, "Member 'Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.SetGaugeData
// 0x0048 (0x0048 - 0x0000)
struct Fang_expedition_DungeonStatus_C_SetGaugeData final
{
public:
	int32                                         Now;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonStatus_C_SetGaugeData) == 0x000008, "Wrong alignment on Fang_expedition_DungeonStatus_C_SetGaugeData");
static_assert(sizeof(Fang_expedition_DungeonStatus_C_SetGaugeData) == 0x000048, "Wrong size on Fang_expedition_DungeonStatus_C_SetGaugeData");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetGaugeData, Now) == 0x000000, "Member 'Fang_expedition_DungeonStatus_C_SetGaugeData::Now' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetGaugeData, Max) == 0x000004, "Member 'Fang_expedition_DungeonStatus_C_SetGaugeData::Max' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetGaugeData, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Fang_expedition_DungeonStatus_C_SetGaugeData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetGaugeData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000020, "Member 'Fang_expedition_DungeonStatus_C_SetGaugeData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetGaugeData, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000038, "Member 'Fang_expedition_DungeonStatus_C_SetGaugeData::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetGaugeData, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00003C, "Member 'Fang_expedition_DungeonStatus_C_SetGaugeData::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetGaugeData, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'Fang_expedition_DungeonStatus_C_SetGaugeData::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.PlaySlotAnimation
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DungeonStatus_C_PlaySlotAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonStatus_C_PlaySlotAnimation) == 0x000008, "Wrong alignment on Fang_expedition_DungeonStatus_C_PlaySlotAnimation");
static_assert(sizeof(Fang_expedition_DungeonStatus_C_PlaySlotAnimation) == 0x000008, "Wrong size on Fang_expedition_DungeonStatus_C_PlaySlotAnimation");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_PlaySlotAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Fang_expedition_DungeonStatus_C_PlaySlotAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.UpdateBonusIcon
// 0x0048 (0x0048 - 0x0000)
struct Fang_expedition_DungeonStatus_C_UpdateBonusIcon final
{
public:
	class ASBPlayerController*                    PlayerController;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetFangExpeditionToolTipText_TooltipDataList; // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DC7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue_1;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectiveFangExpedition_ReturnValue;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DC8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon) == 0x000008, "Wrong alignment on Fang_expedition_DungeonStatus_C_UpdateBonusIcon");
static_assert(sizeof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon) == 0x000048, "Wrong size on Fang_expedition_DungeonStatus_C_UpdateBonusIcon");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, PlayerController) == 0x000000, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::PlayerController' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000008, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, CallFunc_GetFangExpeditionToolTipText_TooltipDataList) == 0x000010, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::CallFunc_GetFangExpeditionToolTipText_TooltipDataList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, CallFunc_GetRewardBoostComponent_ReturnValue_1) == 0x000030, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::CallFunc_GetRewardBoostComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, CallFunc_IsEffectiveFangExpedition_ReturnValue) == 0x000038, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::CallFunc_IsEffectiveFangExpedition_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_UpdateBonusIcon, CallFunc_GetSBPlayerController_ReturnValue) == 0x000040, "Member 'Fang_expedition_DungeonStatus_C_UpdateBonusIcon::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.SetTokenBtnActive
// 0x0005 (0x0005 - 0x0000)
struct Fang_expedition_DungeonStatus_C_SetTokenBtnActive final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DungeonStatus_C_SetTokenBtnActive) == 0x000001, "Wrong alignment on Fang_expedition_DungeonStatus_C_SetTokenBtnActive");
static_assert(sizeof(Fang_expedition_DungeonStatus_C_SetTokenBtnActive) == 0x000005, "Wrong size on Fang_expedition_DungeonStatus_C_SetTokenBtnActive");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetTokenBtnActive, Active) == 0x000000, "Member 'Fang_expedition_DungeonStatus_C_SetTokenBtnActive::Active' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetTokenBtnActive, Temp_bool_Variable) == 0x000001, "Member 'Fang_expedition_DungeonStatus_C_SetTokenBtnActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetTokenBtnActive, Temp_byte_Variable) == 0x000002, "Member 'Fang_expedition_DungeonStatus_C_SetTokenBtnActive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetTokenBtnActive, Temp_byte_Variable_1) == 0x000003, "Member 'Fang_expedition_DungeonStatus_C_SetTokenBtnActive::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DungeonStatus_C_SetTokenBtnActive, K2Node_Select_Default) == 0x000004, "Member 'Fang_expedition_DungeonStatus_C_SetTokenBtnActive::K2Node_Select_Default' has a wrong offset!");

}

