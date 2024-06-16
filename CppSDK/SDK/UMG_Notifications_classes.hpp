#pragma once

 

// Package: UMG_Notifications

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_Notifications.UMG_Notifications_C
// 0x0018 (0x0290 - 0x0278)
class UUMG_Notifications_C final : public UUserWidget
{
public:
	class UUMG_NotificationGuild_C*               Guild;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Notification_Match_C*              Match;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Notification_Party_C*              Party;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	ESlateVisibility Get_PartyInvitationReceivedIcon_Visibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_Notifications_C">();
	}
	static class UUMG_Notifications_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_Notifications_C>();
	}
};
static_assert(alignof(UUMG_Notifications_C) == 0x000008, "Wrong alignment on UUMG_Notifications_C");
static_assert(sizeof(UUMG_Notifications_C) == 0x000290, "Wrong size on UUMG_Notifications_C");
static_assert(offsetof(UUMG_Notifications_C, Guild) == 0x000278, "Member 'UUMG_Notifications_C::Guild' has a wrong offset!");
static_assert(offsetof(UUMG_Notifications_C, Match) == 0x000280, "Member 'UUMG_Notifications_C::Match' has a wrong offset!");
static_assert(offsetof(UUMG_Notifications_C, Party) == 0x000288, "Member 'UUMG_Notifications_C::Party' has a wrong offset!");

}

