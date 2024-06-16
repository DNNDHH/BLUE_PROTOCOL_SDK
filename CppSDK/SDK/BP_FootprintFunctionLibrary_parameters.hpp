#pragma once

 

// Package: BP_FootprintFunctionLibrary

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.SocketRotationToParticleRotation
// 0x0060 (0x0060 - 0x0000)
struct BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation final
{
public:
	struct FRotator                               SocketRotation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_514B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ParticleRotation;                                  // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotatorFromVectorDirection_ReturnValue; // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation) == 0x000008, "Wrong alignment on BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation");
static_assert(sizeof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation) == 0x000060, "Wrong size on BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, SocketRotation) == 0x000000, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::SocketRotation' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, __WorldContext) == 0x000010, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, ParticleRotation) == 0x000018, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::ParticleRotation' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, CallFunc_GetRightVector_ReturnValue) == 0x000024, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000030, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, CallFunc_GetRotatorFromVectorDirection_ReturnValue) == 0x00003C, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::CallFunc_GetRotatorFromVectorDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, CallFunc_BreakRotator_Roll) == 0x000048, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, CallFunc_BreakRotator_Pitch) == 0x00004C, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, CallFunc_BreakRotator_Yaw) == 0x000050, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation, CallFunc_MakeRotator_ReturnValue) == 0x000054, "Member 'BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");

// Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.ParticleRotationToDecalRotation
// 0x0060 (0x0060 - 0x0000)
struct BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation final
{
public:
	struct FRotator                               ParticleRotation;                                  // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseActorRotation;                                 // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_514C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DecalRotation;                                     // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue_1;            // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation) == 0x000008, "Wrong alignment on BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation");
static_assert(sizeof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation) == 0x000060, "Wrong size on BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, ParticleRotation) == 0x000000, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::ParticleRotation' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, bUseActorRotation) == 0x00000C, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::bUseActorRotation' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, Actor) == 0x000010, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::Actor' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, __WorldContext) == 0x000018, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, DecalRotation) == 0x000020, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::DecalRotation' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00002C, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, CallFunc_MakeRotator_ReturnValue) == 0x000038, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, CallFunc_ComposeRotators_ReturnValue) == 0x000044, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation, CallFunc_ComposeRotators_ReturnValue_1) == 0x000050, "Member 'BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation::CallFunc_ComposeRotators_ReturnValue_1' has a wrong offset!");

}

