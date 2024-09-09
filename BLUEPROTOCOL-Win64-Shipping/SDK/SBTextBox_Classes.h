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
	 * BlueprintGeneratedClass SBTextBox.SBTextBox_C
	 * Size -> 0x0038 (FullSize[0x0B00] - InheritedSize[0x0AC8])
	 */
	class USBTextBox_C : public USBTextBoxBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AC8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnHandledGetFocus;                                       // 0x0AD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHandledLostFocus;                                      // 0x0AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHandledPressOk;                                        // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnGetFocus();
		void OnLostFocus();
		void OnPressOk();
		void ExecuteUbergraph_SBTextBox(int32_t EntryPoint);
		void OnHandledPressOk__DelegateSignature();
		void OnHandledLostFocus__DelegateSignature();
		void OnHandledGetFocus__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
