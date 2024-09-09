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
	 * WidgetBlueprintGeneratedClass UIBlocker.UIBlocker_C
	 * Size -> 0x000A (FullSize[0x02BA] - InheritedSize[0x02B0])
	 */
	class UUIBlocker_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bBlockInput;                                             // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBUIBlockerType                                           UIBlockerType;                                           // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Construct();
		void BP_SetVisibility(ESlateVisibility InVisibility);
		void Destruct();
		void SetBlockInputInBlocker();
		void ChangeUiBlockerType(ESBUIBlockerType UIBlockerType);
		void UpdateBlockInputByVisibility(ESlateVisibility IsVisibility);
		void ExecuteUbergraph_UIBlocker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
