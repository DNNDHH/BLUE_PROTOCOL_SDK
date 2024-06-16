#pragma once

 

// Package: PictureBook_CraftRecipeItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C
// 0x0060 (0x02D8 - 0x0278)
class UPictureBook_CraftRecipeItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemDropInfo_C*                        ItemDropInfo;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNum;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Num_Inventory;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TermIcon;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WidthGrp;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCraftNeedItems                        NeedItem;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                          bIsCraftable;                                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DA6[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TermId;                                            // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsExpired;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PictureBook_CraftRecipeItem(int32 EntryPoint);
	void Construct();
	void Destruct();
	void UnbindItemChangeAmountDelegate();
	void OnOwnItemChangeDelegate(const struct FSBChangeItemAmountParam& InParam);
	void GetItemName(int32 ItemIdx, class FText* OutIsItemNameText);
	void GetInventoryItemAmount(int32 ItemIdx, int32* OutIsAmount);
	void GetStorageItemAmount(int32 ItemIdx, int32* OutIsAmount);
	void IsCraftable(bool* Craftable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PictureBook_CraftRecipeItem_C">();
	}
	static class UPictureBook_CraftRecipeItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureBook_CraftRecipeItem_C>();
	}
};
static_assert(alignof(UPictureBook_CraftRecipeItem_C) == 0x000008, "Wrong alignment on UPictureBook_CraftRecipeItem_C");
static_assert(sizeof(UPictureBook_CraftRecipeItem_C) == 0x0002D8, "Wrong size on UPictureBook_CraftRecipeItem_C");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, UberGraphFrame) == 0x000278, "Member 'UPictureBook_CraftRecipeItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, ItemDropInfo) == 0x000280, "Member 'UPictureBook_CraftRecipeItem_C::ItemDropInfo' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, ItemName) == 0x000288, "Member 'UPictureBook_CraftRecipeItem_C::ItemName' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, ItemNum) == 0x000290, "Member 'UPictureBook_CraftRecipeItem_C::ItemNum' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, Num_Inventory) == 0x000298, "Member 'UPictureBook_CraftRecipeItem_C::Num_Inventory' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, TermIcon) == 0x0002A0, "Member 'UPictureBook_CraftRecipeItem_C::TermIcon' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, WidthGrp) == 0x0002A8, "Member 'UPictureBook_CraftRecipeItem_C::WidthGrp' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, NeedItem) == 0x0002B0, "Member 'UPictureBook_CraftRecipeItem_C::NeedItem' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, bIsCraftable) == 0x0002B8, "Member 'UPictureBook_CraftRecipeItem_C::bIsCraftable' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, TermId) == 0x0002C0, "Member 'UPictureBook_CraftRecipeItem_C::TermId' has a wrong offset!");
static_assert(offsetof(UPictureBook_CraftRecipeItem_C, IsExpired) == 0x0002D0, "Member 'UPictureBook_CraftRecipeItem_C::IsExpired' has a wrong offset!");

}

