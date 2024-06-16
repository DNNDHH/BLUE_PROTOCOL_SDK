#pragma once

 

// Package: SS_NPC_WaitTurn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ExecuteUbergraph_SS_NPC_WaitTurn
// 0x00D0 (0x00D0 - 0x0000)
struct SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EC3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_CustomEvent_InMobCharacter;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ASBMobCharacter* InMobCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UAnimInstance*                          K2Node_Event_AnimInstance_1;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet_1;                       // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNpcCharacterAnimInstance*            K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC4[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNpcCharacterAnimInstance*            K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_1; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC5[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTempAnimTimeLength_AnimTimeLength;     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC6[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC7[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0080(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNpcCharacterAnimInstance*            K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_2; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC8[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance_2;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EC9[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character_1;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ECA[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNpcCharacterAnimInstance*            K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_3; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn");
static_assert(sizeof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn) == 0x0000D0, "Wrong size on SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, EntryPoint) == 0x000000, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_CustomEvent_InMobCharacter) == 0x000008, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_CustomEvent_InMobCharacter' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_Event_AnimInstance_1) == 0x000020, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_Event_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_Event_AnimationSet_1) == 0x000028, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_Event_AnimationSet_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_GetAnimInstance_ReturnValue) == 0x000030, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance) == 0x000038, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_1) == 0x000048, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_GetTempAnimTimeLength_AnimTimeLength) == 0x000054, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_GetTempAnimTimeLength_AnimTimeLength' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_GetOwningActor_ReturnValue) == 0x000058, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000060, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_AsSBMob_Character) == 0x000068, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_BooleanAND_ReturnValue) == 0x000071, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_BooleanAND_ReturnValue_1) == 0x000072, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_Event_DeltaTime) == 0x000074, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_Event_AnimInstance) == 0x000078, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_Event_AnimationSet) == 0x000080, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_2) == 0x000088, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_Event_AnimInstance_2) == 0x000098, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_Event_AnimInstance_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_GetOwningActor_ReturnValue_1) == 0x0000A0, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_FMax_ReturnValue) == 0x0000A8, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_AsSBMob_Character_1) == 0x0000B0, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_AsSBMob_Character_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_bSuccess_4) == 0x0000B8, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_3) == 0x0000C0, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_AsSBNpc_Character_Anim_Instance_3' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, K2Node_DynamicCast_bSuccess_5) == 0x0000C8, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn, CallFunc_BooleanAND_ReturnValue_2) == 0x0000C9, "Member 'SS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegate
// 0x0008 (0x0008 - 0x0000)
struct SS_NPC_WaitTurn_C_TickDelegate final
{
public:
	class ASBMobCharacter*                        InMobCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_TickDelegate) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_TickDelegate");
