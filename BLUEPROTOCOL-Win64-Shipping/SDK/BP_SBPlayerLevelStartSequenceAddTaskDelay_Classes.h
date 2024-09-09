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
	 * BlueprintGeneratedClass BP_SBPlayerLevelStartSequenceAddTaskDelay.BP_SBPlayerLevelStartSequenceAddTaskDelay_C
	 * Size -> 0x0009 (FullSize[0x0051] - InheritedSize[0x0048])
	 */
	class UBP_SBPlayerLevelStartSequenceAddTaskDelay_C : public USBPlayerLevelStartSequenceAddTaskDelay
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       OpenTheaterMode;                                         // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void ExecuteUbergraph_BP_SBPlayerLevelStartSequenceAddTaskDelay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
