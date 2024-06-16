#pragma once

 

// Package: StackBInhelitPerkView

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBInhelitPerkView.StackBInhelitPerkView_C
// 0x0038 (0x02B0 - 0x0278)
class UStackBInhelitPerkView_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           Cvs_NoSlot;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Perk_1;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Perk_2;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Perk_3;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Perk_4;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Perks;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_View;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetPerk(const struct FOwnItemInfo& ItemInfo);
	void SetDiff(const struct FOwnItemInfo& Prev, const struct FOwnItemInfo& After);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBInhelitPerkView_C">();
	}
	static class UStackBInhelitPerkView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBInhelitPerkView_C>();
	}
};
static_assert(alignof(UStackBInhelitPerkView_C) == 0x000008, "Wrong alignment on UStackBInhelitPerkView_C");
static_assert(sizeof(UStackBInhelitPerkView_C) == 0x0002B0, "Wrong size on UStackBInhelitPerkView_C");
static_assert(offsetof(UStackBInhelitPerkView_C, Cvs_NoSlot) == 0x000278, "Member 'UStackBInhelitPerkView_C::Cvs_NoSlot' has a wrong offset!");
static_assert(offsetof(UStackBInhelitPerkView_C, Perk_1) == 0x000280, "Member 'UStackBInhelitPerkView_C::Perk_1' has a wrong offset!");
static_assert(offsetof(UStackBInhelitPerkView_C, Perk_2) == 0x000288, "Member 'UStackBInhelitPerkView_C::Perk_2' has a wrong offset!");
static_assert(offsetof(UStackBInhelitPerkView_C, Perk_3) == 0x000290, "Member 'UStackBInhelitPerkView_C::Perk_3' has a wrong offset!");
static_assert(offsetof(UStackBInhelitPerkView_C, Perk_4) == 0x000298, "Member 'UStackBInhelitPerkView_C::Perk_4' has a wrong offset!");
static_assert(offsetof(UStackBInhelitPerkView_C, VB_Perks) == 0x0002A0, "Member 'UStackBInhelitPerkView_C::VB_Perks' has a wrong offset!");
static_assert(offsetof(UStackBInhelitPerkView_C, WS_View) == 0x0002A8, "Member 'UStackBInhelitPerkView_C::WS_View' has a wrong offset!");

}

