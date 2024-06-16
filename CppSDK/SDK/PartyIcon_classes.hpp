#pragma once

 

// Package: PartyIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyIcon.PartyIcon_C
// 0x0058 (0x02D0 - 0x0278)
class UPartyIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IconInterruptParty;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconMutualFollow;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNPC;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconParty;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Leader;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFollow;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchParty;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsFollower;                                        // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsParty;                                           // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGroup;                                           // 0x02BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNPC;                                             // 0x02BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F1D[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           OwnerCharacter;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFollowed;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLeader;                                          // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PartyIcon(int32 EntryPoint);
	void RequestSetOwnerCharacter(class ASBCharacter* Param_OwnerCharacter);
	void UnbindQuestDelegete();
	void RequestHide();
	void RequestSetAnimationSpeed(float AnimationSpeed);
	void RequestShow();
	void FollowUnbindDelegate();
	void PartyUnbindDelegates();
	void PartyPlayerStateChange(class USBPartyMemberState* MemberState);
	void Destruct();
	void OnAttachedClientPlayerStateDelegate______0(class ASBPlayerController* PlayerController);
	void FreeOnce();
	void RequestReInit();
	void Construct();
	void Init();
	void OnPartyMemberUpdate();
	void OnSetOwnerPlayerCharacter();
	void Retry_Init_Follow();
	void Retry_Group_Init();
	void InterruptUpdate();
	void OnFollowStateChanged();
	void SetOwnerCharacter(class ASBCharacter* Param_OwnerCharacter);
	void InterruptProgressUpdate(class USBPlayerInterruptQuestComponent* InComponent);
	void InterruptSuccsess(const class FName& InQuestId, bool InSuccess);
	void InterruptTeamMemberUpdate();
	void InterruptPlayerInfo(const struct FSBInterruptQuestPlayInfo& InPlayInfo);
	void OnJoinInterrupt(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst);
	void InterruptQuest(const class FName& InQuestId);
	void CheckParty();
	void CheckFollow(const TArray<struct FPlayerProfileSummaryData>& InFriendList);
	void CheckGroup();
	void CheckNPC();
	void Failed_Retry(const class FString& InString);
	void CheckLeader();
	void RequestSetIconColorName(const class FString& ColorName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyIcon_C">();
	}
	static class UPartyIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyIcon_C>();
	}
};
static_assert(alignof(UPartyIcon_C) == 0x000008, "Wrong alignment on UPartyIcon_C");
static_assert(sizeof(UPartyIcon_C) == 0x0002D0, "Wrong size on UPartyIcon_C");
static_assert(offsetof(UPartyIcon_C, UberGraphFrame) == 0x000278, "Member 'UPartyIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IconInterruptParty) == 0x000280, "Member 'UPartyIcon_C::IconInterruptParty' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IconMutualFollow) == 0x000288, "Member 'UPartyIcon_C::IconMutualFollow' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IconNPC) == 0x000290, "Member 'UPartyIcon_C::IconNPC' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IconParty) == 0x000298, "Member 'UPartyIcon_C::IconParty' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, Img_Leader) == 0x0002A0, "Member 'UPartyIcon_C::Img_Leader' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, SwitchFollow) == 0x0002A8, "Member 'UPartyIcon_C::SwitchFollow' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, SwitchParty) == 0x0002B0, "Member 'UPartyIcon_C::SwitchParty' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IsFollower) == 0x0002B8, "Member 'UPartyIcon_C::IsFollower' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IsParty) == 0x0002B9, "Member 'UPartyIcon_C::IsParty' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IsGroup) == 0x0002BA, "Member 'UPartyIcon_C::IsGroup' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IsNPC) == 0x0002BB, "Member 'UPartyIcon_C::IsNPC' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, OwnerCharacter) == 0x0002C0, "Member 'UPartyIcon_C::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IsFollowed) == 0x0002C8, "Member 'UPartyIcon_C::IsFollowed' has a wrong offset!");
static_assert(offsetof(UPartyIcon_C, IsLeader) == 0x0002C9, "Member 'UPartyIcon_C::IsLeader' has a wrong offset!");

}

