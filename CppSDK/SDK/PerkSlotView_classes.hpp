#pragma once

 

// Package: PerkSlotView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkSlotView.PerkSlotView_C
// 0x0058 (0x02D0 - 0x0278)
class UPerkSlotView_C final : public UUserWidget
{
public:
	class UWeaponCustomPerkSlotItem_C*            Slot1;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomPerkSlotItem_C*            Slot2;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomPerkSlotItem_C*            Slot3;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomPerkSlotItem_C*            Slot4;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotImage1;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotImage2;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotImage3;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotImage4;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBCharacterWeaponPerkData>     Perks;                                             // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         UnlockSlotNum;                                     // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UsedSlotNum;                                       // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyData();
	void SetData(TArray<struct FSBCharacterWeaponPerkData>& Param_Perks, int32 Param_UnlockSlotNum);
	void SetNewItem(int32 ItemId);
	void FindEmptySlot(bool* Exists, class UWeaponCustomPerkSlotItem_C** Param_Slot);
	void SetDiffPerk(TArray<struct FSBCharacterWeaponPerkData>& InWeaponPerks);
	void Set_Slot_Image_Color(const struct FLinearColor& InColorAndOpacity);
	void UpdateNewItemSlotView(int32 ItemId, class UWeaponCustomPerkSlotItem_C* PerkSlot);
	void Set_CraftResult_BigSuccess(bool IsBigSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkSlotView_C">();
	}
	static class UPerkSlotView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkSlotView_C>();
	}
};
static_assert(alignof(UPerkSlotView_C) == 0x000008, "Wrong alignment on UPerkSlotView_C");
static_assert(sizeof(UPerkSlotView_C) == 0x0002D0, "Wrong size on UPerkSlotView_C");
static_assert(offsetof(UPerkSlotView_C, Slot1) == 0x000278, "Member 'UPerkSlotView_C::Slot1' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, Slot2) == 0x000280, "Member 'UPerkSlotView_C::Slot2' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, Slot3) == 0x000288, "Member 'UPerkSlotView_C::Slot3' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, Slot4) == 0x000290, "Member 'UPerkSlotView_C::Slot4' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, SlotImage1) == 0x000298, "Member 'UPerkSlotView_C::SlotImage1' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, SlotImage2) == 0x0002A0, "Member 'UPerkSlotView_C::SlotImage2' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, SlotImage3) == 0x0002A8, "Member 'UPerkSlotView_C::SlotImage3' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, SlotImage4) == 0x0002B0, "Member 'UPerkSlotView_C::SlotImage4' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, Perks) == 0x0002B8, "Member 'UPerkSlotView_C::Perks' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, UnlockSlotNum) == 0x0002C8, "Member 'UPerkSlotView_C::UnlockSlotNum' has a wrong offset!");
static_assert(offsetof(UPerkSlotView_C, UsedSlotNum) == 0x0002CC, "Member 'UPerkSlotView_C::UsedSlotNum' has a wrong offset!");

}

