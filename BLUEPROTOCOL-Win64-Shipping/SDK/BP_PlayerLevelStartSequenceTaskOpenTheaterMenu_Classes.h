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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void CheckOpenedLoginBonusWindow(bool* IsOpened);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
