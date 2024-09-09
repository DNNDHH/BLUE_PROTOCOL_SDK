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
	 * WidgetBlueprintGeneratedClass DebugButton.DebugButton_C
	 * Size -> 0x0131 (FullSize[0x03E1] - InheritedSize[0x02B0])
	 */
	class UDebugButton_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_DebugButton;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Button;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                RowName;                                                 // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBDebugMenuType                                           MenuType;                                                // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0C6R[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      InitialValue;                                            // 0x02E0(0x0010) Edit, BlueprintVisible
		class UUserWidget*                                         ParentMenu;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              PlayerStartTagName;                                      // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EventDispatcher_OnClicked;                               // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              DynamicSkyAsset[0x28];                                   // 0x0318(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Cloud14Asset[0x28];                                      // 0x0340(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Cloud17Asset[0x28];                                      // 0x0368(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ScriptActorAsset[0x28];                                  // 0x0390(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ChildWidgetClass[0x28];                                  // 0x03B8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       WidgetRemove;                                            // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetText(const class FText& Text);
		void GetText(class FText* Text);
		void CalcChildMenuPosition(struct FVector2D* Position);
		void SetButtonFocus(bool bFocus);
		void ResetSettings();
		void SaveSettings();
		void LoadSettings();
		void OnLoaded_445800FD409A4EBB9ABB87B77ED6E644(class UClass* Loaded);
		void OnLoaded_495F650B48822E342FF6D9A376B5922E(class UClass* Loaded);
		void OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9(class UClass* Loaded);
		void OnPressSetPlayerLocation(const class FString& LocationStr);
		void OnPress_PlayDemo();
		void OnPress_ReplayDemo();
		void OnPress_CommandMenu_FullscreenMode();
		void OnPress_CommandMenu_WindowMode();
		void OnPress_SetResolution();
		void OnPress_FastTravelMenu_ToTargetPoint();
		void OnPress_FastTravelMenu_ReturnToCity();
		void OnPress_TimeSettingMenuToNoon();
		void OnPress_TimeSettingMenuToEvening();
		void PushButton();
		void Construct();
		void OnGetFocus();
		void OnLostFocus();
		void ExecFunc();
		void BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature();
		void OnPressOk();
		void ExecuteUbergraph_DebugButton(int32_t EntryPoint);
		void EventDispatcher_OnClicked__DelegateSignature(class UDebugButton_C* DebugButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
