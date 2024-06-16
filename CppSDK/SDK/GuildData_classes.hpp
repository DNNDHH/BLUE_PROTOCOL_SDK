#pragma once

 

// Package: GuildData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildData.GuildData_C
// 0x0188 (0x0430 - 0x02A8)
class UGuildData_C final : public USBCommandMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_GuildOrganize;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint_OnGuild;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint_RecruitGuild;                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnFind;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn20_C*                            BtnSearch;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasFindID;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasGuildHeader;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_FormGuild;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_OnGuild;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_RecruitGuild;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_SearchBox;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildEntriesList_C*                    GuildEntriesList;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildTag_C*                            GuildTag;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_138;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHeaderBG;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHeaderBG_1;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHeaderBG_2;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      Off_GuildMenuCommandSubButtonList;                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      Own_GuildMenuCommandSubButtonList;                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Date;                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnSearch1_C*                          SearchBox;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TB_SearchBox;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextFind;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_GuildName;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LeaderName;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ShortID;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Main;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Top_Buttons;                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnGuildSetting;                                    // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGuildMember;                                     // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGuildApplications;                               // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGuildOrganize;                                   // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectEntry;                                     // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRefreshRightMenu;                                // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         BookmarkTypeList;                                  // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           TutorialHelpIdList;                                // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             SetNowTutorialHelpId;                              // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnGuildSetting__DelegateSignature();
	void OnGuildMember__DelegateSignature();
	void OnGuildApplications__DelegateSignature();
	void OnGuildOrganize__DelegateSignature();
	void OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry);
	void OnRefreshRightMenu__DelegateSignature();
	void SetNowTutorialHelpId__DelegateSignature(class FName TutorialHelpId);
	void ExecuteUbergraph_GuildData(int32 EntryPoint);
	void Destruct();
	void UnBindEvent();
	void BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void On_Update_Guild_Member_List(const int32 RetCode);
	void OnAddedNewMember();
	void OnMember_Denied(const int32 RetCode);
	void OnMemberAccepted(const int32 RetCode);
	void SetTitleTextById(int32 TextId);
	void BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature(int32 ButtonId);
	void BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature(const class FText& NewText);
	void BndEvt__GuildData_Btn_ShowHint_RecruitGuild_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(int32 ButtonId);
	void BndEvt__GuildData_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Value_Init();
	void OnBootExternalBrowser(EDialogResult Result);
	void BndEvt__GuildData_BtnSearch_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void OnSearched(const int32 RetCode);
	void Unlock_Search();
	void Lock_Search();
	void OnGuiluildDatailGeted(const int32 RetCode, const struct FGuildData& InGuildData);
	void BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData);
	void BndEvt__Btn_GuildOrganize_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnCmplInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void OnCompleteRefleshData(const int32 RetCode);
	void BindInit();
	void Reinit();
	void InitializeGuildMember();
	void InitializeNoGuild();
	void Construct();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnRMShopClosed();
	void OnParentTerm();
	void BookmarkUpdateRequest();
	class USBPlayerGuildComponent* GetGuildComp();
	void SetPage(int32 PageIndex);
	void UpdateSubMenuButtonStateByIndex(int32 SubButtonIndex);
	void GetPageIndex();
	void IsGuildInvited(bool* Result);
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildData_C">();
	}
	static class UGuildData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildData_C>();
	}
};
static_assert(alignof(UGuildData_C) == 0x000008, "Wrong alignment on UGuildData_C");
static_assert(sizeof(UGuildData_C) == 0x000430, "Wrong size on UGuildData_C");
static_assert(offsetof(UGuildData_C, UberGraphFrame) == 0x0002A8, "Member 'UGuildData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Btn_GuildOrganize) == 0x0002B0, "Member 'UGuildData_C::Btn_GuildOrganize' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Btn_ShowHint_OnGuild) == 0x0002B8, "Member 'UGuildData_C::Btn_ShowHint_OnGuild' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Btn_ShowHint_RecruitGuild) == 0x0002C0, "Member 'UGuildData_C::Btn_ShowHint_RecruitGuild' has a wrong offset!");
static_assert(offsetof(UGuildData_C, BtnFind) == 0x0002C8, "Member 'UGuildData_C::BtnFind' has a wrong offset!");
static_assert(offsetof(UGuildData_C, BtnSearch) == 0x0002D0, "Member 'UGuildData_C::BtnSearch' has a wrong offset!");
static_assert(offsetof(UGuildData_C, CanvasFindID) == 0x0002D8, "Member 'UGuildData_C::CanvasFindID' has a wrong offset!");
static_assert(offsetof(UGuildData_C, CanvasGuildHeader) == 0x0002E0, "Member 'UGuildData_C::CanvasGuildHeader' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Cvs_FormGuild) == 0x0002E8, "Member 'UGuildData_C::Cvs_FormGuild' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Cvs_OnGuild) == 0x0002F0, "Member 'UGuildData_C::Cvs_OnGuild' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Cvs_RecruitGuild) == 0x0002F8, "Member 'UGuildData_C::Cvs_RecruitGuild' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Cvs_SearchBox) == 0x000300, "Member 'UGuildData_C::Cvs_SearchBox' has a wrong offset!");
static_assert(offsetof(UGuildData_C, GuildEntriesList) == 0x000308, "Member 'UGuildData_C::GuildEntriesList' has a wrong offset!");
static_assert(offsetof(UGuildData_C, GuildTag) == 0x000310, "Member 'UGuildData_C::GuildTag' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Image) == 0x000318, "Member 'UGuildData_C::Image' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Image_138) == 0x000320, "Member 'UGuildData_C::Image_138' has a wrong offset!");
static_assert(offsetof(UGuildData_C, ImgHeaderBG) == 0x000328, "Member 'UGuildData_C::ImgHeaderBG' has a wrong offset!");
static_assert(offsetof(UGuildData_C, ImgHeaderBG_1) == 0x000330, "Member 'UGuildData_C::ImgHeaderBG_1' has a wrong offset!");
static_assert(offsetof(UGuildData_C, ImgHeaderBG_2) == 0x000338, "Member 'UGuildData_C::ImgHeaderBG_2' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Off_GuildMenuCommandSubButtonList) == 0x000340, "Member 'UGuildData_C::Off_GuildMenuCommandSubButtonList' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Own_GuildMenuCommandSubButtonList) == 0x000348, "Member 'UGuildData_C::Own_GuildMenuCommandSubButtonList' has a wrong offset!");
static_assert(offsetof(UGuildData_C, SBDateTimeTextBlock_Date) == 0x000350, "Member 'UGuildData_C::SBDateTimeTextBlock_Date' has a wrong offset!");
static_assert(offsetof(UGuildData_C, SearchBox) == 0x000358, "Member 'UGuildData_C::SearchBox' has a wrong offset!");
static_assert(offsetof(UGuildData_C, TB_SearchBox) == 0x000360, "Member 'UGuildData_C::TB_SearchBox' has a wrong offset!");
static_assert(offsetof(UGuildData_C, TextFind) == 0x000368, "Member 'UGuildData_C::TextFind' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Txt_GuildName) == 0x000370, "Member 'UGuildData_C::Txt_GuildName' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Txt_LeaderName) == 0x000378, "Member 'UGuildData_C::Txt_LeaderName' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Txt_ShortID) == 0x000380, "Member 'UGuildData_C::Txt_ShortID' has a wrong offset!");
static_assert(offsetof(UGuildData_C, Txt_Title) == 0x000388, "Member 'UGuildData_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UGuildData_C, WidgetSwitcher_Main) == 0x000390, "Member 'UGuildData_C::WidgetSwitcher_Main' has a wrong offset!");
static_assert(offsetof(UGuildData_C, WidgetSwitcher_Top_Buttons) == 0x000398, "Member 'UGuildData_C::WidgetSwitcher_Top_Buttons' has a wrong offset!");
static_assert(offsetof(UGuildData_C, OnGuildSetting) == 0x0003A0, "Member 'UGuildData_C::OnGuildSetting' has a wrong offset!");
static_assert(offsetof(UGuildData_C, OnGuildMember) == 0x0003B0, "Member 'UGuildData_C::OnGuildMember' has a wrong offset!");
static_assert(offsetof(UGuildData_C, OnGuildApplications) == 0x0003C0, "Member 'UGuildData_C::OnGuildApplications' has a wrong offset!");
static_assert(offsetof(UGuildData_C, OnGuildOrganize) == 0x0003D0, "Member 'UGuildData_C::OnGuildOrganize' has a wrong offset!");
static_assert(offsetof(UGuildData_C, OnSelectEntry) == 0x0003E0, "Member 'UGuildData_C::OnSelectEntry' has a wrong offset!");
static_assert(offsetof(UGuildData_C, OnRefreshRightMenu) == 0x0003F0, "Member 'UGuildData_C::OnRefreshRightMenu' has a wrong offset!");
static_assert(offsetof(UGuildData_C, BookmarkTypeList) == 0x000400, "Member 'UGuildData_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(UGuildData_C, TutorialHelpIdList) == 0x000410, "Member 'UGuildData_C::TutorialHelpIdList' has a wrong offset!");
static_assert(offsetof(UGuildData_C, SetNowTutorialHelpId) == 0x000420, "Member 'UGuildData_C::SetNowTutorialHelpId' has a wrong offset!");

}

