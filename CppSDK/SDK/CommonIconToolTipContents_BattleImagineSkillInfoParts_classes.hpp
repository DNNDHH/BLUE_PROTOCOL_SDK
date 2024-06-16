#pragma once

 

// Package: CommonIconToolTipContents_BattleImagineSkillInfoParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C
// 0x00E0 (0x0358 - 0x0278)
class UCommonIconToolTipContents_BattleImagineSkillInfoParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIconToolTipContents_PossessionSkillParts_C* PossessionSkillParts;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconToolTipContents_RecastTimeParts_C* RecastTimeParts;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonToolTipContents_SummonedSkillParts_C* SummonedSkillParts;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine01;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBImagineSkillInfo*                    ImagineSkillInfo;                                  // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       ImagineMasterData;                                 // 0x02A8(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts(int32 EntryPoint);
	void SetTextColor(const struct FLinearColor& Color);
	void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine);
	void ResetAllInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContents_BattleImagineSkillInfoParts_C">();
	}
	static class UCommonIconToolTipContents_BattleImagineSkillInfoParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContents_BattleImagineSkillInfoParts_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContents_BattleImagineSkillInfoParts_C");
static_assert(sizeof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C) == 0x000358, "Wrong size on UCommonIconToolTipContents_BattleImagineSkillInfoParts_C");
static_assert(offsetof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C, PossessionSkillParts) == 0x000280, "Member 'UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::PossessionSkillParts' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C, RecastTimeParts) == 0x000288, "Member 'UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::RecastTimeParts' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C, SummonedSkillParts) == 0x000290, "Member 'UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::SummonedSkillParts' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C, VLine01) == 0x000298, "Member 'UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::VLine01' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C, ImagineSkillInfo) == 0x0002A0, "Member 'UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::ImagineSkillInfo' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_BattleImagineSkillInfoParts_C, ImagineMasterData) == 0x0002A8, "Member 'UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::ImagineMasterData' has a wrong offset!");

}

