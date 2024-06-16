#pragma once

 

// Package: GuildMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildMenu.GuildMenu_C
// 0x0078 (0x0320 - 0x02A8)
class UGuildMenu_C final : public USBCommandMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut2;                                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_Line_C*                    CommandMenu_Line;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuBg_C*                       CommandMenuBg;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      CommandMenuCommonSubButtonList;                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_SubMenu;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            SubMenu;                                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         BookmarkTypeList;                                  // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           TutorialHelpIdList;                                // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Sub_Page;                                          // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F96[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Main_Page;                                         // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildMenu(int32 EntryPoint);
	void Event_CallTermFromChildren();
	void OnParentTerm();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void OnCompleteGuildCancelInvitation(const int32 RetCode);
	void OnCompleteGuildKicked(const int32 RetCode);
	void CompletedGGetEntryList(const int32 RetCode);
	void OnRMShopClosed();
	void ResetMouseCursorTypeToDefaultRequest();
	void CheckGuildData();
	void OnAddedNewMember();
	void CompletedDenyMember(const int32 RetCode);
	void CompletedAcceptMember(const int32 RetCode);
	void Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName);
	void Event_OnCompleteGetGuildData(const int32 RetCode);
	void OnSubMenuUpdateWithMessage(int32 MainPage, int32 SubPage, const class FText& Message);
	void Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void SetPage(int32 PageIndex);
	void OnWithDraw(const int32 RetCode);
	void UpdateBookmarkStatusButton();
	void BookmarkUpdateRequest();
	void Destruct();
	void BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId);
	void Construct();
	void CheckSubMenu();
	void MakeGuild(class UClass* Param_Class);
	void GetPageNum(const class FString& BookMark, int32* Page);
	void SubMenuOutText(const int32 InTextID);
	void UpdateSubMenuButtonState();
	void NeedToWaitUpdateMainMenu();
	void UpdateSubMenuOutText(int32 Selection, int32 Param_Sub_Page);
	void UpdateSubMenuInfosAll();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildMenu_C">();
	}
	static class UGuildMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildMenu_C>();
	}
};
static_assert(alignof(UGuildMenu_C) == 0x000008, "Wrong alignment on UGuildMenu_C");
static_assert(sizeof(UGuildMenu_C) == 0x000320, "Wrong size on UGuildMenu_C");
static_assert(offsetof(UGuildMenu_C, UberGraphFrame) == 0x0002A8, "Member 'UGuildMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, AnimOut2) == 0x0002B0, "Member 'UGuildMenu_C::AnimOut2' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, AnimOut) == 0x0002B8, "Member 'UGuildMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, CommandMenu_Line) == 0x0002C0, "Member 'UGuildMenu_C::CommandMenu_Line' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, CommandMenuBg) == 0x0002C8, "Member 'UGuildMenu_C::CommandMenuBg' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, CommandMenuCommonSubButtonList) == 0x0002D0, "Member 'UGuildMenu_C::CommandMenuCommonSubButtonList' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, CP_SubMenu) == 0x0002D8, "Member 'UGuildMenu_C::CP_SubMenu' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, SubMenu) == 0x0002E0, "Member 'UGuildMenu_C::SubMenu' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, BookmarkTypeList) == 0x0002E8, "Member 'UGuildMenu_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, TutorialHelpIdList) == 0x0002F8, "Member 'UGuildMenu_C::TutorialHelpIdList' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, Sub_Page) == 0x000308, "Member 'UGuildMenu_C::Sub_Page' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, UIBlocker) == 0x000310, "Member 'UGuildMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UGuildMenu_C, Main_Page) == 0x000318, "Member 'UGuildMenu_C::Main_Page' has a wrong offset!");

}

