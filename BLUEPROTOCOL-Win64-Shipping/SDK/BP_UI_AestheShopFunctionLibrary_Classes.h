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
	 * BlueprintGeneratedClass BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UI_AestheShopFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void CheckIfAestheCourseEventTermIsActive(int32_t InCourseId, class UObject* __WorldContext, bool* bOutIsActive);
		void SortAesthePartsIconInfo(TArray<struct FST_AestheShopPartsIconComplexInfo>* InInfo, class UObject* __WorldContext, TArray<struct FST_AestheShopPartsIconComplexInfo>* OutSortedInfo);
		void GetAesthePartsSortId(const class FString& InIconId, class UObject* __WorldContext, int32_t* OutSortId);
		void IsAesthePartsIconActive(const class FString& InPartsIconId, const struct FDateTime& InNowTime, class UObject* __WorldContext, bool* OutIsIconActive);
		void GetAestheCategoryIconTexture(E_AestheShop_TopMenuItems_DetailSettings InAestheDetailSettingType, class UObject* __WorldContext);
		void FindAestheCourseMaster(int32_t InCourseId, class UObject* __WorldContext, bool* OutIsValid, struct FSBAestheShopCourseMasterData* OutMaster);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
