#pragma once

 

// Package: BP_EF_Comp_Particle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ExecuteUbergraph_BP_EF_Comp_Particle
// 0x0040 (0x0040 - 0x0000)
struct BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F76[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEffectValueComponent*                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBEffectControlInterface> K2Node_DynamicCast_AsSBEffect_Control_Interface;   // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F77[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEffectValueComponent*                CallFunc_GetEffectValueComponent_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          CallFunc_GetEffectVisibleTypeOnValueComp_ReturnValue; // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle) == 0x000008, "Wrong alignment on BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle");
static_assert(sizeof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle) == 0x000040, "Wrong size on BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, EntryPoint) == 0x000000, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, Temp_object_Variable) == 0x000010, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, K2Node_DynamicCast_AsSBEffect_Control_Interface) == 0x000018, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::K2Node_DynamicCast_AsSBEffect_Control_Interface' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, CallFunc_GetEffectValueComponent_ReturnValue) == 0x000030, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::CallFunc_GetEffectValueComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, CallFunc_GetEffectVisibleTypeOnValueComp_ReturnValue) == 0x000038, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::CallFunc_GetEffectVisibleTypeOnValueComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleSpawn
// 0x0150 (0x0150 - 0x0000)
struct BP_EF_Comp_Particle_C_ParticleSpawn final
{
public:
	class USceneComponent*                        EffectComp;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialLifeTime;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AttackCollision;                                   // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CollisionScale;                                    // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DestroyOrderTime;                                  // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F78[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F79[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F7A[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSpawnEmitterAttachedParam           K2Node_MakeStruct_SBSpawnEmitterAttachedParam;     // 0x0048(0x0060)(NoDestructor, ContainsInstancedReference)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorVector_ReturnValue;          // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSpawnEmitterAttachedParam           K2Node_MakeStruct_SBSpawnEmitterAttachedParam_1;   // 0x00D8(0x0060)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F7B[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_Particle_C_ParticleSpawn) == 0x000008, "Wrong alignment on BP_EF_Comp_Particle_C_ParticleSpawn");
static_assert(sizeof(BP_EF_Comp_Particle_C_ParticleSpawn) == 0x000150, "Wrong size on BP_EF_Comp_Particle_C_ParticleSpawn");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, EffectComp) == 0x000000, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::EffectComp' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, InitialLifeTime) == 0x000008, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::InitialLifeTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, AttackCollision) == 0x00000C, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::AttackCollision' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CollisionScale) == 0x000018, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CollisionScale' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, DestroyOrderTime) == 0x000024, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::DestroyOrderTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000028, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000034, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, Temp_int_Variable) == 0x000038, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, K2Node_MakeStruct_SBSpawnEmitterAttachedParam) == 0x000048, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::K2Node_MakeStruct_SBSpawnEmitterAttachedParam' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000A8, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_Array_Add_ReturnValue) == 0x0000B0, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_Divide_VectorVector_ReturnValue) == 0x0000B4, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_Divide_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_BreakVector_X) == 0x0000C0, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_BreakVector_Y) == 0x0000C4, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_BreakVector_Z) == 0x0000C8, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0000CC, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, K2Node_MakeStruct_SBSpawnEmitterAttachedParam_1) == 0x0000D8, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::K2Node_MakeStruct_SBSpawnEmitterAttachedParam_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_IsValid_ReturnValue_1) == 0x000138, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000140, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleSpawn, CallFunc_Array_Add_ReturnValue_1) == 0x000148, "Member 'BP_EF_Comp_Particle_C_ParticleSpawn::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleEndCTRL
// 0x0098 (0x0098 - 0x0000)
struct BP_EF_Comp_Particle_C_ParticleEndCTRL final
{
public:
	class USceneComponent*                        EffectComp;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F7C[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F7D[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSpawnEmitterAttachedParam           K2Node_MakeStruct_SBSpawnEmitterAttachedParam;     // 0x0030(0x0060)(NoDestructor, ContainsInstancedReference)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_Particle_C_ParticleEndCTRL) == 0x000008, "Wrong alignment on BP_EF_Comp_Particle_C_ParticleEndCTRL");
static_assert(sizeof(BP_EF_Comp_Particle_C_ParticleEndCTRL) == 0x000098, "Wrong size on BP_EF_Comp_Particle_C_ParticleEndCTRL");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, EffectComp) == 0x000000, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::EffectComp' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, Temp_int_Variable) == 0x000014, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_IsValid_ReturnValue_1) == 0x00002D, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, K2Node_MakeStruct_SBSpawnEmitterAttachedParam) == 0x000030, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::K2Node_MakeStruct_SBSpawnEmitterAttachedParam' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleEndCTRL, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000090, "Member 'BP_EF_Comp_Particle_C_ParticleEndCTRL::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleScaleCTRL
// 0x0038 (0x0038 - 0x0000)
struct BP_EF_Comp_Particle_C_ParticleScaleCTRL final
{
public:
	struct FVector                                Scale;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F7E[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Comp_Particle_C_ParticleScaleCTRL) == 0x000008, "Wrong alignment on BP_EF_Comp_Particle_C_ParticleScaleCTRL");
static_assert(sizeof(BP_EF_Comp_Particle_C_ParticleScaleCTRL) == 0x000038, "Wrong size on BP_EF_Comp_Particle_C_ParticleScaleCTRL");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, Scale) == 0x000000, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::Scale' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000020, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Particle_C_ParticleScaleCTRL, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_EF_Comp_Particle_C_ParticleScaleCTRL::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

