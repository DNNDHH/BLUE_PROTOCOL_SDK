#pragma once

 

// Package: UMG_MatchingMenu_MissionDetail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "EntryConditionType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C
// 0x0188 (0x0400 - 0x0278)
class UUMG_MatchingMenu_MissionDetail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BorderEntryCondition;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ButtonWeb;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxStackB;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine0;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLineStackB;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageStackB;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       RichTextDescription;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_108;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_107;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_StackB;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextLevelSyncValue;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextParticipantMaxValue;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextStackB;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextTimeLimitValue;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionList_C* UMG_MatchingMenu_EntryConditionList;               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardFirst;                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardFirst_LimitTerm;            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardFirstBronze;                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardFirstGold;                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardFirstSilver;                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardHBoost;                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardHNormal;                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardHPlus;                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardNormal;                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardNormalBronze;               // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardNormalGold;                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardNormalSilver;               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Reward_C*             UMG_MatchingMenu_RewardPlus;                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_SupplyList_C*         UMG_MatchingMenu_SupplyList;                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCloseButtonClicked;                              // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_MatchingMenu_EntryCondition_C*     EntryCondition;                                    // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EntryConditionId;                                  // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86BC[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickRewardIcon;                                 // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SiteUrl;                                           // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickSupplyIcon;                                 // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CommonToolTipText_Fixed_C*         ToolTip;                                           // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionClass_C* EntryConditionClass;                               // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionQuest_C* EntryConditionQuest;                               // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBClassType>                          EntryConditionClassList;                           // 0x03E0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class FName>                           EntryConditionQuestList;                           // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnCloseButtonClicked__DelegateSignature();
	void OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender);
	void OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void ExecuteUbergraph_UMG_MatchingMenu_MissionDetail(int32 EntryPoint);
	void OnClose_Class();
	void OnClose_Quest();
	void BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature(const struct FVector2D& Position);
	void BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature(const struct FVector2D& Position);
	void BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void OnCloseEntryCondition();
	void BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature(EntryConditionType EntryConditionType, int32 Value, const struct FVector2D& Position);
	void BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnClickRewardIconEvent(class UQuestRewardIcon_C* Sender);
	void Construct();
	void SetDungeonInfo(const struct FSBMapInfo& DungeonMapInfo);
	void SetDungeonInfo2(const struct FSBMapInfo& DungeonMapInfo);
	void SetTimeLimit(int32 TimeLimit);
	void SetTimeLimit2();
	void SetEntryCondition(int32 RequiredBattleScore, int32 LevelSync, int32 RequiredAdventurerRank, int32 Param_EntryConditionId, ESBEntryConditionPartyState RequiredPartyState, int32 RequiredClassLevel, TArray<class FName>& Param_EntryConditionQuest, TArray<ESBClassType>& Param_EntryConditionClass, int32 EntryConditionSubClassLv, int32 EntryConditionScbNum);
	void SetEntryCondition2(int32 RequiredBattleScore, int32 RequiredClassLevel);
	void SetWebButton(const class FString& InSiteUrl);
	void SetRewardList(class FName DungeonId, class FName DungeonRewardId, const class FString& DungeonGameMode);
	void SetRewardList2(class FName DungeonId, class FName DungeonRewardId, const class FString& DungeonGameMode);
	void SetRewardList_FirstRanked(const class FString& GameMode, class FName DungeonId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetRewardList_NormalRanked(const class FString& GameMode, class FName DungeonId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetRewardList_FirstNormal(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetRewardList_FirstNormal2(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetRewardList_LimitTermFirst(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetRewardList_Plus(const class FString& GameMode, class FName DungeonId, class FName RewardId);
	void SetRewardList_Plus2(const class FString& GameMode, class FName DungeonId, class FName RewardId);
	void SetRewardList_HelpBonus(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid);
	void SetStackB(ESBStackBEnableType StackB);
	void CheckEntryConditionClass(TArray<ESBClassType>& Param_Class, bool* Passed);
	void CheckEntryConditionQuest(TArray<class FName>& Quest, bool* Passed);
	void CheckEntryConditionScb(int32 Lv, int32 Num, bool* Ret);
	void Get_Ex_Rank_by_Class_Lv(int32 Lv, int32* Rank);
	void ClearRewardList(bool IsHelpMode);
	void Get_Reward_Search_Name(int32 ModeId, class FName* SearchName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_MissionDetail_C">();
	}
	static class UUMG_MatchingMenu_MissionDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_MissionDetail_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_MissionDetail_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_MissionDetail_C");
static_assert(sizeof(UUMG_MatchingMenu_MissionDetail_C) == 0x000400, "Wrong size on UUMG_MatchingMenu_MissionDetail_C");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_MissionDetail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, BorderEntryCondition) == 0x000280, "Member 'UUMG_MatchingMenu_MissionDetail_C::BorderEntryCondition' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, ButtonWeb) == 0x000288, "Member 'UUMG_MatchingMenu_MissionDetail_C::ButtonWeb' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, HorizontalBoxStackB) == 0x000290, "Member 'UUMG_MatchingMenu_MissionDetail_C::HorizontalBoxStackB' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, ImageLine0) == 0x000298, "Member 'UUMG_MatchingMenu_MissionDetail_C::ImageLine0' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, ImageLine1) == 0x0002A0, "Member 'UUMG_MatchingMenu_MissionDetail_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, ImageLineStackB) == 0x0002A8, "Member 'UUMG_MatchingMenu_MissionDetail_C::ImageLineStackB' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, ImageStackB) == 0x0002B0, "Member 'UUMG_MatchingMenu_MissionDetail_C::ImageStackB' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, RichTextDescription) == 0x0002B8, "Member 'UUMG_MatchingMenu_MissionDetail_C::RichTextDescription' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, SBRuntimeTextBlock_108) == 0x0002C0, "Member 'UUMG_MatchingMenu_MissionDetail_C::SBRuntimeTextBlock_108' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, ScrollBox_107) == 0x0002C8, "Member 'UUMG_MatchingMenu_MissionDetail_C::ScrollBox_107' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, SizeBox_StackB) == 0x0002D0, "Member 'UUMG_MatchingMenu_MissionDetail_C::SizeBox_StackB' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, TextLevelSyncValue) == 0x0002D8, "Member 'UUMG_MatchingMenu_MissionDetail_C::TextLevelSyncValue' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, TextParticipantMaxValue) == 0x0002E0, "Member 'UUMG_MatchingMenu_MissionDetail_C::TextParticipantMaxValue' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, TextStackB) == 0x0002E8, "Member 'UUMG_MatchingMenu_MissionDetail_C::TextStackB' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, TextTimeLimitValue) == 0x0002F0, "Member 'UUMG_MatchingMenu_MissionDetail_C::TextTimeLimitValue' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_EntryConditionList) == 0x0002F8, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_EntryConditionList' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardFirst) == 0x000300, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardFirst' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardFirst_LimitTerm) == 0x000308, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardFirst_LimitTerm' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardFirstBronze) == 0x000310, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardFirstBronze' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardFirstGold) == 0x000318, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardFirstGold' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardFirstSilver) == 0x000320, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardFirstSilver' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardHBoost) == 0x000328, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardHBoost' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardHNormal) == 0x000330, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardHNormal' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardHPlus) == 0x000338, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardHPlus' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardNormal) == 0x000340, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardNormal' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardNormalBronze) == 0x000348, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardNormalBronze' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardNormalGold) == 0x000350, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardNormalGold' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardNormalSilver) == 0x000358, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardNormalSilver' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_RewardPlus) == 0x000360, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_RewardPlus' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, UMG_MatchingMenu_SupplyList) == 0x000368, "Member 'UUMG_MatchingMenu_MissionDetail_C::UMG_MatchingMenu_SupplyList' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, WBP_StackB_S) == 0x000370, "Member 'UUMG_MatchingMenu_MissionDetail_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, OnCloseButtonClicked) == 0x000378, "Member 'UUMG_MatchingMenu_MissionDetail_C::OnCloseButtonClicked' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, EntryCondition) == 0x000388, "Member 'UUMG_MatchingMenu_MissionDetail_C::EntryCondition' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, EntryConditionId) == 0x000390, "Member 'UUMG_MatchingMenu_MissionDetail_C::EntryConditionId' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, OnClickRewardIcon) == 0x000398, "Member 'UUMG_MatchingMenu_MissionDetail_C::OnClickRewardIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, SiteUrl) == 0x0003A8, "Member 'UUMG_MatchingMenu_MissionDetail_C::SiteUrl' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, OnClickSupplyIcon) == 0x0003B8, "Member 'UUMG_MatchingMenu_MissionDetail_C::OnClickSupplyIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, ToolTip) == 0x0003C8, "Member 'UUMG_MatchingMenu_MissionDetail_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, EntryConditionClass) == 0x0003D0, "Member 'UUMG_MatchingMenu_MissionDetail_C::EntryConditionClass' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, EntryConditionQuest) == 0x0003D8, "Member 'UUMG_MatchingMenu_MissionDetail_C::EntryConditionQuest' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, EntryConditionClassList) == 0x0003E0, "Member 'UUMG_MatchingMenu_MissionDetail_C::EntryConditionClassList' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_MissionDetail_C, EntryConditionQuestList) == 0x0003F0, "Member 'UUMG_MatchingMenu_MissionDetail_C::EntryConditionQuestList' has a wrong offset!");

}

