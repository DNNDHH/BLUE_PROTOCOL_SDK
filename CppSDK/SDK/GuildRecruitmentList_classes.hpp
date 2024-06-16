#pragma once

 

// Package: GuildRecruitmentList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRecruitmentList.GuildRecruitmentList_C
// 0x0028 (0x02A0 - 0x0278)
class UGuildRecruitmentList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VB_Entry;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Invite;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedGuildEntry;                               // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData);
	void ExecuteUbergraph_GuildRecruitmentList(int32 EntryPoint);
	void Complete_OnClickedRecruitmentListItem(const struct FGuildEntryData& GuildEntry);
	void OnInviteArrived_Event();
	void Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void OnCompleteCancelEntry_Event(const int32 RetCode);
	void GenerateInvites();
	void Generate_Entries();
	void OnCompletedGuildEntry_Event(const int32 RetCode);
	void OnCompletedGetSendedEntries_Event(const int32 RetCode);
	void Initialize();
	void OnCompletedGetInviteList_Event(const int32 RetCode);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	class USBPlayerGuildComponent* GetGuildComp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRecruitmentList_C">();
	}
	static class UGuildRecruitmentList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRecruitmentList_C>();
	}
};
static_assert(alignof(UGuildRecruitmentList_C) == 0x000008, "Wrong alignment on UGuildRecruitmentList_C");
static_assert(sizeof(UGuildRecruitmentList_C) == 0x0002A0, "Wrong size on UGuildRecruitmentList_C");
static_assert(offsetof(UGuildRecruitmentList_C, UberGraphFrame) == 0x000278, "Member 'UGuildRecruitmentList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentList_C, VB_Entry) == 0x000280, "Member 'UGuildRecruitmentList_C::VB_Entry' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentList_C, VB_Invite) == 0x000288, "Member 'UGuildRecruitmentList_C::VB_Invite' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentList_C, OnClickedGuildEntry) == 0x000290, "Member 'UGuildRecruitmentList_C::OnClickedGuildEntry' has a wrong offset!");

}

