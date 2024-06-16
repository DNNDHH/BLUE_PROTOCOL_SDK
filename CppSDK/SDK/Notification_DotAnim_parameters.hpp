#pragma once

 

// Package: Notification_DotAnim

#include "Basic.hpp"


namespace SDK::Params
{

// Function Notification_DotAnim.Notification_DotAnim_C.ExecuteUbergraph_Notification_DotAnim
// 0x0010 (0x0010 - 0x0000)
struct Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C19[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim) == 0x000008, "Wrong alignment on Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim");
static_assert(sizeof(Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim) == 0x000010, "Wrong size on Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim");
static_assert(offsetof(Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim, EntryPoint) == 0x000000, "Member 'Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

