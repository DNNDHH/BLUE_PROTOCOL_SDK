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
	 * BlueprintGeneratedClass BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C
	 * Size -> 0x0021 (FullSize[0x03C0] - InheritedSize[0x039F])
	 */
	class ABP_ImagineForCapture_Studio_C : public ABP_CaptureStudioBase_C
	{
	public:
		unsigned char                                              UnknownData_AT71[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                BP_ImagineForCapture;                                    // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnImagineLoadedDelegete;                                 // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ResetImagine();
		void UserConstructionScript();
		void LoadImagineAsset(int32_t InImagineItemId);
		void ReceiveBeginPlay();
		void OnSetImagineData_Event_1(bool bResult);
		void ExecuteUbergraph_BP_ImagineForCapture_Studio(int32_t EntryPoint);
		void OnImagineLoadedDelegete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
