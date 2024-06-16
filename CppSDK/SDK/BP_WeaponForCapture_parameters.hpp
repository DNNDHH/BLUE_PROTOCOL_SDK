#pragma once

 

// Package: BP_WeaponForCapture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_WeaponForCapture.BP_WeaponForCapture_C.ExecuteUbergraph_BP_WeaponForCapture
// 0x02D0 (0x02D0 - 0x0000)
struct BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91C1[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x008C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C2[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0118(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ASBWeapon*                              K2Node_CustomEvent_InWeapon;                       // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_InRotation;                     // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x01B4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x023C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture) == 0x000010, "Wrong alignment on BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture");
static_assert(sizeof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture) == 0x0002D0, "Wrong size on BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, EntryPoint) == 0x000000, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_GetSocketTransform_ReturnValue) == 0x000010, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakTransform_Location) == 0x000040, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakTransform_Rotation) == 0x00004C, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakTransform_Scale) == 0x000058, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakVector_X) == 0x000064, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakVector_Y) == 0x000068, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakVector_Z) == 0x00006C, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakVector_X_1) == 0x000070, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakVector_Y_1) == 0x000074, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_BreakVector_Z_1) == 0x000078, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00007C, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_MakeVector_ReturnValue) == 0x000080, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x00008C, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_IsValid_ReturnValue) == 0x000114, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000118, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, K2Node_CustomEvent_InWeapon) == 0x0001A0, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::K2Node_CustomEvent_InWeapon' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, K2Node_CustomEvent_InRotation) == 0x0001A8, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::K2Node_CustomEvent_InRotation' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0001B4, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x00023C, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture, CallFunc_IsValid_ReturnValue_1) == 0x0002C4, "Member 'BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_WeaponForCapture.BP_WeaponForCapture_C.SetWeaponMesh
// 0x0018 (0x0018 - 0x0000)
struct BP_WeaponForCapture_C_SetWeaponMesh final
{
public:
	class ASBWeapon*                              InWeapon;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InRotation;                                        // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_C_SetWeaponMesh) == 0x000008, "Wrong alignment on BP_WeaponForCapture_C_SetWeaponMesh");
static_assert(sizeof(BP_WeaponForCapture_C_SetWeaponMesh) == 0x000018, "Wrong size on BP_WeaponForCapture_C_SetWeaponMesh");
static_assert(offsetof(BP_WeaponForCapture_C_SetWeaponMesh, InWeapon) == 0x000000, "Member 'BP_WeaponForCapture_C_SetWeaponMesh::InWeapon' has a wrong offset!");
static_assert(offsetof(BP_WeaponForCapture_C_SetWeaponMesh, InRotation) == 0x000008, "Member 'BP_WeaponForCapture_C_SetWeaponMesh::InRotation' has a wrong offset!");

// Function BP_WeaponForCapture.BP_WeaponForCapture_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_WeaponForCapture_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponForCapture_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_WeaponForCapture_C_UserConstructionScript");
static_assert(sizeof(BP_WeaponForCapture_C_UserConstructionScript) == 0x000001, "Wrong size on BP_WeaponForCapture_C_UserConstructionScript");
static_assert(offsetof(BP_WeaponForCapture_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_WeaponForCapture_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

