#pragma once

 

// Package: LibraryMenu_BookmarkDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_BookmarkDetails.LibraryMenu_BookmarkDetails_C
// 0x0038 (0x02E0 - 0x02A8)
class ULibraryMenu_BookmarkDetails_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimMessageIn;                                     // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDetailsIn;                                     // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailsGrp;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTutorialHelp_Bookmark_C*               TutorialHelp_Bookmark;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtMessage1;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LibraryMenu_BookmarkDetails(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetDetailsVisibility(bool bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_BookmarkDetails_C">();
	}
	static class ULibraryMenu_BookmarkDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_BookmarkDetails_C>();
	}
};
static_assert(alignof(ULibraryMenu_BookmarkDetails_C) == 0x000008, "Wrong alignment on ULibraryMenu_BookmarkDetails_C");
static_assert(sizeof(ULibraryMenu_BookmarkDetails_C) == 0x0002E0, "Wrong size on ULibraryMenu_BookmarkDetails_C");
static_assert(offsetof(ULibraryMenu_BookmarkDetails_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_BookmarkDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_BookmarkDetails_C, AnimMessageIn) == 0x0002B0, "Member 'ULibraryMenu_BookmarkDetails_C::AnimMessageIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_BookmarkDetails_C, AnimDetailsIn) == 0x0002B8, "Member 'ULibraryMenu_BookmarkDetails_C::AnimDetailsIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_BookmarkDetails_C, DetailsGrp) == 0x0002C0, "Member 'ULibraryMenu_BookmarkDetails_C::DetailsGrp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_BookmarkDetails_C, Line) == 0x0002C8, "Member 'ULibraryMenu_BookmarkDetails_C::Line' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_BookmarkDetails_C, TutorialHelp_Bookmark) == 0x0002D0, "Member 'ULibraryMenu_BookmarkDetails_C::TutorialHelp_Bookmark' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_BookmarkDetails_C, TxtMessage1) == 0x0002D8, "Member 'ULibraryMenu_BookmarkDetails_C::TxtMessage1' has a wrong offset!");

}

