#pragma once

 

// Package: BP_EF_Set

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EF_Set.BP_EF_Set_C.ExecuteUbergraph_BP_EF_Set
// 0x0320 (0x0320 - 0x0000)
struct BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          CallFunc_GetEffectVisibleType_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CC1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackCollisionScale_ReturnValue;      // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackCollision_ReturnValue;           // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInitialLifeTime_ReturnValue;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          CallFunc_GetEffectVisibleType_ReturnValue_1;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CC2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDecalComponent*>                CallFunc_SpawnDecal_DecalComponent;                // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         CallFunc_SpawnDecal_DestroyOderTime;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpawnDecal_DestroyGrace;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CC3[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC4[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetAttackCollisionScale_ReturnValue_1;    // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackCollision_ReturnValue_1;         // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInitialLifeTime_ReturnValue_1;         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ParticleSpawn_DestroyOrderTime;           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackCollisionScale_ReturnValue_2;    // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackCollision_ReturnValue_2;         // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInitialLifeTime_ReturnValue_2;         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CC5[0x8];                                     // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00B0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x00E0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EF_BPSet_SpawnGround_Point_C*       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC6[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0124(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x01AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC7[0x2];                                     // 0x01AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_2;               // 0x01B0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_3;        // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_Scale;                                // 0x0210(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bForce;                               // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CC8[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6CC9[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0238(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CCA[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAttackCollision_ReturnValue_3;         // 0x024C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInitialLifeTime_ReturnValue_3;         // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShouldExecOnClientOnly_IsExec;          // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CCB[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EF_BPSet_SpawnGround_Circle_Square_C* CallFunc_FinishSpawningActor_ReturnValue_4;        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CCC[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetInitialLifeTime_ReturnValue_4;         // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult_1;    // 0x0288(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue_1;       // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CCD[0x3];                                     // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetInitialLifeTime_ReturnValue_5;         // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          CallFunc_GetEffectVisibleType_ReturnValue_2;       // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set) == 0x000010, "Wrong alignment on BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set");
static_assert(sizeof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set) == 0x000320, "Wrong size on BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, EntryPoint) == 0x000000, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetEffectVisibleType_ReturnValue) == 0x000004, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetEffectVisibleType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetAttackCollisionScale_ReturnValue) == 0x000010, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetAttackCollisionScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetAttackCollision_ReturnValue) == 0x00001C, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetAttackCollision_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetInitialLifeTime_ReturnValue) == 0x000028, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetInitialLifeTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetEffectVisibleType_ReturnValue_1) == 0x000030, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetEffectVisibleType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_SpawnDecal_DecalComponent) == 0x000038, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_SpawnDecal_DecalComponent' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_SpawnDecal_DestroyOderTime) == 0x000048, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_SpawnDecal_DestroyOderTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_SpawnDecal_DestroyGrace) == 0x00004C, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_SpawnDecal_DestroyGrace' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Add_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_IsValid_ReturnValue) == 0x000065, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetAttackCollisionScale_ReturnValue_1) == 0x000068, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetAttackCollisionScale_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetAttackCollision_ReturnValue_1) == 0x000074, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetAttackCollision_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetInitialLifeTime_ReturnValue_1) == 0x000080, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetInitialLifeTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_ParticleSpawn_DestroyOrderTime) == 0x000084, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_ParticleSpawn_DestroyOrderTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetAttackCollisionScale_ReturnValue_2) == 0x000088, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetAttackCollisionScale_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetAttackCollision_ReturnValue_2) == 0x000094, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetAttackCollision_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetInitialLifeTime_ReturnValue_2) == 0x0000A0, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetInitialLifeTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, K2Node_Event_DeltaSeconds) == 0x0000A4, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetTransform_ReturnValue) == 0x0000B0, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetTransform_ReturnValue_1) == 0x0000E0, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000110, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_FinishSpawningActor_ReturnValue) == 0x000118, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000124, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001AC, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Less_FloatFloat_ReturnValue) == 0x0001AD, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetTransform_ReturnValue_2) == 0x0001B0, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0001E0, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x0001E8, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0001F0, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x0001F8, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3) == 0x000200, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_FinishSpawningActor_ReturnValue_3) == 0x000208, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_FinishSpawningActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, K2Node_Event_Scale) == 0x000210, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::K2Node_Event_Scale' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00021C, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, K2Node_Event_bForce) == 0x000220, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::K2Node_Event_bForce' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, K2Node_CreateDelegate_OutputDelegate) == 0x000224, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000238, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_FMax_ReturnValue) == 0x000240, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000244, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000248, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetAttackCollision_ReturnValue_3) == 0x00024C, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetAttackCollision_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x000258, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetInitialLifeTime_ReturnValue_3) == 0x00025C, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetInitialLifeTime_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_IsShouldExecOnClientOnly_IsExec) == 0x000260, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_IsShouldExecOnClientOnly_IsExec' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetOwner_ReturnValue) == 0x000268, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4) == 0x000270, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_FinishSpawningActor_ReturnValue_4) == 0x000278, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_FinishSpawningActor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_IsValid_ReturnValue_2) == 0x000280, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetInitialLifeTime_ReturnValue_4) == 0x000284, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetInitialLifeTime_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_K2_SetActorTransform_SweepHitResult_1) == 0x000288, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_K2_SetActorTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_K2_SetActorTransform_ReturnValue_1) == 0x000310, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_K2_SetActorTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetInitialLifeTime_ReturnValue_5) == 0x000314, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetInitialLifeTime_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set, CallFunc_GetEffectVisibleType_ReturnValue_2) == 0x000318, "Member 'BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set::CallFunc_GetEffectVisibleType_ReturnValue_2' has a wrong offset!");

// Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyPrepareDestroy
// 0x0001 (0x0001 - 0x0000)
struct BP_EF_Set_C_ReceiveNotifyPrepareDestroy final
{
public:
	bool                                          bForce;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Set_C_ReceiveNotifyPrepareDestroy) == 0x000001, "Wrong alignment on BP_EF_Set_C_ReceiveNotifyPrepareDestroy");
static_assert(sizeof(BP_EF_Set_C_ReceiveNotifyPrepareDestroy) == 0x000001, "Wrong size on BP_EF_Set_C_ReceiveNotifyPrepareDestroy");
static_assert(offsetof(BP_EF_Set_C_ReceiveNotifyPrepareDestroy, bForce) == 0x000000, "Member 'BP_EF_Set_C_ReceiveNotifyPrepareDestroy::bForce' has a wrong offset!");

// Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyUpdateAttackCollisionScale
// 0x000C (0x000C - 0x0000)
struct BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale final
{
public:
	struct FVector                                Scale;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale) == 0x000004, "Wrong alignment on BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale");
static_assert(sizeof(BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale) == 0x00000C, "Wrong size on BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale");
static_assert(offsetof(BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale, Scale) == 0x000000, "Member 'BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale::Scale' has a wrong offset!");

// Function BP_EF_Set.BP_EF_Set_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EF_Set_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Set_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EF_Set_C_ReceiveTick");
static_assert(sizeof(BP_EF_Set_C_ReceiveTick) == 0x000004, "Wrong size on BP_EF_Set_C_ReceiveTick");
static_assert(offsetof(BP_EF_Set_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EF_Set_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

