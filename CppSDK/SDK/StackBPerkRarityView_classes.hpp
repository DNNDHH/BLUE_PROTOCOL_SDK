#pragma once

 

// Package: StackBPerkRarityView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBPerkRarityView.StackBPerkRarityView_C
// 0x0038 (0x02B0 - 0x0278)
class UStackBPerkRarityView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_PerkRarities;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBPerkRarityItem_C*                StackBPerkRarityItem1;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBPerkRarityItem_C*                StackBPerkRarityItem2;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBPerkRarityItem_C*                StackBPerkRarityItem3;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBPerkRarityItem_C*                StackBPerkRarityItem4;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBPerkRarityItem_C*                StackBPerkRarityItem5;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StackBPerkRarityView(int32 EntryPoint);
	void SetRarity(int32 InRarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBPerkRarityView_C">();
	}
	static class UStackBPerkRarityView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBPerkRarityView_C>();
	}
};
static_assert(alignof(UStackBPerkRarityView_C) == 0x000008, "Wrong alignment on UStackBPerkRarityView_C");
static_assert(sizeof(UStackBPerkRarityView_C) == 0x0002B0, "Wrong size on UStackBPerkRarityView_C");
static_assert(offsetof(UStackBPerkRarityView_C, UberGraphFrame) == 0x000278, "Member 'UStackBPerkRarityView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityView_C, HB_PerkRarities) == 0x000280, "Member 'UStackBPerkRarityView_C::HB_PerkRarities' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityView_C, StackBPerkRarityItem1) == 0x000288, "Member 'UStackBPerkRarityView_C::StackBPerkRarityItem1' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityView_C, StackBPerkRarityItem2) == 0x000290, "Member 'UStackBPerkRarityView_C::StackBPerkRarityItem2' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityView_C, StackBPerkRarityItem3) == 0x000298, "Member 'UStackBPerkRarityView_C::StackBPerkRarityItem3' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityView_C, StackBPerkRarityItem4) == 0x0002A0, "Member 'UStackBPerkRarityView_C::StackBPerkRarityItem4' has a wrong offset!");
static_assert(offsetof(UStackBPerkRarityView_C, StackBPerkRarityItem5) == 0x0002A8, "Member 'UStackBPerkRarityView_C::StackBPerkRarityItem5' has a wrong offset!");

}

