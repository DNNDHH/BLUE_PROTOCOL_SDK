#pragma once

 

// Package: ShopMenuDetailsCostume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_ShopMenuDetailsCommon_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsCostume.ShopMenuDetailsCostume_C
// 0x0168 (0x03F0 - 0x0288)
class UShopMenuDetailsCostume_C final : public UWBP_ShopMenuDetailsCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CheckBox_FemaleCostume;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CheckBox_MaleCostume;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CostumeTypeCheckBoxGrp;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_1;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_242;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDesc;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtColor;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPos;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtType;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DetailsVisible;                                    // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMaleCostumeSelected;                             // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_933E[0x6];                                     // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectCostumeType;                               // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         InDesignType;                                      // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_933F[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CostumeMaster;                                     // 0x0368(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClose__DelegateSignature();
	void OnSelectCostumeType__DelegateSignature(bool Param_IsMaleCostumeSelected);
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void ExecuteUbergraph_ShopMenuDetailsCostume(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void CloseDetails();
	void ShowDetails(int32 InItemID, int32 Amount, int32 AmountMin);
	void Construct();
	void Init(const class FString& InCurrMapName);
	void SetCostumeTypeCheckBoxSelected(bool Param_IsMaleCostumeSelected);
	void SetCostumeTypeCheckBoxVisibility(bool Param_IsVisible);
	void SetModelCaptureImageVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsCostume_C">();
	}
	static class UShopMenuDetailsCostume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsCostume_C>();
	}
};
static_assert(alignof(UShopMenuDetailsCostume_C) == 0x000008, "Wrong alignment on UShopMenuDetailsCostume_C");
static_assert(sizeof(UShopMenuDetailsCostume_C) == 0x0003F0, "Wrong size on UShopMenuDetailsCostume_C");
static_assert(offsetof(UShopMenuDetailsCostume_C, UberGraphFrame) == 0x000288, "Member 'UShopMenuDetailsCostume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, AnimOut) == 0x000290, "Member 'UShopMenuDetailsCostume_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, AnimIn) == 0x000298, "Member 'UShopMenuDetailsCostume_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, BgDetails) == 0x0002A0, "Member 'UShopMenuDetailsCostume_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, CheckBox_FemaleCostume) == 0x0002A8, "Member 'UShopMenuDetailsCostume_C::CheckBox_FemaleCostume' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, CheckBox_MaleCostume) == 0x0002B0, "Member 'UShopMenuDetailsCostume_C::CheckBox_MaleCostume' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, ColorGrp1) == 0x0002B8, "Member 'UShopMenuDetailsCostume_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, ColorGrp2) == 0x0002C0, "Member 'UShopMenuDetailsCostume_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, CostumeTypeCheckBoxGrp) == 0x0002C8, "Member 'UShopMenuDetailsCostume_C::CostumeTypeCheckBoxGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, Image_0) == 0x0002D0, "Member 'UShopMenuDetailsCostume_C::Image_0' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, ImageTitleBG) == 0x0002D8, "Member 'UShopMenuDetailsCostume_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, NameParts) == 0x0002E0, "Member 'UShopMenuDetailsCostume_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, SBRuntimeTextBlock) == 0x0002E8, "Member 'UShopMenuDetailsCostume_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, SBRuntimeTextBlock_1) == 0x0002F0, "Member 'UShopMenuDetailsCostume_C::SBRuntimeTextBlock_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, SBRuntimeTextBlock_242) == 0x0002F8, "Member 'UShopMenuDetailsCostume_C::SBRuntimeTextBlock_242' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, TextDesc) == 0x000300, "Member 'UShopMenuDetailsCostume_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, TxtColor) == 0x000308, "Member 'UShopMenuDetailsCostume_C::TxtColor' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, TxtPos) == 0x000310, "Member 'UShopMenuDetailsCostume_C::TxtPos' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, TxtType) == 0x000318, "Member 'UShopMenuDetailsCostume_C::TxtType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, WBP_ShopMenuDetailsTags) == 0x000320, "Member 'UShopMenuDetailsCostume_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, OnClose) == 0x000328, "Member 'UShopMenuDetailsCostume_C::OnClose' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, DetailsVisible) == 0x000338, "Member 'UShopMenuDetailsCostume_C::DetailsVisible' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, IsMaleCostumeSelected) == 0x000339, "Member 'UShopMenuDetailsCostume_C::IsMaleCostumeSelected' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, OnSelectCostumeType) == 0x000340, "Member 'UShopMenuDetailsCostume_C::OnSelectCostumeType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, OnEndCloseDetailAnimation) == 0x000350, "Member 'UShopMenuDetailsCostume_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, InDesignType) == 0x000360, "Member 'UShopMenuDetailsCostume_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCostume_C, CostumeMaster) == 0x000368, "Member 'UShopMenuDetailsCostume_C::CostumeMaster' has a wrong offset!");

}

