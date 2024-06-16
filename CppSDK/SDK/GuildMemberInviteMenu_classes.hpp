#pragma once

 

// Package: GuildMemberInviteMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberInviteMenu.GuildMemberInviteMenu_C
// 0x0120 (0x0398 - 0x0278)
class UGuildMemberInviteMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGuildInviteMemberList_C*               GuildInviteMemberList;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_607;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NotInviteMember;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            OpenProfileButton;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerReport_C*                        PlayerReport;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            ReportButton;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsPlayerProfileOpen;                               // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_839C[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       SelectedInviteMemberData;                          // 0x02B8(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           SwapBlocker;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildMemberInviteMenu(int32 EntryPoint);
	void Construct();
	void OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data);
	void OnCompletedGuildCancelInvitation_Event(const int32 RetCode);
	void OnInviteCancel(EDialogResult Result);
	void OnCompletedInviteMemberList_Event(const int32 RetCode);
	void Destruct();
	void BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
	void PlayerProfileClose_Event();
	void OnCompletedGetProfile_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	class USBPlayerGuildComponent* GetGuildComp();
	void UpdateButtons(bool bSelected);
	void CreateSwapBlocker();
	void DeleteSwapBlocker();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberInviteMenu_C">();
	}
	static class UGuildMemberInviteMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberInviteMenu_C>();
	}
};
static_assert(alignof(UGuildMemberInviteMenu_C) == 0x000008, "Wrong alignment on UGuildMemberInviteMenu_C");
static_assert(sizeof(UGuildMemberInviteMenu_C) == 0x000398, "Wrong size on UGuildMemberInviteMenu_C");
static_assert(offsetof(UGuildMemberInviteMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberInviteMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, GuildInviteMemberList) == 0x000280, "Member 'UGuildMemberInviteMenu_C::GuildInviteMemberList' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, Image_607) == 0x000288, "Member 'UGuildMemberInviteMenu_C::Image_607' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, NotInviteMember) == 0x000290, "Member 'UGuildMemberInviteMenu_C::NotInviteMember' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, OpenProfileButton) == 0x000298, "Member 'UGuildMemberInviteMenu_C::OpenProfileButton' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, PlayerReport) == 0x0002A0, "Member 'UGuildMemberInviteMenu_C::PlayerReport' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, ReportButton) == 0x0002A8, "Member 'UGuildMemberInviteMenu_C::ReportButton' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, IsPlayerProfileOpen) == 0x0002B0, "Member 'UGuildMemberInviteMenu_C::IsPlayerProfileOpen' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, SelectedInviteMemberData) == 0x0002B8, "Member 'UGuildMemberInviteMenu_C::SelectedInviteMemberData' has a wrong offset!");
static_assert(offsetof(UGuildMemberInviteMenu_C, SwapBlocker) == 0x000390, "Member 'UGuildMemberInviteMenu_C::SwapBlocker' has a wrong offset!");

}

