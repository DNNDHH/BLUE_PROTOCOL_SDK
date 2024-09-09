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
	 * BlueprintGeneratedClass BP_CharaSelectSaveGameObject.BP_CharaSelectSaveGameObject_C
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UBP_CharaSelectSaveGameObject_C : public USaveGame
	{
	public:
		TArray<int32_t>                                            FacialNumList;                                           // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, int32_t>                               FacialNumMap;                                            // 0x0038(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
