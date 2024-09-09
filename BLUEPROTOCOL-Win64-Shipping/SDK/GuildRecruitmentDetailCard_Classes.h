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
	 * WidgetBlueprintGeneratedClass GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C
	 * Size -> 0x0110 (FullSize[0x0388] - InheritedSize[0x0278])
	 */
	class UGuildRecruitmentDetailCard_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG;                                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               btn_space;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose03_C*                                       CmnClose03;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildDetails_C*                                     GuildDetails;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    GuildDetailModeIndex;                                    // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X8TA[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuildEntryData                                     GuildEntryData;                                          // 0x02A8(0x00E0) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SendAnswerToInvitedGuild(bool bIsAccept);
		void GuildEntryRefuse();
		void GuildInviteRefuse();
		void GuildInviteAccept();
		void Initialize(const struct FGuildData& GuildData, const struct FGuildEntryData& GuildEntryData, bool bInvite);
		class USBPlayerGuildComponent* GetGuildComp();
		void Event_GuildInviteAccept();
		void Event_GuildEntryRefuse();
		void Event_GuildInviteRefuse();
		void Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId);
		void Event_OnClose();
		void BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void Event_OnCompletedCancelEntry(int32_t RetCode);
		void BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
		void Event_OnEscape();
		void ExecuteUbergraph_GuildRecruitmentDetailCard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
