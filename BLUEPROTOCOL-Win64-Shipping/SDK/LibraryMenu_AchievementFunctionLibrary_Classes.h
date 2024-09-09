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
	 * BlueprintGeneratedClass LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULibraryMenu_AchievementFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void SetLibraryAchievementCategory_AdventureBoard(class UObject* __WorldContext);
		void SetLibraryAchievementCategory_Assets(class UObject* __WorldContext);
		void SetLibraryAchievementCategory_Life(class UObject* __WorldContext);
		void SetLibraryAchievementCategory_Communication(class UObject* __WorldContext);
		void SetLibraryAchievementCategory_Quest(class UObject* __WorldContext);
		void SetLibraryAchievementCategory_Class(class UObject* __WorldContext);
		void SetLibraryAchievementCategory_Status(class UObject* __WorldContext);
		void IsTermIdData(const class FString& InTermId, class UObject* __WorldContext, bool* IsTermData, TArray<struct FSBEventTermsData>* Terms);
		void CheckLimitedTime(const struct FAchievementMasterData& AchievementMasterData, class UObject* __WorldContext, bool* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
