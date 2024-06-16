#pragma once

 

// Package: BP_PlayerEngramCannonComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ExecuteUbergraph_BP_PlayerEngramCannonComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent) == 0x000004, "Wrong alignment on BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent");
static_assert(sizeof(BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent) == 0x000008, "Wrong size on BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent, EntryPoint) == 0x000000, "Member 'BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerEngramCannonComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerEngramCannonComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerEngramCannonComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerEngramCannonComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerEngramCannonComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerEngramCannonComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.SetUI
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerEngramCannonComponent_C_SetUI final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D98[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D99[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEngramCannonHUD_Base_C*                CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerEngramCannonComponent_C_SetUI) == 0x000008, "Wrong alignment on BP_PlayerEngramCannonComponent_C_SetUI");
static_assert(sizeof(BP_PlayerEngramCannonComponent_C_SetUI) == 0x000028, "Wrong size on BP_PlayerEngramCannonComponent_C_SetUI");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_SetUI, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_PlayerEngramCannonComponent_C_SetUI::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_SetUI, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PlayerEngramCannonComponent_C_SetUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_SetUI, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'BP_PlayerEngramCannonComponent_C_SetUI::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_SetUI, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerEngramCannonComponent_C_SetUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_SetUI, CallFunc_IsLocallyControlled_ReturnValue) == 0x000019, "Member 'BP_PlayerEngramCannonComponent_C_SetUI::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_SetUI, CallFunc_Create_ReturnValue) == 0x000020, "Member 'BP_PlayerEngramCannonComponent_C_SetUI::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ResetUI
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerEngramCannonComponent_C_ResetUI final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerEngramCannonComponent_C_ResetUI) == 0x000001, "Wrong alignment on BP_PlayerEngramCannonComponent_C_ResetUI");
static_assert(sizeof(BP_PlayerEngramCannonComponent_C_ResetUI) == 0x000001, "Wrong size on BP_PlayerEngramCannonComponent_C_ResetUI");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_ResetUI, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PlayerEngramCannonComponent_C_ResetUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOn
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn final
{
public:
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D9A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn) == 0x000008, "Wrong alignment on BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn");
static_assert(sizeof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn) == 0x000020, "Wrong size on BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn, CallFunc_PostAkEvent_ReturnValue) == 0x000000, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn, CallFunc_IsLocallyControlled_ReturnValue) == 0x000019, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOff
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D9B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff) == 0x000008, "Wrong alignment on BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff");
static_assert(sizeof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff) == 0x000020, "Wrong size on BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff, CallFunc_PostAkEvent_ReturnValue) == 0x000008, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff, CallFunc_IsLocallyControlled_ReturnValue) == 0x000019, "Member 'BP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

}

