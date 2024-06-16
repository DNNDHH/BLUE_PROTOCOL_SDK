#pragma once

 

// Package: FlatShop_ProductItem_DescItemText

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C
// 0x0008 (0x0280 - 0x0278)
class UFlatShop_ProductItem_DescItemText_C final : public UUserWidget
{
public:
	class UTextBlock*                             Txt_Descript;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetProductInfo(bool Product);
	void SetDescription(const class FText& Desc);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlatShop_ProductItem_DescItemText_C">();
	}
	static class UFlatShop_ProductItem_DescItemText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlatShop_ProductItem_DescItemText_C>();
	}
};
static_assert(alignof(UFlatShop_ProductItem_DescItemText_C) == 0x000008, "Wrong alignment on UFlatShop_ProductItem_DescItemText_C");
static_assert(sizeof(UFlatShop_ProductItem_DescItemText_C) == 0x000280, "Wrong size on UFlatShop_ProductItem_DescItemText_C");
static_assert(offsetof(UFlatShop_ProductItem_DescItemText_C, Txt_Descript) == 0x000278, "Member 'UFlatShop_ProductItem_DescItemText_C::Txt_Descript' has a wrong offset!");

}

