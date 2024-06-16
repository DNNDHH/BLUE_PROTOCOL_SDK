#pragma once

 

// Package: UMG_Notifications

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_Notifications.UMG_Notifications_C.Get_PartyInvitationReceivedIcon_Visibility_0
// 0x0048 (0x0048 - 0x0000)
struct UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E7D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo;       // 0x0008(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0) == 0x000008, "Wrong alignment on UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0");
static_assert(sizeof(UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0) == 0x000048, "Wrong size on UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0");
static_assert(offsetof(UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0, ReturnValue) == 0x000000, "Member 'UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0, CallFunc_GetPendingInviteInfo_OutInviteInfo) == 0x000008, "Member 'UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0::CallFunc_GetPendingInviteInfo_OutInviteInfo' has a wrong offset!");
static_assert(offsetof(UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0, CallFunc_GetPendingInviteInfo_ReturnValue) == 0x000040, "Member 'UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0::CallFunc_GetPendingInviteInfo_ReturnValue' has a wrong offset!");

}

