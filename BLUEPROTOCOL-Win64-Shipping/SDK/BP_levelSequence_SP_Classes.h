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
	 * BlueprintGeneratedClass BP_levelSequence_SP.BP_LevelSequence_SP_C
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class ABP_LevelSequence_SP_C : public ASBLevelSequenceActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveOnPlay();
		void ReceiveOnStop();
		void ExecuteUbergraph_BP_LevelSequence_SP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
