#pragma once

 

// Package: BP_SBPhotoModePlayerControlData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.ExecuteUbergraph_BP_SBPhotoModePlayerControlData
// 0x0018 (0x0018 - 0x0000)
struct BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D90[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InParent;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInCopyPose;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData) == 0x000008, "Wrong alignment on BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData");
static_assert(sizeof(BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData) == 0x000018, "Wrong size on BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData, EntryPoint) == 0x000000, "Member 'BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData, K2Node_Event_InParent) == 0x000008, "Member 'BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData::K2Node_Event_InParent' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData, K2Node_Event_bInCopyPose) == 0x000010, "Member 'BP_SBPhotoModePlayerControlData_C_ExecuteUbergraph_BP_SBPhotoModePlayerControlData::K2Node_Event_bInCopyPose' has a wrong offset!");

// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.BP_CreateCloneCharacter
// 0x0010 (0x0010 - 0x0000)
struct BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter final
{
public:
	class UObject*                                InParent;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInCopyPose;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter) == 0x000008, "Wrong alignment on BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter");
static_assert(sizeof(BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter) == 0x000010, "Wrong size on BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter, InParent) == 0x000000, "Member 'BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter::InParent' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter, bInCopyPose) == 0x000008, "Member 'BP_SBPhotoModePlayerControlData_C_BP_CreateCloneCharacter::bInCopyPose' has a wrong offset!");

// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.SetPlayerHidden
// 0x0030 (0x0030 - 0x0000)
struct BP_SBPhotoModePlayerControlData_C_SetPlayerHidden final
{
public:
	bool                                          bIsHidden;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D91[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBActorVisibilityInterface> CallFunc_GetActorVisibilityComponent_self_CastInput; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBActorVisibilityComponent*            CallFunc_GetActorVisibilityComponent_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModePlayerControlData_C_SetPlayerHidden) == 0x000008, "Wrong alignment on BP_SBPhotoModePlayerControlData_C_SetPlayerHidden");
