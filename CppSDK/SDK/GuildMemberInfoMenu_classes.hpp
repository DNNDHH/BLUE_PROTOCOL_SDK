#pragma once

 

// Package: GuildMemberInfoMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMemberInfoMenu.GuildMemberInfoMenu_C
// 0x0048 (0x02C0 - 0x0278)
class UGuildMemberInfoMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommandMenu_SubMenuLine_C*             CommandMenu_SubMenuLine;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      CommandMenuCommonSubButtonList;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMemberEntryMenu_C*                GuildMemberEntryMenu;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMemberInviteMenu_C*               GuildMemberInviteMenu;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMemberMenu_C*                     GuildMemberMenu;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SubMenuGrp;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_MemberGroup;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         NowButtonId;                                       // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildMemberInfoMenu(int32 EntryPoint);
	void Event_CloseFromChildren();
	void OnAddedNewMember();
	void CompletedDenyMember(const int32 RetCode);
	void CompletedAcceptMember(const int32 RetCode);
	void CompletedGGetEntryList(const int32 RetCode);
	void Destruct();
	void UpdateCommandMenuBG(int32 SubPage);
	void BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 ButtonId);
	void SelectTab(int32 ButtonId);
	void Construct();
	class USBPlayerGuildComponent* GetGuildComp();
	void UpdateSubMenuButtonStateByIndex(int32 SubButtonIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMemberInfoMenu_C">();
	}
	static class UGuildMemberInfoMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMemberInfoMenu_C>();
	}
};
static_assert(alignof(UGuildMemberInfoMenu_C) == 0x000008, "Wrong alignment on UGuildMemberInfoMenu_C");
static_assert(sizeof(UGuildMemberInfoMenu_C) == 0x0002C0, "Wrong size on UGuildMemberInfoMenu_C");
static_assert(offsetof(UGuildMemberInfoMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildMemberInfoMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, CommandMenu_SubMenuLine) == 0x000280, "Member 'UGuildMemberInfoMenu_C::CommandMenu_SubMenuLine' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, CommandMenuCommonSubButtonList) == 0x000288, "Member 'UGuildMemberInfoMenu_C::CommandMenuCommonSubButtonList' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, GuildMemberEntryMenu) == 0x000290, "Member 'UGuildMemberInfoMenu_C::GuildMemberEntryMenu' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, GuildMemberInviteMenu) == 0x000298, "Member 'UGuildMemberInfoMenu_C::GuildMemberInviteMenu' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, GuildMemberMenu) == 0x0002A0, "Member 'UGuildMemberInfoMenu_C::GuildMemberMenu' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, SubMenuGrp) == 0x0002A8, "Member 'UGuildMemberInfoMenu_C::SubMenuGrp' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, WidgetSwitcher_MemberGroup) == 0x0002B0, "Member 'UGuildMemberInfoMenu_C::WidgetSwitcher_MemberGroup' has a wrong offset!");
static_assert(offsetof(UGuildMemberInfoMenu_C, NowButtonId) == 0x0002B8, "Member 'UGuildMemberInfoMenu_C::NowButtonId' has a wrong offset!");

}

