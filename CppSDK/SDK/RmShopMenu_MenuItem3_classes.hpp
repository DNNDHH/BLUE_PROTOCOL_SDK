#pragma once

 

// Package: RmShopMenu_MenuItem3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C
// 0x0038 (0x02B0 - 0x0278)
class URmShopMenu_MenuItem3_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_ShopNews;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         InTextID;                                          // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InTextName;                                        // 0x02A4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_RmShopMenu_MenuItem3(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RmShopMenu_MenuItem3_C">();
	}
	static class URmShopMenu_MenuItem3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URmShopMenu_MenuItem3_C>();
	}
};
static_assert(alignof(URmShopMenu_MenuItem3_C) == 0x000008, "Wrong alignment on URmShopMenu_MenuItem3_C");
static_assert(sizeof(URmShopMenu_MenuItem3_C) == 0x0002B0, "Wrong size on URmShopMenu_MenuItem3_C");
static_assert(offsetof(URmShopMenu_MenuItem3_C, UberGraphFrame) == 0x000278, "Member 'URmShopMenu_MenuItem3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem3_C, Btn_ShopNews) == 0x000280, "Member 'URmShopMenu_MenuItem3_C::Btn_ShopNews' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem3_C, Txt1) == 0x000288, "Member 'URmShopMenu_MenuItem3_C::Txt1' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem3_C, EventOnClicked) == 0x000290, "Member 'URmShopMenu_MenuItem3_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem3_C, InTextID) == 0x0002A0, "Member 'URmShopMenu_MenuItem3_C::InTextID' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem3_C, InTextName) == 0x0002A4, "Member 'URmShopMenu_MenuItem3_C::InTextName' has a wrong offset!");

}