static_assert(sizeof(BP_SBPhotoModePlayerControlData_C_SetPlayerHidden) == 0x000030, "Wrong size on BP_SBPhotoModePlayerControlData_C_SetPlayerHidden");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_SetPlayerHidden, bIsHidden) == 0x000000, "Member 'BP_SBPhotoModePlayerControlData_C_SetPlayerHidden::bIsHidden' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_SetPlayerHidden, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'BP_SBPhotoModePlayerControlData_C_SetPlayerHidden::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_SetPlayerHidden, CallFunc_GetActorVisibilityComponent_self_CastInput) == 0x000010, "Member 'BP_SBPhotoModePlayerControlData_C_SetPlayerHidden::CallFunc_GetActorVisibilityComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_SetPlayerHidden, CallFunc_GetActorVisibilityComponent_ReturnValue) == 0x000020, "Member 'BP_SBPhotoModePlayerControlData_C_SetPlayerHidden::CallFunc_GetActorVisibilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_SetPlayerHidden, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_SBPhotoModePlayerControlData_C_SetPlayerHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.CreateCloneCharacter
// 0x0420 (0x0420 - 0x0000)
struct BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter final
{
public:
	class UObject*                                InParent;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInCopyPose;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D92[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           WorkAnimTags;                                      // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          bWorkCopyPose;                                     // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D93[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                WorkLocation;                                      // 0x0024(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 WorkMeshList;                                      // 0x0030(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class ABP_PlayerSceneCapture2D_C*             WorkCc;                                            // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     WorkPc;                                            // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D94[0xF];                                     // 0x0051(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0060(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class ABP_SBPhotoModeController_C*            K2Node_DynamicCast_AsBP_SBPhoto_Mode_Controller;   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D95[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             CallFunc_SpawnBpPlayerSceneCapture2d_ReturnValue;  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D96[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_Array_Get_Item;                           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D97[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                 CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x00D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCharacterMovementComponent*            K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponVisibility_ReturnValue;          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D98[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPale_ReturnValue;                      // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBlush_ReturnValue;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D99[0x2];                                     // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetAnimTags_ReturnValue;                  // 0x00F8(0x0010)(ReferenceParm)
	class USBWeaponVisibilityComponent*           CallFunc_GetWeaponVisibilityComponent_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOptionHidden_ReturnValue;               // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9A[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLastEmoteStateName_ReturnValue;        // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9B[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharaCreateCharacter*                CallFunc_GetCloneCharacter_ReturnValue;            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9C[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9D[0x2];                                     // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9E[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOriginalPlayerData_ReturnValue;         // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D9F[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Vector_Down_ReturnValue;                  // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetLastEmoteName_ReturnValue;             // 0x017C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableFacial_ReturnValue;               // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFacialType                                 CallFunc_GetFacialType_ReturnValue;                // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0194(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x01A0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFacialType                                 CallFunc_GetBaseFacialType_ReturnValue;            // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA0[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue_1;       // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DA1[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterMovementComponent*            K2Node_DynamicCast_AsCharacter_Movement_Component_1; // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA2[0x2];                                     // 0x01FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x01FC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0285(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0286(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA3[0x1];                                     // 0x0287(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0290(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x029C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x02A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x02B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x02EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0304(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA4[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x0390(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter) == 0x000010, "Wrong alignment on BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter");
static_assert(sizeof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter) == 0x000420, "Wrong size on BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, InParent) == 0x000000, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::InParent' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, bInCopyPose) == 0x000008, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::bInCopyPose' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, WorkAnimTags) == 0x000010, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::WorkAnimTags' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, bWorkCopyPose) == 0x000020, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::bWorkCopyPose' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, WorkLocation) == 0x000024, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::WorkLocation' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, WorkMeshList) == 0x000030, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::WorkMeshList' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, WorkCc) == 0x000040, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::WorkCc' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, WorkPc) == 0x000048, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::WorkPc' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetTransform_ReturnValue) == 0x000060, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_AsBP_SBPhoto_Mode_Controller) == 0x000090, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_AsBP_SBPhoto_Mode_Controller' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_SpawnBpPlayerSceneCapture2d_ReturnValue) == 0x0000A0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_SpawnBpPlayerSceneCapture2d_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, Temp_int_Loop_Counter_Variable) == 0x0000A8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetMovementComponent_ReturnValue) == 0x0000C8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x0000D0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_AsCharacter_Movement_Component) == 0x0000E0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_AsCharacter_Movement_Component' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetWeaponVisibility_ReturnValue) == 0x0000E9, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetWeaponVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetPale_ReturnValue) == 0x0000EC, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetPale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetBlush_ReturnValue) == 0x0000F0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetBlush_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BooleanAND_ReturnValue) == 0x0000F4, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsValid_ReturnValue_1) == 0x0000F5, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetAnimTags_ReturnValue) == 0x0000F8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetAnimTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetWeaponVisibilityComponent_ReturnValue) == 0x000108, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetWeaponVisibilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsOptionHidden_ReturnValue) == 0x000110, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsOptionHidden_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetLastEmoteStateName_ReturnValue) == 0x000118, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetLastEmoteStateName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Not_PreBool_ReturnValue) == 0x000128, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsEmpty_ReturnValue) == 0x000129, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetCloneCharacter_ReturnValue) == 0x000130, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetCloneCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsValid_ReturnValue_2) == 0x000138, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000139, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000140, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_bSuccess_2) == 0x000148, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000149, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Array_Length_ReturnValue_1) == 0x00014C, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x000150, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000151, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BooleanAND_ReturnValue_1) == 0x000152, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BooleanAND_ReturnValue_2) == 0x000153, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000158, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsOriginalPlayerData_ReturnValue) == 0x000160, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsOriginalPlayerData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Vector_Down_ReturnValue) == 0x000164, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Vector_Down_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000170, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetLastEmoteName_ReturnValue) == 0x00017C, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetLastEmoteName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_Add_VectorVector_ReturnValue) == 0x000184, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsEnableFacial_ReturnValue) == 0x000190, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsEnableFacial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetFacialType_ReturnValue) == 0x000191, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetFacialType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsValid_ReturnValue_3) == 0x000192, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsValid_ReturnValue_4) == 0x000193, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000194, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetTransform_ReturnValue_1) == 0x0001A0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsFalling_ReturnValue) == 0x0001D0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsValid_ReturnValue_5) == 0x0001D1, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetBaseFacialType_ReturnValue) == 0x0001D2, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetBaseFacialType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_IsVisible_ReturnValue) == 0x0001D3, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_GetMovementComponent_ReturnValue_1) == 0x0001D8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_GetMovementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001E0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_AsCharacter_Movement_Component_1) == 0x0001F0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_AsCharacter_Movement_Component_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, K2Node_DynamicCast_bSuccess_3) == 0x0001F8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001F9, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001FC, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000284, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_bBlockingHit) == 0x000285, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_bInitialOverlap) == 0x000286, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_Time) == 0x000288, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_Distance) == 0x00028C, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_Location) == 0x000290, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_ImpactPoint) == 0x00029C, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_Normal) == 0x0002A8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_ImpactNormal) == 0x0002B4, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_PhysMat) == 0x0002C0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_HitActor) == 0x0002C8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_HitComponent) == 0x0002D0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_HitBoneName) == 0x0002D8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_HitItem) == 0x0002E0, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_ElementIndex) == 0x0002E4, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_FaceIndex) == 0x0002E8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_TraceStart) == 0x0002EC, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_BreakHitResult_TraceEnd) == 0x0002F8, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000304, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_SetActorTransform_ReturnValue) == 0x00038C, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x000390, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000418, "Member 'BP_SBPhotoModePlayerControlData_C_CreateCloneCharacter::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");

// Function BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C.OnChangeWeaponVisibility
// 0x0020 (0x0020 - 0x0000)
struct BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility final
{
public:
	bool                                          CallFunc_GetWeaponVisibility_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharaCreateCharacter*                CallFunc_GetCloneCharacter_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility) == 0x000008, "Wrong alignment on BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility");
static_assert(sizeof(BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility) == 0x000020, "Wrong size on BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility, CallFunc_GetWeaponVisibility_ReturnValue) == 0x000000, "Member 'BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility::CallFunc_GetWeaponVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility, CallFunc_GetCloneCharacter_ReturnValue) == 0x000008, "Member 'BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility::CallFunc_GetCloneCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000010, "Member 'BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_SBPhotoModePlayerControlData_C_OnChangeWeaponVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

