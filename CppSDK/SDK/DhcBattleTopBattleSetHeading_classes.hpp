#pragma once

 

// Package: DhcBattleTopBattleSetHeading

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopBattleSetHeading.DhcBattleTopBattleSetHeading_C
// 0x0020 (0x0298 - 0x0278)
class UDhcBattleTopBattleSetHeading_C final : public UUserWidget
{
public:
	class UImage*                                 Bg01;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    HeadingTxt;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopBattleSetHeading_C">();
	}
	static class UDhcBattleTopBattleSetHeading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopBattleSetHeading_C>();
	}
};
static_assert(alignof(UDhcBattleTopBattleSetHeading_C) == 0x000008, "Wrong alignment on UDhcBattleTopBattleSetHeading_C");
static_assert(sizeof(UDhcBattleTopBattleSetHeading_C) == 0x000298, "Wrong size on UDhcBattleTopBattleSetHeading_C");
static_assert(offsetof(UDhcBattleTopBattleSetHeading_C, Bg01) == 0x000278, "Member 'UDhcBattleTopBattleSetHeading_C::Bg01' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopBattleSetHeading_C, HeadingTxt) == 0x000280, "Member 'UDhcBattleTopBattleSetHeading_C::HeadingTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopBattleSetHeading_C, Icon) == 0x000288, "Member 'UDhcBattleTopBattleSetHeading_C::Icon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopBattleSetHeading_C, Light) == 0x000290, "Member 'UDhcBattleTopBattleSetHeading_C::Light' has a wrong offset!");

}

