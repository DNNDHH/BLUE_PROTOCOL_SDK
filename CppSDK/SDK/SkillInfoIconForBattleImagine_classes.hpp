#pragma once

 

// Package: SkillInfoIconForBattleImagine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C
// 0x0080 (0x02F8 - 0x0278)
class USkillInfoIconForBattleImagine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnAlertIcon_C*                        AlertIconForBattleImagine;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       BattileImagine;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULevelInfo1ForBattleSet_C*              BattleImagineLevel;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButtonForBattleImagine;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        StackBIcon;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          SkillActionPosition;                               // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6EAE[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BattleImagineUniqueId;                             // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBattleImagineIconPressed;                        // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsTooltipBattleImagineIconActive;                 // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EAF[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ImagineLevel;                                      // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClassLevel;                                        // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkId;                                            // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StackBNum;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StackBMax;                                         // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void ExecuteUbergraph_SkillInfoIconForBattleImagine(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void CreateTooltipForBattleImagine(const struct FST_ToolTipInfo& InImagineTooltipInfo, bool InIsNotUseTooltip);
	void SetBattleImagineInfo(const class FString& InImagineUniqueId, bool InIsInformationHidden, bool InIsStorageMode, bool InIsImagineIconActive, ESBClassType InClassType, bool InDontDisplayAlertIcon, bool InForceLevelSyncOff);
	void SetIsBattleImagineEmpty(ESkillActionPosition InSkillActionPosition, bool InIsEmpty);
	void SetBattleImagineButtonOff();
	void SetBattleImagineLevel(int32 InLevel, const class FString& InImagineUniqueId, ESBClassType InClassType, bool InForceLevelSyncOff);
	void SetBattleImagineLevelVisibility(bool InIsVisible);
	void SetBattleImagineAlertIconVisibility(bool InIsVisible);
	void UpdateBattleImagineIcon(ESkillActionPosition InSkillActionPosition, int32 InImagineId, const class FString& InImagineUniqueId, int32 InStackBNum, int32 InStackBMax, bool InIsTermLimited);
	void InitSkillEmptyColor(ESkillActionPosition InSkillActionPosition);
	void InitSkillStopUpdate(ESkillActionPosition InSkillActionPosition);
	void SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo);
	void SetBtnForPadCursorMoveVisible(bool InIsVisible);
	void SetBattleImagineInfoForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InBattleImagineInfo, ESBClassType InClassType, int32 InClassLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoIconForBattleImagine_C">();
	}
	static class USkillInfoIconForBattleImagine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoIconForBattleImagine_C>();
	}
};
static_assert(alignof(USkillInfoIconForBattleImagine_C) == 0x000008, "Wrong alignment on USkillInfoIconForBattleImagine_C");
static_assert(sizeof(USkillInfoIconForBattleImagine_C) == 0x0002F8, "Wrong size on USkillInfoIconForBattleImagine_C");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoIconForBattleImagine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, AlertIconForBattleImagine) == 0x000280, "Member 'USkillInfoIconForBattleImagine_C::AlertIconForBattleImagine' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, BattileImagine) == 0x000288, "Member 'USkillInfoIconForBattleImagine_C::BattileImagine' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, BattleImagineLevel) == 0x000290, "Member 'USkillInfoIconForBattleImagine_C::BattleImagineLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, BtnForPadCursorMove) == 0x000298, "Member 'USkillInfoIconForBattleImagine_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, SBButtonForBattleImagine) == 0x0002A0, "Member 'USkillInfoIconForBattleImagine_C::SBButtonForBattleImagine' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, StackBIcon) == 0x0002A8, "Member 'USkillInfoIconForBattleImagine_C::StackBIcon' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, CachedToolTipWidget) == 0x0002B0, "Member 'USkillInfoIconForBattleImagine_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, SkillActionPosition) == 0x0002B8, "Member 'USkillInfoIconForBattleImagine_C::SkillActionPosition' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, BattleImagineUniqueId) == 0x0002C0, "Member 'USkillInfoIconForBattleImagine_C::BattleImagineUniqueId' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, OnBattleImagineIconPressed) == 0x0002D0, "Member 'USkillInfoIconForBattleImagine_C::OnBattleImagineIconPressed' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, bIsTooltipBattleImagineIconActive) == 0x0002E0, "Member 'USkillInfoIconForBattleImagine_C::bIsTooltipBattleImagineIconActive' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, ImagineLevel) == 0x0002E4, "Member 'USkillInfoIconForBattleImagine_C::ImagineLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, ClassLevel) == 0x0002E8, "Member 'USkillInfoIconForBattleImagine_C::ClassLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, PerkId) == 0x0002EC, "Member 'USkillInfoIconForBattleImagine_C::PerkId' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, StackBNum) == 0x0002F0, "Member 'USkillInfoIconForBattleImagine_C::StackBNum' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForBattleImagine_C, StackBMax) == 0x0002F4, "Member 'USkillInfoIconForBattleImagine_C::StackBMax' has a wrong offset!");

}

