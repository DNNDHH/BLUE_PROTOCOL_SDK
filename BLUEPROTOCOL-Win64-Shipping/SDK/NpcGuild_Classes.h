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
	 * WidgetBlueprintGeneratedClass NpcGuild.NpcGuild_C
	 * Size -> 0x0080 (FullSize[0x02F8] - InheritedSize[0x0278])
	 */
	class UNpcGuild_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn_ShowHint;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildData_C*                                        GuildData;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildEntriesMenu_C*                                 GuildEntriesMenu;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildFindEntry_C*                                   GuildFindEntry;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildMember_C*                                      GuildMember;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGuildNpcSelectMode_C*                               GuildNpcSelectMode;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_8;                                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     MenuSwitch;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNpcGuildDetail_C*                                   NpcGuildDetail;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopCmnBg1_C*                                       ShopCmnBg1;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopMenu_InAnime_C*                                 ShopMenu_InAnime;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                NowTutorialHelpId;                                       // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InGuildMemberInialize();
		class USBPlayerGuildComponent* GetGuildComp();
		void BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature();
		void BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature();
		void BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature();
		void BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry);
		void OnCompleteFindGuildShortID(int32_t RetCode);
		void bindInitialize();
		void Destruct();
		void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
		void ListenActionClose();
		void OnClosePressed();
		void OnCompletedChangeName(int32_t RetCode);
		void Initialize();
		void OnOrganized(int32_t RetCode);
		void OnGuildWithDraw(int32_t RetCode);
		void OnCloseRequest();
		void OnDissolution(int32_t RetCode);
		void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName);
		void Event_SetNowTurorialHelpId(const class FName& TutorialHelpId);
		void OnCompleteGetGuildData_Event(int32_t RetCode);
		void ExecuteUbergraph_NpcGuild(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
