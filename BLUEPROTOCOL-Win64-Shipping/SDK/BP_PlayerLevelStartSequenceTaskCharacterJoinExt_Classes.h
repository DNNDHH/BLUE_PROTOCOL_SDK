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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void RequestAPI_Internal(bool* bResult);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void TryRequestAPI();
		void OnAPICompleted(int32_t InRetCode);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
