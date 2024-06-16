#pragma once

 

// Package: RmShopMenuBg

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RmShopMenuBg.RmShopMenuBg_C
// 0x0020 (0x0298 - 0x0278)
class URmShopMenuBg_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       AnimBgInOut;                                       // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg_Next;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_Prev;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             LastSelectedMenu;                                  // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ShowBg(ESBRmShopMenuType InMenuType);
	void SetBgImg(ESBRmShopMenuType InMenuType, class UImage* InImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RmShopMenuBg_C">();
	}
	static class URmShopMenuBg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URmShopMenuBg_C>();
	}
};
static_assert(alignof(URmShopMenuBg_C) == 0x000008, "Wrong alignment on URmShopMenuBg_C");
static_assert(sizeof(URmShopMenuBg_C) == 0x000298, "Wrong size on URmShopMenuBg_C");
static_assert(offsetof(URmShopMenuBg_C, AnimBgInOut) == 0x000278, "Member 'URmShopMenuBg_C::AnimBgInOut' has a wrong offset!");
static_assert(offsetof(URmShopMenuBg_C, Bg_Next) == 0x000280, "Member 'URmShopMenuBg_C::Bg_Next' has a wrong offset!");
static_assert(offsetof(URmShopMenuBg_C, Bg_Prev) == 0x000288, "Member 'URmShopMenuBg_C::Bg_Prev' has a wrong offset!");
static_assert(offsetof(URmShopMenuBg_C, LastSelectedMenu) == 0x000290, "Member 'URmShopMenuBg_C::LastSelectedMenu' has a wrong offset!");

}

