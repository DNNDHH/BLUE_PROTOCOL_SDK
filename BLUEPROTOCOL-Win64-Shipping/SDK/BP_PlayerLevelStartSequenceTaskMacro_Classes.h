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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskMacro.BP_PlayerLevelStartSequenceTaskMacro_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_PlayerLevelStartSequenceTaskMacro_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsLoadLibSaveData(class UObject* __WorldContext, bool* IsReturntheatermode);
		void LoadLibSaveData(class UObject* __WorldContext, class USBLibrarySaveManager** LibSaveData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
