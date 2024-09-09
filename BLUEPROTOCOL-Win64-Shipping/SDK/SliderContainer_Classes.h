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
	 * WidgetBlueprintGeneratedClass SliderContainer.SliderContainer_C
	 * Size -> 0x008C (FullSize[0x0304] - InheritedSize[0x0278])
	 */
	class USliderContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        Labels;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Sliders;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSliderContainerSetting>                     SliderSettings;                                          // 0x0290(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<EGraphicsSliderSetting, int32_t>                      Indexes;                                                 // 0x02A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnChangeSlider;                                          // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    maxIndexes;                                              // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void SetValue(EGraphicsSliderSetting Type, int32_t NewValue);
		void OnChangeSlider_Deligate(int32_t NewValue, float Ratio, int32_t Index);
		void ExecuteUbergraph_SliderContainer(int32_t EntryPoint);
		void OnChangeSlider__DelegateSignature(int32_t Value, float Ratio, EGraphicsSliderSetting Type);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
