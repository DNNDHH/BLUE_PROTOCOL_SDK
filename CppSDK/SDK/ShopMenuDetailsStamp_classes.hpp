#pragma once

 

// Package: ShopMenuDetailsStamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsStamp.ShopMenuDetailsStamp_C
// 0x0150 (0x0400 - 0x02B0)
class UShopMenuDetailsStamp_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Stamp;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_113;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8A9E[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBStampCategoryData                   StampCategoryData;                                 // 0x0320(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBStampData                           StampData;                                         // 0x0358(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBStampCategoryMasterData             StampCategoryMasterData;                           // 0x03E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void ExecuteUbergraph_ShopMenuDetailsStamp(int32 EntryPoint);
	void SetData(ESBRewardItemType RewardType, int32 ItemIndex);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsStamp_C">();
	}
	static class UShopMenuDetailsStamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsStamp_C>();
	}
};
static_assert(alignof(UShopMenuDetailsStamp_C) == 0x000008, "Wrong alignment on UShopMenuDetailsStamp_C");
static_assert(sizeof(UShopMenuDetailsStamp_C) == 0x000400, "Wrong size on UShopMenuDetailsStamp_C");
static_assert(offsetof(UShopMenuDetailsStamp_C, UberGraphFrame) == 0x0002B0, "Member 'UShopMenuDetailsStamp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, AnimOut) == 0x0002B8, "Member 'UShopMenuDetailsStamp_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, AnimIn) == 0x0002C0, "Member 'UShopMenuDetailsStamp_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, BgDetails) == 0x0002C8, "Member 'UShopMenuDetailsStamp_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, ColorGrp1) == 0x0002D0, "Member 'UShopMenuDetailsStamp_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, ColorGrp2) == 0x0002D8, "Member 'UShopMenuDetailsStamp_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, Image_Stamp) == 0x0002E0, "Member 'UShopMenuDetailsStamp_C::Image_Stamp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, ImageTitleBG) == 0x0002E8, "Member 'UShopMenuDetailsStamp_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, NameParts) == 0x0002F0, "Member 'UShopMenuDetailsStamp_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, SBRuntimeTextBlock_113) == 0x0002F8, "Member 'UShopMenuDetailsStamp_C::SBRuntimeTextBlock_113' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, WBP_ShopMenuDetailsTags) == 0x000300, "Member 'UShopMenuDetailsStamp_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, InDesignType) == 0x000308, "Member 'UShopMenuDetailsStamp_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, OnEndCloseDetailAnimation) == 0x000310, "Member 'UShopMenuDetailsStamp_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, StampCategoryData) == 0x000320, "Member 'UShopMenuDetailsStamp_C::StampCategoryData' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, StampData) == 0x000358, "Member 'UShopMenuDetailsStamp_C::StampData' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsStamp_C, StampCategoryMasterData) == 0x0003E0, "Member 'UShopMenuDetailsStamp_C::StampCategoryMasterData' has a wrong offset!");

}

