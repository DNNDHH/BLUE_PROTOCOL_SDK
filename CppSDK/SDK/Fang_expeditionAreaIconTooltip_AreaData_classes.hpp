#pragma once

 

// Package: Fang_expeditionAreaIconTooltip_AreaData

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expeditionAreaIconTooltip_AreaData.Fang_expeditionAreaIconTooltip_AreaData_C
// 0x0028 (0x02A0 - 0x0278)
class UFang_expeditionAreaIconTooltip_AreaData_C final : public UUserWidget
{
public:
	class UTextBlock*                             AreaText;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Finish;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Play;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeIcon;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(ESBFang_expeditionStatus Status, const class FString& AreaName, bool TimeLimited);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expeditionAreaIconTooltip_AreaData_C">();
	}
	static class UFang_expeditionAreaIconTooltip_AreaData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expeditionAreaIconTooltip_AreaData_C>();
	}
};
static_assert(alignof(UFang_expeditionAreaIconTooltip_AreaData_C) == 0x000008, "Wrong alignment on UFang_expeditionAreaIconTooltip_AreaData_C");
static_assert(sizeof(UFang_expeditionAreaIconTooltip_AreaData_C) == 0x0002A0, "Wrong size on UFang_expeditionAreaIconTooltip_AreaData_C");
static_assert(offsetof(UFang_expeditionAreaIconTooltip_AreaData_C, AreaText) == 0x000278, "Member 'UFang_expeditionAreaIconTooltip_AreaData_C::AreaText' has a wrong offset!");
static_assert(offsetof(UFang_expeditionAreaIconTooltip_AreaData_C, Finish) == 0x000280, "Member 'UFang_expeditionAreaIconTooltip_AreaData_C::Finish' has a wrong offset!");
static_assert(offsetof(UFang_expeditionAreaIconTooltip_AreaData_C, IconSwitcher) == 0x000288, "Member 'UFang_expeditionAreaIconTooltip_AreaData_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expeditionAreaIconTooltip_AreaData_C, Play) == 0x000290, "Member 'UFang_expeditionAreaIconTooltip_AreaData_C::Play' has a wrong offset!");
static_assert(offsetof(UFang_expeditionAreaIconTooltip_AreaData_C, TimeIcon) == 0x000298, "Member 'UFang_expeditionAreaIconTooltip_AreaData_C::TimeIcon' has a wrong offset!");

}

