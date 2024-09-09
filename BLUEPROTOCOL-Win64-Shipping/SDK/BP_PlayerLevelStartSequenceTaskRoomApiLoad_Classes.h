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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBPlayerOrnamentComponent*                          PlayerOrnamentComponent;                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void OnCompleteRoomList(int32_t RetCode);
		void OnCompleteRoomInfo(int32_t RetCode);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRoomApiLoad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
