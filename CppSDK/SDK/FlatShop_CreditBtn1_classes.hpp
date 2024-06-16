#pragma once

 

// Package: FlatShop_CreditBtn1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FlatShop_CreditBtn1.FlatShop_CreditBtn1_C
// 0x0068 (0x02E0 - 0x0278)
class UFlatShop_CreditBtn1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FlashingAnimation;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorSetGrp;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glow_S;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Plus;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventBtnClicked;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      InTextTable;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Play;                                           // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9492[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InTextName;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventBtnClicked__DelegateSignature();
	void ExecuteUbergraph_FlatShop_CreditBtn1(int32 EntryPoint);
	void BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void PlayFlashing(bool IsPlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlatShop_CreditBtn1_C">();
	}
	static class UFlatShop_CreditBtn1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlatShop_CreditBtn1_C>();
	}
};
static_assert(alignof(UFlatShop_CreditBtn1_C) == 0x000008, "Wrong alignment on UFlatShop_CreditBtn1_C");
static_assert(sizeof(UFlatShop_CreditBtn1_C) == 0x0002E0, "Wrong size on UFlatShop_CreditBtn1_C");
static_assert(offsetof(UFlatShop_CreditBtn1_C, UberGraphFrame) == 0x000278, "Member 'UFlatShop_CreditBtn1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, FlashingAnimation) == 0x000280, "Member 'UFlatShop_CreditBtn1_C::FlashingAnimation' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, Btn1) == 0x000288, "Member 'UFlatShop_CreditBtn1_C::Btn1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, ColorSetGrp) == 0x000290, "Member 'UFlatShop_CreditBtn1_C::ColorSetGrp' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, Image_Glow) == 0x000298, "Member 'UFlatShop_CreditBtn1_C::Image_Glow' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, Image_Glow_S) == 0x0002A0, "Member 'UFlatShop_CreditBtn1_C::Image_Glow_S' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, Plus) == 0x0002A8, "Member 'UFlatShop_CreditBtn1_C::Plus' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, Txt1) == 0x0002B0, "Member 'UFlatShop_CreditBtn1_C::Txt1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, EventBtnClicked) == 0x0002B8, "Member 'UFlatShop_CreditBtn1_C::EventBtnClicked' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, InTextTable) == 0x0002C8, "Member 'UFlatShop_CreditBtn1_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, InTextID) == 0x0002D0, "Member 'UFlatShop_CreditBtn1_C::InTextID' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, Is_Play) == 0x0002D4, "Member 'UFlatShop_CreditBtn1_C::Is_Play' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditBtn1_C, InTextName) == 0x0002D8, "Member 'UFlatShop_CreditBtn1_C::InTextName' has a wrong offset!");

}

