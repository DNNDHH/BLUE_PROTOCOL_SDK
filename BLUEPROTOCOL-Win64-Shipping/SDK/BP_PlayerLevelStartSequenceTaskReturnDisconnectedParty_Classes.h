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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C
	 * Size -> 0x000A (FullSize[0x003A] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bAPIRequested;                                           // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NewVar_1;                                                // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetStorageComponent(class USBPlayerStorageComponent** StorageComponent);
		void RequestGetBagItems_API(bool* bResult);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void EndTask();
		void OnReturnDisconnectedPartyComplete_Event(bool bWasSuccessful, int32_t ReturnPartyResultMessageIndex);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
