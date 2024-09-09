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
	 * BlueprintGeneratedClass BP_PlayerAdminComponent.BP_PlayerAdminComponent_C
	 * Size -> 0x0484 (FullSize[0x05D4] - InheritedSize[0x0150])
	 */
	class UBP_PlayerAdminComponent_C : public USBPlayerAdminComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0150(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bFinishedProfileSearch;                                  // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWasProfileSearchSuccess;                                // 0x0159(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_72YX[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerProfileMenuDetailData                        SearchedPlayerProfile;                                   // 0x0160(0x0468) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             TempWorldLocation;                                       // 0x05C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void WarpPlayerByMapClick(const struct FVector2D& WorldLocation2d);
		void OnConfirmAdminWarp(EYesNoDialogResult Result);
		void OnIsGetPlayerProfileDetailMenuDataDelegate_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void OutputFoundPlayerInfoByScreenClick();
		void OutputFoundPlayerInfo(const class FString& CharacterId, const struct FVector& WorldLocation);
		void TravelMapToCharacter(const class FString& CharacterId);
		void SearchPlayerProfile(const class FString& CharacterId);
		void ExecuteGotoBookmarkSub(class USBAdminGotoBookmarkItem* BookmarkData);
		void OnCanfirmGotoBookmarkMapJamp(EYesNoDialogResult Result);
		void ExecuteUbergraph_BP_PlayerAdminComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