static_assert(sizeof(SS_NPC_WaitTurn_C_TickDelegate) == 0x000008, "Wrong size on SS_NPC_WaitTurn_C_TickDelegate");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegate, InMobCharacter) == 0x000000, "Member 'SS_NPC_WaitTurn_C_TickDelegate::InMobCharacter' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.BeginProcess
// 0x0068 (0x0068 - 0x0000)
struct SS_NPC_WaitTurn_C_BeginProcess final
{
public:
	class ASBMobCharacter*                        MobCharacer;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_SetTemporaryRotator_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_SetTemporaryRotator_ReturnValue_1;        // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_BeginProcess) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_BeginProcess");
static_assert(sizeof(SS_NPC_WaitTurn_C_BeginProcess) == 0x000068, "Wrong size on SS_NPC_WaitTurn_C_BeginProcess");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, MobCharacer) == 0x000000, "Member 'SS_NPC_WaitTurn_C_BeginProcess::MobCharacer' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, AnimInstance) == 0x000008, "Member 'SS_NPC_WaitTurn_C_BeginProcess::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000010, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_SetTemporaryRotator_ReturnValue) == 0x00001C, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_SetTemporaryRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_FindLookAtRotation_ReturnValue) == 0x000034, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_SetTemporaryRotator_ReturnValue_1) == 0x000040, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_SetTemporaryRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x00004C, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_BreakRotator_Roll) == 0x000058, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_BreakRotator_Pitch) == 0x00005C, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_BreakRotator_Yaw) == 0x000060, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_BeginProcess, CallFunc_SetTemporaryFloat_ReturnValue) == 0x000064, "Member 'SS_NPC_WaitTurn_C_BeginProcess::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickProcess
// 0x0020 (0x0020 - 0x0000)
struct SS_NPC_WaitTurn_C_TickProcess final
{
public:
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTempAnimTimeLength_AnimTimeLength;     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimTimeLength_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimTimeRatio_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPC_WaitTurn_C_TickProcess) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_TickProcess");
static_assert(sizeof(SS_NPC_WaitTurn_C_TickProcess) == 0x000020, "Wrong size on SS_NPC_WaitTurn_C_TickProcess");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickProcess, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_TickProcess::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickProcess, CallFunc_GetTemporaryFloat_ReturnValue) == 0x000008, "Member 'SS_NPC_WaitTurn_C_TickProcess::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickProcess, CallFunc_GetTempAnimTimeLength_AnimTimeLength) == 0x00000C, "Member 'SS_NPC_WaitTurn_C_TickProcess::CallFunc_GetTempAnimTimeLength_AnimTimeLength' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickProcess, CallFunc_GetAnimTimeLength_ReturnValue) == 0x000010, "Member 'SS_NPC_WaitTurn_C_TickProcess::CallFunc_GetAnimTimeLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickProcess, CallFunc_GetAnimTimeRatio_ReturnValue) == 0x000014, "Member 'SS_NPC_WaitTurn_C_TickProcess::CallFunc_GetAnimTimeRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickProcess, CallFunc_FMax_ReturnValue) == 0x000018, "Member 'SS_NPC_WaitTurn_C_TickProcess::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickProcess, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'SS_NPC_WaitTurn_C_TickProcess::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegateProcess
// 0x00B0 (0x00B0 - 0x0000)
struct SS_NPC_WaitTurn_C_TickDelegateProcess final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempTimeRatio;                                     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ECB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCompleteAnimTimeRatio_IsCompleted;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ECC[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetTemporaryRotator_ReturnValue;          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetTemporaryRotator_ReturnValue_1;        // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetTempAnimTimeLength_AnimTimeLength;     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetStartTime_StartTime;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASBMobCharacter*                        K2Node_DynamicCast_AsSBMob_Character;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ECD[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMilliseconds_ReturnValue;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ECE[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ECF[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_REase_ReturnValue;                        // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPC_WaitTurn_C_TickDelegateProcess) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_TickDelegateProcess");
static_assert(sizeof(SS_NPC_WaitTurn_C_TickDelegateProcess) == 0x0000B0, "Wrong size on SS_NPC_WaitTurn_C_TickDelegateProcess");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, Actor) == 0x000000, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::Actor' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, AnimInstance) == 0x000008, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, TempTimeRatio) == 0x000010, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::TempTimeRatio' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_Now_ReturnValue) == 0x000018, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_IsCompleteAnimTimeRatio_IsCompleted) == 0x000020, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_IsCompleteAnimTimeRatio_IsCompleted' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_GetTemporaryRotator_ReturnValue) == 0x000024, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_GetTemporaryRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_GetTemporaryRotator_ReturnValue_1) == 0x000030, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_GetTemporaryRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_GetTempAnimTimeLength_AnimTimeLength) == 0x00003C, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_GetTempAnimTimeLength_AnimTimeLength' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_GetStartTime_StartTime) == 0x000040, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_GetStartTime_StartTime' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, K2Node_DynamicCast_AsSBMob_Character) == 0x000048, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::K2Node_DynamicCast_AsSBMob_Character' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000058, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_GetTotalMilliseconds_ReturnValue) == 0x000060, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_GetTotalMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000064, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000068, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00006C, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_FClamp_ReturnValue) == 0x000070, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_BooleanAND_ReturnValue) == 0x000074, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000078, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_SafeDivide_ReturnValue) == 0x00007C, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_FClamp_ReturnValue_1) == 0x000080, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_REase_ReturnValue) == 0x000084, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_REase_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_BreakRotator_Roll) == 0x000090, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_BreakRotator_Pitch) == 0x000094, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_BreakRotator_Yaw) == 0x000098, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_MakeRotator_ReturnValue) == 0x00009C, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_TickDelegateProcess, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000A8, "Member 'SS_NPC_WaitTurn_C_TickDelegateProcess::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.EndProcess
// 0x0038 (0x0038 - 0x0000)
struct SS_NPC_WaitTurn_C_EndProcess final
{
public:
	class ASBMobCharacter*                        MobCharacter;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetTemporaryRotator_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPC_WaitTurn_C_EndProcess) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_EndProcess");
