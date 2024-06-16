#pragma once

 

// Package: CommonEquipmentAbilityEfficacyInfoItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C
// 0x0050 (0x02C8 - 0x0278)
class UCommonEquipmentAbilityEfficacyInfoItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             DescTxt;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnderLine;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ValueTxt;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBAbilityConfig                       AbilityConfig;                                     // 0x0290(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetAbilityEfficacyInfo(const struct FSBAbilityConfig& InAbilityConfig, const class FText& InEfficacyDesc, int32 InEfficacyValue);
	void SetUnderlineVisibility(bool InIsVisible);
	void ConvertValueToPercentageNotation(int32 InValue, class FString* OutConvertedValue);
	void SetValueText(ESBAbilityUIAttribute InUIAttribute, int32 InValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentAbilityEfficacyInfoItem_C">();
	}
	static class UCommonEquipmentAbilityEfficacyInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentAbilityEfficacyInfoItem_C>();
	}
};
static_assert(alignof(UCommonEquipmentAbilityEfficacyInfoItem_C) == 0x000008, "Wrong alignment on UCommonEquipmentAbilityEfficacyInfoItem_C");
static_assert(sizeof(UCommonEquipmentAbilityEfficacyInfoItem_C) == 0x0002C8, "Wrong size on UCommonEquipmentAbilityEfficacyInfoItem_C");
static_assert(offsetof(UCommonEquipmentAbilityEfficacyInfoItem_C, DescTxt) == 0x000278, "Member 'UCommonEquipmentAbilityEfficacyInfoItem_C::DescTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityEfficacyInfoItem_C, UnderLine) == 0x000280, "Member 'UCommonEquipmentAbilityEfficacyInfoItem_C::UnderLine' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityEfficacyInfoItem_C, ValueTxt) == 0x000288, "Member 'UCommonEquipmentAbilityEfficacyInfoItem_C::ValueTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityEfficacyInfoItem_C, AbilityConfig) == 0x000290, "Member 'UCommonEquipmentAbilityEfficacyInfoItem_C::AbilityConfig' has a wrong offset!");

}

