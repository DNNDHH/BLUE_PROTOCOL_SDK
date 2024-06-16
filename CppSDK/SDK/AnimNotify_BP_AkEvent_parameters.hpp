#pragma once

 

// Package: AnimNotify_BP_AkEvent

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_BP_AkEvent.AnimNotify_BP_AkEvent_C.Received_Notify
// 0x0020 (0x0020 - 0x0000)
struct AnimNotify_BP_AkEvent_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AFD[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_BP_AkEvent_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_BP_AkEvent_C_Received_Notify");
static_assert(sizeof(AnimNotify_BP_AkEvent_C_Received_Notify) == 0x000020, "Wrong size on AnimNotify_BP_AkEvent_C_Received_Notify");
static_assert(offsetof(AnimNotify_BP_AkEvent_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_BP_AkEvent_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_AkEvent_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_BP_AkEvent_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_AkEvent_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_BP_AkEvent_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_AkEvent_C_Received_Notify, CallFunc_Conv_StringToName_ReturnValue) == 0x000014, "Member 'AnimNotify_BP_AkEvent_C_Received_Notify::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_BP_AkEvent_C_Received_Notify, CallFunc_Play_ReturnValue) == 0x00001C, "Member 'AnimNotify_BP_AkEvent_C_Received_Notify::CallFunc_Play_ReturnValue' has a wrong offset!");

}

