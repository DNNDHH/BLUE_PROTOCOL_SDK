#pragma once

 

// Package: GuildMemberListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberListItem.GuildMemberListItem_C
// 0x0130 (0x03A8 - 0x0278)
class UGuildMemberListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_ChangeType;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonPlayerListPannel_C*              CommonPlayerListPannel;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildMemberData                       GuildMemberData;                                   // 0x0290(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGuildMemberSettingDialog_C*            Dialog;                                            // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectedMember;                                  // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedCancelInvite;                             // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestGuildMemberButtonClicked;                 // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bInviteList;                                       // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnSelectedMember__DelegateSignature(class UGuildMemberListItem_C* MemberData);
	void OnClickedCancelInvite__DelegateSignature(class UGuildMemberListItem_C* MemberData);
	void OnRequestGuildMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void ExecuteUbergraph_GuildMemberListItem(int32 EntryPoint);
	void OnRequestGuildMemberInviteCancel_Event();
	void OnSelectedMemberListPannel(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void Destruct();
	void OnClosed();
	void BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Set_MemberData(const struct FGuildMemberData& Param_GuildMemberData);
	void InitializeMemberData();
	void SetSelected(bool IsSelected);
	void GetMemberData(struct FGuildMemberData* Data);
	void SetInviteMemberData(const struct FGuildMemberData& Param_GuildMemberData);
	void InitChangeTypeBtn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberListItem_C">();
	}
	static class UGuildMemberListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberListItem_C>();
	}
};
static_assert(alignof(UGuildMemberListItem_C) == 0x000008, "Wrong alignment on UGuildMemberListItem_C");
static_assert(sizeof(UGuildMemberListItem_C) == 0x0003A8, "Wrong size on UGuildMemberListItem_C");
static_assert(offsetof(UGuildMemberListItem_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, Btn_ChangeType) == 0x000280, "Member 'UGuildMemberListItem_C::Btn_ChangeType' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, CommonPlayerListPannel) == 0x000288, "Member 'UGuildMemberListItem_C::CommonPlayerListPannel' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, GuildMemberData) == 0x000290, "Member 'UGuildMemberListItem_C::GuildMemberData' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, Dialog) == 0x000368, "Member 'UGuildMemberListItem_C::Dialog' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, OnSelectedMember) == 0x000370, "Member 'UGuildMemberListItem_C::OnSelectedMember' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, OnClickedCancelInvite) == 0x000380, "Member 'UGuildMemberListItem_C::OnClickedCancelInvite' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, OnRequestGuildMemberButtonClicked) == 0x000390, "Member 'UGuildMemberListItem_C::OnRequestGuildMemberButtonClicked' has a wrong offset!");
static_assert(offsetof(UGuildMemberListItem_C, bInviteList) == 0x0003A0, "Member 'UGuildMemberListItem_C::bInviteList' has a wrong offset!");

}

