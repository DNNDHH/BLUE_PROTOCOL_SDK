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
	 * WidgetBlueprintGeneratedClass GuildRecruitmentList.GuildRecruitmentList_C
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class UGuildRecruitmentList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VB_Entry;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Invite;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedGuildEntry;                                     // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class USBPlayerGuildComponent* GetGuildComp();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnCompletedGetInviteList_Event(int32_t RetCode);
		void Initialize();
		void OnCompletedGetSendedEntries_Event(int32_t RetCode);
		void OnCompletedGuildEntry_Event(int32_t RetCode);
		void GenerateEntries();
		void GenerateInvites();
		void OnCompleteCancelEntry_Event(int32_t RetCode);
		void Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId);
		void OnInviteArrived_Event();
		void Complete_OnClickedRecruitmentListItem(const struct FGuildEntryData& GuildEntry);
		void ExecuteUbergraph_GuildRecruitmentList(int32_t EntryPoint);
		void OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
