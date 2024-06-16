#pragma once

 

// Package: ShopMenuDetailsJesture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsJesture.ShopMenuDetailsJesture_C
// 0x00D8 (0x0388 - 0x02B0)
class UShopMenuDetailsJesture_C final : public USBUserWidget
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
	uint8                                         Pad_79C1[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBEmoteMasterData                     EmoteData;                                         // 0x0320(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PlayerSceneCapture2D_Studio_C*      CaptureStudio;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBEmotionInfo                         EmotionInfo;                                       // 0x0350(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void ExecuteUbergraph_ShopMenuDetailsJesture(int32 EntryPoint);
	void Destruct();
	void OnEmoteFinished();
	void SetCaptureStudio(class ABP_PlayerSceneCapture2D_Studio_C* Param_CaptureStudio);
	void SetData(int32 ItemIndex);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsJesture_C">();
	}
	static class UShopMenuDetailsJesture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsJesture_C>();
	}
};
static_assert(alignof(UShopMenuDetailsJesture_C) == 0x000008, "Wrong alignment on UShopMenuDetailsJesture_C");
static_assert(sizeof(UShopMenuDetailsJesture_C) == 0x000388, "Wrong size on UShopMenuDetailsJesture_C");
static_assert(offsetof(UShopMenuDetailsJesture_C, UberGraphFrame) == 0x0002B0, "Member 'UShopMenuDetailsJesture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, AnimOut) == 0x0002B8, "Member 'UShopMenuDetailsJesture_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, AnimIn) == 0x0002C0, "Member 'UShopMenuDetailsJesture_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, BgDetails) == 0x0002C8, "Member 'UShopMenuDetailsJesture_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, ColorGrp1) == 0x0002D0, "Member 'UShopMenuDetailsJesture_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, ColorGrp2) == 0x0002D8, "Member 'UShopMenuDetailsJesture_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, Image_Stamp) == 0x0002E0, "Member 'UShopMenuDetailsJesture_C::Image_Stamp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, ImageTitleBG) == 0x0002E8, "Member 'UShopMenuDetailsJesture_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, NameParts) == 0x0002F0, "Member 'UShopMenuDetailsJesture_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, SBRuntimeTextBlock_113) == 0x0002F8, "Member 'UShopMenuDetailsJesture_C::SBRuntimeTextBlock_113' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, WBP_ShopMenuDetailsTags) == 0x000300, "Member 'UShopMenuDetailsJesture_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, InDesignType) == 0x000308, "Member 'UShopMenuDetailsJesture_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, OnEndCloseDetailAnimation) == 0x000310, "Member 'UShopMenuDetailsJesture_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, EmoteData) == 0x000320, "Member 'UShopMenuDetailsJesture_C::EmoteData' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, CaptureStudio) == 0x000348, "Member 'UShopMenuDetailsJesture_C::CaptureStudio' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsJesture_C, EmotionInfo) == 0x000350, "Member 'UShopMenuDetailsJesture_C::EmotionInfo' has a wrong offset!");

}

