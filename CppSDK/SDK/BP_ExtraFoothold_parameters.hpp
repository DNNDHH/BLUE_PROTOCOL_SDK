#pragma once

 

// Package: BP_ExtraFoothold

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ExtraFoothold.BP_ExtraFoothold_C.ExecuteUbergraph_BP_ExtraFoothold
// 0x03C0 (0x03C0 - 0x0000)
struct BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_456B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_456C[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_456D[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_456E[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0088(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_456F[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_SphereTraceSingleByProfile_OutHit;        // 0x0114(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingleByProfile_ReturnValue;   // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4570[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ConstParm, ReferenceParm)
	class ABP_PlayerCharacter_C*                  CallFunc_GetLocalPlayer_LocalPlayerCharacter;      // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4571[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  CallFunc_GetLocalPlayer_LocalPlayerCharacter_1;    // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4572[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanJump_ReturnValue;                      // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BadFallingSurvey_SetStep;                 // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4573[0x2];                                     // 0x01D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_ExtraFoothold_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x01D8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4574[0x3];                                     // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4575[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x01F8(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_SphereTraceSingleByProfile_OutHit_1;      // 0x0208(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingleByProfile_ReturnValue_1; // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0293(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerAerialAttacking_ReturnValue;      // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDemoPlaying_ReturnValue;                // 0x029B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4576[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable_2;                            // 0x02A0(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x02B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerAerialAttacking_ReturnValue_1;    // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x033B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakHitResult_Time;                      // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0344(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0350(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x035C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0368(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4577[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0388(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerExtraFootHoldValid_ReturnValue;   // 0x03BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x03BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x03BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold) == 0x000008, "Wrong alignment on BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold");
static_assert(sizeof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold) == 0x0003C0, "Wrong size on BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, EntryPoint) == 0x000000, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, Temp_object_Variable) == 0x000008, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsFalling_ReturnValue) == 0x000019, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakVector_X) == 0x00001C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakVector_Y) == 0x000020, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakVector_Z) == 0x000024, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_InRange_FloatFloat_ReturnValue) == 0x000029, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsValid_ReturnValue_2) == 0x00002A, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x00002C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Add_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_MakeVector_ReturnValue) == 0x000040, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00004C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Add_VectorVector_ReturnValue) == 0x000058, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000064, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000070, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000080, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000088, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000110, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_SphereTraceSingleByProfile_OutHit) == 0x000114, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_SphereTraceSingleByProfile_OutHit' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_SphereTraceSingleByProfile_ReturnValue) == 0x00019C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_SphereTraceSingleByProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, K2Node_MakeArray_Array) == 0x0001A0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_GetLocalPlayer_LocalPlayerCharacter) == 0x0001B0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_GetLocalPlayer_LocalPlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0001B8, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_GetLocalPlayer_LocalPlayerCharacter_1) == 0x0001C0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_GetLocalPlayer_LocalPlayerCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_FMin_ReturnValue) == 0x0001C8, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsValid_ReturnValue_3) == 0x0001CC, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0001D0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_CanJump_ReturnValue) == 0x0001D4, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_CanJump_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BadFallingSurvey_SetStep) == 0x0001D5, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BadFallingSurvey_SetStep' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_GetAllActorsOfClass_OutActors) == 0x0001D8, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Array_Length_ReturnValue) == 0x0001E8, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Greater_IntInt_ReturnValue) == 0x0001EC, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, K2Node_Event_DeltaSeconds) == 0x0001F0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, Temp_object_Variable_1) == 0x0001F8, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_SphereTraceSingleByProfile_OutHit_1) == 0x000208, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_SphereTraceSingleByProfile_OutHit_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_SphereTraceSingleByProfile_ReturnValue_1) == 0x000290, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_SphereTraceSingleByProfile_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BooleanOR_ReturnValue) == 0x000291, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000292, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000293, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000294, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsDedicatedServer_ReturnValue) == 0x000298, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000299, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsPlayerAerialAttacking_ReturnValue) == 0x00029A, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsPlayerAerialAttacking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsDemoPlaying_ReturnValue) == 0x00029B, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsDemoPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, Temp_object_Variable_2) == 0x0002A0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0002B0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000338, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsPlayerAerialAttacking_ReturnValue_1) == 0x000339, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsPlayerAerialAttacking_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_bBlockingHit) == 0x00033A, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_bInitialOverlap) == 0x00033B, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_Time) == 0x00033C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_Distance) == 0x000340, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_Location) == 0x000344, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_ImpactPoint) == 0x000350, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_Normal) == 0x00035C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_ImpactNormal) == 0x000368, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_PhysMat) == 0x000378, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_HitActor) == 0x000380, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_HitComponent) == 0x000388, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_HitBoneName) == 0x000390, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_HitItem) == 0x000398, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_ElementIndex) == 0x00039C, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_FaceIndex) == 0x0003A0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_TraceStart) == 0x0003A4, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_BreakHitResult_TraceEnd) == 0x0003B0, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0003BC, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsPlayerExtraFootHoldValid_ReturnValue) == 0x0003BD, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsPlayerExtraFootHoldValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsValid_ReturnValue_4) == 0x0003BE, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0003BF, "Member 'BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");

// Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ExtraFoothold_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtraFoothold_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ExtraFoothold_C_ReceiveTick");
static_assert(sizeof(BP_ExtraFoothold_C_ReceiveTick) == 0x000004, "Wrong size on BP_ExtraFoothold_C_ReceiveTick");
static_assert(offsetof(BP_ExtraFoothold_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ExtraFoothold_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ExtraFoothold.BP_ExtraFoothold_C.GetLocalPlayer
// 0x0038 (0x0038 - 0x0000)
struct BP_ExtraFoothold_C_GetLocalPlayer final
{
public:
	class ABP_PlayerCharacter_C*                  LocalPlayerCharacter;                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewLocalVar_0;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4578[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerCharacter_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class ABP_PlayerCharacter_C*                  CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ExtraFoothold_C_GetLocalPlayer) == 0x000008, "Wrong alignment on BP_ExtraFoothold_C_GetLocalPlayer");
static_assert(sizeof(BP_ExtraFoothold_C_GetLocalPlayer) == 0x000038, "Wrong size on BP_ExtraFoothold_C_GetLocalPlayer");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, LocalPlayerCharacter) == 0x000000, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::LocalPlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, NewLocalVar_0) == 0x000008, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_GetLocalPlayer, CallFunc_IsLocallyControlled_ReturnValue) == 0x000035, "Member 'BP_ExtraFoothold_C_GetLocalPlayer::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

// Function BP_ExtraFoothold.BP_ExtraFoothold_C.BadFallingSurvey
// 0x00A8 (0x00A8 - 0x0000)
struct BP_ExtraFoothold_C_BadFallingSurvey final
{
public:
	bool                                          SetStep;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4579[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PassCount;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpFallCheckIndex;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpFallCheckTime;                                  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpHeight;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457A[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457B[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457C[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457D[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457E[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_457F[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanJump_ReturnValue;                      // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4580[0x1];                                     // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtraFoothold_C_BadFallingSurvey) == 0x000004, "Wrong alignment on BP_ExtraFoothold_C_BadFallingSurvey");
static_assert(sizeof(BP_ExtraFoothold_C_BadFallingSurvey) == 0x0000A8, "Wrong size on BP_ExtraFoothold_C_BadFallingSurvey");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, SetStep) == 0x000000, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::SetStep' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, PassCount) == 0x000004, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::PassCount' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, TmpFallCheckIndex) == 0x000008, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::TmpFallCheckIndex' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, TmpFallCheckTime) == 0x00000C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::TmpFallCheckTime' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, TmpHeight) == 0x000010, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::TmpHeight' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, Temp_int_Variable) == 0x000014, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, Temp_bool_Variable) == 0x00001C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, Temp_bool_Variable_1) == 0x00001E, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, Temp_int_Variable_1) == 0x000020, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Not_PreBool_ReturnValue_1) == 0x000028, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Add_IntInt_ReturnValue_2) == 0x00002C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000031, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Add_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_MakeVector2D_ReturnValue) == 0x000038, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000040, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_FTrunc_ReturnValue) == 0x000044, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000048, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x00004C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00005C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Array_Length_ReturnValue_1) == 0x000060, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_BooleanAND_ReturnValue_1) == 0x000064, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Greater_IntInt_ReturnValue) == 0x000065, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00006C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_BreakVector2D_X) == 0x000074, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_BreakVector2D_Y) == 0x000078, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00007C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000080, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Abs_ReturnValue) == 0x000084, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000088, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Less_FloatFloat_ReturnValue) == 0x000089, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_CanJump_ReturnValue) == 0x00008A, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_CanJump_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00008C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_BreakVector_X) == 0x000098, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_BreakVector_Y) == 0x00009C, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_BreakVector_Z) == 0x0000A0, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ExtraFoothold_C_BadFallingSurvey, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000A4, "Member 'BP_ExtraFoothold_C_BadFallingSurvey::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");

}

