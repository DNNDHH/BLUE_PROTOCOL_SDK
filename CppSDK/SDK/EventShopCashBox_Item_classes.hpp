#pragma once

 

// Package: EventShopCashBox_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopCashBox_Item.EventShopCashBox_Item_C
// 0x0018 (0x02C8 - 0x02B0)
class UEventShopCashBox_Item_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Label_Amount;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Token_Icon;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventShopCashBox_Item(int32 EntryPoint);
	void LoadTexture(int32 TokenID);
	void OnLoaded_2719BDBD41C64E94F07F12919BE767BE(class UObject* Loaded);
	void OnLoaded_32A5081B4EB2444CBED5089FF650625A(class UObject* Loaded);
	void SetAmount(int32 Amount, bool IsOver);
	void SetIcon(int32 TokenID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopCashBox_Item_C">();
	}
	static class UEventShopCashBox_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopCashBox_Item_C>();
	}
};
static_assert(alignof(UEventShopCashBox_Item_C) == 0x000008, "Wrong alignment on UEventShopCashBox_Item_C");
static_assert(sizeof(UEventShopCashBox_Item_C) == 0x0002C8, "Wrong size on UEventShopCashBox_Item_C");
static_assert(offsetof(UEventShopCashBox_Item_C, UberGraphFrame) == 0x0002B0, "Member 'UEventShopCashBox_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_Item_C, Label_Amount) == 0x0002B8, "Member 'UEventShopCashBox_Item_C::Label_Amount' has a wrong offset!");
static_assert(offsetof(UEventShopCashBox_Item_C, Token_Icon) == 0x0002C0, "Member 'UEventShopCashBox_Item_C::Token_Icon' has a wrong offset!");

}

