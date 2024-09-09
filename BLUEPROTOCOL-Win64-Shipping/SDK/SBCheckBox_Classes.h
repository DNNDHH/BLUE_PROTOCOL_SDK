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
	 * BlueprintGeneratedClass SBCheckBox.SBCheckBox_C
	 * Size -> 0x0038 (FullSize[0x07E8] - InheritedSize[0x07B0])
	 */
	class USBCheckBox_C : public USBCheckBoxBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnHandledGetFocus;                                       // 0x07B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHandledLostFocus;                                      // 0x07C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHandledPressOk;                                        // 0x07D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnGetFocus();
		void OnLostFocus();
		void OnPressOk();
		void ExecuteUbergraph_SBCheckBox(int32_t EntryPoint);
		void OnHandledPressOk__DelegateSignature();
		void OnHandledLostFocus__DelegateSignature();
		void OnHandledGetFocus__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
