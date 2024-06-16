#pragma once

 

// Package: EventShopProductBox_Label

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopProductBox_Label.EventShopProductBox_Label_C
// 0x0020 (0x02D0 - 0x02B0)
class UEventShopProductBox_Label_C final : public USBUserWidget
{
public:
	class UWidgetSwitcher*                        BGSwitch;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ItemName;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBtnSelected;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnBtnSelected__DelegateSignature(class UEventShopProductBox_Item_C* Item);
	void SetLabel(bool IsPickUp, const class FString& LabelText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopProductBox_Label_C">();
	}
	static class UEventShopProductBox_Label_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopProductBox_Label_C>();
	}
};
static_assert(alignof(UEventShopProductBox_Label_C) == 0x000008, "Wrong alignment on UEventShopProductBox_Label_C");
static_assert(sizeof(UEventShopProductBox_Label_C) == 0x0002D0, "Wrong size on UEventShopProductBox_Label_C");
static_assert(offsetof(UEventShopProductBox_Label_C, BGSwitch) == 0x0002B0, "Member 'UEventShopProductBox_Label_C::BGSwitch' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Label_C, Txt_ItemName) == 0x0002B8, "Member 'UEventShopProductBox_Label_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Label_C, OnBtnSelected) == 0x0002C0, "Member 'UEventShopProductBox_Label_C::OnBtnSelected' has a wrong offset!");

}

