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
	 * WidgetBlueprintGeneratedClass UMG_ChatLogWindow.UMG_ChatLogWindow_C
	 * Size -> 0x00B8 (FullSize[0x0368] - InheritedSize[0x02B0])
	 */
	class UUMG_ChatLogWindow_C : public USBChatLogWindow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogWindowList_C*                                ChatLogWindowList;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChatRoomMessaageReceived;                              // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bEditMode;                                               // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           backupBGVisible;                                         // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWindowed;                                               // 0x02EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bVisible;                                                // 0x02EB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTabVisible;                                             // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBChatLogWindowSlot                                       ChatLogSlot;                                             // 0x02ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LWAN[0x2];                                   // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChatLogWindowAddRequest;                               // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChatLogWindowCloseRequest;                             // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bChildMode;                                              // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_KJZ9[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FilterType;                                              // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DetailFilterType;                                        // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DEBO[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChatLogWindowTempList_C*                            ChatLogTempWidget;                                       // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSBChatLogWindowStatusSave                          ChatLogStatus;                                           // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FScriptMulticastDelegate                             OnChatLogTabAddRequest;                                  // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChatLogTabCloseRequest;                                // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBChatUIMessage>                            LogMessageList;                                          // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateChatLogStatus(const struct FSBChatLogWindowStatusSave& InStatus, bool IsLoad);
		void NextTabSelection(bool bPrevious);
		void SetTab(ESBChatLogWindowSlot InSlot, bool bAdd);
		void SetFullChildWindow(bool InFull);
		void HideWindow();
		void ShowWindow();
		void RefreshLog();
		void IsShowNewMessageIcon(const struct FSBChatUIMessage& InMess, bool* Ret);
		void InitChildMode();
		void IsVisibleTab(bool* IsVisible);
		void IsVisibleLog(bool* IsVisible);
		void SetChatLogSlot(ESBChatLogWindowSlot ChatLogSlot);
		void SetVisible(bool bIsVisible, bool bIsTab);
		void SetEditMode(bool EditMode);
		void SetWindowMode(bool bWindow);
		void Construct();
		void OnReceiveMessageDelegate_Event(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
		void Destruct();
		void OnClickedAddWindow();
		void OnClickedCloseWindow();
		void OnUpdateFilterType(int32_t InType, int32_t InDetailType);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnUpdateTempLogList();
		void OnClickedAddTab();
		void OnClickedCloseTab(ESBChatLogWindowSlot RequestSlot);
		void OnChangeTab();
		void SetWindowSize(const struct FVector2D& InSize);
		void OnChangeUnreadVisibleEvent(bool IsVisible);
		void OnPopTimeUpdate();
		void SetFilterType(int32_t InType, int32_t InFilterType);
		void ExecuteUbergraph_UMG_ChatLogWindow(int32_t EntryPoint);
		void OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot, int32_t FilterType, int32_t DetailFilterType);
		void OnChatLogTabAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot);
		void OnChatLogWindowCloseRequest__DelegateSignature(ESBChatLogWindowSlot SlotType);
		void OnChatLogWindowAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot);
		void OnChatRoomMessaageReceived__DelegateSignature(class USBChatMessage* Message);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
