#pragma once

 

// Package: IconPartyMember

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconPartyMember.IconPartyMember_C
// 0x0000 (0x02E8 - 0x02E8)
class UIconPartyMember_C final : public USBMapPartyMemberIcon
{
public:
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconPartyMember_C">();
	}
	static class UIconPartyMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconPartyMember_C>();
	}
};
static_assert(alignof(UIconPartyMember_C) == 0x000008, "Wrong alignment on UIconPartyMember_C");
static_assert(sizeof(UIconPartyMember_C) == 0x0002E8, "Wrong size on UIconPartyMember_C");

}