static_assert(sizeof(SS_NPC_WaitTurn_C_EndProcess) == 0x000038, "Wrong size on SS_NPC_WaitTurn_C_EndProcess");
static_assert(offsetof(SS_NPC_WaitTurn_C_EndProcess, MobCharacter) == 0x000000, "Member 'SS_NPC_WaitTurn_C_EndProcess::MobCharacter' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_EndProcess, AnimInstance) == 0x000008, "Member 'SS_NPC_WaitTurn_C_EndProcess::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_EndProcess, CallFunc_GetTemporaryRotator_ReturnValue) == 0x000010, "Member 'SS_NPC_WaitTurn_C_EndProcess::CallFunc_GetTemporaryRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_EndProcess, CallFunc_BreakRotator_Roll) == 0x00001C, "Member 'SS_NPC_WaitTurn_C_EndProcess::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_EndProcess, CallFunc_BreakRotator_Pitch) == 0x000020, "Member 'SS_NPC_WaitTurn_C_EndProcess::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_EndProcess, CallFunc_BreakRotator_Yaw) == 0x000024, "Member 'SS_NPC_WaitTurn_C_EndProcess::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_EndProcess, CallFunc_MakeRotator_ReturnValue) == 0x000028, "Member 'SS_NPC_WaitTurn_C_EndProcess::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetStartTime
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_SetStartTime final
{
public:
	class USBNpcCharacterAnimInstance*            Anim_Instance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_SetStartTime) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_SetStartTime");
