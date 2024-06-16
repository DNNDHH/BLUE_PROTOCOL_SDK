#pragma once

 

// Package: EventShop_InAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function EventShop_InAnime.EventShop_InAnime_C.ExecuteUbergraph_EventShop_InAnime
// 0x0010 (0x0010 - 0x0000)
struct EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_513B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime) == 0x000008, "Wrong alignment on EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime");
static_assert(sizeof(EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime) == 0x000010, "Wrong size on EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime");
static_assert(offsetof(EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime, EntryPoint) == 0x000000, "Member 'EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

