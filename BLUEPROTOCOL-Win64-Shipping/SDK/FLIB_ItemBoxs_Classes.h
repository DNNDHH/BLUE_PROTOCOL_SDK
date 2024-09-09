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
	 * BlueprintGeneratedClass FLIB_ItemBoxs.FLIB_ItemBoxs_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_ItemBoxs_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetAmountMax_RewardType(ESBRewardItemType InRewardType, int32_t InId, class UObject* __WorldContext, int32_t* MaxAmoun);
		void IsStackItem(ESBRewardItemType Selection, class UObject* __WorldContext, bool* NewParam);
		void IsCanNotLost(ESBRewardItemType TrwardType, int32_t ID, class UObject* __WorldContext, bool* CanNotLost);
		void IsOverlapping(ESBRewardItemType InRewardType, int32_t InId, class UObject* __WorldContext, bool* bOverlapping);
		void GetAcquisitionsNumText(int32_t InMax, int32_t InMin, class UObject* __WorldContext, class FText* Result);
		void CheckUseMin(int32_t InMax, int32_t InMin, class UObject* __WorldContext, bool* bUseMin, int32_t* OutMax, int32_t* OutMin);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
