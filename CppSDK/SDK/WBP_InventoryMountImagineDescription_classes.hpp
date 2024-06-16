#pragma once

 

// Package: WBP_InventoryMountImagineDescription

#include "Basic.hpp"

#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C
// 0x0230 (0x04A8 - 0x0278)
class UWBP_InventoryMountImagineDescription_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnBg;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnBg_1;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnEquip;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Inventory;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Storage;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock2;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnMove;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnSale;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash2;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescriptionGrp;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Dispatched_I;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Dispatched_S;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_183;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MannequinModel;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MannequinModel_1;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_MannequinModel_2;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryLimitGrp_C*                   InventoryLimitGrp;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagSale;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagStackB;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFooter;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMode;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLineImage;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryMountImagineDispatched_C* WBP_InventoryMountImagineDispatched;               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryMountImagineDispatched_C* WBP_InventoryMountImagineDispatched_167;           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 UniqueId;                                          // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         PositionIndex;                                     // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInventory;                                      // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStorageMode;                                      // 0x03B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76A3[0x2];                                     // 0x03B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ENGSlotSizeXY;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxENG;                                            // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76A4[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     InventoryItemData;                                 // 0x03C8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bBagStorageViewMode;                               // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76A5[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  MountImagineData;                                  // 0x0430(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsFangExpeditionUsing;                             // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType);
	void ExecuteUbergraph_WBP_InventoryMountImagineDescription(int32 EntryPoint);
	void BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetItem(struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode, bool Param_bBagStorageViewMode);
	void IsEquip(int32 Param_Index, bool* Equip_Flag);
	void RefleshButtonAction();
	void SetModelCaptureImageVisibility(bool InIsVisible);
	void SetSwitcher(int32 Param_Index);
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryMountImagineDescription_C">();
	}
	static class UWBP_InventoryMountImagineDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryMountImagineDescription_C>();
	}
};
static_assert(alignof(UWBP_InventoryMountImagineDescription_C) == 0x000008, "Wrong alignment on UWBP_InventoryMountImagineDescription_C");
static_assert(sizeof(UWBP_InventoryMountImagineDescription_C) == 0x0004A8, "Wrong size on UWBP_InventoryMountImagineDescription_C");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryMountImagineDescription_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnBg) == 0x000280, "Member 'UWBP_InventoryMountImagineDescription_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnBg_1) == 0x000288, "Member 'UWBP_InventoryMountImagineDescription_C::BtnBg_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnEquip) == 0x000290, "Member 'UWBP_InventoryMountImagineDescription_C::BtnEquip' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnGrp_Inventory) == 0x000298, "Member 'UWBP_InventoryMountImagineDescription_C::BtnGrp_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnGrp_Storage) == 0x0002A0, "Member 'UWBP_InventoryMountImagineDescription_C::BtnGrp_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnLock) == 0x0002A8, "Member 'UWBP_InventoryMountImagineDescription_C::BtnLock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnLock2) == 0x0002B0, "Member 'UWBP_InventoryMountImagineDescription_C::BtnLock2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnMove) == 0x0002B8, "Member 'UWBP_InventoryMountImagineDescription_C::BtnMove' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnSale) == 0x0002C0, "Member 'UWBP_InventoryMountImagineDescription_C::BtnSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnTrash) == 0x0002C8, "Member 'UWBP_InventoryMountImagineDescription_C::BtnTrash' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, BtnTrash2) == 0x0002D0, "Member 'UWBP_InventoryMountImagineDescription_C::BtnTrash2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, CmnIcon_KeyItem) == 0x0002D8, "Member 'UWBP_InventoryMountImagineDescription_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, CmnOperationRotate) == 0x0002E0, "Member 'UWBP_InventoryMountImagineDescription_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, DescriptionGrp) == 0x0002E8, "Member 'UWBP_InventoryMountImagineDescription_C::DescriptionGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, Dispatched_I) == 0x0002F0, "Member 'UWBP_InventoryMountImagineDescription_C::Dispatched_I' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, Dispatched_S) == 0x0002F8, "Member 'UWBP_InventoryMountImagineDescription_C::Dispatched_S' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, Image_183) == 0x000300, "Member 'UWBP_InventoryMountImagineDescription_C::Image_183' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, Image_LockIcon) == 0x000308, "Member 'UWBP_InventoryMountImagineDescription_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, Img_MannequinModel) == 0x000310, "Member 'UWBP_InventoryMountImagineDescription_C::Img_MannequinModel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, Img_MannequinModel_1) == 0x000318, "Member 'UWBP_InventoryMountImagineDescription_C::Img_MannequinModel_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, Img_MannequinModel_2) == 0x000320, "Member 'UWBP_InventoryMountImagineDescription_C::Img_MannequinModel_2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, InventoryLimitGrp) == 0x000328, "Member 'UWBP_InventoryMountImagineDescription_C::InventoryLimitGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, InventoryTagBPP) == 0x000330, "Member 'UWBP_InventoryMountImagineDescription_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, InventoryTagSale) == 0x000338, "Member 'UWBP_InventoryMountImagineDescription_C::InventoryTagSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, InventoryTagStackB) == 0x000340, "Member 'UWBP_InventoryMountImagineDescription_C::InventoryTagStackB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, InventoryUsed) == 0x000348, "Member 'UWBP_InventoryMountImagineDescription_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, ItemName) == 0x000350, "Member 'UWBP_InventoryMountImagineDescription_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, SwitchFooter) == 0x000358, "Member 'UWBP_InventoryMountImagineDescription_C::SwitchFooter' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, SwitchMode) == 0x000360, "Member 'UWBP_InventoryMountImagineDescription_C::SwitchMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, TxtDesc) == 0x000368, "Member 'UWBP_InventoryMountImagineDescription_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, VLineImage) == 0x000370, "Member 'UWBP_InventoryMountImagineDescription_C::VLineImage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, WBP_InventoryMountImagineDispatched) == 0x000378, "Member 'UWBP_InventoryMountImagineDescription_C::WBP_InventoryMountImagineDispatched' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, WBP_InventoryMountImagineDispatched_167) == 0x000380, "Member 'UWBP_InventoryMountImagineDescription_C::WBP_InventoryMountImagineDispatched_167' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, WBP_StackB_M) == 0x000388, "Member 'UWBP_InventoryMountImagineDescription_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, OnButtonClicked) == 0x000390, "Member 'UWBP_InventoryMountImagineDescription_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, UniqueId) == 0x0003A0, "Member 'UWBP_InventoryMountImagineDescription_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, PositionIndex) == 0x0003B0, "Member 'UWBP_InventoryMountImagineDescription_C::PositionIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, bIsInventory) == 0x0003B4, "Member 'UWBP_InventoryMountImagineDescription_C::bIsInventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, bStorageMode) == 0x0003B5, "Member 'UWBP_InventoryMountImagineDescription_C::bStorageMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, ENGSlotSizeXY) == 0x0003B8, "Member 'UWBP_InventoryMountImagineDescription_C::ENGSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, MaxENG) == 0x0003C0, "Member 'UWBP_InventoryMountImagineDescription_C::MaxENG' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, InventoryItemData) == 0x0003C8, "Member 'UWBP_InventoryMountImagineDescription_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, bBagStorageViewMode) == 0x000428, "Member 'UWBP_InventoryMountImagineDescription_C::bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, MountImagineData) == 0x000430, "Member 'UWBP_InventoryMountImagineDescription_C::MountImagineData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDescription_C, IsFangExpeditionUsing) == 0x0004A0, "Member 'UWBP_InventoryMountImagineDescription_C::IsFangExpeditionUsing' has a wrong offset!");

}

