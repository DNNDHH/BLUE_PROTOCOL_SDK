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
	 * WidgetBlueprintGeneratedClass GuildMemberEntryMenu.GuildMemberEntryMenu_C
	 * Size -> 0x0058 (FullSize[0x02D0] - InheritedSize[0x0278])
	 */
	class UGuildMemberEntryMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnBtn16_C*                                         Btn_Accept;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         Btn_Deny;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         Btn_Report;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         Btn_ShowProfile;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_608;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           LV_GuildEntries;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        NotEntryMember;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerReport_C*                                     PlayerReport;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildEntryListItem_C*                               OnSelectedItem;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        SwapBlocker;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DeleteSwapBlocker();
		void CreateSwapBlocker();
		void GetEntryCount(int32_t* EntryCount);
		void GenerateEntries();
		class USBPlayerGuildComponent* GetGuildComp();
		void Construct();
		void UpdateButtons();
		void Destruct();
		void CompletedAcceptMember(int32_t RetCode);
		void RemoveSelected();
		void CompletedDenyMember(int32_t RetCode);
		void CompletedGGetEntryList(int32_t RetCode);
		void UpdateEntries();
		void BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* item);
		void CompleteOnIsGetPlayerProfileDetailMenuDataDelegate(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void OnEntryDeny(EDialogResult Result);
		void OnEntryAccept(EDialogResult Result);
		void BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
		void BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
		void BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
		void BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void OpenReportUI_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void Event_PlayerReportChangeVisibility(ESlateVisibility InVisibility);
		void Event_CancelKeyPushed();
		void ExecuteUbergraph_GuildMemberEntryMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
