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
	 * WidgetBlueprintGeneratedClass GuildMenu.GuildMenu_C
	 * Size -> 0x0074 (FullSize[0x031C] - InheritedSize[0x02A8])
	 */
	class UGuildMenu_C : public USBCommandMenuChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut2;                                                // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommandMenu_Line_C*                                 CommandMenu_Line;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuBg_C*                                    CommandMenuBg;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   CommandMenuCommonSubButtonList;                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_SubMenu;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUserWidget*                                         SubMenu;                                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TutorialHelpIdList;                                      // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SubPage;                                                 // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KOZ6[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MainPage;                                                // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void UpdateSubMenuInfosAll();
		void UpdateSubMenuOutText(int32_t Selection, int32_t SubPage);
		void NeedToWaitUpdateMainMenu();
		void UpdateSubMenuButtonState();
		void SubMenuOutText(int32_t InTextId);
		void GetPageNum(const class FString& BookMark, int32_t* Page);
		void MakeGuild(class UClass* Class);
		void CheckSubMenu();
		void Construct();
		void BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId);
		void Destruct();
		void BookmarkUpdateRequest();
		void UpdateBookmarkStatusButton();
		void OnWithDraw(int32_t RetCode);
		void SetPage(int32_t PageIndex);
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId);
		void OnSubMenuUpdateWithMessage(int32_t MainPage, int32_t SubPage, const class FText& Message);
		void Event_OnCompleteGetGuildData(int32_t RetCode);
		void Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName);
		void CompletedAcceptMember(int32_t RetCode);
		void CompletedDenyMember(int32_t RetCode);
		void OnAddedNewMember();
		void CheckGuildData();
		void ResetMouseCursorTypeToDefaultRequest();
		void OnRMShopClosed();
		void CompletedGGetEntryList(int32_t RetCode);
		void OnCompleteGuildKicked(int32_t RetCode);
		void OnCompleteGuildCancelInvitation(int32_t RetCode);
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
		void OnParentTerm();
		void Event_CallTermFromChildren();
		void ExecuteUbergraph_GuildMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
