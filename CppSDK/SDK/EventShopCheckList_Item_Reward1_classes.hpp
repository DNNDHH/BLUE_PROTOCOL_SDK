#pragma once

 

// Package: EventShopCheckList_Item_Reward1

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopCheckList_Item_Reward1.EventShopCheckList_Item_Reward1_C
// 0x0020 (0x0298 - 0x0278)
class UEventShopCheckList_Item_Reward1_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           Box_Excess;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ItemName;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Num_Exchange;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Num_Prossession;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetItemInfo(const class FString& ItemName, int32 NumExchange, int32 NumHave, int32 NumLimit);
	void SetIconOver(bool IsOver);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopCheckList_Item_Reward1_C">();
	}
	static class UEventShopCheckList_Item_Reward1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopCheckList_Item_Reward1_C>();
	}
};
static_assert(alignof(UEventShopCheckList_Item_Reward1_C) == 0x000008, "Wrong alignment on UEventShopCheckList_Item_Reward1_C");
static_assert(sizeof(UEventShopCheckList_Item_Reward1_C) == 0x000298, "Wrong size on UEventShopCheckList_Item_Reward1_C");
static_assert(offsetof(UEventShopCheckList_Item_Reward1_C, Box_Excess) == 0x000278, "Member 'UEventShopCheckList_Item_Reward1_C::Box_Excess' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_Reward1_C, Txt_ItemName) == 0x000280, "Member 'UEventShopCheckList_Item_Reward1_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_Reward1_C, Txt_Num_Exchange) == 0x000288, "Member 'UEventShopCheckList_Item_Reward1_C::Txt_Num_Exchange' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Item_Reward1_C, Txt_Num_Prossession) == 0x000290, "Member 'UEventShopCheckList_Item_Reward1_C::Txt_Num_Prossession' has a wrong offset!");

}

