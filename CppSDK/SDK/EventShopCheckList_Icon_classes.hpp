#pragma once

 

// Package: EventShopCheckList_Icon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopCheckList_Icon.EventShopCheckList_Icon_C
// 0x0020 (0x0298 - 0x0278)
class UEventShopCheckList_Icon_C final : public UUserWidget
{
public:
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BG;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NumCanvas;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSelectNum;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSelectNum(int32 Num);
	void SetRewardIcon(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, int32 InAmountMin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopCheckList_Icon_C">();
	}
	static class UEventShopCheckList_Icon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopCheckList_Icon_C>();
	}
};
static_assert(alignof(UEventShopCheckList_Icon_C) == 0x000008, "Wrong alignment on UEventShopCheckList_Icon_C");
static_assert(sizeof(UEventShopCheckList_Icon_C) == 0x000298, "Wrong size on UEventShopCheckList_Icon_C");
static_assert(offsetof(UEventShopCheckList_Icon_C, CommonIcon) == 0x000278, "Member 'UEventShopCheckList_Icon_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Icon_C, Img_BG) == 0x000280, "Member 'UEventShopCheckList_Icon_C::Img_BG' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Icon_C, NumCanvas) == 0x000288, "Member 'UEventShopCheckList_Icon_C::NumCanvas' has a wrong offset!");
static_assert(offsetof(UEventShopCheckList_Icon_C, TextSelectNum) == 0x000290, "Member 'UEventShopCheckList_Icon_C::TextSelectNum' has a wrong offset!");

}

