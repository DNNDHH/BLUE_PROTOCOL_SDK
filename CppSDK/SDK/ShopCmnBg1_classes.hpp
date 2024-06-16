#pragma once

 

// Package: ShopCmnBg1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ShopCmnBg_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopCmnBg1.ShopCmnBg1_C
// 0x00A8 (0x0358 - 0x02B0)
class UShopCmnBg1_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg2_2;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconShop;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineV03;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightBg;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TotalBg;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TotalLine;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Txt1Grp;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Txt1Line;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TxtTitle;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_ShopCmnBg                                   ShopType;                                          // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B6A[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAnimInFinished;                                  // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAnimOutFinished;                                 // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAnimInFinished__DelegateSignature();
	void OnAnimOutFinished__DelegateSignature();
	void ExecuteUbergraph_ShopCmnBg1(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void Construct();
	void OnAnimTimer();
	void PreConstruct(bool IsDesignTime);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void PlayAnimIn();
	void PlayAnimOut();
	void RandomPlayAnimation();
	void RandomPlayAnimation2();
	void Set_Shop_Type(E_ShopCmnBg ShopBgType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopCmnBg1_C">();
	}
	static class UShopCmnBg1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopCmnBg1_C>();
	}
};
static_assert(alignof(UShopCmnBg1_C) == 0x000008, "Wrong alignment on UShopCmnBg1_C");
static_assert(sizeof(UShopCmnBg1_C) == 0x000358, "Wrong size on UShopCmnBg1_C");
static_assert(offsetof(UShopCmnBg1_C, UberGraphFrame) == 0x0002B0, "Member 'UShopCmnBg1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, AnimLight2) == 0x0002B8, "Member 'UShopCmnBg1_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, AnimLight1) == 0x0002C0, "Member 'UShopCmnBg1_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, AnimOut) == 0x0002C8, "Member 'UShopCmnBg1_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, AnimIn) == 0x0002D0, "Member 'UShopCmnBg1_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, Bg2_2) == 0x0002D8, "Member 'UShopCmnBg1_C::Bg2_2' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, IconShop) == 0x0002E0, "Member 'UShopCmnBg1_C::IconShop' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, LineV03) == 0x0002E8, "Member 'UShopCmnBg1_C::LineV03' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, LogoBG) == 0x0002F0, "Member 'UShopCmnBg1_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, RightBg) == 0x0002F8, "Member 'UShopCmnBg1_C::RightBg' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, TotalBg) == 0x000300, "Member 'UShopCmnBg1_C::TotalBg' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, TotalLine) == 0x000308, "Member 'UShopCmnBg1_C::TotalLine' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, Txt1) == 0x000310, "Member 'UShopCmnBg1_C::Txt1' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, Txt1Grp) == 0x000318, "Member 'UShopCmnBg1_C::Txt1Grp' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, Txt1Line) == 0x000320, "Member 'UShopCmnBg1_C::Txt1Line' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, TxtTitle) == 0x000328, "Member 'UShopCmnBg1_C::TxtTitle' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, ShopType) == 0x000330, "Member 'UShopCmnBg1_C::ShopType' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, OnAnimInFinished) == 0x000338, "Member 'UShopCmnBg1_C::OnAnimInFinished' has a wrong offset!");
static_assert(offsetof(UShopCmnBg1_C, OnAnimOutFinished) == 0x000348, "Member 'UShopCmnBg1_C::OnAnimOutFinished' has a wrong offset!");

}

