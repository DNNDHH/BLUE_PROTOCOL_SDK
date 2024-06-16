#pragma once

 

// Package: WBP_T_ApartShop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "InputCore_structs.hpp"
#include "ESelectItemCategoryMode_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "StorageGridType_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_T_ApartShop.WBP_T_ApartShop_C
// 0x05F8 (0x08A8 - 0x02B0)
class UWBP_T_ApartShop_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgNum1;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxString_Filter;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxString_Sort;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonPagerWidget_C*                   CommonPagerWidget;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescriptionEmpty;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FilterWindowParent;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconBagSwitcher;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconShop;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconStorageSwitcher;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           InventoryGroup;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             InventorySlot;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemDetailsGrp;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemDetailsNoneText;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITInventoryItemNum;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITInventoryItemNumMax;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITStorageItemNum;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITStorageItemNumMax;                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Root;                                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Inventory;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Storage;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SelectProductMsgGrp;                               // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         StorageItemNumOwner;                               // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             StorageSlot;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBtn1_C*                         TabBtn2_Equipment;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TabGrp;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title;                                             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBag;                                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSelectedTab;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtStorage;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FInventoryData>                 StorageData;                                       // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryData>                 InventoryData;                                     // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           UpdateModelBlocker;                                // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           SaveBlocker;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     SelectItemData;                                    // 0x0448(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         SwapItemNum;                                       // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_793E[0x4];                                     // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           FilterList_Item;                                   // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList_Equipment;                              // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList_Ornament;                               // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EStorageGridType                              LastClickGridType;                                 // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_793F[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   Filters;                                           // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFilterGroup>                   SwapFilters;                                       // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsComboSetting;                                    // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7940[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         SellItemUniqueIdList;                              // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SellItemAmountList;                                // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           SellIBlocker;                                      // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnd;                                              // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7941[0x7];                                     // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               RotatorParam;                                      // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TickCheck;                                         // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugMode;                                        // 0x0549(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7942[0x2];                                     // 0x054A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalPrice;                                        // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStorageItemData>             SwapStorageItemData;                               // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBStorageItemData>             SwapStorageItemData2;                              // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UItemIconBtn_C*                         SelectItemOnse;                                    // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         SwapLastItem;                                      // 0x0578(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsWeaponSticker;                                  // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7943[0x3];                                     // 0x0611(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponStickerWeaponId;                             // 0x0614(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     TempItemData;                                      // 0x0618(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7944[0x7];                                     // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     TempNormalWeaponItemData;                          // 0x0680(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWeaponStickerUsedWeapon;                         // 0x06E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7945[0x3];                                     // 0x06E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SwapValu;                                          // 0x06E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           UseBlocker;                                        // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceWeaponSticker               UseWeaponStickerInfo;                              // 0x06F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                 SelectedItemUniqueId;                              // 0x0700(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAppearanceWeaponStickerWeaponSelectMenuWindow_C* WeaponStickerWeaponSelectMenuWindow;               // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TempWeaponStickerName;                             // 0x0718(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWeaponStickerUsedToEquippedWeapon;               // 0x0728(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TempIsExpiredStickerWeapons;                       // 0x0729(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7946[0x6];                                     // 0x072A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempStickerUsedWeaponUniqueId;                     // 0x0730(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         TempExpiredStickerWeaponUniqueIds;                 // 0x0740(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 TempWeaponName;                                    // 0x0750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAppearanceWeaponStickerRemoveWindow_C* WeaponStickerRemoveWindow;                         // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 WeaponStickerRemoveItemUniqueId;                   // 0x0768(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWeaponStickerRemovedFromEquippedWeapon;          // 0x0778(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7947[0x7];                                     // 0x0779(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   AuxiliaryKey;                                      // 0x0780(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                   MouseLeft;                                         // 0x0798(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                   MouseRight;                                        // 0x07B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                   PadClick;                                          // 0x07C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         StorageNum;                                        // 0x07E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNumMax;                                     // 0x07E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InventoryNum;                                      // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InventoryNumMax;                                   // 0x07EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MoveNow;                                           // 0x07F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerInUse;                              // 0x07F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerIndefinite;                         // 0x07F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerDiscard;                            // 0x07F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7948[0x4];                                     // 0x07F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      WeaponItemData;                                    // 0x07F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 WeaponStickerName;                                 // 0x0848(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         AttachedWeaponStickerId;                           // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7949[0x4];                                     // 0x085C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               DetailViewWidget;                                  // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseWeaponStickerSequence;                        // 0x0868(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRemoveWeaponStickerSequence;                     // 0x0869(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_794A[0x6];                                     // 0x086A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           EventHandle;                                       // 0x0870(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SwapSelectItemList;                                // 0x0878(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryItemData>             Select_Item_List;                                  // 0x0888(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Warning;                                           // 0x0898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_794B[0x3];                                     // 0x0899(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StoragePageIconMaxNum;                             // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StoragePageNum;                                    // 0x08A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESelectItemCategoryMode                       SelectItemCategoryMode;                            // 0x08A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WBP_T_ApartShop(int32 EntryPoint);
	void BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32 PageCurrent);
	void UpdetaPage(bool Visible, bool KeepPage);
	void UpdatefilterBox();
	void UpdateSortBox();
	void TryCreateStorageGridIcon();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimTimer();
	void CreateComboBox();
	void ResetGrid(EStorageGridType InType, bool ScrollReset);
	void Destruct();
	void Construct();
	void SlotSelectRevival(class UGridPanel* Grid);
	void IconScrollVisible(class UGridPanel* Param_Slot, float Offset);
	void BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void TryEnd();
	void OnPressRight_Storage(class UItemIconBtn_C* SelectItem);
	void OnPressRight_Inventory(class UItemIconBtn_C* SelectItem);
	void OnPressItem_Storage(class UItemIconBtn_C* SelectItem);
	void OnPressItem_Inventory(class UItemIconBtn_C* SelectItem);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId);
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters);
	void BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void OnPress_Cancel();
	void UiInputBlock(bool Param_IsVisible);
	void SwitchMultipleSelection();
	void SaveSortRule();
	void OnMultipleSelection(class UItemIconBtn_C* InputPin, EStorageGridType Param_LastClickGridType);
	void SetSlotSelect(bool IsSelected, class UGridPanel* InputPin);
	void IconAllSelectfalse();
	void UpdateFilterButton();
	void UpdateItemNums(bool KeepPage);
	void Get_Filter_Type(EItemFilterType* FilterType);
	void Updete_Item_Slot_List(ESelectItemCategoryMode Param_SelectItemCategoryMode);
	void RandomPlayAnimation();
	void RandomPlayAnimation2();
	class USBOwnItemListContainer* Get_Inventory_Brunch();
	class USBOwnItemListContainer* GetItemListContainer(EStorageGridType InType);
	class UWidget* On_ComboBoxString_Sort_GenerateWidget_0(const class FString& Item);
	class UWidget* On_ComboBoxString_Filter_GenerateWidget_0(const class FString& Item);
	void SearchInventoryItemData(EStorageGridType Param_Index, class UItemIconBtn_C* Target, struct FInventoryData* OutputPin, bool* Enable);
	void Set_Icon_Select_Items(class UItemIconBtn_C* InputPin, bool* bAdd);
	void GetIconPtr(const struct FInventoryItemData& InventoryItemData, class UItemIconBtn_C** AsItem_Icon_Btn, bool* bInventory, bool* NotHave);
	void FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData);
	void Create_Use_Data(int32 Amount, TArray<struct FSBStorageItemData>* DataList);
	void GetSortRule(ESBItemSortType* SortType);
	void Get_Sort_Mode(int32* ModeNum);
	void SelectItemSwapData();
	void GetStorageNum(int32* Num, int32* Max);
	class FName GetCategoryModeName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_T_ApartShop_C">();
	}
	static class UWBP_T_ApartShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_T_ApartShop_C>();
	}
};
static_assert(alignof(UWBP_T_ApartShop_C) == 0x000008, "Wrong alignment on UWBP_T_ApartShop_C");
static_assert(sizeof(UWBP_T_ApartShop_C) == 0x0008A8, "Wrong size on UWBP_T_ApartShop_C");
static_assert(offsetof(UWBP_T_ApartShop_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_T_ApartShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, AnimLight2) == 0x0002B8, "Member 'UWBP_T_ApartShop_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, AnimLight1) == 0x0002C0, "Member 'UWBP_T_ApartShop_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, AnimOut) == 0x0002C8, "Member 'UWBP_T_ApartShop_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, AnimIn) == 0x0002D0, "Member 'UWBP_T_ApartShop_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, BgNum1) == 0x0002D8, "Member 'UWBP_T_ApartShop_C::BgNum1' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, Btn_ShowHint) == 0x0002E0, "Member 'UWBP_T_ApartShop_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, CmnBack) == 0x0002E8, "Member 'UWBP_T_ApartShop_C::CmnBack' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, CmnImageThrobber) == 0x0002F0, "Member 'UWBP_T_ApartShop_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ComboBoxString_Filter) == 0x0002F8, "Member 'UWBP_T_ApartShop_C::ComboBoxString_Filter' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ComboBoxString_Sort) == 0x000300, "Member 'UWBP_T_ApartShop_C::ComboBoxString_Sort' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, CommonPagerWidget) == 0x000308, "Member 'UWBP_T_ApartShop_C::CommonPagerWidget' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, DescriptionEmpty) == 0x000310, "Member 'UWBP_T_ApartShop_C::DescriptionEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, FilterButton) == 0x000318, "Member 'UWBP_T_ApartShop_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, FilterWindowParent) == 0x000320, "Member 'UWBP_T_ApartShop_C::FilterWindowParent' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IconBagSwitcher) == 0x000328, "Member 'UWBP_T_ApartShop_C::IconBagSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IconShop) == 0x000330, "Member 'UWBP_T_ApartShop_C::IconShop' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IconStorageSwitcher) == 0x000338, "Member 'UWBP_T_ApartShop_C::IconStorageSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, InventoryGroup) == 0x000340, "Member 'UWBP_T_ApartShop_C::InventoryGroup' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, InventorySlot) == 0x000348, "Member 'UWBP_T_ApartShop_C::InventorySlot' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ItemDetailsGrp) == 0x000350, "Member 'UWBP_T_ApartShop_C::ItemDetailsGrp' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ItemDetailsNoneText) == 0x000358, "Member 'UWBP_T_ApartShop_C::ItemDetailsNoneText' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, Line1) == 0x000360, "Member 'UWBP_T_ApartShop_C::Line1' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, LogoBG) == 0x000368, "Member 'UWBP_T_ApartShop_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, OMITInventoryItemNum) == 0x000370, "Member 'UWBP_T_ApartShop_C::OMITInventoryItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, OMITInventoryItemNumMax) == 0x000378, "Member 'UWBP_T_ApartShop_C::OMITInventoryItemNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, OMITStorageItemNum) == 0x000380, "Member 'UWBP_T_ApartShop_C::OMITStorageItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, OMITStorageItemNumMax) == 0x000388, "Member 'UWBP_T_ApartShop_C::OMITStorageItemNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, RetainerBox_0) == 0x000390, "Member 'UWBP_T_ApartShop_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, Root) == 0x000398, "Member 'UWBP_T_ApartShop_C::Root' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ScrollBox_Inventory) == 0x0003A0, "Member 'UWBP_T_ApartShop_C::ScrollBox_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ScrollBox_Storage) == 0x0003A8, "Member 'UWBP_T_ApartShop_C::ScrollBox_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SelectProductMsgGrp) == 0x0003B0, "Member 'UWBP_T_ApartShop_C::SelectProductMsgGrp' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ShopMenu_InAnime) == 0x0003B8, "Member 'UWBP_T_ApartShop_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, StorageItemNumOwner) == 0x0003C0, "Member 'UWBP_T_ApartShop_C::StorageItemNumOwner' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, StorageSlot) == 0x0003C8, "Member 'UWBP_T_ApartShop_C::StorageSlot' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TabBtn2_Equipment) == 0x0003D0, "Member 'UWBP_T_ApartShop_C::TabBtn2_Equipment' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TabGrp) == 0x0003D8, "Member 'UWBP_T_ApartShop_C::TabGrp' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, Title) == 0x0003E0, "Member 'UWBP_T_ApartShop_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TxtBag) == 0x0003E8, "Member 'UWBP_T_ApartShop_C::TxtBag' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TxtSelectedTab) == 0x0003F0, "Member 'UWBP_T_ApartShop_C::TxtSelectedTab' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TxtStorage) == 0x0003F8, "Member 'UWBP_T_ApartShop_C::TxtStorage' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, UIBlocker) == 0x000400, "Member 'UWBP_T_ApartShop_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, OnClose) == 0x000408, "Member 'UWBP_T_ApartShop_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, StorageData) == 0x000418, "Member 'UWBP_T_ApartShop_C::StorageData' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, InventoryData) == 0x000428, "Member 'UWBP_T_ApartShop_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, UpdateModelBlocker) == 0x000438, "Member 'UWBP_T_ApartShop_C::UpdateModelBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SaveBlocker) == 0x000440, "Member 'UWBP_T_ApartShop_C::SaveBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SelectItemData) == 0x000448, "Member 'UWBP_T_ApartShop_C::SelectItemData' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SwapItemNum) == 0x0004A8, "Member 'UWBP_T_ApartShop_C::SwapItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, FilterList_Item) == 0x0004B0, "Member 'UWBP_T_ApartShop_C::FilterList_Item' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, FilterList_Equipment) == 0x0004C0, "Member 'UWBP_T_ApartShop_C::FilterList_Equipment' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, FilterList_Ornament) == 0x0004D0, "Member 'UWBP_T_ApartShop_C::FilterList_Ornament' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, LastClickGridType) == 0x0004E0, "Member 'UWBP_T_ApartShop_C::LastClickGridType' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, Filters) == 0x0004E8, "Member 'UWBP_T_ApartShop_C::Filters' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SwapFilters) == 0x0004F8, "Member 'UWBP_T_ApartShop_C::SwapFilters' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsComboSetting) == 0x000508, "Member 'UWBP_T_ApartShop_C::IsComboSetting' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SellItemUniqueIdList) == 0x000510, "Member 'UWBP_T_ApartShop_C::SellItemUniqueIdList' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SellItemAmountList) == 0x000520, "Member 'UWBP_T_ApartShop_C::SellItemAmountList' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SellIBlocker) == 0x000530, "Member 'UWBP_T_ApartShop_C::SellIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, bEnd) == 0x000538, "Member 'UWBP_T_ApartShop_C::bEnd' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, RotatorParam) == 0x000540, "Member 'UWBP_T_ApartShop_C::RotatorParam' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TickCheck) == 0x000548, "Member 'UWBP_T_ApartShop_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, bDebugMode) == 0x000549, "Member 'UWBP_T_ApartShop_C::bDebugMode' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TotalPrice) == 0x00054C, "Member 'UWBP_T_ApartShop_C::TotalPrice' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SwapStorageItemData) == 0x000550, "Member 'UWBP_T_ApartShop_C::SwapStorageItemData' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SwapStorageItemData2) == 0x000560, "Member 'UWBP_T_ApartShop_C::SwapStorageItemData2' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SelectItemOnse) == 0x000570, "Member 'UWBP_T_ApartShop_C::SelectItemOnse' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SwapLastItem) == 0x000578, "Member 'UWBP_T_ApartShop_C::SwapLastItem' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, bIsWeaponSticker) == 0x000610, "Member 'UWBP_T_ApartShop_C::bIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, WeaponStickerWeaponId) == 0x000614, "Member 'UWBP_T_ApartShop_C::WeaponStickerWeaponId' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TempItemData) == 0x000618, "Member 'UWBP_T_ApartShop_C::TempItemData' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, ItemType) == 0x000678, "Member 'UWBP_T_ApartShop_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TempNormalWeaponItemData) == 0x000680, "Member 'UWBP_T_ApartShop_C::TempNormalWeaponItemData' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsWeaponStickerUsedWeapon) == 0x0006E0, "Member 'UWBP_T_ApartShop_C::IsWeaponStickerUsedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SwapValu) == 0x0006E4, "Member 'UWBP_T_ApartShop_C::SwapValu' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, UseBlocker) == 0x0006E8, "Member 'UWBP_T_ApartShop_C::UseBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, UseWeaponStickerInfo) == 0x0006F0, "Member 'UWBP_T_ApartShop_C::UseWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SelectedItemUniqueId) == 0x000700, "Member 'UWBP_T_ApartShop_C::SelectedItemUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, WeaponStickerWeaponSelectMenuWindow) == 0x000710, "Member 'UWBP_T_ApartShop_C::WeaponStickerWeaponSelectMenuWindow' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TempWeaponStickerName) == 0x000718, "Member 'UWBP_T_ApartShop_C::TempWeaponStickerName' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsWeaponStickerUsedToEquippedWeapon) == 0x000728, "Member 'UWBP_T_ApartShop_C::IsWeaponStickerUsedToEquippedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TempIsExpiredStickerWeapons) == 0x000729, "Member 'UWBP_T_ApartShop_C::TempIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TempStickerUsedWeaponUniqueId) == 0x000730, "Member 'UWBP_T_ApartShop_C::TempStickerUsedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TempExpiredStickerWeaponUniqueIds) == 0x000740, "Member 'UWBP_T_ApartShop_C::TempExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, TempWeaponName) == 0x000750, "Member 'UWBP_T_ApartShop_C::TempWeaponName' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, WeaponStickerRemoveWindow) == 0x000760, "Member 'UWBP_T_ApartShop_C::WeaponStickerRemoveWindow' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, WeaponStickerRemoveItemUniqueId) == 0x000768, "Member 'UWBP_T_ApartShop_C::WeaponStickerRemoveItemUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsWeaponStickerRemovedFromEquippedWeapon) == 0x000778, "Member 'UWBP_T_ApartShop_C::IsWeaponStickerRemovedFromEquippedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, AuxiliaryKey) == 0x000780, "Member 'UWBP_T_ApartShop_C::AuxiliaryKey' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, MouseLeft) == 0x000798, "Member 'UWBP_T_ApartShop_C::MouseLeft' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, MouseRight) == 0x0007B0, "Member 'UWBP_T_ApartShop_C::MouseRight' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, PadClick) == 0x0007C8, "Member 'UWBP_T_ApartShop_C::PadClick' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, StorageNum) == 0x0007E0, "Member 'UWBP_T_ApartShop_C::StorageNum' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, StorageNumMax) == 0x0007E4, "Member 'UWBP_T_ApartShop_C::StorageNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, InventoryNum) == 0x0007E8, "Member 'UWBP_T_ApartShop_C::InventoryNum' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, InventoryNumMax) == 0x0007EC, "Member 'UWBP_T_ApartShop_C::InventoryNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, MoveNow) == 0x0007F0, "Member 'UWBP_T_ApartShop_C::MoveNow' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsWeaponStickerInUse) == 0x0007F1, "Member 'UWBP_T_ApartShop_C::IsWeaponStickerInUse' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsWeaponStickerIndefinite) == 0x0007F2, "Member 'UWBP_T_ApartShop_C::IsWeaponStickerIndefinite' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsWeaponStickerDiscard) == 0x0007F3, "Member 'UWBP_T_ApartShop_C::IsWeaponStickerDiscard' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, WeaponItemData) == 0x0007F8, "Member 'UWBP_T_ApartShop_C::WeaponItemData' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, WeaponStickerName) == 0x000848, "Member 'UWBP_T_ApartShop_C::WeaponStickerName' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, AttachedWeaponStickerId) == 0x000858, "Member 'UWBP_T_ApartShop_C::AttachedWeaponStickerId' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, DetailViewWidget) == 0x000860, "Member 'UWBP_T_ApartShop_C::DetailViewWidget' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsUseWeaponStickerSequence) == 0x000868, "Member 'UWBP_T_ApartShop_C::IsUseWeaponStickerSequence' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, IsRemoveWeaponStickerSequence) == 0x000869, "Member 'UWBP_T_ApartShop_C::IsRemoveWeaponStickerSequence' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, EventHandle) == 0x000870, "Member 'UWBP_T_ApartShop_C::EventHandle' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SwapSelectItemList) == 0x000878, "Member 'UWBP_T_ApartShop_C::SwapSelectItemList' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, Select_Item_List) == 0x000888, "Member 'UWBP_T_ApartShop_C::Select_Item_List' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, Warning) == 0x000898, "Member 'UWBP_T_ApartShop_C::Warning' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, StoragePageIconMaxNum) == 0x00089C, "Member 'UWBP_T_ApartShop_C::StoragePageIconMaxNum' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, StoragePageNum) == 0x0008A0, "Member 'UWBP_T_ApartShop_C::StoragePageNum' has a wrong offset!");
static_assert(offsetof(UWBP_T_ApartShop_C, SelectItemCategoryMode) == 0x0008A4, "Member 'UWBP_T_ApartShop_C::SelectItemCategoryMode' has a wrong offset!");

}

