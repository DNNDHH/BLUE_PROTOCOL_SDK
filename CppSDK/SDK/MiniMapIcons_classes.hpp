#pragma once

 

// Package: MiniMapIcons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIcons.MiniMapIcons_C
// 0x0008 (0x04A8 - 0x04A0)
class UMiniMapIcons_C final : public USBMiniMapIcons
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_MiniMapIcons(int32 EntryPoint);
	void CustomEvent_3();
	void UnbindFieldStatus();
	void BindFieldStatus();
	void UnbindOnSaveMapPinInfos();
	void CustomEvent_2(class UObject* Sender, class UObject* Param);
	void UnbindStepList();
	void BindStepList();
	void OnSaveQuestCheckList(const bool bWasSuccessful);
	void UnbindCommonComponent();
	void BindCommonComponent();
	void OnGetMyCharacterInfo_Event_0(bool Result);
	void OnClassChangeNotify_Event_0(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
	void UnbindOnInitMapPin();
	void BindOnInitMapPin();
	void BindPin();
	void UnbindPin();
	void UnbindQuest();
	void OnInitMapPin();
	void OnQuestListDelegete_Event_0(const TArray<struct FUnlockedQuestInfo>& QuestList);
	void OnUpdateQuestProgressDelegate_Event_0(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
	void OnCompleteQuestDelegate_Event_0(int32 RetCode, int32 QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData);
	void OnCancelQuestDelegate_Event_0(bool Result, int32 QuestIndex);
	void OnAcceptedQuestListDelegete_Event_0();
	void BindOnSaveMapPinInfos();
	void OnAcceptQuestDelegate_Event_0(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo);
	void BindQuest();
	void CustomEvent_1(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead);
	void UnbindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember);
	void BindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember);
	void UnbindPartyMember();
	void OnPartyMemberUpdate_Event_0();
	void BindPartyMember();
	void CustomEvent_0(const bool Result, const ESBMapErrorCode ErrorCode);
	void AddQuestIcon(int32 InQuestIndex, bool CheckDisplayOutOfRange);
	void OnCreateQuestIcon();
	void GetPartyMemberIconPriority(class ASBPlayerState* InPlayerState, int32* OutPriority);
	void DebugPrint(const class FString& InStr, float Duration);
	void OnBind();
	void OnUnbind();
	void OnCreateEngramCannon(const class ASBEngramCannon* EngramCannon);
	void OnCreateCampIcon(const struct FVector& InLocation);
	void OnCreateFishingIcon(const struct FVector& InLocation);
	void OnCreateClimbIcon(const class ASBClimbPoint* InClimbPoint);
	void OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition);
	void OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName);
	void OnCreateEnemyGate(const class AActor* InActor);
	void OnCreateCarrys(const class ASBCarry* InCarry);
	void OnCreateCarryBases(const class AActor* InActor);
	void OnCreateShortPin();
	void OnCreatePartyMemberIcon();
	void OnDeletePartyMemberIcon();
	void OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor);
	void DeleteEnemyGateIcon(const class AActor* InActor);
	void OnCreateFacilityIcon(const class FName InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation);
	void OnCreateBuffNPCIcon(const class ASBFieldActorFreeBuffPoint* FreeBuffPoint);
	void AddInterruptQuestIcon(const class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize);
	void OnCreateDxBattleGateBarrier(const class AActor* InActor);
	class USBMiniMapIconBase* AddEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter);
	class USBMiniMapIconBase* AddNamedEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter);
	class USBMiniMapIconBase* AddBuddyIcon(class ASBEnemyCharacter* InEnemyCharacter);
	void OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
	void OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
	void OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation);
	void OnCreateDxBattleSupplier(const class AActor* InActor);
	void DeleteDxBattleSupplierIcon(const class AActor* InActor);
	void AddIcon(class USBMiniMapIconBase*& InIconWidget, int32 ZOrder, class USBMiniMapIconBase** IconWidget);
	void OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation);
	void OnCreateQuestNPCIcon(int32 QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location);
	void OnCreateUpdraftIcon(const class ASBUpdraft* InUpdraft);
	void OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIcons_C">();
	}
	static class UMiniMapIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIcons_C>();
	}
};
static_assert(alignof(UMiniMapIcons_C) == 0x000008, "Wrong alignment on UMiniMapIcons_C");
static_assert(sizeof(UMiniMapIcons_C) == 0x0004A8, "Wrong size on UMiniMapIcons_C");
static_assert(offsetof(UMiniMapIcons_C, UberGraphFrame) == 0x0004A0, "Member 'UMiniMapIcons_C::UberGraphFrame' has a wrong offset!");

}

