#pragma once

 

// Package: AestheShop_CategoryIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "E_AestheShop_TopMenuItems_DetailSettings_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AestheShop_CategoryIcon.AestheShop_CategoryIcon_C
// 0x0008 (0x0280 - 0x0278)
class UAestheShop_CategoryIcon_C final : public UUserWidget
{
public:
	class UImage*                                 IconImage;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetIcon(E_AestheShop_TopMenuItems_DetailSettings InDetailSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AestheShop_CategoryIcon_C">();
	}
	static class UAestheShop_CategoryIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAestheShop_CategoryIcon_C>();
	}
};
static_assert(alignof(UAestheShop_CategoryIcon_C) == 0x000008, "Wrong alignment on UAestheShop_CategoryIcon_C");
static_assert(sizeof(UAestheShop_CategoryIcon_C) == 0x000280, "Wrong size on UAestheShop_CategoryIcon_C");
static_assert(offsetof(UAestheShop_CategoryIcon_C, IconImage) == 0x000278, "Member 'UAestheShop_CategoryIcon_C::IconImage' has a wrong offset!");

}

