#pragma once

 

// Package: ProbabilityDisplay_ImagineCraftListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C
// 0x0048 (0x02C0 - 0x0278)
class UProbabilityDisplay_ImagineCraftListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AbilityNameText;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base1;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_35;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_ImagineCraftEffectItem_C* ProbabilityDisplay_ImagineCraftEffectItem;         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_ImagineCraftEffectItem_C* ProbabilityDisplay_ImagineCraftEffectItem_62;      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RateText;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_159;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem(int32 EntryPoint);
	void SetupA(int32 PerkId, float Rate);
	void Setup(int32 PickId, float Rate, int32 Param_Index, int32* Num);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_ImagineCraftListItem_C">();
	}
	static class UProbabilityDisplay_ImagineCraftListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_ImagineCraftListItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_ImagineCraftListItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_ImagineCraftListItem_C");
static_assert(sizeof(UProbabilityDisplay_ImagineCraftListItem_C) == 0x0002C0, "Wrong size on UProbabilityDisplay_ImagineCraftListItem_C");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, AbilityNameText) == 0x000280, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::AbilityNameText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, Base1) == 0x000288, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, Base2) == 0x000290, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, HorizontalBox_35) == 0x000298, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::HorizontalBox_35' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, ProbabilityDisplay_ImagineCraftEffectItem) == 0x0002A0, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::ProbabilityDisplay_ImagineCraftEffectItem' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, ProbabilityDisplay_ImagineCraftEffectItem_62) == 0x0002A8, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::ProbabilityDisplay_ImagineCraftEffectItem_62' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, RateText) == 0x0002B0, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::RateText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftListItem_C, VerticalBox_159) == 0x0002B8, "Member 'UProbabilityDisplay_ImagineCraftListItem_C::VerticalBox_159' has a wrong offset!");

}

