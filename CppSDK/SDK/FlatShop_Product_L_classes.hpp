#pragma once

 

// Package: FlatShop_Product_L

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FlatShop_Product_L.FlatShop_Product_L_C
// 0x0080 (0x02F8 - 0x0278)
class UFlatShop_Product_L_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Item;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Data_Price;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Data_PurchaseNum;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Data_Quantity;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Item;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Limited;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Deadline;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Deadline;                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Description;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ProductName;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_Soldout;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedIndex;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBRmShopMenuType                             ShopType;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6172[0x3];                                     // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ProductListIndex;                                  // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Flag;                                              // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickedIndex__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_FlatShop_Product_L(int32 EntryPoint);
	void LoadTexture(TSoftObjectPtr<class UTexture2D> Texture);
	void DownLoadImage_Event(const class FString& URL);
	void BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetProductData_RoPS_Event(const struct FSBRoseOrbShopItemMasterData& ProductData, int32 Param_Index);
	void OnLoaded_C1943EA54AEEFAC24C82819C900D7109(class UObject* Loaded);
	void OnSuccess_0A62FBD840A02077625644ABD1C58C54(class UTexture2DDynamic* Texture);
	void OnFail_0A62FBD840A02077625644ABD1C58C54(class UTexture2DDynamic* Texture);
	void SetText_LimitDate(const struct FDateTime& LimitDate);
	void SetFlag_RoPS(const class FString& Param_Flags);
	void SetProductThumbnail(const class FString& URL, TSoftObjectPtr<class UTexture2D> Path);
	void Get_Thumbnail_Texture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture);
	void SetRibbon(int32 Param_Flag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlatShop_Product_L_C">();
	}
	static class UFlatShop_Product_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlatShop_Product_L_C>();
	}
};
static_assert(alignof(UFlatShop_Product_L_C) == 0x000008, "Wrong alignment on UFlatShop_Product_L_C");
static_assert(sizeof(UFlatShop_Product_L_C) == 0x0002F8, "Wrong size on UFlatShop_Product_L_C");
static_assert(offsetof(UFlatShop_Product_L_C, UberGraphFrame) == 0x000278, "Member 'UFlatShop_Product_L_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Btn_Item) == 0x000280, "Member 'UFlatShop_Product_L_C::Btn_Item' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Data_Price) == 0x000288, "Member 'UFlatShop_Product_L_C::Data_Price' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Data_PurchaseNum) == 0x000290, "Member 'UFlatShop_Product_L_C::Data_PurchaseNum' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Data_Quantity) == 0x000298, "Member 'UFlatShop_Product_L_C::Data_Quantity' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Icon_Item) == 0x0002A0, "Member 'UFlatShop_Product_L_C::Icon_Item' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Icon_Limited) == 0x0002A8, "Member 'UFlatShop_Product_L_C::Icon_Limited' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Label_Deadline) == 0x0002B0, "Member 'UFlatShop_Product_L_C::Label_Deadline' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, SBDateTimeTextBlock_Deadline) == 0x0002B8, "Member 'UFlatShop_Product_L_C::SBDateTimeTextBlock_Deadline' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Txt_Description) == 0x0002C0, "Member 'UFlatShop_Product_L_C::Txt_Description' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Txt_ProductName) == 0x0002C8, "Member 'UFlatShop_Product_L_C::Txt_ProductName' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Txt_Soldout) == 0x0002D0, "Member 'UFlatShop_Product_L_C::Txt_Soldout' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, OnClickedIndex) == 0x0002D8, "Member 'UFlatShop_Product_L_C::OnClickedIndex' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, ShopType) == 0x0002E8, "Member 'UFlatShop_Product_L_C::ShopType' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, ProductListIndex) == 0x0002EC, "Member 'UFlatShop_Product_L_C::ProductListIndex' has a wrong offset!");
static_assert(offsetof(UFlatShop_Product_L_C, Flag) == 0x0002F0, "Member 'UFlatShop_Product_L_C::Flag' has a wrong offset!");

}

