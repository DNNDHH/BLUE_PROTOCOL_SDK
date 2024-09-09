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
	 * WidgetBlueprintGeneratedClass PartyIcon.PartyIcon_C
	 * Size -> 0x0052 (FullSize[0x02CA] - InheritedSize[0x0278])
	 */
	class UPartyIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              IconInterruptParty;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconMutualFollow;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconNPC;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconParty;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Leader;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchFollow;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchParty;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       isFollower;                                              // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isParty;                                                 // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isGroup;                                                 // 0x02BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isNPC;                                                   // 0x02BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1LK[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBCharacter*                                        OwnerCharacter;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFollowed;                                              // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isLeader;                                                // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RequestSetIconColorName(const class FString& ColorName);
		void CheckLeader();
		void FailedRetry(const class FString& inString);
		void CheckNPC();
		void CheckGroup();
		void CheckFollow(TArray<struct FPlayerProfileSummaryData> InFriendList);
		void CheckParty();
		void InterruptQuest(const class FName& InQuestId);
		void OnJoinInterrupt(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst);
		void InterruptPlayerInfo(const struct FSBInterruptQuestPlayInfo& InPlayInfo);
		void InterruptTeamMemberUpdate();
		void InterruptSuccsess(const class FName& InQuestId, bool InSuccess);
		void InterruptProgressUpdate(class USBPlayerInterruptQuestComponent* InComponent);
		void SetOwnerCharacter(class ASBCharacter* OwnerCharacter);
		void OnFollowStateChanged();
		void InterruptUpdate();
		void Retry_Group_Init();
		void Retry_Init_Follow();
		void OnSetOwnerPlayerCharacter();
		void OnPartyMemberUpdate();
		void Init();
		void Construct();
		void RequestReInit();
		void FreeOnce();
		void OnAttachedClientPlayerStateDelegate__1(class ASBPlayerController* PlayerController);
		void Destruct();
		void PartyPlayerStateChange(class USBPartyMemberState* MemberState);
		void PartyUnbindDelegates();
		void FollowUnbindDelegate();
		void RequestShow();
		void RequestSetAnimationSpeed(float AnimationSpeed);
		void RequestHide();
		void UnbindQuestDelegete();
		void RequestSetOwnerCharacter(class ASBCharacter* OwnerCharacter);
		void ExecuteUbergraph_PartyIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
