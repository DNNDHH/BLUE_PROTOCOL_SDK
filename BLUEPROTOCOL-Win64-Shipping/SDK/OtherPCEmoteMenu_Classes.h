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
	 * WidgetBlueprintGeneratedClass OtherPCEmoteMenu.OtherPCEmoteMenu_C
	 * Size -> 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
	 */
	class UOtherPCEmoteMenu_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BG;                                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose01_C*                                       CmnClose01;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEmoteCategoryMenu_C*                                EmoteCategoryMenu;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          EmoteGridPanel;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULimitedTimeNotice_C*                                LimitedTimeNotice;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               SBButtonFullScreen;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsClosingMenu;                                           // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YBF1[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      EmotionList;                                             // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SelectedEmotion;                                         // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                TutorialHelpId;                                          // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTutorialHelpDialogBox_C*                            TutorialHelpWidget;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBPlayerState*                                      PlayerState;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void IsEnableEmoteIcon(const class FName& InputPin, bool* bIsEnable);
		void UpdateEmoteIconEnable();
		class ASBPlayerCharacter* GetPlayerCharacter();
		void SetRootVisible(bool InVisible);
		void ClearEmotionSlot();
		void CreateEmptySlot(class UGridPanel* InGridPanel, int32_t InSlotCount);
		void CloseMenu();
		void OnRequestTutorialHelp();
		void OnTutorialHelp_Close();
		void Construct();
		void Destruct();
		void OnRefresh();
		void OnSelect(class UEmotionMenu_Item_C* InSelectedItem);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnPress_Cancel();
		void OnJankenUIDelegate_Event_1();
		void ForcedClose();
		void UpdateEmotionList(bool bInit);
		void BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void EmoteListUpdate();
		void ExecuteUbergraph_OtherPCEmoteMenu(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
