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
	 * WidgetBlueprintGeneratedClass RadioButtonsH.RadioButtonsH_C
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class URadioButtonsH_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      RadioButtons;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FRadioButtonData>                            RadioButtonData;                                         // 0x0288(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             SelectButton;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class URadioButton_C*>                              Buttons;                                                 // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class USBTextTableAsset*                                   TextDataBase;                                            // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetCheck(int32_t Index);
		class URadioButton_C* CreateRadioButton(const struct FRadioButtonData& RadioButtonData, int32_t Index);
		void OnSelectButtons();
		void PreConstruct(bool IsDesignTime);
		void Init();
		void Changed(bool IsChecked, class URadioButton_C* Checked, int32_t Index);
		void ExecuteUbergraph_RadioButtonsH(int32_t EntryPoint);
		void SelectButton__DelegateSignature(bool IsChecked, class URadioButton_C* RadioButton, int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
