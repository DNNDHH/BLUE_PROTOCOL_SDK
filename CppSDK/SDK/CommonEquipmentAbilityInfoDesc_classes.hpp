#pragma once

 

// Package: CommonEquipmentAbilityInfoDesc

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C
// 0x0030 (0x02A8 - 0x0278)
class UCommonEquipmentAbilityInfoDesc_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AbilityDescTxt;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base01;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base02;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_EfficacyInfoItem;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ListItemNumMax;                                    // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonEquipmentAbilityInfoDesc(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void CreateEfficacyInfoItemList();
	void SetupAbilityInfo(int32 InAbilityEffectId);
	void GetAbilityPartsValueText(int32 InValue, class FText* OutText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentAbilityInfoDesc_C">();
	}
	static class UCommonEquipmentAbilityInfoDesc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentAbilityInfoDesc_C>();
	}
};
static_assert(alignof(UCommonEquipmentAbilityInfoDesc_C) == 0x000008, "Wrong alignment on UCommonEquipmentAbilityInfoDesc_C");
static_assert(sizeof(UCommonEquipmentAbilityInfoDesc_C) == 0x0002A8, "Wrong size on UCommonEquipmentAbilityInfoDesc_C");
static_assert(offsetof(UCommonEquipmentAbilityInfoDesc_C, UberGraphFrame) == 0x000278, "Member 'UCommonEquipmentAbilityInfoDesc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityInfoDesc_C, AbilityDescTxt) == 0x000280, "Member 'UCommonEquipmentAbilityInfoDesc_C::AbilityDescTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityInfoDesc_C, Base01) == 0x000288, "Member 'UCommonEquipmentAbilityInfoDesc_C::Base01' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityInfoDesc_C, Base02) == 0x000290, "Member 'UCommonEquipmentAbilityInfoDesc_C::Base02' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityInfoDesc_C, VBox_EfficacyInfoItem) == 0x000298, "Member 'UCommonEquipmentAbilityInfoDesc_C::VBox_EfficacyInfoItem' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentAbilityInfoDesc_C, ListItemNumMax) == 0x0002A0, "Member 'UCommonEquipmentAbilityInfoDesc_C::ListItemNumMax' has a wrong offset!");

}

