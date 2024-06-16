#pragma once

 

// Package: PictureBook_MakeListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PictureBook_MakeListItem.PictureBook_MakeListItem_C
// 0x0080 (0x02F8 - 0x0278)
class UPictureBook_MakeListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconSimple_C*                    CommonIconSimple;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLimit;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LackAdvRank;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchName;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAmount;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAmount_1;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     WishlistCheck_RadioBtn;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnWishlist;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EItemType                                     ItemType;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_557B[0x3];                                     // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         RecepiId;                                          // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsSecret;                                          // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsLackAdvRank;                                     // 0x02F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnWishlist__DelegateSignature();
	void ExecuteUbergraph_PictureBook_MakeListItem(int32 EntryPoint);
	void Construct();
	void BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetName(const class FText& InText);
	void SetSecret(bool Param_IsSecret);
	void SetNew(bool IsRead, bool* IsAddRead);
	void SetWishlistBtnEnable(bool IsEnable);
	void CheckAdventurerRank(bool* Result);
	void SetTermId(const class FString& TermId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PictureBook_MakeListItem_C">();
	}
	static class UPictureBook_MakeListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureBook_MakeListItem_C>();
	}
};
static_assert(alignof(UPictureBook_MakeListItem_C) == 0x000008, "Wrong alignment on UPictureBook_MakeListItem_C");
static_assert(sizeof(UPictureBook_MakeListItem_C) == 0x0002F8, "Wrong size on UPictureBook_MakeListItem_C");
static_assert(offsetof(UPictureBook_MakeListItem_C, UberGraphFrame) == 0x000278, "Member 'UPictureBook_MakeListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, BG) == 0x000280, "Member 'UPictureBook_MakeListItem_C::BG' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, CommonIconSimple) == 0x000288, "Member 'UPictureBook_MakeListItem_C::CommonIconSimple' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, IconLimit) == 0x000290, "Member 'UPictureBook_MakeListItem_C::IconLimit' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, IconNew) == 0x000298, "Member 'UPictureBook_MakeListItem_C::IconNew' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, ItemName) == 0x0002A0, "Member 'UPictureBook_MakeListItem_C::ItemName' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, LackAdvRank) == 0x0002A8, "Member 'UPictureBook_MakeListItem_C::LackAdvRank' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, SwitchIcon) == 0x0002B0, "Member 'UPictureBook_MakeListItem_C::SwitchIcon' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, SwitchName) == 0x0002B8, "Member 'UPictureBook_MakeListItem_C::SwitchName' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, TxtAmount) == 0x0002C0, "Member 'UPictureBook_MakeListItem_C::TxtAmount' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, TxtAmount_1) == 0x0002C8, "Member 'UPictureBook_MakeListItem_C::TxtAmount_1' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, WishlistCheck_RadioBtn) == 0x0002D0, "Member 'UPictureBook_MakeListItem_C::WishlistCheck_RadioBtn' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, OnWishlist) == 0x0002D8, "Member 'UPictureBook_MakeListItem_C::OnWishlist' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, ItemType) == 0x0002E8, "Member 'UPictureBook_MakeListItem_C::ItemType' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, ItemIndex) == 0x0002EC, "Member 'UPictureBook_MakeListItem_C::ItemIndex' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, RecepiId) == 0x0002F0, "Member 'UPictureBook_MakeListItem_C::RecepiId' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, IsSecret) == 0x0002F4, "Member 'UPictureBook_MakeListItem_C::IsSecret' has a wrong offset!");
static_assert(offsetof(UPictureBook_MakeListItem_C, IsLackAdvRank) == 0x0002F5, "Member 'UPictureBook_MakeListItem_C::IsLackAdvRank' has a wrong offset!");

}

