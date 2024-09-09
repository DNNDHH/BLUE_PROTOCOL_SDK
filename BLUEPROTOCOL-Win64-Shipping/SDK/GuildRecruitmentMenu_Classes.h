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
	 * WidgetBlueprintGeneratedClass GuildRecruitmentMenu.GuildRecruitmentMenu_C
	 * Size -> 0x0120 (FullSize[0x0398] - InheritedSize[0x0278])
	 */
	class UGuildRecruitmentMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGuildRecruitmentDetailCard_C*                       GuildRecruitmentDetailCard;                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildRecruitmentList_C*                             GuildRecruitmentList;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MidImgBG;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_SelectGuide;                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectRecruitmentEntryItem;                            // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsInvite;                                                // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85D7[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuildEntryData                                     SelectedGuildEntryData;                                  // 0x02B8(0x00E0) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateSelectGuideText();
		class USBPlayerGuildComponent* GetGuildComp();
		void Construct();
		void BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData);
		void OnCompletedGetInviteList_Event(int32_t RetCode);
		void OnCompletedGetSendedEntries_Event(int32_t RetCode);
		void Event_OnGetedGuildDatail(int32_t RetCode, const struct FGuildData& InGuildData);
		void ExecuteUbergraph_GuildRecruitmentMenu(int32_t EntryPoint);
		void OnSelectRecruitmentEntryItem__DelegateSignature(const struct FGuildEntryData& GuildEntry);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
