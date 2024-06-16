#pragma once

 

// Package: CommonBattleImagineUniqueStatusSets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C
// 0x0038 (0x02B0 - 0x0278)
class UCommonBattleImagineUniqueStatusSets_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonPossessionInfoItem_C*            BattleImaginePossessionInfoItem;                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRecastTimeInfoItem_C*            BattleImagineRecastTimeInfoItem;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonSummonedInfoItem_C*              BattleImagineSummonedInfoItem;                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxForBattleImagineUniqueStatus;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine05;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBImagineSkillInfo*                    ImagineSkillInfo;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonBattleImagineUniqueStatusSets(int32 EntryPoint);
	void SetPossessionInfoVisibility(bool InIsVisible);
	void SetMasterData(const struct FSBMasterImagine& SBMasterImagine, const class FString& UniqueId);
	void SetMasterDataById(int32 ItemIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonBattleImagineUniqueStatusSets_C">();
	}
	static class UCommonBattleImagineUniqueStatusSets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonBattleImagineUniqueStatusSets_C>();
	}
};
static_assert(alignof(UCommonBattleImagineUniqueStatusSets_C) == 0x000008, "Wrong alignment on UCommonBattleImagineUniqueStatusSets_C");
static_assert(sizeof(UCommonBattleImagineUniqueStatusSets_C) == 0x0002B0, "Wrong size on UCommonBattleImagineUniqueStatusSets_C");
static_assert(offsetof(UCommonBattleImagineUniqueStatusSets_C, UberGraphFrame) == 0x000278, "Member 'UCommonBattleImagineUniqueStatusSets_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonBattleImagineUniqueStatusSets_C, BattleImaginePossessionInfoItem) == 0x000280, "Member 'UCommonBattleImagineUniqueStatusSets_C::BattleImaginePossessionInfoItem' has a wrong offset!");
static_assert(offsetof(UCommonBattleImagineUniqueStatusSets_C, BattleImagineRecastTimeInfoItem) == 0x000288, "Member 'UCommonBattleImagineUniqueStatusSets_C::BattleImagineRecastTimeInfoItem' has a wrong offset!");
static_assert(offsetof(UCommonBattleImagineUniqueStatusSets_C, BattleImagineSummonedInfoItem) == 0x000290, "Member 'UCommonBattleImagineUniqueStatusSets_C::BattleImagineSummonedInfoItem' has a wrong offset!");
static_assert(offsetof(UCommonBattleImagineUniqueStatusSets_C, VBoxForBattleImagineUniqueStatus) == 0x000298, "Member 'UCommonBattleImagineUniqueStatusSets_C::VBoxForBattleImagineUniqueStatus' has a wrong offset!");
static_assert(offsetof(UCommonBattleImagineUniqueStatusSets_C, VLine05) == 0x0002A0, "Member 'UCommonBattleImagineUniqueStatusSets_C::VLine05' has a wrong offset!");
static_assert(offsetof(UCommonBattleImagineUniqueStatusSets_C, ImagineSkillInfo) == 0x0002A8, "Member 'UCommonBattleImagineUniqueStatusSets_C::ImagineSkillInfo' has a wrong offset!");

}

