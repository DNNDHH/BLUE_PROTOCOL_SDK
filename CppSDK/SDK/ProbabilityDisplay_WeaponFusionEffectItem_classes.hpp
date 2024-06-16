#pragma once

 

// Package: ProbabilityDisplay_WeaponFusionEffectItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponFusionEffectItem.ProbabilityDisplay_WeaponFusionEffectItem_C
// 0x0050 (0x02C8 - 0x0278)
class UProbabilityDisplay_WeaponFusionEffectItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EffectNameText;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EffectValueText;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PercentText;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlusMinusText;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 EffectName;                                        // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         EffectValue;                                       // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProbabilityDisplay_WeaponFusionEffectItem(int32 EntryPoint);
	void Setup(const class FString& Param_EffectName, int32 Param_EffectValue, int32 Param_Index, bool IsDispPercentage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_WeaponFusionEffectItem_C">();
	}
	static class UProbabilityDisplay_WeaponFusionEffectItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_WeaponFusionEffectItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_WeaponFusionEffectItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_WeaponFusionEffectItem_C");
static_assert(sizeof(UProbabilityDisplay_WeaponFusionEffectItem_C) == 0x0002C8, "Wrong size on UProbabilityDisplay_WeaponFusionEffectItem_C");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, EffectNameText) == 0x000290, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::EffectNameText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, EffectValueText) == 0x000298, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::EffectValueText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, PercentText) == 0x0002A0, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::PercentText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, PlusMinusText) == 0x0002A8, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::PlusMinusText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, EffectName) == 0x0002B0, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::EffectName' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponFusionEffectItem_C, EffectValue) == 0x0002C0, "Member 'UProbabilityDisplay_WeaponFusionEffectItem_C::EffectValue' has a wrong offset!");

}

