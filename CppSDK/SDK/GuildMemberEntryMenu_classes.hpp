#pragma once

 

// Package: GuildMemberEntryMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberEntryMenu.GuildMemberEntryMenu_C
// 0x0058 (0x02D0 - 0x0278)
class UGuildMemberEntryMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            Btn_Accept;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Deny;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Report;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_ShowProfile;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_607;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              LV_GuildEntries;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NotEntryMember;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerReport_C*                        PlayerReport;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildEntryListItem_C*                  OnSelectedItem;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           SwapBlocker;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildMemberEntryMenu(int32 EntryPoint);
	void Event_CancelKeyPushed();
	void Event_PlayerReportChangeVisibility(ESlateVisibility InVisibility);
	void OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void OnEntryAccept(EDialogResult Result);
	void OnEntryDeny(EDialogResult Result);
	void CompleteOnIsGetPlayerProfileDetailMenuDataDelegate(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void UpdateEntries();
	void CompletedGGetEntryList(const int32 RetCode);
	void CompletedDenyMember(const int32 RetCode);
	void Remove_Selected();
	void CompletedAcceptMember(const int32 RetCode);
	void Destruct();
	void UpdateButtons();
	void Construct();
	class USBPlayerGuildComponent* GetGuildComp();
	void GenerateEntries();
	void GetEntryCount(int32* EntryCount);
	void CreateSwapBlocker();
	void DeleteSwapBlocker();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberEntryMenu_C">();
	}
	static class UGuildMemberEntryMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberEntryMenu_C>();
	}
};
static_assert(alignof(UGuildMemberEntryMenu_C) == 0x000008, "Wrong alignment on UGuildMemberEntryMenu_C");
static_assert(sizeof(UGuildMemberEntryMenu_C) == 0x0002D0, "Wrong size on UGuildMemberEntryMenu_C");
static_assert(offsetof(UGuildMemberEntryMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberEntryMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, Btn_Accept) == 0x000280, "Member 'UGuildMemberEntryMenu_C::Btn_Accept' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, Btn_Deny) == 0x000288, "Member 'UGuildMemberEntryMenu_C::Btn_Deny' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, Btn_Report) == 0x000290, "Member 'UGuildMemberEntryMenu_C::Btn_Report' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, Btn_ShowProfile) == 0x000298, "Member 'UGuildMemberEntryMenu_C::Btn_ShowProfile' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, Image_607) == 0x0002A0, "Member 'UGuildMemberEntryMenu_C::Image_607' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, LV_GuildEntries) == 0x0002A8, "Member 'UGuildMemberEntryMenu_C::LV_GuildEntries' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, NotEntryMember) == 0x0002B0, "Member 'UGuildMemberEntryMenu_C::NotEntryMember' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, PlayerReport) == 0x0002B8, "Member 'UGuildMemberEntryMenu_C::PlayerReport' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, OnSelectedItem) == 0x0002C0, "Member 'UGuildMemberEntryMenu_C::OnSelectedItem' has a wrong offset!");
static_assert(offsetof(UGuildMemberEntryMenu_C, SwapBlocker) == 0x0002C8, "Member 'UGuildMemberEntryMenu_C::SwapBlocker' has a wrong offset!");

}

