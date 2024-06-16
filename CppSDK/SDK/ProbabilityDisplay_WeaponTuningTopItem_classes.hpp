#pragma once

 

// Package: ProbabilityDisplay_WeaponTuningTopItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponTuningTopItem.ProbabilityDisplay_WeaponTuningTopItem_C
// 0x0048 (0x02C0 - 0x0278)
class UProbabilityDisplay_WeaponTuningTopItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_697;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNameText;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Name_ProbabilityDisplay_WeaponTuningTopItem_C;     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_WeaponTuningTopItem_C">();
	}
	static class UProbabilityDisplay_WeaponTuningTopItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_WeaponTuningTopItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_WeaponTuningTopItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_WeaponTuningTopItem_C");
static_assert(sizeof(UProbabilityDisplay_WeaponTuningTopItem_C) == 0x0002C0, "Wrong size on UProbabilityDisplay_WeaponTuningTopItem_C");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, Base3) == 0x000290, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::Base3' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, Base4) == 0x000298, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::Base4' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, Image_697) == 0x0002A0, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::Image_697' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, ItemNameText) == 0x0002A8, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::ItemNameText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponTuningTopItem_C, Name_ProbabilityDisplay_WeaponTuningTopItem_C) == 0x0002B0, "Member 'UProbabilityDisplay_WeaponTuningTopItem_C::Name_ProbabilityDisplay_WeaponTuningTopItem_C' has a wrong offset!");

}

