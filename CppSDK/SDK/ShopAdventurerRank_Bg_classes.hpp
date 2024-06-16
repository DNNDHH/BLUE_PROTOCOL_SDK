#pragma once

 

// Package: ShopAdventurerRank_Bg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopAdventurerRank_Bg.ShopAdventurerRank_Bg_C
// 0x0068 (0x0318 - 0x02B0)
class UShopAdventurerRank_Bg_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2_2;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Txt1Line;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimInFinished;                                  // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAnimOutFinished;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAnimInFinished__DelegateSignature();
	void OnAnimOutFinished__DelegateSignature();
	void ExecuteUbergraph_ShopAdventurerRank_Bg(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void Construct();
	void OnAnimTimer();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void PlayAnimIn();
	void PlayAnimOut();
	void RandomPlayAnimation();
	void RandomPlayAnimation2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopAdventurerRank_Bg_C">();
	}
	static class UShopAdventurerRank_Bg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopAdventurerRank_Bg_C>();
	}
};
static_assert(alignof(UShopAdventurerRank_Bg_C) == 0x000008, "Wrong alignment on UShopAdventurerRank_Bg_C");
static_assert(sizeof(UShopAdventurerRank_Bg_C) == 0x000318, "Wrong size on UShopAdventurerRank_Bg_C");
static_assert(offsetof(UShopAdventurerRank_Bg_C, UberGraphFrame) == 0x0002B0, "Member 'UShopAdventurerRank_Bg_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, AnimLight2) == 0x0002B8, "Member 'UShopAdventurerRank_Bg_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, AnimLight1) == 0x0002C0, "Member 'UShopAdventurerRank_Bg_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, AnimOut) == 0x0002C8, "Member 'UShopAdventurerRank_Bg_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, AnimIn) == 0x0002D0, "Member 'UShopAdventurerRank_Bg_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, Bg2) == 0x0002D8, "Member 'UShopAdventurerRank_Bg_C::Bg2' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, Bg2_2) == 0x0002E0, "Member 'UShopAdventurerRank_Bg_C::Bg2_2' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, LogoBG) == 0x0002E8, "Member 'UShopAdventurerRank_Bg_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, Txt1Line) == 0x0002F0, "Member 'UShopAdventurerRank_Bg_C::Txt1Line' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, OnAnimInFinished) == 0x0002F8, "Member 'UShopAdventurerRank_Bg_C::OnAnimInFinished' has a wrong offset!");
static_assert(offsetof(UShopAdventurerRank_Bg_C, OnAnimOutFinished) == 0x000308, "Member 'UShopAdventurerRank_Bg_C::OnAnimOutFinished' has a wrong offset!");

}

