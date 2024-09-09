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
	 * WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C
	 * Size -> 0x01F0 (FullSize[0x04A0] - InheritedSize[0x02B0])
	 */
	class UDebugMenu_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             CloseButton;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Menu;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MenuItemGroup;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_Menu;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Title;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_X;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUserWidget*                                         ParentMenu;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UUserWidget*                                         ChildMenu;                                               // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBDebugMenuType                                           MyMenuType;                                              // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_6P1A[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ParameterName;                                           // 0x0308(0x0018) Edit, BlueprintVisible
		class FText                                                ToolTip;                                                 // 0x0320(0x0018) Edit, BlueprintVisible
		class FName                                                RowName;                                                 // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBDebugParameter                                   DebugParameter;                                          // 0x0340(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      InitialValue;                                            // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SelectedOption;                                          // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       enable;                                                  // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBDebugMenuType                                           ChildMenuType;                                           // 0x0401(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateVisibility                                           MenuVisibility;                                          // 0x0402(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WhileLoopCheckFlag;                                      // 0x0403(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6S2[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         MenuWidget;                                              // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EventDispatcher_OnClose;                                 // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrFocusId;                                             // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugMenuVisibility;                                     // 0x0424(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VisibleSetting;                                          // 0x0425(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2XT8[0x2];                                   // 0x0426(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CameraMove;                                              // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBCursorStateHandle                                CursorStateHandle;                                       // 0x0430(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_55BY[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ChildWidgetClass[0x28];                                  // 0x0438(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              LastPlayDemo;                                            // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FName                                                MyMenuName;                                              // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              OwnCharacterId;                                          // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    InvitedCnt;                                              // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DZIQ[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASBPlayerState*>                              InvitePlayerStateList;                                   // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void GetItemStrageNumber(int32_t AllSouko, int32_t ItemIndex, int32_t* StorageNumber);
		void SetItemCommand(const class FName& ItemSetName, int32_t AllSouko);
		void GetText(class USBTextTableAsset* InTextTableAsset, const class FName& InTextId, const class FName& InOldTextId, class FText* OutText);
		void CreateChildButton(class UDebugChildButton_C** OutDebugButton);
		void AddMenuItem(class USBUserWidget* Widget);
		void SetTitle(const class FText& TitleText);
		void AddChildMenu(class UUserWidget* ChildMenu);
		void GetCurrentValue(class FText* CurrentValue, bool* ValueExists);
		void ProcFocusCursorMoveUpDown(bool InMoveUp);
		void SetDebugMenuVisibility(bool InVisible);
		void InputDebugMenuButton();
		void CreateButton(class UDebugButton_C** OutDebugButton);
		void CreateCommand();
		void CreateComboBox();
		void CreateString();
		void CreateFloat();
		void CreateInt32();
		void CreateCheckBox();
		void OnLoaded_102A04CB4074E1F46BB26DB6C4891B24(class UClass* Loaded);
		void OnLoaded_BCFFDC8A4AF2D3E733074AB599485936(class UClass* Loaded);
		void OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77(class UClass* Loaded);
		void OnLoaded_4F44425143BDF3C769780FB39763FAA8(class UClass* Loaded);
		void OnLoaded_27772D90466B1887FF9CA8BA68DDE282(class UClass* Loaded);
		void OnLoaded_B6543B2E423821130C7933B54E69A6C5(class UClass* Loaded);
		void OnLoaded_8950531E42034202AFA24B8A7E7E2D11(class UClass* Loaded);
		void OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E(class UClass* Loaded);
		void OnGetFocus();
		void OnLostFocus();
		void OnPressOk();
		void ChectCommand_BulkGetItemMenu(class UObject* InSender, class UObject* InParam);
		void CheatCommand_RecepiBroker(class UObject* InSender, class UObject* InParam);
		void CheatCommand_ScriptExecutor(class UObject* InSender, class UObject* InParam);
		void CheatCommand_LevelScriptList(class UObject* InSender, class UObject* InParam);
		void CheatCommand_ItemSupplyer(class UObject* InSender, class UObject* InParam);
		void CheatCommand_Party_Create_Invite_Send(class UObject* InSender, class UObject* InParam);
		void CheatCommand_ResponseChecker(class UObject* InSender, class UObject* InParam);
		void ChectCommand_AddMasterItemsMenu(class UObject* InSender, class UObject* InParam);
		void CheatCommand_BulkGetItemSet(class UObject* InSender, class UObject* InParam);
		void CheatCommand_NotificationMenu(class UObject* InSender, class UObject* InParam);
		void NotificationLoaded(bool Result);
		void Construct();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature();
		void EventDispatcher_OnClose_Event();
		void DebugButton_OnClicked_(class UDebugButton_C* DebugButton);
		void OnPress_Cancel();
		void OnSetFocusItem(int32_t InFocusId);
		void OnRepeat_Up();
		void OnRepeat_Down();
		void ProcVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void Destruct();
		void ExecuteUbergraph_DebugMenu(int32_t EntryPoint);
		void EventDispatcher_OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
