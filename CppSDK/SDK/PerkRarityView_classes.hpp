#pragma once

 

// Package: PerkRarityView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkRarityView.PerkRarityView_C
// 0x0038 (0x02B0 - 0x0278)
class UPerkRarityView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_PerkRarities;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityItem_C*                      PerkRarityItem1;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityItem_C*                      PerkRarityItem2;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityItem_C*                      PerkRarityItem3;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityItem_C*                      PerkRarityItem4;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityItem_C*                      PerkRarityItem5;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PerkRarityView(int32 EntryPoint);
	void SetRarity(int32 InRarity);
	void Set_AllQuestion();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkRarityView_C">();
	}
	static class UPerkRarityView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkRarityView_C>();
	}
};
static_assert(alignof(UPerkRarityView_C) == 0x000008, "Wrong alignment on UPerkRarityView_C");
static_assert(sizeof(UPerkRarityView_C) == 0x0002B0, "Wrong size on UPerkRarityView_C");
static_assert(offsetof(UPerkRarityView_C, UberGraphFrame) == 0x000278, "Member 'UPerkRarityView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPerkRarityView_C, HB_PerkRarities) == 0x000280, "Member 'UPerkRarityView_C::HB_PerkRarities' has a wrong offset!");
static_assert(offsetof(UPerkRarityView_C, PerkRarityItem1) == 0x000288, "Member 'UPerkRarityView_C::PerkRarityItem1' has a wrong offset!");
static_assert(offsetof(UPerkRarityView_C, PerkRarityItem2) == 0x000290, "Member 'UPerkRarityView_C::PerkRarityItem2' has a wrong offset!");
static_assert(offsetof(UPerkRarityView_C, PerkRarityItem3) == 0x000298, "Member 'UPerkRarityView_C::PerkRarityItem3' has a wrong offset!");
static_assert(offsetof(UPerkRarityView_C, PerkRarityItem4) == 0x0002A0, "Member 'UPerkRarityView_C::PerkRarityItem4' has a wrong offset!");
static_assert(offsetof(UPerkRarityView_C, PerkRarityItem5) == 0x0002A8, "Member 'UPerkRarityView_C::PerkRarityItem5' has a wrong offset!");

}

