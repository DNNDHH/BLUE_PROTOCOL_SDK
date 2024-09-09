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
	 * BlueprintGeneratedClass BP_OrnamentForCapture_Studio.BP_OrnamentForCapture_Studio_C
	 * Size -> 0x0039 (FullSize[0x03D8] - InheritedSize[0x039F])
	 */
	class ABP_OrnamentForCapture_Studio_C : public ABP_CaptureStudioBase_C
	{
	public:
		unsigned char                                              UnknownData_S9PP[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                BP_OrnamentCreateActor;                                  // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOrnamentLoadedDelegate;                                // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    OrnamentId;                                              // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SEF6[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueId;                                                // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ResetOrnament();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnOrnamentCreationCompleted(bool Result);
		void LoadOrnamentAsset(int32_t InOrnamentId, const class FString& InUniqueId);
		void ExecuteUbergraph_BP_OrnamentForCapture_Studio(int32_t EntryPoint);
		void OnOrnamentLoadedDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
