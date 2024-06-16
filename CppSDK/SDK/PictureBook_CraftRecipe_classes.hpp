#pragma once

 

// Package: PictureBook_CraftRecipe

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PictureBook_CraftRecipe.PictureBook_CraftRecipe_C
// 0x00A8 (0x0320 - 0x0278)
class UPictureBook_CraftRecipe_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flame;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_152;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_209;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageVLineWhite01;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageVLineWhite02;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LimitedTime2;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ListCautionWindow;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             NeedItemList;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPictureBook_BtnWishList_C*             PictureBook_BtnWishList;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPictureBook_CraftRecipeItem_C*         PictureBook_CraftRecipeItem;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPictureBook_CraftRecipeItem_C*         PictureBook_CraftRecipeItem_389;                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Limit;                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SizeGrp;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextCaution;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment_1;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBWishListData                        WishListData;                                      // 0x0310(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsOpenRecipe;                                      // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExpired;                                         // 0x031D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PictureBook_CraftRecipe(int32 EntryPoint);
	void BndEvt__PictureBook_CraftRecipe_PictureBook_BtnWishList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void CreateWeaponCraftList(int32 WeaponID);
	void CreateImagineCraftList(int32 ImagineId, ELibraryImagineType ImagineType);
	void SetTermId(const class FString& TermId, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PictureBook_CraftRecipe_C">();
	}
	static class UPictureBook_CraftRecipe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureBook_CraftRecipe_C>();
	}
};
static_assert(alignof(UPictureBook_CraftRecipe_C) == 0x000008, "Wrong alignment on UPictureBook_CraftRecipe_C");
static_assert(sizeof(UPictureBook_CraftRecipe_C) == 0x000320, "Wrong size on UPictureBook_CraftRecipe_C");
static_assert(offsetof(UPictureBook_CraftRecipe_C, UberGraphFrame) == 0x000278, "Member 'UPictureBook_CraftRecipe_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, BackgroundBlur) == 0x000280, "Member 'UPictureBook_CraftRecipe_C::BackgroundBlur' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, Flame) == 0x000288, "Member 'UPictureBook_CraftRecipe_C::Flame' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, Image_152) == 0x000290, "Member 'UPictureBook_CraftRecipe_C::Image_152' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, Image_209) == 0x000298, "Member 'UPictureBook_CraftRecipe_C::Image_209' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, ImageVLineWhite01) == 0x0002A0, "Member 'UPictureBook_CraftRecipe_C::ImageVLineWhite01' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, ImageVLineWhite02) == 0x0002A8, "Member 'UPictureBook_CraftRecipe_C::ImageVLineWhite02' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, LimitedTime2) == 0x0002B0, "Member 'UPictureBook_CraftRecipe_C::LimitedTime2' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, ListCautionWindow) == 0x0002B8, "Member 'UPictureBook_CraftRecipe_C::ListCautionWindow' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, NeedItemList) == 0x0002C0, "Member 'UPictureBook_CraftRecipe_C::NeedItemList' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, PictureBook_BtnWishList) == 0x0002C8, "Member 'UPictureBook_CraftRecipe_C::PictureBook_BtnWishList' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, PictureBook_CraftRecipeItem) == 0x0002D0, "Member 'UPictureBook_CraftRecipe_C::PictureBook_CraftRecipeItem' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, PictureBook_CraftRecipeItem_389) == 0x0002D8, "Member 'UPictureBook_CraftRecipe_C::PictureBook_CraftRecipeItem_389' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, SBDateTimeTextBlock_Limit) == 0x0002E0, "Member 'UPictureBook_CraftRecipe_C::SBDateTimeTextBlock_Limit' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, SBRuntimeTextBlock_Header) == 0x0002E8, "Member 'UPictureBook_CraftRecipe_C::SBRuntimeTextBlock_Header' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, SizeGrp) == 0x0002F0, "Member 'UPictureBook_CraftRecipe_C::SizeGrp' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, TextCaution) == 0x0002F8, "Member 'UPictureBook_CraftRecipe_C::TextCaution' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, Txt_Comment) == 0x000300, "Member 'UPictureBook_CraftRecipe_C::Txt_Comment' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, Txt_Comment_1) == 0x000308, "Member 'UPictureBook_CraftRecipe_C::Txt_Comment_1' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, WishListData) == 0x000310, "Member 'UPictureBook_CraftRecipe_C::WishListData' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, IsOpenRecipe) == 0x00031C, "Member 'UPictureBook_CraftRecipe_C::IsOpenRecipe' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipe_C, IsExpired) == 0x00031D, "Member 'UPictureBook_CraftRecipe_C::IsExpired' has a wrong offset!");

}

