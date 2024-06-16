#pragma once

 

// Package: GuildInviteMemberList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildInviteMemberList.GuildInviteMemberList_C
// 0x0040 (0x02B8 - 0x0278)
class UGuildInviteMemberList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VB_Items;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectedMemberData;                              // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedCancelInvite;                             // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestGuildMemberButtonClicked;                 // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
	void OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data);
	void OnRequestGuildMemberButtonClicked__DelegateSignature(const struct FGuildMemberData& Data);
	void ExecuteUbergraph_GuildInviteMemberList(int32 EntryPoint);
	void OnClickedCancelInvite_Event(class UGuildMemberListItem_C* MemberData);
	void OnGuildMemberSelected(class UGuildMemberListItem_C* MemberData);
	void OnCompletedInviteMemberList_Event(const int32 RetCode);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GenerateInviteMemberData();
	class USBPlayerGuildComponent* GetGuildComp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildInviteMemberList_C">();
	}
	static class UGuildInviteMemberList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildInviteMemberList_C>();
	}
};
static_assert(alignof(UGuildInviteMemberList_C) == 0x000008, "Wrong alignment on UGuildInviteMemberList_C");
static_assert(sizeof(UGuildInviteMemberList_C) == 0x0002B8, "Wrong size on UGuildInviteMemberList_C");
static_assert(offsetof(UGuildInviteMemberList_C, UberGraphFrame) == 0x000278, "Member 'UGuildInviteMemberList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildInviteMemberList_C, VB_Items) == 0x000280, "Member 'UGuildInviteMemberList_C::VB_Items' has a wrong offset!");
static_assert(offsetof(UGuildInviteMemberList_C, OnSelectedMemberData) == 0x000288, "Member 'UGuildInviteMemberList_C::OnSelectedMemberData' has a wrong offset!");
static_assert(offsetof(UGuildInviteMemberList_C, OnClickedCancelInvite) == 0x000298, "Member 'UGuildInviteMemberList_C::OnClickedCancelInvite' has a wrong offset!");
static_assert(offsetof(UGuildInviteMemberList_C, OnRequestGuildMemberButtonClicked) == 0x0002A8, "Member 'UGuildInviteMemberList_C::OnRequestGuildMemberButtonClicked' has a wrong offset!");

}

