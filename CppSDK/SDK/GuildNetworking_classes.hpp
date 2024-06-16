#pragma once

 

// Package: GuildNetworking

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildNetworking.GuildNetworking_C
// 0x0010 (0x0288 - 0x0278)
class UGuildNetworking_C final : public UUserWidget
{
public:
	class UCircularThrobber*                      CircularThrobber_23;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildNetworking_C">();
	}
	static class UGuildNetworking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildNetworking_C>();
	}
};
static_assert(alignof(UGuildNetworking_C) == 0x000008, "Wrong alignment on UGuildNetworking_C");
static_assert(sizeof(UGuildNetworking_C) == 0x000288, "Wrong size on UGuildNetworking_C");
static_assert(offsetof(UGuildNetworking_C, CircularThrobber_23) == 0x000278, "Member 'UGuildNetworking_C::CircularThrobber_23' has a wrong offset!");
static_assert(offsetof(UGuildNetworking_C, UIBlocker) == 0x000280, "Member 'UGuildNetworking_C::UIBlocker' has a wrong offset!");

}

