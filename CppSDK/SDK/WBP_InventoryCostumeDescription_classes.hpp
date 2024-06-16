#pragma once

 

// Package: WBP_InventoryCostumeDescription

#include "Basic.hpp"

#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C
// 0x0358 (0x05D0 - 0x0278)
class UWBP_InventoryCostumeDescription_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnBg;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnEquip;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Inventory;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Storage;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock2;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnMove;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnSale;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash2;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Color;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnColorBadge_C*                       ColorBadge;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Colorus;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescriptionGrp;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_295;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg1;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MannequinModel;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MannequinModel_1;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MannequinModel_2;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryLimitGrp_C*                   InventoryLimitGrp;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagSale;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Looks;                                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LooksType;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Parts;                                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PartsList;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFooter;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMode;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLineImage;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsInventory;                                      // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStorageMode;                                      // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73ED[0x6];                                     // 0x03B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     InventoryItemData;                                 // 0x03B8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0418(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBMasterCostume                       CostumeMaster;                                     // 0x0530(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bBagStorageViewMode;                               // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73EE[0x7];                                     // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        TempPartsData;                                     // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            TempProtectorCategory;                             // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType);
	void ExecuteUbergraph_WBP_InventoryCostumeDescription(int32 EntryPoint);
	void SetColorImage(class UObject* Target);
	void BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetItem(struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode, bool Param_bBagStorageViewMode);
	void RefleshButtonAction();
	void SetModelCaptureImageVisibility(bool InIsVisible);
	void SetSwitcher(int32 Param_Index);
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryCostumeDescription_C">();
	}
	static class UWBP_InventoryCostumeDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryCostumeDescription_C>();
	}
};
static_assert(alignof(UWBP_InventoryCostumeDescription_C) == 0x000008, "Wrong alignment on UWBP_InventoryCostumeDescription_C");
static_assert(sizeof(UWBP_InventoryCostumeDescription_C) == 0x0005D0, "Wrong size on UWBP_InventoryCostumeDescription_C");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryCostumeDescription_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnBg) == 0x000280, "Member 'UWBP_InventoryCostumeDescription_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnEquip) == 0x000288, "Member 'UWBP_InventoryCostumeDescription_C::BtnEquip' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnGrp_Inventory) == 0x000290, "Member 'UWBP_InventoryCostumeDescription_C::BtnGrp_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnGrp_Storage) == 0x000298, "Member 'UWBP_InventoryCostumeDescription_C::BtnGrp_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnLock) == 0x0002A0, "Member 'UWBP_InventoryCostumeDescription_C::BtnLock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnLock2) == 0x0002A8, "Member 'UWBP_InventoryCostumeDescription_C::BtnLock2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnMove) == 0x0002B0, "Member 'UWBP_InventoryCostumeDescription_C::BtnMove' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnSale) == 0x0002B8, "Member 'UWBP_InventoryCostumeDescription_C::BtnSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnTrash) == 0x0002C0, "Member 'UWBP_InventoryCostumeDescription_C::BtnTrash' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, BtnTrash2) == 0x0002C8, "Member 'UWBP_InventoryCostumeDescription_C::BtnTrash2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, CmnIcon_KeyItem) == 0x0002D0, "Member 'UWBP_InventoryCostumeDescription_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, CmnOperationRotate) == 0x0002D8, "Member 'UWBP_InventoryCostumeDescription_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Color) == 0x0002E0, "Member 'UWBP_InventoryCostumeDescription_C::Color' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, ColorBadge) == 0x0002E8, "Member 'UWBP_InventoryCostumeDescription_C::ColorBadge' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Colorus) == 0x0002F0, "Member 'UWBP_InventoryCostumeDescription_C::Colorus' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, DescriptionGrp) == 0x0002F8, "Member 'UWBP_InventoryCostumeDescription_C::DescriptionGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Image) == 0x000300, "Member 'UWBP_InventoryCostumeDescription_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Image_295) == 0x000308, "Member 'UWBP_InventoryCostumeDescription_C::Image_295' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Image_Bg1) == 0x000310, "Member 'UWBP_InventoryCostumeDescription_C::Image_Bg1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Image_LockIcon) == 0x000318, "Member 'UWBP_InventoryCostumeDescription_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Img_MannequinModel) == 0x000320, "Member 'UWBP_InventoryCostumeDescription_C::Img_MannequinModel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Img_MannequinModel_1) == 0x000328, "Member 'UWBP_InventoryCostumeDescription_C::Img_MannequinModel_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Img_MannequinModel_2) == 0x000330, "Member 'UWBP_InventoryCostumeDescription_C::Img_MannequinModel_2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, InventoryLimitGrp) == 0x000338, "Member 'UWBP_InventoryCostumeDescription_C::InventoryLimitGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, InventoryTagBPP) == 0x000340, "Member 'UWBP_InventoryCostumeDescription_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, InventoryTagSale) == 0x000348, "Member 'UWBP_InventoryCostumeDescription_C::InventoryTagSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, InventoryUsed) == 0x000350, "Member 'UWBP_InventoryCostumeDescription_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, ItemName) == 0x000358, "Member 'UWBP_InventoryCostumeDescription_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Looks) == 0x000360, "Member 'UWBP_InventoryCostumeDescription_C::Looks' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, LooksType) == 0x000368, "Member 'UWBP_InventoryCostumeDescription_C::LooksType' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, Parts) == 0x000370, "Member 'UWBP_InventoryCostumeDescription_C::Parts' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, PartsList) == 0x000378, "Member 'UWBP_InventoryCostumeDescription_C::PartsList' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, SwitchFooter) == 0x000380, "Member 'UWBP_InventoryCostumeDescription_C::SwitchFooter' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, SwitchMode) == 0x000388, "Member 'UWBP_InventoryCostumeDescription_C::SwitchMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, TxtDesc) == 0x000390, "Member 'UWBP_InventoryCostumeDescription_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, VLineImage) == 0x000398, "Member 'UWBP_InventoryCostumeDescription_C::VLineImage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, OnButtonClicked) == 0x0003A0, "Member 'UWBP_InventoryCostumeDescription_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, bIsInventory) == 0x0003B0, "Member 'UWBP_InventoryCostumeDescription_C::bIsInventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, bStorageMode) == 0x0003B1, "Member 'UWBP_InventoryCostumeDescription_C::bStorageMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, InventoryItemData) == 0x0003B8, "Member 'UWBP_InventoryCostumeDescription_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, OwnItemInfo) == 0x000418, "Member 'UWBP_InventoryCostumeDescription_C::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, CostumeMaster) == 0x000530, "Member 'UWBP_InventoryCostumeDescription_C::CostumeMaster' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, bBagStorageViewMode) == 0x0005B8, "Member 'UWBP_InventoryCostumeDescription_C::bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, TempPartsData) == 0x0005C0, "Member 'UWBP_InventoryCostumeDescription_C::TempPartsData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryCostumeDescription_C, TempProtectorCategory) == 0x0005C8, "Member 'UWBP_InventoryCostumeDescription_C::TempProtectorCategory' has a wrong offset!");

}

