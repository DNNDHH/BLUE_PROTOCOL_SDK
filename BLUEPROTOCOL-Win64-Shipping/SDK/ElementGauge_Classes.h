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
	 * WidgetBlueprintGeneratedClass ElementGauge.ElementGauge_C
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UElementGauge_C : public USBElementGaugeWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnBind(class ASBCharacter* InCharacter);
		void OnUnbind(class ASBCharacter* InCharacter);
		void CustomEvent_1(ESBAttribute ElementType);
		void CustomEvent_2(ESBAttribute ElementType);
		void ExecuteUbergraph_ElementGauge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
