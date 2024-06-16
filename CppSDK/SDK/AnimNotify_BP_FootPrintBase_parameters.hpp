#pragma once

 

// Package: AnimNotify_BP_FootPrintBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Received_Notify
// 0x0018 (0x0018 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_Received_Notify");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_Received_Notify) == 0x000018, "Wrong size on AnimNotify_BP_FootPrintBase_C_Received_Notify");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_BP_FootPrintBase_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_BP_FootPrintBase_C_Received_Notify::ReturnValue' has a wrong offset!");

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.CreateFootprint
// 0x0038 (0x0038 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_CreateFootprint final
{
public:
	class USBSurfaceFootprintSetting*             FootprintSetting;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBFootprintComponent*                  FPComponent;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         SurfaceType;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_CreateFootprint) == 0x000008, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_CreateFootprint");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_CreateFootprint) == 0x000038, "Wrong size on AnimNotify_BP_FootPrintBase_C_CreateFootprint");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_CreateFootprint, FootprintSetting) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_CreateFootprint::FootprintSetting' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_CreateFootprint, Actor) == 0x000008, "Member 'AnimNotify_BP_FootPrintBase_C_CreateFootprint::Actor' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_CreateFootprint, FPComponent) == 0x000010, "Member 'AnimNotify_BP_FootPrintBase_C_CreateFootprint::FPComponent' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_CreateFootprint, SurfaceType) == 0x000018, "Member 'AnimNotify_BP_FootPrintBase_C_CreateFootprint::SurfaceType' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_CreateFootprint, Location) == 0x00001C, "Member 'AnimNotify_BP_FootPrintBase_C_CreateFootprint::Location' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_CreateFootprint, Rotation) == 0x000028, "Member 'AnimNotify_BP_FootPrintBase_C_CreateFootprint::Rotation' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_CreateFootprint, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'AnimNotify_BP_FootPrintBase_C_CreateFootprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Proc
