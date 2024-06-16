#pragma once

 

// Package: WholeMapIcons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WholeMapIcons.WholeMapIcons_C
// 0x0008 (0x0408 - 0x0400)
class UWholeMapIcons_C final : public USBWholeIcons
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WholeMapIcons(int32 EntryPoint);
	void CustomEvent(const bool Result, const ESBMapErrorCode ErrorCode);
	void UnbindOnSaveMapPinInfos();
	void BindOnSaveMapPinInfos();
	void UnbindPin();
	void BindPin();
	void OnInitMapPin();
	void BindOnInitMapPin();
	void UnbindOnInitMapPin();
	void CustomEvent_0(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead);
	void UnbindPartyMemberOnSetDead(class UIconPartyMember_C* Param_PartyMember);
	void BindPartyMemberOnSetDead(class UIconPartyMember_C* Param_PartyMember);
	void BindQuest();
	void OnPartyMemberUpdate_Event_0();
	void UnbindPartyMember();
	void BindPartyMember();
	void RequestCreateFieldStatus();
	void UnbindFieldStatus();
	void BindFieldStatus();
	void CustomEvent_2(class UObject* Sender, class UObject* Param);
	void UnbindStepList();
	void BindStepList();
	void OnSaveQuestCheckList(const bool bWasSuccessful);
	void UnbindCommonComponent();
	void BindCommonComponent();
	void OnGetMyCharacterInfo_Event_0(bool Result);
	void OnClassChangeNotify_Event_0(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
	void UnbindQuest();
	void OnBind();
	void OnUnbind();
	void AddIcon(class UClass* Param_Class, int32 ZOrder, class UUserWidget** IconWidget);
	void AddQuestIcon(int32 InQuestIndex);
	void OnCreateShortPin();
	void OnCreateFishingIcon(const struct FVector& InLocation);
	void OnCreateCampIcon(const struct FVector& InLocation);
	void OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition);
	void SetVisiblePinComment(bool Param_IsVisible);
	void OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName);
	void OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor);
	void OnCreateQuestIcon();
	void OnCreateFacilityIcon(const class FName InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation);
	void OnCreatePartyMemberIcon();
	void OnDeletePartyMemberIcon();
	void AddInterruptQuestIcon(const class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize);
	class USBMapIcon* AddBuddyIcon(class ASBEnemyCharacter* InActor);
	void OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
	void OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation);
	class USBMapIcon* AddNamedEnemyIcon(class ASBEnemyCharacter* InActor);
	void OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation);
	void OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation);
	void OnCreateQuestNPCIcon(int32 QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location);
	void OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WholeMapIcons_C">();
	}
	static class UWholeMapIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWholeMapIcons_C>();
	}
};
static_assert(alignof(UWholeMapIcons_C) == 0x000008, "Wrong alignment on UWholeMapIcons_C");
static_assert(sizeof(UWholeMapIcons_C) == 0x000408, "Wrong size on UWholeMapIcons_C");
static_assert(offsetof(UWholeMapIcons_C, UberGraphFrame) == 0x000400, "Member 'UWholeMapIcons_C::UberGraphFrame' has a wrong offset!");

}

