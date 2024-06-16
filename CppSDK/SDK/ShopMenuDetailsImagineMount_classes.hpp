#pragma once

 

// Package: ShopMenuDetailsImagineMount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "WBP_ShopMenuDetailsCommon_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C
// 0x00F0 (0x0378 - 0x0288)
class UShopMenuDetailsImagineMount_C final : public UWBP_ShopMenuDetailsCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Imagine;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDesc;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_9315[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBMasterMountImagine                  MasterMountImagine;                                // 0x02F8(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void ExecuteUbergraph_ShopMenuDetailsImagineMount(int32 EntryPoint);
	void BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature();
	void SetData(int32 ItemIndex, int32 Amount, int32 AmountMin, const class FString& UniqueId);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsImagineMount_C">();
	}
	static class UShopMenuDetailsImagineMount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsImagineMount_C>();
	}
};
static_assert(alignof(UShopMenuDetailsImagineMount_C) == 0x000008, "Wrong alignment on UShopMenuDetailsImagineMount_C");
static_assert(sizeof(UShopMenuDetailsImagineMount_C) == 0x000378, "Wrong size on UShopMenuDetailsImagineMount_C");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, UberGraphFrame) == 0x000288, "Member 'UShopMenuDetailsImagineMount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, AnimOut) == 0x000290, "Member 'UShopMenuDetailsImagineMount_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, AnimIn) == 0x000298, "Member 'UShopMenuDetailsImagineMount_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, BgDetails) == 0x0002A0, "Member 'UShopMenuDetailsImagineMount_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, ColorGrp1) == 0x0002A8, "Member 'UShopMenuDetailsImagineMount_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, ColorGrp2) == 0x0002B0, "Member 'UShopMenuDetailsImagineMount_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, Img_Imagine) == 0x0002B8, "Member 'UShopMenuDetailsImagineMount_C::Img_Imagine' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, NameParts) == 0x0002C0, "Member 'UShopMenuDetailsImagineMount_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, TextDesc) == 0x0002C8, "Member 'UShopMenuDetailsImagineMount_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, TitleBg) == 0x0002D0, "Member 'UShopMenuDetailsImagineMount_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, WBP_ShopMenuDetailsTags) == 0x0002D8, "Member 'UShopMenuDetailsImagineMount_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, InDesignType) == 0x0002E0, "Member 'UShopMenuDetailsImagineMount_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, OnEndCloseDetailAnimation) == 0x0002E8, "Member 'UShopMenuDetailsImagineMount_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, MasterMountImagine) == 0x0002F8, "Member 'UShopMenuDetailsImagineMount_C::MasterMountImagine' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineMount_C, OnClickZoomIn) == 0x000368, "Member 'UShopMenuDetailsImagineMount_C::OnClickZoomIn' has a wrong offset!");

}