// 0x00D8 (0x00D8 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_Proc final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449C[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISBFootprintInterface> K2Node_DynamicCast_AsSBFootprint_Interface;        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEffectDeactivate_ReturnValue;           // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449D[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBFootprintComponent*                  CallFunc_GetFootprintComponent_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFootPrintType                                CallFunc_GetFootprintType_FootprintType;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449E[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSurfaceFootprintSetting*             CallFunc_GetFootprintSetting_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetSocketName_SocketName;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocomotion_ReturnValue;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449F[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_SocketRotationToParticleRotation_ParticleRotation; // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A0[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               K2Node_Select_Default;                             // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ParticleRotationToDecalRotation_DecalRotation; // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A1[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDefaultObject_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSurfaceFootprintSetting*             K2Node_DynamicCast_AsSBSurface_Footprint_Setting;  // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A2[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSurfaceFootprintSetting*             K2Node_Select_Default_1;                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_Proc) == 0x000008, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_Proc");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_Proc) == 0x0000D8, "Wrong size on AnimNotify_BP_FootPrintBase_C_Proc");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, MeshComp) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, Animation) == 0x000008, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetOwner_ReturnValue_1) == 0x000018, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_DynamicCast_AsSBEnemy_Character) == 0x000020, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00002C, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_DynamicCast_AsSBFootprint_Interface) == 0x000038, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_DynamicCast_AsSBFootprint_Interface' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_IsEffectDeactivate_ReturnValue) == 0x000049, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_IsEffectDeactivate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetFootprintComponent_ReturnValue) == 0x000050, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetFootprintComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetFootprintType_FootprintType) == 0x000058, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetFootprintType_FootprintType' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetFootprintSetting_ReturnValue) == 0x000060, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetFootprintSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetSocketName_SocketName) == 0x000068, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetSocketName_SocketName' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_IsLocomotion_ReturnValue) == 0x000070, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_IsLocomotion_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetSocketRotation_ReturnValue) == 0x000074, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_SocketRotationToParticleRotation_ParticleRotation) == 0x000080, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_SocketRotationToParticleRotation_ParticleRotation' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, Temp_bool_Variable) == 0x00008C, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, Temp_bool_Variable_1) == 0x00008D, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_Select_Default) == 0x000090, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_ParticleRotationToDecalRotation_DecalRotation) == 0x00009C, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_ParticleRotationToDecalRotation_DecalRotation' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_ComposeRotators_ReturnValue) == 0x0000A8, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, CallFunc_GetDefaultObject_ReturnValue) == 0x0000B8, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::CallFunc_GetDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_DynamicCast_AsSBSurface_Footprint_Setting) == 0x0000C0, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_DynamicCast_AsSBSurface_Footprint_Setting' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_Proc, K2Node_Select_Default_1) == 0x0000D0, "Member 'AnimNotify_BP_FootPrintBase_C_Proc::K2Node_Select_Default_1' has a wrong offset!");

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetFootprintType
// 0x0010 (0x0010 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_GetFootprintType final
{
public:
	class USBFootprintComponent*                  FPComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFootPrintType                                FootPrintType;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_GetFootprintType) == 0x000008, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_GetFootprintType");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_GetFootprintType) == 0x000010, "Wrong size on AnimNotify_BP_FootPrintBase_C_GetFootprintType");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetFootprintType, FPComponent) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_GetFootprintType::FPComponent' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetFootprintType, FootPrintType) == 0x000008, "Member 'AnimNotify_BP_FootPrintBase_C_GetFootprintType::FootPrintType' has a wrong offset!");

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetSocketName
// 0x0028 (0x0028 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_GetSocketName final
{
public:
	class USBFootprintComponent*                  FPComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_GetFootprintSocketName_ReturnValue;       // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_GetSocketName) == 0x000008, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_GetSocketName");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_GetSocketName) == 0x000028, "Wrong size on AnimNotify_BP_FootPrintBase_C_GetSocketName");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, FPComponent) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::FPComponent' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, SocketName) == 0x000008, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::SocketName' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, CallFunc_NotEqual_NameName_ReturnValue) == 0x000012, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, CallFunc_BooleanOR_ReturnValue) == 0x000013, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, CallFunc_GetFootprintSocketName_ReturnValue) == 0x000014, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::CallFunc_GetFootprintSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, CallFunc_Conv_StringToName_ReturnValue) == 0x00001C, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_GetSocketName, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000024, "Member 'AnimNotify_BP_FootPrintBase_C_GetSocketName::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableEffect
// 0x0001 (0x0001 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_IsDisableEffect final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_IsDisableEffect) == 0x000001, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_IsDisableEffect");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_IsDisableEffect) == 0x000001, "Wrong size on AnimNotify_BP_FootPrintBase_C_IsDisableEffect");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_IsDisableEffect, ReturnValue) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_IsDisableEffect::ReturnValue' has a wrong offset!");

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableSound
// 0x0001 (0x0001 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_IsDisableSound final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_IsDisableSound) == 0x000001, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_IsDisableSound");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_IsDisableSound) == 0x000001, "Wrong size on AnimNotify_BP_FootPrintBase_C_IsDisableSound");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_IsDisableSound, ReturnValue) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_IsDisableSound::ReturnValue' has a wrong offset!");

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsLocomotion
// 0x0001 (0x0001 - 0x0000)
struct AnimNotify_BP_FootPrintBase_C_IsLocomotion final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintBase_C_IsLocomotion) == 0x000001, "Wrong alignment on AnimNotify_BP_FootPrintBase_C_IsLocomotion");
static_assert(sizeof(AnimNotify_BP_FootPrintBase_C_IsLocomotion) == 0x000001, "Wrong size on AnimNotify_BP_FootPrintBase_C_IsLocomotion");
static_assert(offsetof(AnimNotify_BP_FootPrintBase_C_IsLocomotion, ReturnValue) == 0x000000, "Member 'AnimNotify_BP_FootPrintBase_C_IsLocomotion::ReturnValue' has a wrong offset!");

}

