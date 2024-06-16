#pragma once

 

// Package: Fang_expeditionAreaIconTooltip

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expeditionAreaIconTooltip.Fang_expeditionAreaIconTooltip_C
// 0x0010 (0x0288 - 0x0278)
class UFang_expeditionAreaIconTooltip_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_73;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AddData(ESBFang_expeditionStatus Status, const class FString& AreaName, bool Limited);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expeditionAreaIconTooltip_C">();
	}
	static class UFang_expeditionAreaIconTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expeditionAreaIconTooltip_C>();
	}
};
static_assert(alignof(UFang_expeditionAreaIconTooltip_C) == 0x000008, "Wrong alignment on UFang_expeditionAreaIconTooltip_C");
static_assert(sizeof(UFang_expeditionAreaIconTooltip_C) == 0x000288, "Wrong size on UFang_expeditionAreaIconTooltip_C");
static_assert(offsetof(UFang_expeditionAreaIconTooltip_C, BG) == 0x000278, "Member 'UFang_expeditionAreaIconTooltip_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expeditionAreaIconTooltip_C, VerticalBox_73) == 0x000280, "Member 'UFang_expeditionAreaIconTooltip_C::VerticalBox_73' has a wrong offset!");

}

