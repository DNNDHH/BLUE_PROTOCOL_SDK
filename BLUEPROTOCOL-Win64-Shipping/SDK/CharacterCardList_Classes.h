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
	 * WidgetBlueprintGeneratedClass CharacterCardList.CharacterCardList_C
	 * Size -> 0x0530 (FullSize[0x07A8] - InheritedSize[0x0278])
	 */
	class UCharacterCardList_C : public USBCharacterCardList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CardInAnim;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCharacterCardBase_C*                                CharacterCard01;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterCardBase_C*                                CharacterCard02;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterCardBase_C*                                CharacterCard03;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterCardBase_C*                                CharacterCard04;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterCardBase_C*                                CharacterCard05;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterCardBase_C*                                CharacterCard06;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForCharacterCard;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ECharacterCardType                                         CharacterCardType;                                       // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y0IR[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBPlayerConcernedList*                              ConcernedList;                                           // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              MyCharacterId;                                           // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      CharacterIdListForDebug;                                 // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBPlayerCharacterCardData>                  PlayerCharacterCardDatas;                                // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ASBPlayerController*                                 SBPC;                                                    // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMe;                                                   // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F1WN[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerProfile_C*                                    PlayerProfile;                                           // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsInAnimationPlaying;                                   // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsNewMemberCharacterCardUpdateRegistered;               // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BLPD[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGetCharacterCardInfos;                                 // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsNewMemberCharacterCardUpdating;                       // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAdventurerCardOpened;                                 // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsReceptingParticipants;                                // 0x0332(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSingleParticipant;                                    // 0x0333(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsUpdatedForNewMember;                                  // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOpeningAdventererCardInvalid;                         // 0x0335(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInAnimationPlayStarted;                               // 0x0336(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsBindedToOnGetCharacterCardInfosDelegate;              // 0x0337(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsUpdateCharacterCardListProhibited;                    // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HRF5[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerProfileMenuDetailData                        TempPlayerProfileDetailMenuData;                         // 0x0340(0x0468) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateCharacterCardList(TArray<struct FSBPlayerCharacterCardData>* InListData, bool InNoNewMemberJoinInAnimation);
		void UnbindOnGetCharacterCardInfosDelegate();
		void InitForDebug();
		void StartCharacterCardNewPartyMemberInAnimation(class UCharacterCardBase_C* InCharacterCard);
		void GetIsAdventurerCardOpened(bool* bOutIsOpened);
		void FindPartyMemberStateByCharacterId(const class FString& InCharacterId, TArray<class USBPartyMemberState*>* InPartyMemberStateList, class USBPartyMemberState** OutPartyMemberState);
		void RequestCharacterCardListUpdate(TArray<class FString>* InCharacterIds);
		void SetupCharacterCardData(int32_t InId, const struct FSBPlayerCharacterCardData& InCharacterCardData, bool bInIsMe, class USBPartyMemberState* InPartyMemberState, bool bInDoNewMemberJoinInAnimation);
		void Init(TArray<class FString>* InPartyMemberCharacterIds);
		void StartMissionIntroInAnimationEvent();
		void WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_1();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void OnCharacterCardClickedEvent(const class FString& InCharacterId, bool bInIsMe);
		void HandlePartyMemberUpdate();
		void OnGetCharacterCardInfoEvent(bool bWasSuccessful, int32_t RetCode, TArray<struct FSBPlayerCharacterCardData> PlayerCharacterCardDatas);
		void UnbindIsGetPlayerProfileDetailMenuDataEvent();
		void OnIsGetPlayerProfileDetailMenuData(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void DestPlayerProfile();
		void OnClosePlayerProfile();
		void ForceAdventurerCardClose();
		void OnGameStarted();
		void GoToCreateAdventurerCardSequence();
		void ExecuteUbergraph_CharacterCardList(int32_t EntryPoint);
		void OnGetCharacterCardInfos__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