static_assert(sizeof(SS_NPC_WaitTurn_C_SetStartTime) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_SetStartTime");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetStartTime, Anim_Instance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_SetStartTime::Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetStartTime, CallFunc_Now_ReturnValue) == 0x000008, "Member 'SS_NPC_WaitTurn_C_SetStartTime::CallFunc_Now_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetStartTime
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_GetStartTime final
{
public:
	class USBNpcCharacterAnimInstance*            Anim_Instance;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              StartTime;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_GetStartTime) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_GetStartTime");
static_assert(sizeof(SS_NPC_WaitTurn_C_GetStartTime) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_GetStartTime");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetStartTime, Anim_Instance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_GetStartTime::Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetStartTime, StartTime) == 0x000008, "Member 'SS_NPC_WaitTurn_C_GetStartTime::StartTime' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.Set Temp Anim Time Ratio
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio final
{
public:
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimTimeRatio;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio");
static_assert(sizeof(SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio");
static_assert(offsetof(SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio, AnimTimeRatio) == 0x000008, "Member 'SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio::AnimTimeRatio' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio, CallFunc_SetTemporaryFloat_ReturnValue) == 0x00000C, "Member 'SS_NPC_WaitTurn_C_Set_Temp_Anim_Time_Ratio::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetTempAnimTimeLength
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_SetTempAnimTimeLength final
{
public:
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimTimeLength;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_SetTempAnimTimeLength) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_SetTempAnimTimeLength");
static_assert(sizeof(SS_NPC_WaitTurn_C_SetTempAnimTimeLength) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_SetTempAnimTimeLength");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetTempAnimTimeLength, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_SetTempAnimTimeLength::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetTempAnimTimeLength, AnimTimeLength) == 0x000008, "Member 'SS_NPC_WaitTurn_C_SetTempAnimTimeLength::AnimTimeLength' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetTempAnimTimeLength, CallFunc_SetTemporaryFloat_ReturnValue) == 0x00000C, "Member 'SS_NPC_WaitTurn_C_SetTempAnimTimeLength::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeRatio
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_GetTempAnimTimeRatio final
{
public:
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimTimeRatio;                                     // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_GetTempAnimTimeRatio) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_GetTempAnimTimeRatio");
static_assert(sizeof(SS_NPC_WaitTurn_C_GetTempAnimTimeRatio) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_GetTempAnimTimeRatio");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetTempAnimTimeRatio, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_GetTempAnimTimeRatio::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetTempAnimTimeRatio, AnimTimeRatio) == 0x000008, "Member 'SS_NPC_WaitTurn_C_GetTempAnimTimeRatio::AnimTimeRatio' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetTempAnimTimeRatio, CallFunc_GetTemporaryFloat_ReturnValue) == 0x00000C, "Member 'SS_NPC_WaitTurn_C_GetTempAnimTimeRatio::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeLength
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_GetTempAnimTimeLength final
{
public:
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimTimeLength;                                    // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_GetTempAnimTimeLength) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_GetTempAnimTimeLength");
static_assert(sizeof(SS_NPC_WaitTurn_C_GetTempAnimTimeLength) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_GetTempAnimTimeLength");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetTempAnimTimeLength, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_GetTempAnimTimeLength::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetTempAnimTimeLength, AnimTimeLength) == 0x000008, "Member 'SS_NPC_WaitTurn_C_GetTempAnimTimeLength::AnimTimeLength' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_GetTempAnimTimeLength, CallFunc_GetTemporaryFloat_ReturnValue) == 0x00000C, "Member 'SS_NPC_WaitTurn_C_GetTempAnimTimeLength::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetCompleteAnimTimeRatio
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio final
{
public:
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCompleted;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetTemporaryBool_ReturnValue;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio");
static_assert(sizeof(SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio, IsCompleted) == 0x000008, "Member 'SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio::IsCompleted' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio, CallFunc_SetTemporaryBool_ReturnValue) == 0x000009, "Member 'SS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio::CallFunc_SetTemporaryBool_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.IsCompleteAnimTimeRatio
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio final
{
public:
	class USBNpcCharacterAnimInstance*            AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCompleted;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTemporaryBool_ReturnValue;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio");
static_assert(sizeof(SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio");
static_assert(offsetof(SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio, IsCompleted) == 0x000008, "Member 'SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio::IsCompleted' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio, CallFunc_GetTemporaryBool_ReturnValue) == 0x000009, "Member 'SS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio::CallFunc_GetTemporaryBool_ReturnValue' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_NPC_WaitTurn_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ED0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_ReceiveTick");
static_assert(sizeof(SS_NPC_WaitTurn_C_ReceiveTick) == 0x000018, "Wrong size on SS_NPC_WaitTurn_C_ReceiveTick");
static_assert(offsetof(SS_NPC_WaitTurn_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_NPC_WaitTurn_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_NPC_WaitTurn_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_NPC_WaitTurn_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WaitTurn_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_ReceiveBeginPlay");
static_assert(sizeof(SS_NPC_WaitTurn_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_NPC_WaitTurn_C_ReceiveBeginPlay");
static_assert(offsetof(SS_NPC_WaitTurn_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WaitTurn_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_NPC_WaitTurn_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveEndPlay
// 0x0008 (0x0008 - 0x0000)
struct SS_NPC_WaitTurn_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WaitTurn_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_NPC_WaitTurn_C_ReceiveEndPlay");
static_assert(sizeof(SS_NPC_WaitTurn_C_ReceiveEndPlay) == 0x000008, "Wrong size on SS_NPC_WaitTurn_C_ReceiveEndPlay");
static_assert(offsetof(SS_NPC_WaitTurn_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_NPC_WaitTurn_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");

}

