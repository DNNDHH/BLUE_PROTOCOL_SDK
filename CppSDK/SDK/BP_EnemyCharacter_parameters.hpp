#pragma once

 

// Package: BP_EnemyCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_DamageReaction_structs.hpp"


namespace SDK::Params
{

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ExecuteUbergraph_BP_EnemyCharacter
// 0x0040 (0x0040 - 0x0000)
struct BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlaybackPosition_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F98[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F99[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnemyAppearanceId_ReturnValue;         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9A[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Map_Find_Value;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter) == 0x000008, "Wrong alignment on BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter");
static_assert(sizeof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter) == 0x000040, "Wrong size on BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, EntryPoint) == 0x000000, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_GetTimelineLength_ReturnValue) == 0x000004, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_GetPlaybackPosition_ReturnValue) == 0x000008, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_GetPlaybackPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_GetEnemyAppearanceId_ReturnValue) == 0x000018, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_GetEnemyAppearanceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_Map_Length_ReturnValue) == 0x000028, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_Map_Find_Value) == 0x000030, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_Map_Find_ReturnValue) == 0x000034, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_FClamp_ReturnValue) == 0x000038, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter, CallFunc_BooleanAND_ReturnValue) == 0x00003C, "Member 'BP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EnemyCharacter_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyCharacter_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EnemyCharacter_C_ReceiveTick");
static_assert(sizeof(BP_EnemyCharacter_C_ReceiveTick) == 0x000004, "Wrong size on BP_EnemyCharacter_C_ReceiveTick");
static_assert(offsetof(BP_EnemyCharacter_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EnemyCharacter_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.UpdateAimBlend
// 0x0002 (0x0002 - 0x0000)
struct BP_EnemyCharacter_C_UpdateAimBlend final
{
public:
	bool                                          CallFunc_HasAnimTag_ReturnValue;                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnimTag_ReturnValue_1;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyCharacter_C_UpdateAimBlend) == 0x000001, "Wrong alignment on BP_EnemyCharacter_C_UpdateAimBlend");
static_assert(sizeof(BP_EnemyCharacter_C_UpdateAimBlend) == 0x000002, "Wrong size on BP_EnemyCharacter_C_UpdateAimBlend");
static_assert(offsetof(BP_EnemyCharacter_C_UpdateAimBlend, CallFunc_HasAnimTag_ReturnValue) == 0x000000, "Member 'BP_EnemyCharacter_C_UpdateAimBlend::CallFunc_HasAnimTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_UpdateAimBlend, CallFunc_HasAnimTag_ReturnValue_1) == 0x000001, "Member 'BP_EnemyCharacter_C_UpdateAimBlend::CallFunc_HasAnimTag_ReturnValue_1' has a wrong offset!");

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.SetAimBodyBlendRate
// 0x0020 (0x0020 - 0x0000)
struct BP_EnemyCharacter_C_SetAimBodyBlendRate final
{
public:
	float                                         BlendRate;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEnemyCharacterAnimInstance*          K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyCharacter_C_SetAimBodyBlendRate) == 0x000008, "Wrong alignment on BP_EnemyCharacter_C_SetAimBodyBlendRate");
static_assert(sizeof(BP_EnemyCharacter_C_SetAimBodyBlendRate) == 0x000020, "Wrong size on BP_EnemyCharacter_C_SetAimBodyBlendRate");
static_assert(offsetof(BP_EnemyCharacter_C_SetAimBodyBlendRate, BlendRate) == 0x000000, "Member 'BP_EnemyCharacter_C_SetAimBodyBlendRate::BlendRate' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_SetAimBodyBlendRate, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'BP_EnemyCharacter_C_SetAimBodyBlendRate::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_SetAimBodyBlendRate, K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance) == 0x000010, "Member 'BP_EnemyCharacter_C_SetAimBodyBlendRate::K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_SetAimBodyBlendRate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_EnemyCharacter_C_SetAimBodyBlendRate::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.InitializeEquipWeapon
// 0x00C0 (0x00C0 - 0x0000)
struct BP_EnemyCharacter_C_InitializeEquipWeapon final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEnemySwitchWeaponAttachmentComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9E[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9F[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FA0[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBInventoryWeapon>             CallFunc_GetInventoryWeapons_ReturnValue;          // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FA1[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInventoryWeapon                     CallFunc_Array_Get_Item_1;                         // 0x0050(0x0068)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyCharacter_C_InitializeEquipWeapon) == 0x000008, "Wrong alignment on BP_EnemyCharacter_C_InitializeEquipWeapon");
static_assert(sizeof(BP_EnemyCharacter_C_InitializeEquipWeapon) == 0x0000C0, "Wrong size on BP_EnemyCharacter_C_InitializeEquipWeapon");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Array_Get_Item) == 0x000024, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_GetInventoryWeapons_ReturnValue) == 0x000038, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_GetInventoryWeapons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B8, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_InitializeEquipWeapon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000B9, "Member 'BP_EnemyCharacter_C_InitializeEquipWeapon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetDamageReaction
// 0x0030 (0x0030 - 0x0000)
struct BP_EnemyCharacter_C_GetDamageReaction final
{
public:
	struct FSBStunInfo                            StunInfo;                                          // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	E_DamageReaction                              DamageReaction;                                    // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FA2[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_GetDamageReactionPattern_ReturnValue;     // 0x0018(0x0010)(NoDestructor)
	E_DamageReaction                              CallFunc_GetDamageReactionByStunLevel_DamageReaction; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyCharacter_C_GetDamageReaction) == 0x000008, "Wrong alignment on BP_EnemyCharacter_C_GetDamageReaction");
static_assert(sizeof(BP_EnemyCharacter_C_GetDamageReaction) == 0x000030, "Wrong size on BP_EnemyCharacter_C_GetDamageReaction");
static_assert(offsetof(BP_EnemyCharacter_C_GetDamageReaction, StunInfo) == 0x000000, "Member 'BP_EnemyCharacter_C_GetDamageReaction::StunInfo' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetDamageReaction, DamageReaction) == 0x000014, "Member 'BP_EnemyCharacter_C_GetDamageReaction::DamageReaction' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetDamageReaction, CallFunc_GetDamageReactionPattern_ReturnValue) == 0x000018, "Member 'BP_EnemyCharacter_C_GetDamageReaction::CallFunc_GetDamageReactionPattern_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetDamageReaction, CallFunc_GetDamageReactionByStunLevel_DamageReaction) == 0x000028, "Member 'BP_EnemyCharacter_C_GetDamageReaction::CallFunc_GetDamageReactionByStunLevel_DamageReaction' has a wrong offset!");

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.IsClient
// 0x0003 (0x0003 - 0x0000)
struct BP_EnemyCharacter_C_IsClient final
{
public:
	bool                                          ReturnParam;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyCharacter_C_IsClient) == 0x000001, "Wrong alignment on BP_EnemyCharacter_C_IsClient");
static_assert(sizeof(BP_EnemyCharacter_C_IsClient) == 0x000003, "Wrong size on BP_EnemyCharacter_C_IsClient");
static_assert(offsetof(BP_EnemyCharacter_C_IsClient, ReturnParam) == 0x000000, "Member 'BP_EnemyCharacter_C_IsClient::ReturnParam' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_IsClient, CallFunc_HasAuthority_ReturnValue) == 0x000001, "Member 'BP_EnemyCharacter_C_IsClient::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_IsClient, CallFunc_IsStandalone_ReturnValue) == 0x000002, "Member 'BP_EnemyCharacter_C_IsClient::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");

// Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetPartsDamageOverrideImpact
// 0x00A8 (0x00A8 - 0x0000)
struct BP_EnemyCharacter_C_GetPartsDamageOverrideImpact final
{
public:
	class FString                                 AppearanceId;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA3[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OverrideImpact;                                    // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA4[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FA5[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnemyAppearanceId_ReturnValue;         // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Map_Find_Value;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA6[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0048(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Map_Find_Value_1;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3FA7[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FA8[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue_1;               // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact) == 0x000008, "Wrong alignment on BP_EnemyCharacter_C_GetPartsDamageOverrideImpact");
static_assert(sizeof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact) == 0x0000A8, "Wrong size on BP_EnemyCharacter_C_GetPartsDamageOverrideImpact");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, AppearanceId) == 0x000000, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::AppearanceId' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, IsValid) == 0x000010, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::IsValid' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, OverrideImpact) == 0x000014, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::OverrideImpact' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Len_ReturnValue) == 0x000018, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00001C, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_GetEnemyAppearanceId_ReturnValue) == 0x000030, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_GetEnemyAppearanceId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Map_Find_Value) == 0x000040, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Map_Find_ReturnValue) == 0x000044, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Map_Keys_Keys) == 0x000048, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Map_Find_Value_1) == 0x00006C, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Map_Find_ReturnValue_1) == 0x000070, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Less_IntInt_ReturnValue) == 0x000071, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Len_ReturnValue_1) == 0x000074, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_Min_ReturnValue) == 0x000078, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_GetSubstring_ReturnValue) == 0x000080, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_GetSubstring_ReturnValue_1) == 0x000090, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_GetSubstring_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyCharacter_C_GetPartsDamageOverrideImpact, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0000A0, "Member 'BP_EnemyCharacter_C_GetPartsDamageOverrideImpact::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

}

