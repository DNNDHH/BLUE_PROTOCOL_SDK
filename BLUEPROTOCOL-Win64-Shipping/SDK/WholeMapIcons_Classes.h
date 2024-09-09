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
	 * WidgetBlueprintGeneratedClass WholeMapIcons.WholeMapIcons_C
	 * Size -> 0x0008 (FullSize[0x0418] - InheritedSize[0x0410])
	 */
	class UWholeMapIcons_C : public USBWholeIcons
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void AddNFTAreaIcon(class ABP_NFTArea_C* NFTArea);
		void OnCreateNFTAreaIcon(class USBMiniMapIcons* InMiniMapIcons, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize);
		void OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName);
		void OnCreateQuestNPCIcon(int32_t QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location);
		void OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation);
		void OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation);
		class USBMapIcon* AddNamedEnemyIcon(class ASBEnemyCharacter* InActor);
		void OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
		void OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
		class USBMapIcon* AddBuddyIcon(class ASBEnemyCharacter* InActor);
		void AddInterruptQuestIcon(class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize);
		void OnDeletePartyMemberIcon();
		void OnCreatePartyMemberIcon();
		void OnCreateFacilityIcon(const class FName& InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation);
		void OnCreateQuestIcon();
		void OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor);
		void OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName);
		void SetVisiblePinComment(bool IsVisible);
		void OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition);
		void OnCreateCampIcon(const struct FVector& InLocation);
		void OnCreateFishingIcon(const struct FVector& InLocation);
		void OnCreateShortPin();
		void AddQuestIcon(int32_t InQuestIndex);
		void AddIcon(class UClass* Class, int32_t ZOrder, class UUserWidget** IconWidget);
		void OnUnbind();
		void OnBind();
		void UnbindQuest();
		void OnClassChangeNotify_Event_1(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
		void OnGetMyCharacterInfo_Event_1(bool Result);
		void BindCommonComponent();
		void UnbindCommonComponent();
		void OnSaveQuestCheckList(bool bWasSuccessful);
		void BindStepList();
		void UnbindStepList();
		void CustomEvent_3(class UObject* Sender, class UObject* Param);
		void BindFieldStatus();
		void UnbindFieldStatus();
		void RequestCreateFieldStatus();
		void BindPartyMember();
		void UnbindPartyMember();
		void OnPartyMemberUpdate_Event_1();
		void BindQuest();
		void BindPartyMemberOnSetDead(class UIconPartyMember_C* PartyMember);
		void UnbindPartyMemberOnSetDead(class UIconPartyMember_C* PartyMember);
		void CustomEvent_1(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead);
		void UnbindOnInitMapPin();
		void BindOnInitMapPin();
		void OnInitMapPin();
		void BindPin();
		void UnbindPin();
		void BindOnSaveMapPinInfos();
		void UnbindOnSaveMapPinInfos();
		void CustomEvent(bool Result, ESBMapErrorCode ErrorCode);
		void ExecuteUbergraph_WholeMapIcons(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
