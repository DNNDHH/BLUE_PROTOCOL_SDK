#pragma once

 

// Package: CommonWeaponAbilityInfoSlotDetailed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C
// 0x0030 (0x02A8 - 0x0278)
class UCommonWeaponAbilityInfoSlotDetailed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BaseBg01;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlot_C*         InfoSlot;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Efficacy;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_EfficacyInfoItem;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ListItemNumMax;                                    // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void CreateEfficacyInfoItemList();
	void SetupAbilityInfo(const struct FSBCharacterWeaponPerkData& InWeaponPerkData);
	void GetAbilityPartsValueText(int32 InValue, class FText* OutText);
	void SetIsSlotEmpty(bool InIsEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonWeaponAbilityInfoSlotDetailed_C">();
	}
	static class UCommonWeaponAbilityInfoSlotDetailed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWeaponAbilityInfoSlotDetailed_C>();
	}
};
static_assert(alignof(UCommonWeaponAbilityInfoSlotDetailed_C) == 0x000008, "Wrong alignment on UCommonWeaponAbilityInfoSlotDetailed_C");
static_assert(sizeof(UCommonWeaponAbilityInfoSlotDetailed_C) == 0x0002A8, "Wrong size on UCommonWeaponAbilityInfoSlotDetailed_C");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotDetailed_C, UberGraphFrame) == 0x000278, "Member 'UCommonWeaponAbilityInfoSlotDetailed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotDetailed_C, BaseBg01) == 0x000280, "Member 'UCommonWeaponAbilityInfoSlotDetailed_C::BaseBg01' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotDetailed_C, InfoSlot) == 0x000288, "Member 'UCommonWeaponAbilityInfoSlotDetailed_C::InfoSlot' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotDetailed_C, Overlay_Efficacy) == 0x000290, "Member 'UCommonWeaponAbilityInfoSlotDetailed_C::Overlay_Efficacy' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotDetailed_C, VBox_EfficacyInfoItem) == 0x000298, "Member 'UCommonWeaponAbilityInfoSlotDetailed_C::VBox_EfficacyInfoItem' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotDetailed_C, ListItemNumMax) == 0x0002A0, "Member 'UCommonWeaponAbilityInfoSlotDetailed_C::ListItemNumMax' has a wrong offset!");

}

