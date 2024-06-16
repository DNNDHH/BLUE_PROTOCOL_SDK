#pragma once

 

// Package: DhcBattleTopBattleSetInfo

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C
// 0x0020 (0x0298 - 0x0278)
class UDhcBattleTopBattleSetInfo_C final : public UUserWidget
{
public:
	class UDhcBattleTopClassAbilityInfo_C*        ClassAbilityInfo;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleTopEnhanceImagineInfo_C*      EnhanceImagineInfo;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleTopSkillInfo_C*               SkillInfo;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDhcBattleTopWeaponInfo_C*              WeaponInfo;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetupInfo(const struct FSBDhcBattleHighScoreInfo& InScoreInfo);
	void GetBattleImagineSlotCnt(int32* OutSlotCnt);
	void GetInnerImagineSlotCnt(int32* OutSlotCnt);
	void GetRegularSkillSlotCnt(int32* OutSlotCnt);
	void GetTacticalSkillSlotCnt(int32* OutSlotCnt);
	void GetClassAbilitySlotCnt(int32* OutSlotCnt);
	void GetIsWeaponLost(bool* OutIsWeaponLost);
	void GetRegularAndULTSkillIdByClassType(ESBClassType InClassType, int32* OutRegularMainSkillId, int32* OutRegularSubSkillId, int32* OutULTSkillId);
	void GetClassTypeFromWeaponId(int32 InWeaponID, ESBClassType* OutClassType);
	void ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopBattleSetInfo_C">();
	}
	static class UDhcBattleTopBattleSetInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopBattleSetInfo_C>();
	}
};
static_assert(alignof(UDhcBattleTopBattleSetInfo_C) == 0x000008, "Wrong alignment on UDhcBattleTopBattleSetInfo_C");
static_assert(sizeof(UDhcBattleTopBattleSetInfo_C) == 0x000298, "Wrong size on UDhcBattleTopBattleSetInfo_C");
static_assert(offsetof(UDhcBattleTopBattleSetInfo_C, ClassAbilityInfo) == 0x000278, "Member 'UDhcBattleTopBattleSetInfo_C::ClassAbilityInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopBattleSetInfo_C, EnhanceImagineInfo) == 0x000280, "Member 'UDhcBattleTopBattleSetInfo_C::EnhanceImagineInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopBattleSetInfo_C, SkillInfo) == 0x000288, "Member 'UDhcBattleTopBattleSetInfo_C::SkillInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopBattleSetInfo_C, WeaponInfo) == 0x000290, "Member 'UDhcBattleTopBattleSetInfo_C::WeaponInfo' has a wrong offset!");

}

