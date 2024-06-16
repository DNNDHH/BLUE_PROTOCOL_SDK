#pragma once

 

// Package: IconNamedEnemy

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconNamedEnemy.IconNamedEnemy_C
// 0x0018 (0x02C0 - 0x02A8)
class UIconNamedEnemy_C final : public USBMapNamedEnemyIcon
{
public:
	class UImage*                                 Icon_Inside;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Outside;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconNamedEnemy_C">();
	}
	static class UIconNamedEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconNamedEnemy_C>();
	}
};
static_assert(alignof(UIconNamedEnemy_C) == 0x000008, "Wrong alignment on UIconNamedEnemy_C");
static_assert(sizeof(UIconNamedEnemy_C) == 0x0002C0, "Wrong size on UIconNamedEnemy_C");
static_assert(offsetof(UIconNamedEnemy_C, Icon_Inside) == 0x0002A8, "Member 'UIconNamedEnemy_C::Icon_Inside' has a wrong offset!");
static_assert(offsetof(UIconNamedEnemy_C, Icon_Outside) == 0x0002B0, "Member 'UIconNamedEnemy_C::Icon_Outside' has a wrong offset!");
static_assert(offsetof(UIconNamedEnemy_C, WidgetSwitcher) == 0x0002B8, "Member 'UIconNamedEnemy_C::WidgetSwitcher' has a wrong offset!");

}

