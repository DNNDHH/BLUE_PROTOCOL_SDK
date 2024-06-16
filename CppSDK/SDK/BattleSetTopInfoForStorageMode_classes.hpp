#pragma once

 

// Package: BattleSetTopInfoForStorageMode

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C
// 0x0020 (0x0298 - 0x0278)
class UBattleSetTopInfoForStorageMode_C final : public UUserWidget
{
public:
	class UClassAbilityInfoForBattleCordeEdit_C*  ClassAbilityInfo;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPassiveImagineInfoForBattleCordeEdit_C* InnerImagineInfo;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoForBattleCordeEdit_C*         SkillInfo;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponInfoForBattleCordeEdit_C*        WeaponInfo;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetupBattleCordeInfo(int32 InCordeId, bool InSetupByCurrentEquip, bool InIsStorageMode);
	void GetBattleImagineSlotCnt(int32* OutSlotCnt);
	void GetInnerImagineSlotCnt(int32* OutSlotCnt);
	void GetRegularSkillSlotCnt(int32* OutSlotCnt);
	void GetTacticalSkillSlotCnt(int32* OutSlotCnt);
	void GetClassAbilitySlotCnt(int32* OutSlotCnt);
	void GetIsWeaponLost(bool* OutIsWeaponLost);
	void GetRegularAndULTSkillIdByClassType(ESBClassType InClassType, int32* OutRegularMainSkillId, int32* OutRegularSubSkillId, int32* OutULTSkillId);
	void GetClassTypeFromWeaponId(int32 InWeaponID, ESBClassType* OutClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleSetTopInfoForStorageMode_C">();
	}
	static class UBattleSetTopInfoForStorageMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleSetTopInfoForStorageMode_C>();
	}
};
static_assert(alignof(UBattleSetTopInfoForStorageMode_C) == 0x000008, "Wrong alignment on UBattleSetTopInfoForStorageMode_C");
static_assert(sizeof(UBattleSetTopInfoForStorageMode_C) == 0x000298, "Wrong size on UBattleSetTopInfoForStorageMode_C");
static_assert(offsetof(UBattleSetTopInfoForStorageMode_C, ClassAbilityInfo) == 0x000278, "Member 'UBattleSetTopInfoForStorageMode_C::ClassAbilityInfo' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForStorageMode_C, InnerImagineInfo) == 0x000280, "Member 'UBattleSetTopInfoForStorageMode_C::InnerImagineInfo' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForStorageMode_C, SkillInfo) == 0x000288, "Member 'UBattleSetTopInfoForStorageMode_C::SkillInfo' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForStorageMode_C, WeaponInfo) == 0x000290, "Member 'UBattleSetTopInfoForStorageMode_C::WeaponInfo' has a wrong offset!");

}

