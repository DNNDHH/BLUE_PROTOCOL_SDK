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
	 * WidgetBlueprintGeneratedClass ResultDialog_DropTreasureTicketReward.ResultDialog_DropTreasureTicketReward_C
	 * Size -> 0x00A0 (FullSize[0x0318] - InheritedSize[0x0278])
	 */
	class UResultDialog_DropTreasureTicketReward_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnClose02_C*                                       Btn_Close;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               Btn_FullScreen;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         Btn_OK;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResultRewardList_C*                                 DungeonResultRewardList;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBoxReward;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    Title;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OpenDelegate;                                            // 0x02C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CloseDelegate;                                           // 0x02D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsOpen;                                                 // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOpened;                                               // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClose;                                                // 0x02E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GACX[0x5];                                   // 0x02E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UButton*>                                     Buttons;                                                 // 0x02E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnOpened;                                                // 0x02F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x0308(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetTitleText(int32_t* N, class FText* Text);
		void GetGameStateDungeon(class ASBGameState_Dungeon** GameStateDungeon);
		void ResetFlags();
		void RemoveCallbacks();
		void Close();
		void Open();
		void Setup(struct FSBTokenTreasureBoxRewardInfo* Info, int32_t N);
		void Finished_378E73C64E3E6A3755C9FAA19C9F5B27();
		void Finished_74947E2E43F60DBC3B23B2A0CDBAC599();
		void Construct();
		void OnPressCancel();
		void Destruct();
		void BndEvt__ResultDialog_DropTreasureTicketReward_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ResultDialog_DropTreasureTicketReward_Btn_Close_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature();
		void EventOpen();
		void EventClose();
		void OnInitialized();
		void BndEvt__ResultDialog_DropTreasureTicketReward_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_ResultDialog_DropTreasureTicketReward(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		void OnOpened__DelegateSignature();
		void CloseDelegate__DelegateSignature();
		void OpenDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
