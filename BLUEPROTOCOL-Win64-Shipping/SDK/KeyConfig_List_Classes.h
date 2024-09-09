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
	 * WidgetBlueprintGeneratedClass KeyConfig_List.KeyConfig_List_C
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class UKeyConfig_List_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          Scroll;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FKeyConfigType>                              ConfigBox;                                               // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUserWidget*>                                 Childs;                                                  // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             ClickedKeyChangeWait;                                    // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ClickedPadChangeWait;                                    // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SliderChange;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ChangeRadio;                                             // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UDataTable*                                          KeyConfigDataTable;                                      // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BookmarkDeletes;                                         // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UKeyConfig_Slider_C*>                         Sliders;                                                 // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void ResetSliderChanged();
		void UpdateData();
		void CalcTop(int32_t Limit, float* Top);
		void GetNoAssignedItemTop(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems* InputType);
		void ContainsNoAssignedKey(const struct FSBPlayerClassKeyConfigData& KeyConfig, bool* Assigned);
		void ResetInputModes();
		void GetNoneTop(class UKeyConfig_ConfigSlot_C** AsKeyConfigConfigSlot, bool* bChanged);
		void HasNone(bool* bHasNone);
		void GetChangedTop(class UUserWidget** Target, bool* bChanged);
		void ApplyKeyConfigDatas(struct FSBPlayerClassKeyConfigData* SBPlayerClassKeyConfigData);
		void CreateChildWidget(const struct FKeyConfigType& ConfigureType, class UUserWidget** Child, EConfig_KeyConfigItemType* ItemType);
		void ApplyPadKeyConfig(const struct FSBGamePadSettings& SBGamePadSettings);
		void ApplyKeyboardMouseData(const struct FSBKeyboardSettings& SBKeyboardSettings, const struct FSBMouseSettings& SBMouseSettings);
		void CheckChangedKey(const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now);
		void OnChangeSlider(int32_t Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target);
		void OnChangeRadio(int32_t Index, EConfig_KeyconfigItems Type);
		void ApplySliders(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
		void ApplyRadio(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
		void CheckChangedSlider(class UKeyConfig_Slider_C* Target, const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now);
		void OnDeleteBookmarks();
		void PreConstruct(bool IsDesignTime);
		void KeyChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller);
		void PadChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller);
		void ScrollChangeTop();
		void ScrollNoneTop();
		void ExecuteUbergraph_KeyConfig_List(int32_t EntryPoint);
		void BookmarkDeletes__DelegateSignature();
		void ChangeRadio__DelegateSignature(int32_t Index, EConfig_KeyconfigItems Type);
		void SliderChange__DelegateSignature(int32_t Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target);
		void ClickedPadChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType);
		void ClickedKeyChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
