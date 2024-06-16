#pragma once

 

// Package: GuildEntriesList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildEntriesList.GuildEntriesList_C
// 0x0028 (0x02A0 - 0x0278)
class UGuildEntriesList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VB_Entry;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Invite;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedGuildEntry;                               // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData);
	void ExecuteUbergraph_GuildEntriesList(int32 EntryPoint);
	void OnInviteArrived_Event();
	void OnInviteArraiment(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void OnCompleteCancelEntry(const int32 RetCode);
	void GenerateInvites();
	void Generate_Entries();
	void OnCompletedGuildEntry(const int32 RetCode);
	void OnCompletedGetSendedEntries(const int32 RetCode);
	void Initialize();
	void OnCompletedGetInviteList(const int32 RetCode);
	void OnCompletedOnClickedGuildEntry(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	class USBPlayerGuildComponent* GetGuildComp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildEntriesList_C">();
	}
	static class UGuildEntriesList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildEntriesList_C>();
	}
};
static_assert(alignof(UGuildEntriesList_C) == 0x000008, "Wrong alignment on UGuildEntriesList_C");
static_assert(sizeof(UGuildEntriesList_C) == 0x0002A0, "Wrong size on UGuildEntriesList_C");
static_assert(offsetof(UGuildEntriesList_C, UberGraphFrame) == 0x000278, "Member 'UGuildEntriesList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildEntriesList_C, VB_Entry) == 0x000280, "Member 'UGuildEntriesList_C::VB_Entry' has a wrong offset!");
static_assert(offsetof(UGuildEntriesList_C, VB_Invite) == 0x000288, "Member 'UGuildEntriesList_C::VB_Invite' has a wrong offset!");
static_assert(offsetof(UGuildEntriesList_C, OnClickedGuildEntry) == 0x000290, "Member 'UGuildEntriesList_C::OnClickedGuildEntry' has a wrong offset!");

}

