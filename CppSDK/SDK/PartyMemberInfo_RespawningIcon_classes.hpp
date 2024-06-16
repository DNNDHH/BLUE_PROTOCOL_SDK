#pragma once

 

// Package: PartyMemberInfo_RespawningIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyMemberInfo_RespawningIcon.PartyMemberInfo_RespawningIcon_C
// 0x0008 (0x0280 - 0x0278)
class UPartyMemberInfo_RespawningIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Image_1;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyMemberInfo_RespawningIcon_C">();
	}
	static class UPartyMemberInfo_RespawningIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMemberInfo_RespawningIcon_C>();
	}
};
static_assert(alignof(UPartyMemberInfo_RespawningIcon_C) == 0x000008, "Wrong alignment on UPartyMemberInfo_RespawningIcon_C");
static_assert(sizeof(UPartyMemberInfo_RespawningIcon_C) == 0x000280, "Wrong size on UPartyMemberInfo_RespawningIcon_C");
static_assert(offsetof(UPartyMemberInfo_RespawningIcon_C, Image_1) == 0x000278, "Member 'UPartyMemberInfo_RespawningIcon_C::Image_1' has a wrong offset!");

}

