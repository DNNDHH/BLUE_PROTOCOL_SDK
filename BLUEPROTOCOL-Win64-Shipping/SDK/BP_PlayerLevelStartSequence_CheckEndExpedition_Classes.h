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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequence_CheckEndExpedition_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimespan                                           RemainTime;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TextTable[0x28];                                         // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UObject*                                             TempObject;                                              // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetMessage();
		class FString GetDescription();
		void OnLoaded_D99C7E054941241745424DB27741E175(class UObject* Loaded);
		void FinishSequence();
		void CompleteWork(bool WasSuccessful, int32_t ErrorCode, int32_t IdCount);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
