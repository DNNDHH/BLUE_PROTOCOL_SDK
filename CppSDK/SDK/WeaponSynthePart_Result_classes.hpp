#pragma once

 

// Package: WeaponSynthePart_Result

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_Result.WeaponSynthePart_Result_C
// 0x0248 (0x04C0 - 0x0278)
class UWeaponSynthePart_Result_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       In;                                                // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotBox_C*        PerkSlotBox;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* WeaponStatusWindow;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           beforeData;                                        // 0x0290(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           AfterData;                                         // 0x03A8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetupSynthe(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData, int32 InSlotNo);
	void SetupAddSlot(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData);
	void SetupRemove(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData, int32 InRemoveSlotNo, bool InIsRemove);
	void SetupTuning(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData, TArray<int32>& LockSlotNo);
	void Open();
	void PlayAnimIn();
	void SetBeforeData(const struct FOwnItemInfo& Param_beforeData);
	void SetAfterData(const struct FOwnItemInfo& Param_AfterData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_Result_C">();
	}
	static class UWeaponSynthePart_Result_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_Result_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_Result_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_Result_C");
static_assert(sizeof(UWeaponSynthePart_Result_C) == 0x0004C0, "Wrong size on UWeaponSynthePart_Result_C");
static_assert(offsetof(UWeaponSynthePart_Result_C, In) == 0x000278, "Member 'UWeaponSynthePart_Result_C::In' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Result_C, PerkSlotBox) == 0x000280, "Member 'UWeaponSynthePart_Result_C::PerkSlotBox' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Result_C, WeaponStatusWindow) == 0x000288, "Member 'UWeaponSynthePart_Result_C::WeaponStatusWindow' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Result_C, beforeData) == 0x000290, "Member 'UWeaponSynthePart_Result_C::beforeData' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Result_C, AfterData) == 0x0003A8, "Member 'UWeaponSynthePart_Result_C::AfterData' has a wrong offset!");

}

