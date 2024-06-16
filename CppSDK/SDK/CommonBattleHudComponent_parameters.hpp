#pragma once

 

// Package: CommonBattleHudComponent

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ExecuteUbergraph_CommonBattleHudComponent
// 0x000C (0x000C - 0x0000)
struct CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnable_ReturnValue;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent) == 0x000004, "Wrong alignment on CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent");
static_assert(sizeof(CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent) == 0x00000C, "Wrong size on CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent");
static_assert(offsetof(CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent, EntryPoint) == 0x000000, "Member 'CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent, CallFunc_IsEnable_ReturnValue) == 0x000008, "Member 'CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent::CallFunc_IsEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent, K2Node_Event_EndPlayReason) == 0x000009, "Member 'CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct CommonBattleHudComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonBattleHudComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on CommonBattleHudComponent_C_ReceiveEndPlay");
static_assert(sizeof(CommonBattleHudComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on CommonBattleHudComponent_C_ReceiveEndPlay");
static_assert(offsetof(CommonBattleHudComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'CommonBattleHudComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct CommonBattleHudComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonBattleHudComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on CommonBattleHudComponent_C_ReceiveTick");
static_assert(sizeof(CommonBattleHudComponent_C_ReceiveTick) == 0x000004, "Wrong size on CommonBattleHudComponent_C_ReceiveTick");
static_assert(offsetof(CommonBattleHudComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'CommonBattleHudComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.AttackHit
// 0x0001 (0x0001 - 0x0000)
struct CommonBattleHudComponent_C_AttackHit final
{
public:
	bool                                          IsCritical;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleHudComponent_C_AttackHit) == 0x000001, "Wrong alignment on CommonBattleHudComponent_C_AttackHit");
static_assert(sizeof(CommonBattleHudComponent_C_AttackHit) == 0x000001, "Wrong size on CommonBattleHudComponent_C_AttackHit");
static_assert(offsetof(CommonBattleHudComponent_C_AttackHit, IsCritical) == 0x000000, "Member 'CommonBattleHudComponent_C_AttackHit::IsCritical' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetRayHit
// 0x0002 (0x0002 - 0x0000)
struct CommonBattleHudComponent_C_SetRayHit final
{
public:
	bool                                          bRayHit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleHudComponent_C_SetRayHit) == 0x000001, "Wrong alignment on CommonBattleHudComponent_C_SetRayHit");
static_assert(sizeof(CommonBattleHudComponent_C_SetRayHit) == 0x000002, "Wrong size on CommonBattleHudComponent_C_SetRayHit");
static_assert(offsetof(CommonBattleHudComponent_C_SetRayHit, bRayHit) == 0x000000, "Member 'CommonBattleHudComponent_C_SetRayHit::bRayHit' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_SetRayHit, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CommonBattleHudComponent_C_SetRayHit::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetupHUD
// 0x0010 (0x0010 - 0x0000)
struct CommonBattleHudComponent_C_SetupHUD final
{
public:
	class UUI_Reticle_ChargeLevel_C*              CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleHudComponent_C_SetupHUD) == 0x000008, "Wrong alignment on CommonBattleHudComponent_C_SetupHUD");
static_assert(sizeof(CommonBattleHudComponent_C_SetupHUD) == 0x000010, "Wrong size on CommonBattleHudComponent_C_SetupHUD");
static_assert(offsetof(CommonBattleHudComponent_C_SetupHUD, CallFunc_Create_ReturnValue) == 0x000000, "Member 'CommonBattleHudComponent_C_SetupHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_SetupHUD, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'CommonBattleHudComponent_C_SetupHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.DestroyHud
// 0x0001 (0x0001 - 0x0000)
struct CommonBattleHudComponent_C_DestroyHud final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleHudComponent_C_DestroyHud) == 0x000001, "Wrong alignment on CommonBattleHudComponent_C_DestroyHud");
static_assert(sizeof(CommonBattleHudComponent_C_DestroyHud) == 0x000001, "Wrong size on CommonBattleHudComponent_C_DestroyHud");
static_assert(offsetof(CommonBattleHudComponent_C_DestroyHud, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonBattleHudComponent_C_DestroyHud::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.OnTick
// 0x0003 (0x0003 - 0x0000)
struct CommonBattleHudComponent_C_OnTick final
{
public:
	bool                                          CallFunc_IsMapLevelInfoInitialized_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnable_ReturnValue;                     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleHudComponent_C_OnTick) == 0x000001, "Wrong alignment on CommonBattleHudComponent_C_OnTick");
static_assert(sizeof(CommonBattleHudComponent_C_OnTick) == 0x000003, "Wrong size on CommonBattleHudComponent_C_OnTick");
static_assert(offsetof(CommonBattleHudComponent_C_OnTick, CallFunc_IsMapLevelInfoInitialized_ReturnValue) == 0x000000, "Member 'CommonBattleHudComponent_C_OnTick::CallFunc_IsMapLevelInfoInitialized_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_OnTick, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'CommonBattleHudComponent_C_OnTick::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_OnTick, CallFunc_IsEnable_ReturnValue) == 0x000002, "Member 'CommonBattleHudComponent_C_OnTick::CallFunc_IsEnable_ReturnValue' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.UpdateHud
// 0x0068 (0x0068 - 0x0000)
struct CommonBattleHudComponent_C_UpdateHud final
{
public:
	int32                                         TmpCurrChargeLevel;                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpCurrChargeRatio;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCharge;                                          // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLockOn;                                          // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F39[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F3A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F3B[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerTargetingComponent*            CallFunc_GetPlayerTargetingComponent_ReturnValue;  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnsheathe_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTargetLockOn_ReturnValue;               // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F3C[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentSkillChargeRatio_ReturnValue;   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillChargeLevel_ReturnValue;   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillChargeLevelMax_ReturnValue; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleHudComponent_C_UpdateHud) == 0x000008, "Wrong alignment on CommonBattleHudComponent_C_UpdateHud");
static_assert(sizeof(CommonBattleHudComponent_C_UpdateHud) == 0x000068, "Wrong size on CommonBattleHudComponent_C_UpdateHud");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, TmpCurrChargeLevel) == 0x000000, "Member 'CommonBattleHudComponent_C_UpdateHud::TmpCurrChargeLevel' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, TmpCurrChargeRatio) == 0x000004, "Member 'CommonBattleHudComponent_C_UpdateHud::TmpCurrChargeRatio' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, IsCharge) == 0x000008, "Member 'CommonBattleHudComponent_C_UpdateHud::IsCharge' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, IsLockOn) == 0x000009, "Member 'CommonBattleHudComponent_C_UpdateHud::IsLockOn' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'CommonBattleHudComponent_C_UpdateHud::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommonBattleHudComponent_C_UpdateHud::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000030, "Member 'CommonBattleHudComponent_C_UpdateHud::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'CommonBattleHudComponent_C_UpdateHud::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_GetPlayerTargetingComponent_ReturnValue) == 0x000040, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_GetPlayerTargetingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_IsUnsheathe_ReturnValue) == 0x000048, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_IsUnsheathe_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_IsTargetLockOn_ReturnValue) == 0x00004A, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_IsTargetLockOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_GetCurrentSkillChargeRatio_ReturnValue) == 0x00004C, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_GetCurrentSkillChargeRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_SelectFloat_ReturnValue) == 0x000050, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_GetCurrentSkillChargeLevel_ReturnValue) == 0x000054, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_GetCurrentSkillChargeLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_SelectInt_ReturnValue) == 0x000058, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_GetCurrentSkillChargeLevelMax_ReturnValue) == 0x00005C, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_GetCurrentSkillChargeLevelMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_UpdateHud, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'CommonBattleHudComponent_C_UpdateHud::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ShowHUD
// 0x0006 (0x0006 - 0x0000)
struct CommonBattleHudComponent_C_ShowHUD final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonBattleHudComponent_C_ShowHUD) == 0x000001, "Wrong alignment on CommonBattleHudComponent_C_ShowHUD");
static_assert(sizeof(CommonBattleHudComponent_C_ShowHUD) == 0x000006, "Wrong size on CommonBattleHudComponent_C_ShowHUD");
static_assert(offsetof(CommonBattleHudComponent_C_ShowHUD, bShow) == 0x000000, "Member 'CommonBattleHudComponent_C_ShowHUD::bShow' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ShowHUD, Temp_bool_Variable) == 0x000001, "Member 'CommonBattleHudComponent_C_ShowHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ShowHUD, Temp_byte_Variable) == 0x000002, "Member 'CommonBattleHudComponent_C_ShowHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ShowHUD, Temp_byte_Variable_1) == 0x000003, "Member 'CommonBattleHudComponent_C_ShowHUD::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ShowHUD, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonBattleHudComponent_C_ShowHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_ShowHUD, K2Node_Select_Default) == 0x000005, "Member 'CommonBattleHudComponent_C_ShowHUD::K2Node_Select_Default' has a wrong offset!");

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.IsEnable
// 0x0020 (0x0020 - 0x0000)
struct CommonBattleHudComponent_C_IsEnable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanBattleCurrentMapLevel_ReturnValue;     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F3D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonBattleHudComponent_C_IsEnable) == 0x000008, "Wrong alignment on CommonBattleHudComponent_C_IsEnable");
static_assert(sizeof(CommonBattleHudComponent_C_IsEnable) == 0x000020, "Wrong size on CommonBattleHudComponent_C_IsEnable");
static_assert(offsetof(CommonBattleHudComponent_C_IsEnable, ReturnValue) == 0x000000, "Member 'CommonBattleHudComponent_C_IsEnable::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_IsEnable, CallFunc_CanBattleCurrentMapLevel_ReturnValue) == 0x000001, "Member 'CommonBattleHudComponent_C_IsEnable::CallFunc_CanBattleCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_IsEnable, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'CommonBattleHudComponent_C_IsEnable::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_IsEnable, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'CommonBattleHudComponent_C_IsEnable::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_IsEnable, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CommonBattleHudComponent_C_IsEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonBattleHudComponent_C_IsEnable, CallFunc_IsLocallyControlled_ReturnValue) == 0x000019, "Member 'CommonBattleHudComponent_C_IsEnable::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

}

