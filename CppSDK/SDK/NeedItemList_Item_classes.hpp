#pragma once

 

// Package: NeedItemList_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NeedItemList_Item.NeedItemList_Item_C
// 0x0050 (0x02C8 - 0x0278)
class UNeedItemList_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Lock;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDropInfo_C*                        ItemDropInfo;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNum;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Num_Inventory;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTimeLimitIcon_C*                       TimeLimitIcon;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WidthGrp;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCraftNeedItems                        NeedItem;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                          bIsCraftable;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6777[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TotalWidth;                                        // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NeedItemList_Item(int32 EntryPoint);
	void Destruct();
	void UnbindItemChangeAmountDelegate();
	void OnOwnItemChangeDelegate(const struct FSBChangeItemAmountParam& InParam);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GetItemName(int32 ItemIdx, class FText* OutIsItemNameText);
	void GetInventoryItemAmount(int32 ItemIdx, int32* OutIsAmount);
	void GetStorageItemAmount(int32 ItemIdx, int32* OutIsAmount);
	void IsCraftable(bool* Craftable);
	void InitWidthSize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NeedItemList_Item_C">();
	}
	static class UNeedItemList_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeedItemList_Item_C>();
	}
};
static_assert(alignof(UNeedItemList_Item_C) == 0x000008, "Wrong alignment on UNeedItemList_Item_C");
static_assert(sizeof(UNeedItemList_Item_C) == 0x0002C8, "Wrong size on UNeedItemList_Item_C");
static_assert(offsetof(UNeedItemList_Item_C, UberGraphFrame) == 0x000278, "Member 'UNeedItemList_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, Img_Lock) == 0x000280, "Member 'UNeedItemList_Item_C::Img_Lock' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, ItemDropInfo) == 0x000288, "Member 'UNeedItemList_Item_C::ItemDropInfo' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, ItemName) == 0x000290, "Member 'UNeedItemList_Item_C::ItemName' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, ItemNum) == 0x000298, "Member 'UNeedItemList_Item_C::ItemNum' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, Num_Inventory) == 0x0002A0, "Member 'UNeedItemList_Item_C::Num_Inventory' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, TimeLimitIcon) == 0x0002A8, "Member 'UNeedItemList_Item_C::TimeLimitIcon' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, WidthGrp) == 0x0002B0, "Member 'UNeedItemList_Item_C::WidthGrp' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, NeedItem) == 0x0002B8, "Member 'UNeedItemList_Item_C::NeedItem' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, bIsCraftable) == 0x0002C0, "Member 'UNeedItemList_Item_C::bIsCraftable' has a wrong offset!");
static_assert(offsetof(UNeedItemList_Item_C, TotalWidth) == 0x0002C4, "Member 'UNeedItemList_Item_C::TotalWidth' has a wrong offset!");

}

