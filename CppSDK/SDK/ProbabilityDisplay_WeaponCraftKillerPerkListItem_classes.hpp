#pragma once

 

// Package: ProbabilityDisplay_WeaponCraftKillerPerkListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C
// 0x0068 (0x02E0 - 0x0278)
class UProbabilityDisplay_WeaponCraftKillerPerkListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GreatSuccessMaxText;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GreatSuccessMinText;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameText;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RateText;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_116;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SuccessMaxText;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SuccessMinText;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem(int32 EntryPoint);
	void Setup(const class FString& Param_Name, int32 GreatNumBottom, int32 GreatNumUpper, int32 SuccessNumBottom, int32 SuccessNumUpper, float Rate, int32 Param_Index, bool IsDispPercentage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_WeaponCraftKillerPerkListItem_C">();
	}
	static class UProbabilityDisplay_WeaponCraftKillerPerkListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_WeaponCraftKillerPerkListItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_WeaponCraftKillerPerkListItem_C");
static_assert(sizeof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C) == 0x0002E0, "Wrong size on UProbabilityDisplay_WeaponCraftKillerPerkListItem_C");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, Base3) == 0x000290, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::Base3' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, Base4) == 0x000298, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::Base4' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, GreatSuccessMaxText) == 0x0002A0, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::GreatSuccessMaxText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, GreatSuccessMinText) == 0x0002A8, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::GreatSuccessMinText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, NameText) == 0x0002B0, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::NameText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, RateText) == 0x0002B8, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::RateText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, SBRuntimeTextBlock) == 0x0002C0, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, SBRuntimeTextBlock_116) == 0x0002C8, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::SBRuntimeTextBlock_116' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, SuccessMaxText) == 0x0002D0, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::SuccessMaxText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftKillerPerkListItem_C, SuccessMinText) == 0x0002D8, "Member 'UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::SuccessMinText' has a wrong offset!");

}

