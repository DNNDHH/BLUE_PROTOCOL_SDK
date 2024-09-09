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
	 * BlueprintGeneratedClass FLIB_CommonIcon.FLIB_CommonIcon_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_CommonIcon_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetLiquidMemoryEfficacyTypeName(ESBLiquidMemoryEfficacyType EfficacyType, class UObject* __WorldContext, class FString* OutCategoryName);
		void GetLiquidMemoryCategoryName(ESBLiquidMemoryCategory InCategory, class UObject* __WorldContext, class FString* OutCategoryName);
		void GetRewardItemNameAndType2ByMasterReward(const struct FSBMasterReward& RewardData, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName);
		void GetRewardItemNameAndType2(ESBRewardItemType InRewardItemType, int32_t InId, int32_t Amount, int32_t AmountMin, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName);
		class FText GetStampIDToCategoryNameAndStampI(int32_t StampId, class UObject* __WorldContext);
		class FText AddBracketsToString(bool bAdd, const class FString& Text, class UObject* __WorldContext);
		void GetRewardItemNameandType(ESBRewardItemType InRewardItemType, int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName);
		void GetMountImagineToolTipText(int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
		void GetLiquidMemoryTooltipText(int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
		void GetImagineToolTipText(int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
		void GetCostumeToolTipText(int32_t CostumeId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
		void GetWeaponToolTipText(int32_t WeaponID, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
		void GetItemToolTipText(int32_t InItemIndex, bool Unidentified, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
