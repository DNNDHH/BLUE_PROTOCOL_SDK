#pragma once

 

// Package: ProbabilityDisplay_WeaponFusionListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C
// 0x0060 (0x02D8 - 0x0278)
class UProbabilityDisplay_WeaponFusionListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_WeaponFusionEffectItem_C* Effect1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProbabilityDisplay_WeaponFusionEffectItem_C* Effect2;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_35;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_157;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityView_C*                      PerkRarityView;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RateText;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_159;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     StarList;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem(int32 EntryPoint);
	void Setup(int32 Param_Index, const struct FSBMasterFusionItem& FusionItem);
	void SetupFusionItem(int32 Param_Index, const struct FSBMasterFusionItem& FusionItem);
	void SetupTuning(int32 Param_Index, const struct FSBSyntheAbilityData& SBSyntheAbilityData, float Rate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_WeaponFusionListItem_C">();
	}
	static class UProbabilityDisplay_WeaponFusionListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_WeaponFusionListItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_WeaponFusionListItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_WeaponFusionListItem_C");
static_assert(sizeof(UProbabilityDisplay_WeaponFusionListItem_C) == 0x0002D8, "Wrong size on UProbabilityDisplay_WeaponFusionListItem_C");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, Effect1) == 0x000290, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::Effect1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, Effect2) == 0x000298, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::Effect2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, HorizontalBox_35) == 0x0002A0, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::HorizontalBox_35' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, Image_157) == 0x0002A8, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::Image_157' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, PerkRarityView) == 0x0002B0, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::PerkRarityView' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, RateText) == 0x0002B8, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::RateText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, VerticalBox_159) == 0x0002C0, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::VerticalBox_159' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionListItem_C, StarList) == 0x0002C8, "Member 'UProbabilityDisplay_WeaponFusionListItem_C::StarList' has a wrong offset!");

}

