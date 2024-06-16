#pragma once

 

// Package: RmShopMenu_MenuItem2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C
// 0x0040 (0x02B8 - 0x0278)
class URmShopMenu_MenuItem2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Caution;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         InTextID;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InTextName;                                        // 0x02AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_RmShopMenu_MenuItem2(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetCaution(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RmShopMenu_MenuItem2_C">();
	}
	static class URmShopMenu_MenuItem2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URmShopMenu_MenuItem2_C>();
	}
};
static_assert(alignof(URmShopMenu_MenuItem2_C) == 0x000008, "Wrong alignment on URmShopMenu_MenuItem2_C");
static_assert(sizeof(URmShopMenu_MenuItem2_C) == 0x0002B8, "Wrong size on URmShopMenu_MenuItem2_C");
static_assert(offsetof(URmShopMenu_MenuItem2_C, UberGraphFrame) == 0x000278, "Member 'URmShopMenu_MenuItem2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem2_C, Btn1) == 0x000280, "Member 'URmShopMenu_MenuItem2_C::Btn1' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem2_C, Img_Caution) == 0x000288, "Member 'URmShopMenu_MenuItem2_C::Img_Caution' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem2_C, Txt1) == 0x000290, "Member 'URmShopMenu_MenuItem2_C::Txt1' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem2_C, EventOnClicked) == 0x000298, "Member 'URmShopMenu_MenuItem2_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem2_C, InTextID) == 0x0002A8, "Member 'URmShopMenu_MenuItem2_C::InTextID' has a wrong offset!");
static_assert(offsetof(URmShopMenu_MenuItem2_C, InTextName) == 0x0002AC, "Member 'URmShopMenu_MenuItem2_C::InTextName' has a wrong offset!");

}

