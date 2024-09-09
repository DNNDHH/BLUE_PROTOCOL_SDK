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
	 * WidgetBlueprintGeneratedClass MapWidget_CompoundBox.MapWidget_CompoundBox_C
	 * Size -> 0x0069 (FullSize[0x02E1] - InheritedSize[0x0278])
	 */
	class UMapWidget_CompoundBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bg1;                                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasForOptionWidget;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBox_C*                                       SBComboBox;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_OptionWidget;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TitleLabel;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnItemSelected;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserWidget*                                         OptionWidget;                                            // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnListBoxOpened;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnListBoxClosed;                                         // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsSelectOpen;                                           // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ClearComboBox();
		class UWidget* On_CBox_1_GenerateWidget_1(const class FString& item);
		void SetComboBoxEnable(bool IsEnable);
		void SetTitleTextId(int32_t InTextId);
		void SetTitleText(const class FText& InText);
		void SetOptionWidgetVisibility(bool IsVisible);
		void SetWidgetToOptionCanvas(class UUserWidget* InUserWidget);
		void SetComboBoxItemSelected(const class FString& InItemName);
		void AddItemToComboBox(const class FString& InItemName);
		void Destruct();
		void BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature();
		void BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature();
		void ExecuteUbergraph_MapWidget_CompoundBox(int32_t EntryPoint);
		void OnListBoxClosed__DelegateSignature();
		void OnListBoxOpened__DelegateSignature();
		void OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32_t InSelectedItemId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
