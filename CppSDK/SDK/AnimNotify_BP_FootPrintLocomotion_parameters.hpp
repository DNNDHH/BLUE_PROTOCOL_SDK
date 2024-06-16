#pragma once

 

// Package: AnimNotify_BP_FootPrintLocomotion

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.Received_Notify
// 0x0048 (0x0048 - 0x0000)
struct AnimNotify_BP_FootPrintLocomotion_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43F1[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBFootprintInterface> K2Node_DynamicCast_AsSBFootprint_Interface;        // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43F2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBFootprintComponent*                  CallFunc_GetFootprintComponent_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanCreateLocomotionFootprint_ReturnValue; // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_BP_FootPrintLocomotion_C_Received_Notify");
static_assert(sizeof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify) == 0x000048, "Wrong size on AnimNotify_BP_FootPrintLocomotion_C_Received_Notify");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, K2Node_DynamicCast_AsSBFootprint_Interface) == 0x000020, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::K2Node_DynamicCast_AsSBFootprint_Interface' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, CallFunc_GetFootprintComponent_ReturnValue) == 0x000038, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::CallFunc_GetFootprintComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_Received_Notify, CallFunc_CanCreateLocomotionFootprint_ReturnValue) == 0x000041, "Member 'AnimNotify_BP_FootPrintLocomotion_C_Received_Notify::CallFunc_CanCreateLocomotionFootprint_ReturnValue' has a wrong offset!");

// Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.GetFootprintType
// 0x0010 (0x0010 - 0x0000)
struct AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType final
{
public:
	class USBFootprintComponent*                  FPComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFootPrintType                                FootPrintType;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFootPrintType                                CallFunc_GetFootprintType_FootprintType;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFootPrintType                                CallFunc_GetLocomotionFootprintType_ReturnValue;   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType) == 0x000008, "Wrong alignment on AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType");
static_assert(sizeof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType) == 0x000010, "Wrong size on AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType, FPComponent) == 0x000000, "Member 'AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType::FPComponent' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType, FootPrintType) == 0x000008, "Member 'AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType::FootPrintType' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType, CallFunc_GetFootprintType_FootprintType) == 0x000009, "Member 'AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType::CallFunc_GetFootprintType_FootprintType' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000B, "Member 'AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType, CallFunc_GetLocomotionFootprintType_ReturnValue) == 0x00000C, "Member 'AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType::CallFunc_GetLocomotionFootprintType_ReturnValue' has a wrong offset!");

// Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.IsLocomotion
// 0x0001 (0x0001 - 0x0000)
struct AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion) == 0x000001, "Wrong alignment on AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion");
static_assert(sizeof(AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion) == 0x000001, "Wrong size on AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion");
static_assert(offsetof(AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion, ReturnValue) == 0x000000, "Member 'AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion::ReturnValue' has a wrong offset!");

}

