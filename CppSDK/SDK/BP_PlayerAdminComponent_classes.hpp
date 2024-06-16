#pragma once

 

// Package: BP_PlayerAdminComponent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerAdminComponent.BP_PlayerAdminComponent_C
// 0x0418 (0x0568 - 0x0150)
class UBP_PlayerAdminComponent_C final : public USBPlayerAdminComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bFinishedProfileSearch;                            // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bWasProfileSearchSuccess;                          // 0x0159(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D13[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           SearchedPlayerProfile;                             // 0x0160(0x03F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                TempWorldLocation;                                 // 0x0558(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerAdminComponent(int32 EntryPoint);
	void OnCanfirmGotoBookmarkMapJamp(const EYesNoDialogResult Result);
	void ExecuteGotoBookmarkSub(class USBAdminGotoBookmarkItem* BookmarkData);
	void SearchPlayerProfile(const class FString& CharacterId);
	void TravelMapToCharacter(const class FString& CharacterId);
	void OutputFoundPlayerInfo(const class FString& CharacterId, const struct FVector& WorldLocation);
	void OutputFoundPlayerInfoByScreenClick();
	void OnIsGetPlayerProfileDetailMenuDataDelegate_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void OnConfirmAdminWarp(const EYesNoDialogResult Result);
	void WarpPlayerByMapClick(const struct FVector2D& WorldLocation2d);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerAdminComponent_C">();
	}
	static class UBP_PlayerAdminComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerAdminComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerAdminComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerAdminComponent_C");
static_assert(sizeof(UBP_PlayerAdminComponent_C) == 0x000568, "Wrong size on UBP_PlayerAdminComponent_C");
static_assert(offsetof(UBP_PlayerAdminComponent_C, UberGraphFrame) == 0x000150, "Member 'UBP_PlayerAdminComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAdminComponent_C, bFinishedProfileSearch) == 0x000158, "Member 'UBP_PlayerAdminComponent_C::bFinishedProfileSearch' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAdminComponent_C, bWasProfileSearchSuccess) == 0x000159, "Member 'UBP_PlayerAdminComponent_C::bWasProfileSearchSuccess' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAdminComponent_C, SearchedPlayerProfile) == 0x000160, "Member 'UBP_PlayerAdminComponent_C::SearchedPlayerProfile' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAdminComponent_C, TempWorldLocation) == 0x000558, "Member 'UBP_PlayerAdminComponent_C::TempWorldLocation' has a wrong offset!");

}

