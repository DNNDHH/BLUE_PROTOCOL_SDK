#pragma once

 

// Package: CommonWeaponAbilityInfoSlotList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C
// 0x0090 (0x0308 - 0x0278)
class UCommonWeaponAbilityInfoSlotList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    RuntimeText_EffectHeading;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_IsSlotEmptyTxt;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_IsUnknownSlot;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_pyphen;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlot_C*         Slot1;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlot_C*         Slot2;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlot_C*         Slot3;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlot_C*         Slot4;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherSlot;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SlotNumMax;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SlotNumMin;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_Slot;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine01;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SlotNumMax;                                        // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LineColor;                                         // 0x02EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SwitcherSlotDefaultPosition;                       // 0x02FC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VlineVisibility;                                   // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CommonWeaponAbilityInfoSlotList(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void InitAllSlot();
	void SwitchSlotInfoType(bool InIsSlotUnlocked);
	void GetSlot(int32 InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlot_C** OutSlot);
	void SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData, bool* bHasValidAbility);
	void SetSlotInfoByUniqueId(const class FString& UniqueId, bool* bHasValidAbility);
	void SetVLineVisibility(bool InIsVisible);
	void SetTextColor(const struct FSlateColor& InColorAndOpacity);
	void SetRecipeId(int32 RecipeId);
	void SetUnknownSlot();
	void SetLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward);
	void GetUnlockSlotMinMax(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward, int32* Min, int32* Max);
	void SetSlotInfoBase(int32 InUnlockedSlotNum, TArray<struct FSBCharacterWeaponPerkData>& InPerkList, int32 InUsedSlotNum, bool* bHasValidAbility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonWeaponAbilityInfoSlotList_C">();
	}
	static class UCommonWeaponAbilityInfoSlotList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWeaponAbilityInfoSlotList_C>();
	}
};
static_assert(alignof(UCommonWeaponAbilityInfoSlotList_C) == 0x000008, "Wrong alignment on UCommonWeaponAbilityInfoSlotList_C");
static_assert(sizeof(UCommonWeaponAbilityInfoSlotList_C) == 0x000308, "Wrong size on UCommonWeaponAbilityInfoSlotList_C");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, UberGraphFrame) == 0x000278, "Member 'UCommonWeaponAbilityInfoSlotList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, RuntimeText_EffectHeading) == 0x000280, "Member 'UCommonWeaponAbilityInfoSlotList_C::RuntimeText_EffectHeading' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, RuntimeText_IsSlotEmptyTxt) == 0x000288, "Member 'UCommonWeaponAbilityInfoSlotList_C::RuntimeText_IsSlotEmptyTxt' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, RuntimeText_IsUnknownSlot) == 0x000290, "Member 'UCommonWeaponAbilityInfoSlotList_C::RuntimeText_IsUnknownSlot' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, RuntimeText_pyphen) == 0x000298, "Member 'UCommonWeaponAbilityInfoSlotList_C::RuntimeText_pyphen' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, Slot1) == 0x0002A0, "Member 'UCommonWeaponAbilityInfoSlotList_C::Slot1' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, Slot2) == 0x0002A8, "Member 'UCommonWeaponAbilityInfoSlotList_C::Slot2' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, Slot3) == 0x0002B0, "Member 'UCommonWeaponAbilityInfoSlotList_C::Slot3' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, Slot4) == 0x0002B8, "Member 'UCommonWeaponAbilityInfoSlotList_C::Slot4' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, SwitcherSlot) == 0x0002C0, "Member 'UCommonWeaponAbilityInfoSlotList_C::SwitcherSlot' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, Text_SlotNumMax) == 0x0002C8, "Member 'UCommonWeaponAbilityInfoSlotList_C::Text_SlotNumMax' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, Text_SlotNumMin) == 0x0002D0, "Member 'UCommonWeaponAbilityInfoSlotList_C::Text_SlotNumMin' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, VBox_Slot) == 0x0002D8, "Member 'UCommonWeaponAbilityInfoSlotList_C::VBox_Slot' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, VLine01) == 0x0002E0, "Member 'UCommonWeaponAbilityInfoSlotList_C::VLine01' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, SlotNumMax) == 0x0002E8, "Member 'UCommonWeaponAbilityInfoSlotList_C::SlotNumMax' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, LineColor) == 0x0002EC, "Member 'UCommonWeaponAbilityInfoSlotList_C::LineColor' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, SwitcherSlotDefaultPosition) == 0x0002FC, "Member 'UCommonWeaponAbilityInfoSlotList_C::SwitcherSlotDefaultPosition' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotList_C, VlineVisibility) == 0x000304, "Member 'UCommonWeaponAbilityInfoSlotList_C::VlineVisibility' has a wrong offset!");

}

