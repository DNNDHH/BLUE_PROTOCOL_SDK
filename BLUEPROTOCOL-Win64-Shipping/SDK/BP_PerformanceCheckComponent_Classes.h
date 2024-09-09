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
	 * BlueprintGeneratedClass BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C
	 * Size -> 0x0009 (FullSize[0x0149] - InheritedSize[0x0140])
	 */
	class UBP_PerformanceCheckComponent_C : public USBPerformanceCheckComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0140(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Checking;                                                // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class FString GenerateFilename(const class FString& Direction);
		void PerformanceCheckEvent();
		void OnPerformanceCheckStop();
		void OnPerformanceCheckStart();
		void ExecuteUbergraph_BP_PerformanceCheckComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
