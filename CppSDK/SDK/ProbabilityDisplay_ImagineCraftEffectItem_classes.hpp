#pragma once

 

// Package: ProbabilityDisplay_ImagineCraftEffectItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C
// 0x0048 (0x02C0 - 0x0278)
class UProbabilityDisplay_ImagineCraftEffectItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EffectNameText;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EffectValueText;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 EffectName;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         EffectValue;                                       // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Index_ProbabilityDisplay_ImagineCraftEffectItem_C; // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsDispPercentage;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_ImagineCraftEffectItem_C">();
	}
	static class UProbabilityDisplay_ImagineCraftEffectItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_ImagineCraftEffectItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_ImagineCraftEffectItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_ImagineCraftEffectItem_C");
static_assert(sizeof(UProbabilityDisplay_ImagineCraftEffectItem_C) == 0x0002C0, "Wrong size on UProbabilityDisplay_ImagineCraftEffectItem_C");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, EffectNameText) == 0x000290, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::EffectNameText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, EffectValueText) == 0x000298, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::EffectValueText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, EffectName) == 0x0002A0, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::EffectName' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, EffectValue) == 0x0002B0, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::EffectValue' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, Index_ProbabilityDisplay_ImagineCraftEffectItem_C) == 0x0002B4, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::Index_ProbabilityDisplay_ImagineCraftEffectItem_C' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ImagineCraftEffectItem_C, IsDispPercentage) == 0x0002B8, "Member 'UProbabilityDisplay_ImagineCraftEffectItem_C::IsDispPercentage' has a wrong offset!");

}

