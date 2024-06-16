#pragma once

 

// Package: WBP_InventoryPassiveImagineDescription

#include "Basic.hpp"

#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C
// 0x0430 (0x06A8 - 0x0278)
class UWBP_InventoryPassiveImagineDescription_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnBg;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnDemolition;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Inventory;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGrp_Storage;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnLock2;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnMove;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnSale;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash2;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_illustImagine_I;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_illustImagine_S;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_illustImagine_S_1;                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescriptionGrp;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_104;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_120;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_183;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Imagine;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Imagine_1;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Imagine_2;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryLimitGrp_C*                   InventoryLimitGrp;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagSale;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagStackB;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon1;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon2;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon3;                                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon4;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon5;                                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_AbilityInfo;                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFooter;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMode;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtATK;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHP;                                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLvMax;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPerk1;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPerk2;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLineImage;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsLoad;                                           // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7680[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsInventory;                                      // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStorageMode;                                      // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7681[0x6];                                     // 0x045A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0460(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBMasterImagine                       MasterImagineData;                                 // 0x04C0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCommonToolTip_AbilityPerk_C*           AbilityDescToolTip;                                // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkId;                                            // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBagStorageViewMode;                               // 0x057C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7682[0x3];                                     // 0x057D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USizeBox*>                       PosIconArray;                                      // 0x0580(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FOwnItemInfo                           OwnData;                                           // 0x0590(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType);
	void ExecuteUbergraph_WBP_InventoryPassiveImagineDescription(int32 EntryPoint);
	void Destruct();
	void BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void SetItemData(const struct FInventoryData& Param_InventoryItemData, bool Param_bStorageMode, bool Param_bBagStorageViewMode);
	void SelectKiraSwitcher(const struct FSBMasterImagine& MasterImagine);
	void BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void UpdateButton();
	void RequestLoad(int32 ImagineId);
	void OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26(class UObject* Loaded);
	void SetImagineParam(const struct FImagineParameter& ImagineParam);
	void Set_Level_And_Exp(const struct FSBMasterImagine& MasterData, int32 Exp);
	void SetSwitcher(int32 Param_Index);
	class UWidget* GetAbilityDescToolTipWidget();
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryPassiveImagineDescription_C">();
	}
	static class UWBP_InventoryPassiveImagineDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryPassiveImagineDescription_C>();
	}
};
static_assert(alignof(UWBP_InventoryPassiveImagineDescription_C) == 0x000008, "Wrong alignment on UWBP_InventoryPassiveImagineDescription_C");
static_assert(sizeof(UWBP_InventoryPassiveImagineDescription_C) == 0x0006A8, "Wrong size on UWBP_InventoryPassiveImagineDescription_C");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryPassiveImagineDescription_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnBg) == 0x000280, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnDemolition) == 0x000288, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnDemolition' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnGrp_Inventory) == 0x000290, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnGrp_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnGrp_Storage) == 0x000298, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnGrp_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnLock) == 0x0002A0, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnLock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnLock2) == 0x0002A8, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnLock2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnMove) == 0x0002B0, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnMove' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnSale) == 0x0002B8, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnTrash) == 0x0002C0, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnTrash' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, BtnTrash2) == 0x0002C8, "Member 'UWBP_InventoryPassiveImagineDescription_C::BtnTrash2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Button_illustImagine_I) == 0x0002D0, "Member 'UWBP_InventoryPassiveImagineDescription_C::Button_illustImagine_I' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Button_illustImagine_S) == 0x0002D8, "Member 'UWBP_InventoryPassiveImagineDescription_C::Button_illustImagine_S' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Button_illustImagine_S_1) == 0x0002E0, "Member 'UWBP_InventoryPassiveImagineDescription_C::Button_illustImagine_S_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, CmnIcon_KeyItem) == 0x0002E8, "Member 'UWBP_InventoryPassiveImagineDescription_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, CmnOperationRotate) == 0x0002F0, "Member 'UWBP_InventoryPassiveImagineDescription_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, DescriptionGrp) == 0x0002F8, "Member 'UWBP_InventoryPassiveImagineDescription_C::DescriptionGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_2) == 0x000300, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_3) == 0x000308, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_4) == 0x000310, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_8) == 0x000318, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_8' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_104) == 0x000320, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_104' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_120) == 0x000328, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_120' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_183) == 0x000330, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_183' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Image_LockIcon) == 0x000338, "Member 'UWBP_InventoryPassiveImagineDescription_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Img_Imagine) == 0x000340, "Member 'UWBP_InventoryPassiveImagineDescription_C::Img_Imagine' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Img_Imagine_1) == 0x000348, "Member 'UWBP_InventoryPassiveImagineDescription_C::Img_Imagine_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, Img_Imagine_2) == 0x000350, "Member 'UWBP_InventoryPassiveImagineDescription_C::Img_Imagine_2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, InventoryLimitGrp) == 0x000358, "Member 'UWBP_InventoryPassiveImagineDescription_C::InventoryLimitGrp' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, InventoryTagBPP) == 0x000360, "Member 'UWBP_InventoryPassiveImagineDescription_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, InventoryTagSale) == 0x000368, "Member 'UWBP_InventoryPassiveImagineDescription_C::InventoryTagSale' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, InventoryTagStackB) == 0x000370, "Member 'UWBP_InventoryPassiveImagineDescription_C::InventoryTagStackB' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, InventoryUsed) == 0x000378, "Member 'UWBP_InventoryPassiveImagineDescription_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, PosIcon1) == 0x000380, "Member 'UWBP_InventoryPassiveImagineDescription_C::PosIcon1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, PosIcon2) == 0x000388, "Member 'UWBP_InventoryPassiveImagineDescription_C::PosIcon2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, PosIcon3) == 0x000390, "Member 'UWBP_InventoryPassiveImagineDescription_C::PosIcon3' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, PosIcon4) == 0x000398, "Member 'UWBP_InventoryPassiveImagineDescription_C::PosIcon4' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, PosIcon5) == 0x0003A0, "Member 'UWBP_InventoryPassiveImagineDescription_C::PosIcon5' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, SBButton_AbilityInfo) == 0x0003A8, "Member 'UWBP_InventoryPassiveImagineDescription_C::SBButton_AbilityInfo' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, SwitchFooter) == 0x0003B0, "Member 'UWBP_InventoryPassiveImagineDescription_C::SwitchFooter' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, SwitchMode) == 0x0003B8, "Member 'UWBP_InventoryPassiveImagineDescription_C::SwitchMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TextBlock_1) == 0x0003C0, "Member 'UWBP_InventoryPassiveImagineDescription_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtATK) == 0x0003C8, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtATK' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtDesc) == 0x0003D0, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtDEX) == 0x0003D8, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtHP) == 0x0003E0, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtHP' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtINT) == 0x0003E8, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtLv) == 0x0003F0, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtLvMax) == 0x0003F8, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtLvMax' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtMND) == 0x000400, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtName) == 0x000408, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtPerk1) == 0x000410, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtPerk1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtPerk2) == 0x000418, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtPerk2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtSTR) == 0x000420, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, TxtVIT) == 0x000428, "Member 'UWBP_InventoryPassiveImagineDescription_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, VLineImage) == 0x000430, "Member 'UWBP_InventoryPassiveImagineDescription_C::VLineImage' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, WBP_StackB_M) == 0x000438, "Member 'UWBP_InventoryPassiveImagineDescription_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, bIsLoad) == 0x000440, "Member 'UWBP_InventoryPassiveImagineDescription_C::bIsLoad' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, OnButtonClicked) == 0x000448, "Member 'UWBP_InventoryPassiveImagineDescription_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, bIsInventory) == 0x000458, "Member 'UWBP_InventoryPassiveImagineDescription_C::bIsInventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, bStorageMode) == 0x000459, "Member 'UWBP_InventoryPassiveImagineDescription_C::bStorageMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, InventoryItemData) == 0x000460, "Member 'UWBP_InventoryPassiveImagineDescription_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, MasterImagineData) == 0x0004C0, "Member 'UWBP_InventoryPassiveImagineDescription_C::MasterImagineData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, AbilityDescToolTip) == 0x000570, "Member 'UWBP_InventoryPassiveImagineDescription_C::AbilityDescToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, PerkId) == 0x000578, "Member 'UWBP_InventoryPassiveImagineDescription_C::PerkId' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, bBagStorageViewMode) == 0x00057C, "Member 'UWBP_InventoryPassiveImagineDescription_C::bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, PosIconArray) == 0x000580, "Member 'UWBP_InventoryPassiveImagineDescription_C::PosIconArray' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryPassiveImagineDescription_C, OwnData) == 0x000590, "Member 'UWBP_InventoryPassiveImagineDescription_C::OwnData' has a wrong offset!");

}

