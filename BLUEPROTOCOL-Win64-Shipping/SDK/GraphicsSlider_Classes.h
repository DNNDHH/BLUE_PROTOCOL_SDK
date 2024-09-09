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
	 * WidgetBlueprintGeneratedClass GraphicsSlider.GraphicsSlider_C
	 * Size -> 0x0023 (FullSize[0x02F4] - InheritedSize[0x02D1])
	 */
	class UGraphicsSlider_C : public USliderInput_C
	{
	public:
		unsigned char                                              UnknownData_3CGE[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnGraphicsChanged;                                       // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Index;                                                   // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void OnChangeSignature(int32_t NewValue, float Ratio);
		void ExecuteUbergraph_GraphicsSlider(int32_t EntryPoint);
		void OnGraphicsChanged__DelegateSignature(int32_t NewValue, float Ratio, int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
