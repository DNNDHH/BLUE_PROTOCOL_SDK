#pragma once

 

// Package: BP_TreasureBoxAuthor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_TreasureBoxAuthor.BP_TreasureBoxAuthor_C.UserConstructionScript
// 0x0248 (0x0248 - 0x0000)
struct BP_TreasureBoxAuthor_C_UserConstructionScript final
{
public:
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0000(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0014(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00B4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x013E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_808B[0x1];                                     // 0x013F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x01BC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_TreasureBoxAuthor_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_TreasureBoxAuthor_C_UserConstructionScript");
static_assert(sizeof(BP_TreasureBoxAuthor_C_UserConstructionScript) == 0x000248, "Wrong size on BP_TreasureBoxAuthor_C_UserConstructionScript");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, Temp_object_Variable) == 0x000000, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000010, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000011, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, K2Node_SwitchEnum_CmpSuccess) == 0x000012, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_IsEditor_ReturnValue) == 0x000013, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000014, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00009C, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_LineTraceSingle_OutHit) == 0x0000B4, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_LineTraceSingle_ReturnValue) == 0x00013C, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_bBlockingHit) == 0x00013D, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_bInitialOverlap) == 0x00013E, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_Time) == 0x000140, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_Distance) == 0x000144, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_Location) == 0x000148, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_ImpactPoint) == 0x000154, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_Normal) == 0x000160, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_ImpactNormal) == 0x00016C, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_PhysMat) == 0x000178, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_HitActor) == 0x000180, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_HitComponent) == 0x000188, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_HitBoneName) == 0x000190, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_HitItem) == 0x000198, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_ElementIndex) == 0x00019C, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_FaceIndex) == 0x0001A0, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_TraceStart) == 0x0001A4, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_BreakHitResult_TraceEnd) == 0x0001B0, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxAuthor_C_UserConstructionScript, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0001BC, "Member 'BP_TreasureBoxAuthor_C_UserConstructionScript::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

}

