#pragma once

 

// Package: ShopMenuDetailsAchievement

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C
// 0x0100 (0x03B0 - 0x02B0)
class UShopMenuDetailsAchievement_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Achievement;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Other;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextDesc;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Image;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_930B[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAchievementMasterData                 AchievementMasterData;                             // 0x0338(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void ExecuteUbergraph_ShopMenuDetailsAchievement(int32 EntryPoint);
	void SetData(ESBRewardItemType RewardType, int32 ItemIndex);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsAchievement_C">();
	}
	static class UShopMenuDetailsAchievement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsAchievement_C>();
	}
};
static_assert(alignof(UShopMenuDetailsAchievement_C) == 0x000008, "Wrong alignment on UShopMenuDetailsAchievement_C");
static_assert(sizeof(UShopMenuDetailsAchievement_C) == 0x0003B0, "Wrong size on UShopMenuDetailsAchievement_C");
static_assert(offsetof(UShopMenuDetailsAchievement_C, UberGraphFrame) == 0x0002B0, "Member 'UShopMenuDetailsAchievement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, AnimOut) == 0x0002B8, "Member 'UShopMenuDetailsAchievement_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, AnimIn) == 0x0002C0, "Member 'UShopMenuDetailsAchievement_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, BgDetails) == 0x0002C8, "Member 'UShopMenuDetailsAchievement_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, ColorGrp1) == 0x0002D0, "Member 'UShopMenuDetailsAchievement_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, ColorGrp2) == 0x0002D8, "Member 'UShopMenuDetailsAchievement_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, Image_Achievement) == 0x0002E0, "Member 'UShopMenuDetailsAchievement_C::Image_Achievement' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, Image_Other) == 0x0002E8, "Member 'UShopMenuDetailsAchievement_C::Image_Other' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, ImageTitleBG) == 0x0002F0, "Member 'UShopMenuDetailsAchievement_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, NameParts) == 0x0002F8, "Member 'UShopMenuDetailsAchievement_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, TextDesc) == 0x000300, "Member 'UShopMenuDetailsAchievement_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, WBP_ShopMenuDetailsTags) == 0x000308, "Member 'UShopMenuDetailsAchievement_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, WidgetSwitcher_Image) == 0x000310, "Member 'UShopMenuDetailsAchievement_C::WidgetSwitcher_Image' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, InDesignType) == 0x000318, "Member 'UShopMenuDetailsAchievement_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, OnEndCloseDetailAnimation) == 0x000320, "Member 'UShopMenuDetailsAchievement_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, MasterDataManager) == 0x000330, "Member 'UShopMenuDetailsAchievement_C::MasterDataManager' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsAchievement_C, AchievementMasterData) == 0x000338, "Member 'UShopMenuDetailsAchievement_C::AchievementMasterData' has a wrong offset!");

}

