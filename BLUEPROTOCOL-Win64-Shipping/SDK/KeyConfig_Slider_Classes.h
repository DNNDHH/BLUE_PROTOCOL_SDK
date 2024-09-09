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
	 * WidgetBlueprintGeneratedClass KeyConfig_Slider.KeyConfig_Slider_C
	 * Size -> 0x0046 (FullSize[0x02BE] - InheritedSize[0x0278])
	 */
	class UKeyConfig_Slider_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Changed;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_NewMark;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Label;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USliderInput_C*                                      SliderInput;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeValue;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBTextTableAsset*                                   TextDataTable;                                           // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    TextId;                                                  // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EConfig_KeyconfigItems                                     Type;                                                    // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bChanged;                                                // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetNewMark(bool bShowNewMark);
		void IsChangeBefore(bool* ChangeBefore);
		void SetChanged(bool bChanged);
		void GetRatio(float* Ratio);
		void ApplyRatio(float Ratio);
		void GetValue(int32_t* Value);
		void ApplyValue(int32_t NewValue);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void CallOnChange(int32_t NewValue, float Ratio);
		void ExecuteUbergraph_KeyConfig_Slider(int32_t EntryPoint);
		void onChangeValue__DelegateSignature(int32_t NewValue, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
