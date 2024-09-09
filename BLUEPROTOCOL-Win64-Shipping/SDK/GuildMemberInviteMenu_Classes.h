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
	 * WidgetBlueprintGeneratedClass GuildMemberInviteMenu.GuildMemberInviteMenu_C
	 * Size -> 0x0120 (FullSize[0x0398] - InheritedSize[0x0278])
	 */
	class UGuildMemberInviteMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGuildInviteMemberList_C*                            GuildInviteMemberList;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_608;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        NotInviteMember;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         OpenProfileButton;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerReport_C*                                     PlayerReport;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         ReportButton;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsPlayerProfileOpen;                                     // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XF8V[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuildMemberData                                    SelectedInviteMemberData;                                // 0x02B8(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		class UUIBlocker_C*                                        SwapBlocker;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DeleteSwapBlocker();
		void CreateSwapBlocker();
		void UpdateButtons(bool bSelected);
		class USBPlayerGuildComponent* GetGuildComp();
		void Construct();
		void OnCompletedGetProfile_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void PlayerProfileClose_Event();
		void BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data);
		void Destruct();
		void OnCompletedInviteMemberList_Event(int32_t RetCode);
		void OnInviteCancel(EDialogResult Result);
		void OnCompletedGuildCancelInvitation_Event(int32_t RetCode);
		void BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data);
		void BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void OpenReportUI_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void ExecuteUbergraph_GuildMemberInviteMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
