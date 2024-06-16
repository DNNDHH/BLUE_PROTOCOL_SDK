#pragma once

 

// Package: CraftRecepiItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftRecepiItem.CraftRecepiItem_C
// 0x00A0 (0x0318 - 0x0278)
class UCraftRecepiItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasCraft;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusSmall_C*                       CmnBonusSmall;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CraftDifficulty;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Blocker;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_UnCrafted;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_WishlistRegisted;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_183;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_UnCrafted;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNum;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Select;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTimeLimitIcon_C*                       TimeLimitIcon;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Category;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  ItemRecepi;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsItem;                                            // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C6[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              RewardTooltip;                                     // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelect__DelegateSignature(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem);
	void ExecuteUbergraph_CraftRecepiItem(int32 EntryPoint);
	void Update_Wishlist();
	void OnUpdate_Boosst(class UObject* Sender, class UObject* Param);
	void Unbind_Boost();
	void Bind_Boost();
	void Construct_RecepiAttach();
	void Destruct_RecepiAttach();
	void OnChangeRecepi(int32 RecepiId);
	void UnbindItemChangeAmountDelegate_();
	void Destruct();
	void Bind_OnChangeAmount();
	void OnOwnItemUpdate(const struct FSBChangeItemAmountParam& InParam);
	void Set_Recepi(const struct FCharacterCraftRecepi& Param_ItemRecepi);
	void BndEvt__Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetBtnSelected(bool bSelected);
	void IsItemRecepi(bool* Param_IsItem);
	void UpdateBoost();
	void Bind_Wishlist_Update();
	void Unbind_Wishlist_Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftRecepiItem_C">();
	}
	static class UCraftRecepiItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftRecepiItem_C>();
	}
};
static_assert(alignof(UCraftRecepiItem_C) == 0x000008, "Wrong alignment on UCraftRecepiItem_C");
static_assert(sizeof(UCraftRecepiItem_C) == 0x000318, "Wrong size on UCraftRecepiItem_C");
static_assert(offsetof(UCraftRecepiItem_C, UberGraphFrame) == 0x000278, "Member 'UCraftRecepiItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, CanvasCraft) == 0x000280, "Member 'UCraftRecepiItem_C::CanvasCraft' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, CmnBonusSmall) == 0x000288, "Member 'UCraftRecepiItem_C::CmnBonusSmall' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, CommonIcon) == 0x000290, "Member 'UCraftRecepiItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, CraftDifficulty) == 0x000298, "Member 'UCraftRecepiItem_C::CraftDifficulty' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, Cvs_Blocker) == 0x0002A0, "Member 'UCraftRecepiItem_C::Cvs_Blocker' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, Cvs_UnCrafted) == 0x0002A8, "Member 'UCraftRecepiItem_C::Cvs_UnCrafted' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, Cvs_WishlistRegisted) == 0x0002B0, "Member 'UCraftRecepiItem_C::Cvs_WishlistRegisted' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, Image_183) == 0x0002B8, "Member 'UCraftRecepiItem_C::Image_183' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, Image_UnCrafted) == 0x0002C0, "Member 'UCraftRecepiItem_C::Image_UnCrafted' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, ItemName) == 0x0002C8, "Member 'UCraftRecepiItem_C::ItemName' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, ItemNum) == 0x0002D0, "Member 'UCraftRecepiItem_C::ItemNum' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, Select) == 0x0002D8, "Member 'UCraftRecepiItem_C::Select' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, TimeLimitIcon) == 0x0002E0, "Member 'UCraftRecepiItem_C::TimeLimitIcon' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, Txt_Category) == 0x0002E8, "Member 'UCraftRecepiItem_C::Txt_Category' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, ItemRecepi) == 0x0002F0, "Member 'UCraftRecepiItem_C::ItemRecepi' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, OnSelect) == 0x0002F8, "Member 'UCraftRecepiItem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, IsItem) == 0x000308, "Member 'UCraftRecepiItem_C::IsItem' has a wrong offset!");
static_assert(offsetof(UCraftRecepiItem_C, RewardTooltip) == 0x000310, "Member 'UCraftRecepiItem_C::RewardTooltip' has a wrong offset!");

}

