#pragma once

 

// Package: FlatShop_ProductDetail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FlatShop_ProductDetail.FlatShop_ProductDetail_C
// 0x0088 (0x0300 - 0x0278)
class UFlatShop_ProductDetail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBlink;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Bonus;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Limited;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Product;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Quantity;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBFlatShopItemSetMasterData           BonusData;                                         // 0x02C0(0x003C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_FlatShop_ProductDetail(int32 EntryPoint);
	void Construct();
	void OnClose_Event(class UUMG_ProductDetailMenu_C* Sender);
	void Destruct();
	void BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void DownLoadImage_Event(const class FString& URL);
	void LoadImageSoftRef_Event(TSoftObjectPtr<class UTexture2D> Path);
	void LoadImageName_Event(class FName Param_Name);
	void SetFlags_ROS(int32 Ribbon);
	void SetProductData_RoPS(const struct FSBRoseOrbShopItemMasterData& ProductData);
	void OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture);
	void OnFail_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture);
	void OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D(class UObject* Loaded);
	void Get_ThumbnailTexture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture);
	void SetupBonusIcon(int32 BounsId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlatShop_ProductDetail_C">();
	}
	static class UFlatShop_ProductDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlatShop_ProductDetail_C>();
	}
};
static_assert(alignof(UFlatShop_ProductDetail_C) == 0x000008, "Wrong alignment on UFlatShop_ProductDetail_C");
static_assert(sizeof(UFlatShop_ProductDetail_C) == 0x000300, "Wrong size on UFlatShop_ProductDetail_C");
static_assert(offsetof(UFlatShop_ProductDetail_C, UberGraphFrame) == 0x000278, "Member 'UFlatShop_ProductDetail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, AnimBlink) == 0x000280, "Member 'UFlatShop_ProductDetail_C::AnimBlink' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, CanvasPanel_Bonus) == 0x000288, "Member 'UFlatShop_ProductDetail_C::CanvasPanel_Bonus' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, CommonIcon) == 0x000290, "Member 'UFlatShop_ProductDetail_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, Icon_Limited) == 0x000298, "Member 'UFlatShop_ProductDetail_C::Icon_Limited' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, Icon_Product) == 0x0002A0, "Member 'UFlatShop_ProductDetail_C::Icon_Product' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, Label_Quantity) == 0x0002A8, "Member 'UFlatShop_ProductDetail_C::Label_Quantity' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, OnClose) == 0x0002B0, "Member 'UFlatShop_ProductDetail_C::OnClose' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductDetail_C, BonusData) == 0x0002C0, "Member 'UFlatShop_ProductDetail_C::BonusData' has a wrong offset!");

}

