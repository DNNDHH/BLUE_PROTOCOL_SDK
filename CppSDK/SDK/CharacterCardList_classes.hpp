#pragma once

 

// Package: CharacterCardList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "ECharacterCardType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCardList.CharacterCardList_C
// 0x04C0 (0x0738 - 0x0278)
class UCharacterCardList_C final : public USBCharacterCardList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CardInAnim;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   CharacterCard01;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   CharacterCard02;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   CharacterCard03;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   CharacterCard04;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   CharacterCard05;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterCardBase_C*                   CharacterCard06;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForCharacterCard;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ECharacterCardType                            CharacterCardType;                                 // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_61F3[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 ConcernedList;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 MyCharacterId;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         CharacterIdListForDebug;                           // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBPlayerCharacterCardData>     PlayerCharacterCard_Datas;                         // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASBPlayerController*                    SBPC;                                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMe;                                             // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F4[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       PlayerProfile;                                     // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInAnimationPlaying;                             // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsNewMemberCharacterCardUpdateRegistered;         // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F5[0x6];                                     // 0x031A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGetCharacterCardInfos;                           // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsNewMemberCharacterCardUpdating;                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsAdventurerCardOpened;                           // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsReceptingParticipants;                          // 0x0332(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSingleParticipant;                              // 0x0333(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsUpdatedForNewMember;                            // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsOpeningAdventererCardInvalid;                   // 0x0335(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInAnimationPlayStarted;                         // 0x0336(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsBindedToOnGetCharacterCardInfosDelegate;        // 0x0337(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsUpdateCharacterCardListProhibited;              // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F6[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           TempPlayerProfileDetailMenuData;                   // 0x0340(0x03F8)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnGetCharacterCardInfos__DelegateSignature();
	void ExecuteUbergraph_CharacterCardList(int32 EntryPoint);
	void GoToCreateAdventurerCardSequence();
	void OnGameStarted();
	void ForceAdventurerCardClose();
	void OnClosePlayerProfile();
	void DestPlayerProfile();
	void OnIsGetPlayerProfileDetailMenuData(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void UnbindIsGetPlayerProfileDetailMenuDataEvent();
	void OnGetCharacterCardInfoEvent(const bool bWasSuccessful, const int32 RetCode, const TArray<struct FSBPlayerCharacterCardData>& PlayerCharacterCardDatas);
	void HandlePartyMemberUpdate();
	void OnCharacterCardClickedEvent(const class FString& InCharacterId, bool bInIsMe);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_0();
	void StartMissionIntroInAnimationEvent();
	void Init(TArray<class FString>& InPartyMemberCharacterIds);
	void SetupCharacterCardData(int32 InId, const struct FSBPlayerCharacterCardData& InCharacterCardData, bool bInIsMe, class USBPartyMemberState* InPartyMemberState, bool bInDoNewMemberJoinInAnimation);
	void RequestCharacterCardListUpdate(TArray<class FString>& InCharacterIds);
	void FindPartyMemberStateByCharacterId(const class FString& InCharacterId, TArray<class USBPartyMemberState*>& InPartyMemberStateList, class USBPartyMemberState** OutPartyMemberState);
	void GetIsAdventurerCardOpened(bool* bOutIsOpened);
	void StartCharacterCardNewPartyMemberInAnimation(class UCharacterCardBase_C* InCharacterCard);
	void InitForDebug();
	void UnbindOnGetCharacterCardInfosDelegate();
	void UpdateCharacterCardList(TArray<struct FSBPlayerCharacterCardData>& InListData, bool InNoNewMemberJoinInAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCardList_C">();
	}
	static class UCharacterCardList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCardList_C>();
	}
};
static_assert(alignof(UCharacterCardList_C) == 0x000008, "Wrong alignment on UCharacterCardList_C");
static_assert(sizeof(UCharacterCardList_C) == 0x000738, "Wrong size on UCharacterCardList_C");
static_assert(offsetof(UCharacterCardList_C, UberGraphFrame) == 0x000278, "Member 'UCharacterCardList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CardInAnim) == 0x000280, "Member 'UCharacterCardList_C::CardInAnim' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterCard01) == 0x000288, "Member 'UCharacterCardList_C::CharacterCard01' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterCard02) == 0x000290, "Member 'UCharacterCardList_C::CharacterCard02' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterCard03) == 0x000298, "Member 'UCharacterCardList_C::CharacterCard03' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterCard04) == 0x0002A0, "Member 'UCharacterCardList_C::CharacterCard04' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterCard05) == 0x0002A8, "Member 'UCharacterCardList_C::CharacterCard05' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterCard06) == 0x0002B0, "Member 'UCharacterCardList_C::CharacterCard06' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, HBoxForCharacterCard) == 0x0002B8, "Member 'UCharacterCardList_C::HBoxForCharacterCard' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterCardType) == 0x0002C0, "Member 'UCharacterCardList_C::CharacterCardType' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, ConcernedList) == 0x0002C8, "Member 'UCharacterCardList_C::ConcernedList' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, MyCharacterId) == 0x0002D0, "Member 'UCharacterCardList_C::MyCharacterId' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, CharacterIdListForDebug) == 0x0002E0, "Member 'UCharacterCardList_C::CharacterIdListForDebug' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, PlayerCharacterCard_Datas) == 0x0002F0, "Member 'UCharacterCardList_C::PlayerCharacterCard_Datas' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, SBPC) == 0x000300, "Member 'UCharacterCardList_C::SBPC' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsMe) == 0x000308, "Member 'UCharacterCardList_C::bIsMe' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, PlayerProfile) == 0x000310, "Member 'UCharacterCardList_C::PlayerProfile' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsInAnimationPlaying) == 0x000318, "Member 'UCharacterCardList_C::bIsInAnimationPlaying' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsNewMemberCharacterCardUpdateRegistered) == 0x000319, "Member 'UCharacterCardList_C::bIsNewMemberCharacterCardUpdateRegistered' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, OnGetCharacterCardInfos) == 0x000320, "Member 'UCharacterCardList_C::OnGetCharacterCardInfos' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsNewMemberCharacterCardUpdating) == 0x000330, "Member 'UCharacterCardList_C::bIsNewMemberCharacterCardUpdating' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsAdventurerCardOpened) == 0x000331, "Member 'UCharacterCardList_C::bIsAdventurerCardOpened' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsReceptingParticipants) == 0x000332, "Member 'UCharacterCardList_C::bIsReceptingParticipants' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsSingleParticipant) == 0x000333, "Member 'UCharacterCardList_C::bIsSingleParticipant' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsUpdatedForNewMember) == 0x000334, "Member 'UCharacterCardList_C::bIsUpdatedForNewMember' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsOpeningAdventererCardInvalid) == 0x000335, "Member 'UCharacterCardList_C::bIsOpeningAdventererCardInvalid' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsInAnimationPlayStarted) == 0x000336, "Member 'UCharacterCardList_C::bIsInAnimationPlayStarted' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsBindedToOnGetCharacterCardInfosDelegate) == 0x000337, "Member 'UCharacterCardList_C::bIsBindedToOnGetCharacterCardInfosDelegate' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, bIsUpdateCharacterCardListProhibited) == 0x000338, "Member 'UCharacterCardList_C::bIsUpdateCharacterCardListProhibited' has a wrong offset!");
static_assert(offsetof(UCharacterCardList_C, TempPlayerProfileDetailMenuData) == 0x000340, "Member 'UCharacterCardList_C::TempPlayerProfileDetailMenuData' has a wrong offset!");

}

