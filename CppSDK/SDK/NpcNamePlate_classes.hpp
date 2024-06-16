#pragma once

 

// Package: NpcNamePlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NpcNamePlate.NpcNamePlate_C
// 0x00A0 (0x0328 - 0x0288)
class UNpcNamePlate_C final : public USBNamePlateWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnimation;                                       // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CursorInOut;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               FacilityGrp;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NameGrp;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObjectSelectCursor_C*                  ObjectSelectCursor;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestIcon_C*                           QuestIcon;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               QuestMarkGrp;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_NPCFacilityMark_Icon_C*            UMG_NPCFacilityMark_Icon;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   CurrentText;                                       // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASBMobCharacter*                        OwnerNPCCharacter;                                 // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EQuestIconType>                        IgnoreIconTypes;                                   // 0x0310(0x0010)(Edit, BlueprintVisible)
	bool                                          bSystemVisible;                                    // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HudVisible;                                        // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IntaractEffectVisible;                             // 0x0322(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NpcNamePlate(int32 EntryPoint);
	void OnDisplayStart();
	void FadeOutFinishSelectCursor(bool IsFadeIn);
	void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
	void SetInteractionTargetVisibility(const bool bInVisibility);
	void UnbindChangeBalloonVisible();
	void Destruct();
	void AutoChangeVisible();
	void AutoChangeInvisible();
	void SetChargeMax();
	void SetDepth(const float InDepth);
	void OnChangeBalloonVisible(bool bVsiible);
	void SetNpcCharacter_Internal(class ASBMobCharacter* InNpcCharacter);
	void SetNPCFacility(ESBFacilityType IconType);
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Construct();
	void ClassChangeNotify_Event(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
	void OnLevelUp_Event(int32 InPrevLevel, int32 InCurLevel, const struct FSBExtraExpParse& InExtraExpParse);
	void OnSetKeyValue_Event(bool Result);
	void OnAdventurerRankDelegate_Event_0(const int32 InRetCode);
	void OnEndPlay();
	void OnBeginPlay(class ASBMobCharacter* Param_NpcCharacter);
	void OnAcceptedQuestListDelegete______0();
	void OnCompleteQuestDelegate______2(int32 RetCode, int32 QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData);
	void OnUpdateQuestProgressDelegate______0(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
	void OnCancelQuestDelegate______0(bool Result, int32 QuestIndex);
	void OnAcceptQuestDelegate_Reset(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo);
	void OnQuestListDelegete_Reset(const TArray<struct FUnlockedQuestInfo>& QuestList);
	void SetText(const class FText& InText);
	void UpdateQuest();
	void CheckVisibility();
	void CursorInOutAnim(bool bin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NpcNamePlate_C">();
	}
	static class UNpcNamePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNpcNamePlate_C>();
	}
};
static_assert(alignof(UNpcNamePlate_C) == 0x000008, "Wrong alignment on UNpcNamePlate_C");
static_assert(sizeof(UNpcNamePlate_C) == 0x000328, "Wrong size on UNpcNamePlate_C");
static_assert(offsetof(UNpcNamePlate_C, UberGraphFrame) == 0x000288, "Member 'UNpcNamePlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, InAnimation) == 0x000290, "Member 'UNpcNamePlate_C::InAnimation' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, CursorInOut) == 0x000298, "Member 'UNpcNamePlate_C::CursorInOut' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, AnimInOut) == 0x0002A0, "Member 'UNpcNamePlate_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, CanvasPanel_0) == 0x0002A8, "Member 'UNpcNamePlate_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, FacilityGrp) == 0x0002B0, "Member 'UNpcNamePlate_C::FacilityGrp' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, NameGrp) == 0x0002B8, "Member 'UNpcNamePlate_C::NameGrp' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, ObjectSelectCursor) == 0x0002C0, "Member 'UNpcNamePlate_C::ObjectSelectCursor' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, QuestIcon) == 0x0002C8, "Member 'UNpcNamePlate_C::QuestIcon' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, QuestMarkGrp) == 0x0002D0, "Member 'UNpcNamePlate_C::QuestMarkGrp' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, RetainerBox_0) == 0x0002D8, "Member 'UNpcNamePlate_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, TextBlock_0) == 0x0002E0, "Member 'UNpcNamePlate_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, UMG_NPCFacilityMark_Icon) == 0x0002E8, "Member 'UNpcNamePlate_C::UMG_NPCFacilityMark_Icon' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, CurrentText) == 0x0002F0, "Member 'UNpcNamePlate_C::CurrentText' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, OwnerNPCCharacter) == 0x000308, "Member 'UNpcNamePlate_C::OwnerNPCCharacter' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, IgnoreIconTypes) == 0x000310, "Member 'UNpcNamePlate_C::IgnoreIconTypes' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, bSystemVisible) == 0x000320, "Member 'UNpcNamePlate_C::bSystemVisible' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, HudVisible) == 0x000321, "Member 'UNpcNamePlate_C::HudVisible' has a wrong offset!");
static_assert(offsetof(UNpcNamePlate_C, IntaractEffectVisible) == 0x000322, "Member 'UNpcNamePlate_C::IntaractEffectVisible' has a wrong offset!");

}

