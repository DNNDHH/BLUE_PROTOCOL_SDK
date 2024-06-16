#pragma once

 

// Package: WBP_BattleImagineSkillInfoParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C
// 0x0100 (0x0378 - 0x0278)
class UWBP_BattleImagineSkillInfoParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonPossessionInfoItem_C*            BattleImaginePossessionInfoItem;                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRecastTimeInfoItem_C*            BattleImagineRecastTimeInfoItem;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonSummonedInfoItem_C*              BattleImagineSummonedInfoItem;                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxForBattleImagineUniqueStatus;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine05;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBImagineSkillInfo*                    ImagineSkillInfo;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       ImagineMasterData;                                 // 0x02B0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           LineColor;                                         // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VlineVisibility;                                   // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_BattleImagineSkillInfoParts(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetPossessionInfoVisibility(bool InIsVisible);
	void SetTextColor(const struct FLinearColor& Color);
	void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId);
	void SetSkillInfoIconActive(bool InIsActive);
	void SetInfoMark(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattleImagineSkillInfoParts_C">();
	}
	static class UWBP_BattleImagineSkillInfoParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattleImagineSkillInfoParts_C>();
	}
};
static_assert(alignof(UWBP_BattleImagineSkillInfoParts_C) == 0x000008, "Wrong alignment on UWBP_BattleImagineSkillInfoParts_C");
static_assert(sizeof(UWBP_BattleImagineSkillInfoParts_C) == 0x000378, "Wrong size on UWBP_BattleImagineSkillInfoParts_C");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BattleImagineSkillInfoParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, BattleImaginePossessionInfoItem) == 0x000280, "Member 'UWBP_BattleImagineSkillInfoParts_C::BattleImaginePossessionInfoItem' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, BattleImagineRecastTimeInfoItem) == 0x000288, "Member 'UWBP_BattleImagineSkillInfoParts_C::BattleImagineRecastTimeInfoItem' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, BattleImagineSummonedInfoItem) == 0x000290, "Member 'UWBP_BattleImagineSkillInfoParts_C::BattleImagineSummonedInfoItem' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, VBoxForBattleImagineUniqueStatus) == 0x000298, "Member 'UWBP_BattleImagineSkillInfoParts_C::VBoxForBattleImagineUniqueStatus' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, VLine05) == 0x0002A0, "Member 'UWBP_BattleImagineSkillInfoParts_C::VLine05' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, ImagineSkillInfo) == 0x0002A8, "Member 'UWBP_BattleImagineSkillInfoParts_C::ImagineSkillInfo' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, ImagineMasterData) == 0x0002B0, "Member 'UWBP_BattleImagineSkillInfoParts_C::ImagineMasterData' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, LineColor) == 0x000360, "Member 'UWBP_BattleImagineSkillInfoParts_C::LineColor' has a wrong offset!");
static_assert(offsetof(UWBP_BattleImagineSkillInfoParts_C, VlineVisibility) == 0x000370, "Member 'UWBP_BattleImagineSkillInfoParts_C::VlineVisibility' has a wrong offset!");

}

