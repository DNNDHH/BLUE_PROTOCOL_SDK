#pragma once

 

// Package: BP_EF_Comp_GroundHit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleSpawn
// 0x0240 (0x0240 - 0x0000)
struct BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn final
{
public:
	class USceneComponent*                        EffectComp;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialLifeTime;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AttackCollision;                                   // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CollisionScale;                                    // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F85[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F86[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00A8(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_Divide_VectorVector_ReturnValue;          // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x00C4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F87[0x1];                                     // 0x014F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSpawnEmitterAtLocationParam         K2Node_MakeStruct_SBSpawnEmitterAtLocationParam;   // 0x01D8(0x0048)(NoDestructor)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F88[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn) == 0x000008, "Wrong alignment on BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn");
static_assert(sizeof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn) == 0x000240, "Wrong size on BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, EffectComp) == 0x000000, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::EffectComp' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, InitialLifeTime) == 0x000008, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::InitialLifeTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, AttackCollision) == 0x00000C, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::AttackCollision' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CollisionScale) == 0x000018, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CollisionScale' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000024, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakVector_X) == 0x000030, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakVector_Y) == 0x000034, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakVector_Z) == 0x000038, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00003C, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000048, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, Temp_bool_Has_Been_Initd_Variable) == 0x000054, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_MakeVector_ReturnValue_1) == 0x00006C, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, K2Node_MakeArray_Array) == 0x000078, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_Add_VectorVector_ReturnValue) == 0x000088, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000094, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, Temp_bool_IsClosed_Variable) == 0x0000A0, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, Temp_object_Variable) == 0x0000A8, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_Divide_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_Divide_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0000C4, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x00014C, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_bBlockingHit) == 0x00014D, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_bInitialOverlap) == 0x00014E, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_Time) == 0x000150, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_Distance) == 0x000154, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_Location) == 0x000158, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_ImpactPoint) == 0x000164, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_Normal) == 0x000170, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_ImpactNormal) == 0x00017C, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_PhysMat) == 0x000188, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_HitActor) == 0x000190, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_HitComponent) == 0x000198, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_HitBoneName) == 0x0001A0, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_HitItem) == 0x0001A8, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_ElementIndex) == 0x0001AC, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_FaceIndex) == 0x0001B0, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_TraceStart) == 0x0001B4, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakHitResult_TraceEnd) == 0x0001C0, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakVector_X_1) == 0x0001CC, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakVector_Y_1) == 0x0001D0, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_BreakVector_Z_1) == 0x0001D4, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, K2Node_MakeStruct_SBSpawnEmitterAtLocationParam) == 0x0001D8, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::K2Node_MakeStruct_SBSpawnEmitterAtLocationParam' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000220, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000230, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn, CallFunc_Array_Add_ReturnValue) == 0x000238, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleEndCTRL
// 0x0008 (0x0008 - 0x0000)
struct BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL final
{
public:
	class USceneComponent*                        EffectComp;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL) == 0x000008, "Wrong alignment on BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL");
static_assert(sizeof(BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL) == 0x000008, "Wrong size on BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL, EffectComp) == 0x000000, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL::EffectComp' has a wrong offset!");

// Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleCTRL
// 0x0018 (0x0018 - 0x0000)
struct BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL final
{
public:
	struct FVector                                Scale;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL) == 0x000004, "Wrong alignment on BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL");
static_assert(sizeof(BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL) == 0x000018, "Wrong size on BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL, Scale) == 0x000000, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL::Scale' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL, CallFunc_Multiply_VectorVector_ReturnValue) == 0x00000C, "Member 'BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");

}

