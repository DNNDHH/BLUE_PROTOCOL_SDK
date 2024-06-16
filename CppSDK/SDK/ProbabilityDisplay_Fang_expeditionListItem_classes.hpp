#pragma once

 

// Package: ProbabilityDisplay_Fang_expeditionListItem

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_Fang_expeditionListItem.ProbabilityDisplay_Fang_expeditionListItem_C
// 0x0040 (0x02B8 - 0x0278)
class UProbabilityDisplay_Fang_expeditionListItem_C final : public UUserWidget
{
public:
	class UImage*                                 Bg1;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg3;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon1;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon2;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon3;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNameText;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ProbabilityText;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(int32 FangCount, const struct FSBFang_expeditionRandomRewardData& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_Fang_expeditionListItem_C">();
	}
	static class UProbabilityDisplay_Fang_expeditionListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_Fang_expeditionListItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_Fang_expeditionListItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_Fang_expeditionListItem_C");
static_assert(sizeof(UProbabilityDisplay_Fang_expeditionListItem_C) == 0x0002B8, "Wrong size on UProbabilityDisplay_Fang_expeditionListItem_C");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, Bg1) == 0x000278, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::Bg1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, Bg2) == 0x000280, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::Bg2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, Bg3) == 0x000288, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::Bg3' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, Icon1) == 0x000290, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::Icon1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, Icon2) == 0x000298, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::Icon2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, Icon3) == 0x0002A0, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::Icon3' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, ItemNameText) == 0x0002A8, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::ItemNameText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_Fang_expeditionListItem_C, ProbabilityText) == 0x0002B0, "Member 'UProbabilityDisplay_Fang_expeditionListItem_C::ProbabilityText' has a wrong offset!");

}

