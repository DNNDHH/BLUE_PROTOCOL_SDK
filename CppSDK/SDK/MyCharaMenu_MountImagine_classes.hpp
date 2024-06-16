#pragma once

 

// Package: MyCharaMenu_MountImagine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_MountImagine.MyCharaMenu_MountImagine_C
// 0x0078 (0x0328 - 0x02B0)
class UMyCharaMenu_MountImagine_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BlankIcon;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnMountImagine;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsExpiryDateTime_C*   ExpiryDateTime;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_320;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIcon;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MountImagine_Profile;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Round_frame;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_NoEquip;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BtnMountImagineClicked;                            // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BtnMountImagineClicked__DelegateSignature();
	void ExecuteUbergraph_MyCharaMenu_MountImagine(int32 EntryPoint);
	void BndEvt__BlankIcon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ItemIcon_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem);
	void BndEvt__BtnWeaponChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Setup(const class FString& InUniqueId);
	void GetInventoryMountImagine(const class FString& InUniqueId, bool* OutEnabled, struct FSBCharacterMountImagineData* OutMountImagineData, bool* OutIsUsed);
	void CreateInventoryData(const struct FSBCharacterMountImagineData& InMountImagine, struct FInventoryItemData* OutInventryItemData, bool* OutIsEnable);
	void SetIsImagineUsed(bool InIsUsed);
	void SetImagineUsedIconVisibility(bool InIsVisible);
	void SetExpiryDateTimeVisibility(bool InIsVisible);
	void SetItemIconVisibility(bool InIsVisible);
	void SetIMountImagineProfileVisibility(bool InIsVisible);
	void SetBlankIconVisibility(bool InIsVisible);
	void SetNoEquipVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_MountImagine_C">();
	}
	static class UMyCharaMenu_MountImagine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_MountImagine_C>();
	}
};
static_assert(alignof(UMyCharaMenu_MountImagine_C) == 0x000008, "Wrong alignment on UMyCharaMenu_MountImagine_C");
static_assert(sizeof(UMyCharaMenu_MountImagine_C) == 0x000328, "Wrong size on UMyCharaMenu_MountImagine_C");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_MountImagine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, Arrow) == 0x0002B8, "Member 'UMyCharaMenu_MountImagine_C::Arrow' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, BlankIcon) == 0x0002C0, "Member 'UMyCharaMenu_MountImagine_C::BlankIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, BtnMountImagine) == 0x0002C8, "Member 'UMyCharaMenu_MountImagine_C::BtnMountImagine' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, ExpiryDateTime) == 0x0002D0, "Member 'UMyCharaMenu_MountImagine_C::ExpiryDateTime' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, Image_320) == 0x0002D8, "Member 'UMyCharaMenu_MountImagine_C::Image_320' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, InventoryUsed) == 0x0002E0, "Member 'UMyCharaMenu_MountImagine_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, ItemIcon) == 0x0002E8, "Member 'UMyCharaMenu_MountImagine_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, MountImagine_Profile) == 0x0002F0, "Member 'UMyCharaMenu_MountImagine_C::MountImagine_Profile' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, Round_frame) == 0x0002F8, "Member 'UMyCharaMenu_MountImagine_C::Round_frame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, SB_NoEquip) == 0x000300, "Member 'UMyCharaMenu_MountImagine_C::SB_NoEquip' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, SBRuntimeTextBlock_Header) == 0x000308, "Member 'UMyCharaMenu_MountImagine_C::SBRuntimeTextBlock_Header' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, TxtName) == 0x000310, "Member 'UMyCharaMenu_MountImagine_C::TxtName' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagine_C, BtnMountImagineClicked) == 0x000318, "Member 'UMyCharaMenu_MountImagine_C::BtnMountImagineClicked' has a wrong offset!");

}

