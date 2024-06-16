#pragma once

 

// Package: LibraryMenu_LoginBonus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C
// 0x00B0 (0x0358 - 0x02A8)
class ULibraryMenu_LoginBonus_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoginBonusInfoIn;                              // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusInfo_C*          LibraryMenu_LoginBonusInfo;                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusList_C*          List;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DetailsImagineBattleZoomIn_C*      UMG_DetailsImagineBattleZoomIn;                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductDetail_C*                   UMG_ProductDetail;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBLoginBonusWindowData>        LoginBonusData;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ViewIndex;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitialize;                                       // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6580[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinishDelegate;                                  // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UTexture2DDynamic*>              BannerImageList;                                   // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         BannerLoadCount;                                   // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6581[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 BannerImageIndex;                                  // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_SBProductItemData_C*                ProductData;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     TextureImageList;                                  // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ViewDetailIndex;                                   // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6582[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               ProductDetailMenu;                                 // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinishDelegate__DelegateSignature();
	void ExecuteUbergraph_LibraryMenu_LoginBonus(int32 EntryPoint);
	void BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature();
	void BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
	void BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void BannerImageLoadCompleted();
	void DetailClose();
	void Finish();
	void LoginBonusListChange(int32 Param_Index);
	void Initialize(int32 DataCount);
	void Construct();
	void ImageLoadWork();
	void OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4(class UObject* Loaded);
	void SetInfomation(int32 Param_Index);
	void ItemClickChange(int32 Param_Index);
	void DetailBannerChange();
	void DetailVisibility(int32 Param_Index);
	void SetItemDetail(const struct FSBLoginBonusWindowDayData& ItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_LoginBonus_C">();
	}
	static class ULibraryMenu_LoginBonus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_LoginBonus_C>();
	}
};
static_assert(alignof(ULibraryMenu_LoginBonus_C) == 0x000008, "Wrong alignment on ULibraryMenu_LoginBonus_C");
static_assert(sizeof(ULibraryMenu_LoginBonus_C) == 0x000358, "Wrong size on ULibraryMenu_LoginBonus_C");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_LoginBonus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, AnimLoginBonusInfoIn) == 0x0002B0, "Member 'ULibraryMenu_LoginBonus_C::AnimLoginBonusInfoIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, CanvasPanel_0) == 0x0002B8, "Member 'ULibraryMenu_LoginBonus_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, LibraryMenu_LoginBonusInfo) == 0x0002C0, "Member 'ULibraryMenu_LoginBonus_C::LibraryMenu_LoginBonusInfo' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, List) == 0x0002C8, "Member 'ULibraryMenu_LoginBonus_C::List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, UMG_DetailsImagineBattleZoomIn) == 0x0002D0, "Member 'ULibraryMenu_LoginBonus_C::UMG_DetailsImagineBattleZoomIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, UMG_ProductDetail) == 0x0002D8, "Member 'ULibraryMenu_LoginBonus_C::UMG_ProductDetail' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, LoginBonusData) == 0x0002E0, "Member 'ULibraryMenu_LoginBonus_C::LoginBonusData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, ViewIndex) == 0x0002F0, "Member 'ULibraryMenu_LoginBonus_C::ViewIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, bInitialize) == 0x0002F4, "Member 'ULibraryMenu_LoginBonus_C::bInitialize' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, OnFinishDelegate) == 0x0002F8, "Member 'ULibraryMenu_LoginBonus_C::OnFinishDelegate' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, BannerImageList) == 0x000308, "Member 'ULibraryMenu_LoginBonus_C::BannerImageList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, BannerLoadCount) == 0x000318, "Member 'ULibraryMenu_LoginBonus_C::BannerLoadCount' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, BannerImageIndex) == 0x000320, "Member 'ULibraryMenu_LoginBonus_C::BannerImageIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, ProductData) == 0x000330, "Member 'ULibraryMenu_LoginBonus_C::ProductData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, TextureImageList) == 0x000338, "Member 'ULibraryMenu_LoginBonus_C::TextureImageList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, ViewDetailIndex) == 0x000348, "Member 'ULibraryMenu_LoginBonus_C::ViewDetailIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_C, ProductDetailMenu) == 0x000350, "Member 'ULibraryMenu_LoginBonus_C::ProductDetailMenu' has a wrong offset!");

}

