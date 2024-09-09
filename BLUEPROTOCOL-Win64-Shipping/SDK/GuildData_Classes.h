#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass GuildData.GuildData_C
	 * Size -> 0x0188 (FullSize[0x0430] - InheritedSize[0x02A8])
	 */
	class UGuildData_C : public USBCommandMenuChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn_GuildOrganize;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_ShowHint_OnGuild;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_ShowHint_RecruitGuild;                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnFind;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn20_C*                                         BtnSearch;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasFindID;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasGuildHeader;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_FormGuild;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_OnGuild;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_RecruitGuild;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_SearchBox;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildEntriesList_C*                                 GuildEntriesList;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildTag_C*                                         GuildTag;                                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_139;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgHeaderBG;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgHeaderBG_2;                                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgHeaderBG_3;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   Off_GuildMenuCommandSubButtonList;                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   Own_GuildMenuCommandSubButtonList;                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                SBDateTimeTextBlock_Date;                                // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnSearch1_C*                                       SearchBox;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBEditableTextBox*                                  TB_SearchBox;                                            // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextFind;                                                // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_GuildName;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_LeaderName;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_ShortID;                                             // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_Title;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Main;                                     // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Top_Buttons;                              // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnGuildSetting;                                          // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGuildMember;                                           // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGuildApplications;                                     // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGuildOrganize;                                         // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectEntry;                                           // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRefreshRightMenu;                                      // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x0400(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TutorialHelpIdList;                                      // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             SetNowTutorialHelpId;                                    // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void IsGuildInvited(bool* Result);
		void GetPageIndex();
		void UpdateSubMenuButtonStateByIndex(int32_t SubButtonIndex);
		void SetPage(int32_t PageIndex);
		class USBPlayerGuildComponent* GetGuildComp();
		void BookmarkUpdateRequest();
		void OnParentTerm();
		void OnRMShopClosed();
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void ResetMouseCursorTypeToDefaultRequest();
		void Construct();
		void InitializeNoGuild();
		void InitializeGuildMember();
		void Reinit();
		void BindInit();
		void OnCompleteRefleshData(int32_t RetCode);
		void OnCmplInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId);
		void BndEvt__Btn_GuildOrganize_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData);
		void BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnGuiluildDatailGeted(int32_t RetCode, const struct FGuildData& InGuildData);
		void LockSearch();
		void UnlockSearch();
		void OnSearched(int32_t RetCode);
		void BndEvt__GuildData_BtnSearch_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
		void OnBootExternalBrowser(EDialogResult Result);
		void ValueInit();
		void BndEvt__GuildData_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(int32_t ButtonId);
		void BndEvt__GuildData_Btn_ShowHint_RecruitGuild_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature(const class FText& newText);
		void BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature(int32_t ButtonId);
		void SetTitleTextById(int32_t TextId);
		void OnMemberAccepted(int32_t RetCode);
		void OnMemberDenied(int32_t RetCode);
		void OnAddedNewMember();
		void OnUpdateGuildMemberList(int32_t RetCode);
		void BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void UnBindEvent();
		void Destruct();
		void ExecuteUbergraph_GuildData(int32_t EntryPoint);
		void SetNowTutorialHelpId__DelegateSignature(const class FName& TutorialHelpId);
		void OnRefreshRightMenu__DelegateSignature();
		void OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry);
		void OnGuildOrganize__DelegateSignature();
		void OnGuildApplications__DelegateSignature();
		void OnGuildMember__DelegateSignature();
		void OnGuildSetting__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
