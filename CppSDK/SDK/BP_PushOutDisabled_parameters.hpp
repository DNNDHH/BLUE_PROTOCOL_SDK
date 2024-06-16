#pragma once

 

// Package: BP_PushOutDisabled

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PushOutDisabled.BP_PushOutDisabled_C.Received_Notify
// 0x0030 (0x0030 - 0x0000)
struct BP_PushOutDisabled_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F1B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PushOutDisabled_C_Received_Notify) == 0x000008, "Wrong alignment on BP_PushOutDisabled_C_Received_Notify");
static_assert(sizeof(BP_PushOutDisabled_C_Received_Notify) == 0x000030, "Wrong size on BP_PushOutDisabled_C_Received_Notify");
static_assert(offsetof(BP_PushOutDisabled_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_PushOutDisabled_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_PushOutDisabled_C_Received_Notify, Animation) == 0x000008, "Member 'BP_PushOutDisabled_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_PushOutDisabled_C_Received_Notify, ReturnValue) == 0x000010, "Member 'BP_PushOutDisabled_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PushOutDisabled_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_PushOutDisabled_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PushOutDisabled_C_Received_Notify, K2Node_DynamicCast_AsSBCharacter) == 0x000020, "Member 'BP_PushOutDisabled_C_Received_Notify::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(BP_PushOutDisabled_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PushOutDisabled_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PushOutDisabled.BP_PushOutDisabled_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct BP_PushOutDisabled_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PushOutDisabled_C_GetNotifyName) == 0x000008, "Wrong alignment on BP_PushOutDisabled_C_GetNotifyName");
static_assert(sizeof(BP_PushOutDisabled_C_GetNotifyName) == 0x000010, "Wrong size on BP_PushOutDisabled_C_GetNotifyName");
static_assert(offsetof(BP_PushOutDisabled_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'BP_PushOutDisabled_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

