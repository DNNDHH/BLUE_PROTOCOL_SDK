#pragma once

 

// Package: LibraryMenu_TheaterDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_TheaterDetails.LibraryMenu_TheaterDetails_C
// 0x0060 (0x0308 - 0x02A8)
class ULibraryMenu_TheaterDetails_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimMessageIn;                                     // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDetailsIn;                                     // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailsGrp;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MainVisual;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shadow;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtMessage1;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CategoryChanged;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsCty;                                             // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void CategoryChanged__DelegateSignature(int32 ItemIndex);
	void ExecuteUbergraph_LibraryMenu_TheaterDetails(int32 EntryPoint);
	void Construct();
	void SetDetailsVisibility(bool bVisible);
	void SetMessage(bool Param_IsCty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_TheaterDetails_C">();
	}
	static class ULibraryMenu_TheaterDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_TheaterDetails_C>();
	}
};
static_assert(alignof(ULibraryMenu_TheaterDetails_C) == 0x000008, "Wrong alignment on ULibraryMenu_TheaterDetails_C");
static_assert(sizeof(ULibraryMenu_TheaterDetails_C) == 0x000308, "Wrong size on ULibraryMenu_TheaterDetails_C");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_TheaterDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, AnimMessageIn) == 0x0002B0, "Member 'ULibraryMenu_TheaterDetails_C::AnimMessageIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, AnimDetailsIn) == 0x0002B8, "Member 'ULibraryMenu_TheaterDetails_C::AnimDetailsIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, DetailsGrp) == 0x0002C0, "Member 'ULibraryMenu_TheaterDetails_C::DetailsGrp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, Img_MainVisual) == 0x0002C8, "Member 'ULibraryMenu_TheaterDetails_C::Img_MainVisual' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, ItemName) == 0x0002D0, "Member 'ULibraryMenu_TheaterDetails_C::ItemName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, Line2) == 0x0002D8, "Member 'ULibraryMenu_TheaterDetails_C::Line2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, Shadow) == 0x0002E0, "Member 'ULibraryMenu_TheaterDetails_C::Shadow' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, TxtMessage1) == 0x0002E8, "Member 'ULibraryMenu_TheaterDetails_C::TxtMessage1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, CategoryChanged) == 0x0002F0, "Member 'ULibraryMenu_TheaterDetails_C::CategoryChanged' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_TheaterDetails_C, IsCty) == 0x000300, "Member 'ULibraryMenu_TheaterDetails_C::IsCty' has a wrong offset!");

}

