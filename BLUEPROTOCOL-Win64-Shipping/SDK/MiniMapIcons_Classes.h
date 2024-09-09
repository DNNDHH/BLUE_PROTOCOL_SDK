#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass MiniMapIcons.MiniMapIcons_C
	 * Size -> 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
	 */
	class UMiniMapIcons_C : public USBMiniMapIcons
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void AddNFTAreaIcon(class ABP_NFTArea_C* NFTArea);
		void OnCreateNFTAreaIcon(class USBMiniMapIcons* InMiniMapIcons, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize);
		void OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName);
		void OnCreateUpdraftIcon(class ASBUpdraft* InUpdraft);
		void OnCreateQuestNPCIcon(int32_t QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location);
		void OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation);
		void AddIcon(class USBMiniMapIconBase** InIconWidget, int32_t ZOrder, class USBMiniMapIconBase** IconWidget);
		void DeleteDxBattleSupplierIcon(class AActor* InActor);
		void OnCreateDxBattleSupplier(class AActor* InActor);
		void OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation);
		void OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
		void OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
		class USBMiniMapIconBase* AddBuddyIcon(class ASBEnemyCharacter* InEnemyCharacter);
		class USBMiniMapIconBase* AddNamedEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter);
		class USBMiniMapIconBase* AddEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter);
		void OnCreateDxBattleGateBarrier(class AActor* InActor);
		void AddInterruptQuestIcon(class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize);
		void OnCreateBuffNPCIcon(class ASBFieldActorFreeBuffPoint* FreeBuffPoint);
		void OnCreateFacilityIcon(const class FName& InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation);
		void DeleteEnemyGateIcon(class AActor* InActor);
		void OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor);
		void OnDeletePartyMemberIcon();
		void OnCreatePartyMemberIcon();
		void OnCreateShortPin();
		void OnCreateCarryBases(class AActor* InActor);
		void OnCreateCarrys(class ASBCarry* InCarry);
		void OnCreateEnemyGate(class AActor* InActor);
		void OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName);
		void OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition);
		void OnCreateClimbIcon(class ASBClimbPoint* InClimbPoint);
		void OnCreateFishingIcon(const struct FVector& InLocation);
		void OnCreateCampIcon(const struct FVector& InLocation);
		void OnCreateEngramCannon(class ASBEngramCannon* EngramCannon);
		void OnUnbind();
		void OnBind();
		void DebugPrint(const class FString& InStr, float Duration);
		void GetPartyMemberIconPriority(class ASBPlayerState* InPlayerState, int32_t* OutPriority);
		void OnCreateQuestIcon();
		void AddQuestIcon(int32_t InQuestIndex, bool CheckDisplayOutOfRange);
		void CustomEvent_1(bool Result, ESBMapErrorCode ErrorCode);
		void BindPartyMember();
		void OnPartyMemberUpdate_Event_1();
		void UnbindPartyMember();
		void BindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember);
		void UnbindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember);
		void CustomEvent_2(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead);
		void BindQuest();
		void OnAcceptQuestDelegate_Event_1(bool Result, EAcceptedQuestErrorCode ErrorCode, int32_t RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo);
		void BindOnSaveMapPinInfos();
		void OnAcceptedQuestListDelegete_Event_1();
		void OnCancelQuestDelegate_Event_1(bool Result, int32_t QuestIndex);
		void OnCompleteQuestDelegate_Event_1(int32_t RetCode, int32_t QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData);
		void OnUpdateQuestProgressDelegate_Event_1(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
		void OnQuestListDelegete_Event_1(TArray<struct FUnlockedQuestInfo> QuestList);
		void OnInitMapPin();
		void UnbindQuest();
		void UnbindPin();
		void BindPin();
		void BindOnInitMapPin();
		void UnbindOnInitMapPin();
		void OnClassChangeNotify_Event_1(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
		void OnGetMyCharacterInfo_Event_1(bool Result);
		void BindCommonComponent();
		void UnbindCommonComponent();
		void OnSaveQuestCheckList(bool bWasSuccessful);
		void BindStepList();
		void UnbindStepList();
		void CustomEvent_3(class UObject* Sender, class UObject* Param);
		void UnbindOnSaveMapPinInfos();
		void BindFieldStatus();
		void UnbindFieldStatus();
		void CustomEvent_4();
		void ExecuteUbergraph_MiniMapIcons(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
