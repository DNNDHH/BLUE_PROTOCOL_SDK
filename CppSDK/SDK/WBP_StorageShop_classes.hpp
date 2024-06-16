#pragma once

 

// Package: WBP_StorageShop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UseItemWindowType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "InventoryData_structs.hpp"
#include "StorageMultipleSalesWindowType_structs.hpp"
#include "InputCore_structs.hpp"
#include "ESelectItemCategoryMode_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "StorageGridType_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "DescripionButtonType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Filter_Type_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StorageShop.WBP_StorageShop_C
// 0x0668 (0x0918 - 0x02B0)
class UWBP_StorageShop_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoopArrow;                                     // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Arrow;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow1;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow2;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgNum1;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BgStorageSwitcher;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioCostume;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioImagine;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioMountImagine;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioWeapon;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          CmnAnim_LiquidMemoryActive;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxString_Filter;                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxString_Sort;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonPagerWidget_C*                   CommonPagerWidget;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   DateTimeTextForWeaponSticker;                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescriptionEmpty;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDescriptionWindow_C*                   DescriptionWindow;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FilterWindowParent;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconBagSwitcher;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconShop;                                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconStorageSwitcher;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           InventoryGroup;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             InventorySlot;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemDetailsGrp;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemDetailsNoneText;                               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MultipleSelectionGuide;                            // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITInventoryItemNum;                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITInventoryItemNumMax;                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITStorageItemNum;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OMITStorageItemNumMax;                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Root;                                              // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_232;                            // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Inventory;                               // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Storage;                                 // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SelectProductMsgGrp;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         StorageItemNumOwner;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StorageRowListOwner_C*             StorageList;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiDescription_C*                StorageMultipleSelectWindow;                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             StorageSlot;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBtn1_C*                         TabBtn1_Item;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBtn1_C*                         TabBtn2_Equipment;                                 // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBtn1_C*                         TabBtn3_Ornament;                                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TabGrp;                                            // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title;                                             // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtBag;                                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSelectedTab;                                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtStorage;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerForSystemMessage;                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FInventoryData>                 StorageData;                                       // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryData>                 InventoryData;                                     // 0x04C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           UpdateModelBlocker;                                // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           SaveBlocker;                                       // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     SelectItemData;                                    // 0x04E8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         SwapItemNum;                                       // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4818[0x4];                                     // 0x054C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           FilterList_Item;                                   // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList_Equipment;                              // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList_Ornament;                               // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EStorageGridType                              LastClickGridType;                                 // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4819[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFilterGroup>                   SwapFilters;                                       // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsComboSetting;                                    // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481A[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         SellItemUniqueIdList;                              // 0x05B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SellItemAmountList;                                // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           SellIBlocker;                                      // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnd;                                              // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481B[0x7];                                     // 0x05D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               RotatorParam;                                      // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TickCheck;                                         // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugMode;                                        // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481C[0x2];                                     // 0x05EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalPrice;                                        // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStorageItemData>             SwapStorageItemData;                               // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBStorageItemData>             SwapStorageItemData2;                              // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UItemIconBtn_C*                         SelectItemOnse;                                    // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         SwapLastItem;                                      // 0x0618(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsWeaponSticker;                                  // 0x06B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481D[0x3];                                     // 0x06B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponStickerWeaponId;                             // 0x06B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     TempItemData;                                      // 0x06B8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0718(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481E[0x7];                                     // 0x0719(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     TempNormalWeaponItemData;                          // 0x0720(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWeaponStickerUsedWeapon;                         // 0x0780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481F[0x3];                                     // 0x0781(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SwapValu;                                          // 0x0784(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           UseBlocker;                                        // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceWeaponSticker               UseWeaponStickerInfo;                              // 0x0790(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                 SelectedItemUniqueId;                              // 0x07A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAppearanceWeaponStickerWeaponSelectMenuWindow_C* WeaponStickerWeaponSelectMenuWindow;               // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TempWeaponStickerName;                             // 0x07B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWeaponStickerUsedToEquippedWeapon;               // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TempIsExpiredStickerWeapons;                       // 0x07C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4820[0x6];                                     // 0x07CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempStickerUsedWeaponUniqueId;                     // 0x07D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         TempExpiredStickerWeaponUniqueIds;                 // 0x07E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 TempWeaponName;                                    // 0x07F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAppearanceWeaponStickerRemoveWindow_C* WeaponStickerRemoveWindow;                         // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 WeaponStickerRemoveItemUniqueId;                   // 0x0808(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWeaponStickerRemovedFromEquippedWeapon;          // 0x0818(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4821[0x7];                                     // 0x0819(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   AuxiliaryKey;                                      // 0x0820(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                   MouseRight;                                        // 0x0838(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         StorageNum;                                        // 0x0850(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNumMax;                                     // 0x0854(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InventoryNum;                                      // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InventoryNumMax;                                   // 0x085C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MoveNow;                                           // 0x0860(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerInUse;                              // 0x0861(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerIndefinite;                         // 0x0862(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerDiscard;                            // 0x0863(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4822[0x4];                                     // 0x0864(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      WeaponItemData;                                    // 0x0868(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 WeaponStickerName;                                 // 0x08B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         AttachedWeaponStickerId;                           // 0x08C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4823[0x4];                                     // 0x08CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               DetailViewWidget;                                  // 0x08D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseWeaponStickerSequence;                        // 0x08D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRemoveWeaponStickerSequence;                     // 0x08D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4824[0x6];                                     // 0x08DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           EventHandle;                                       // 0x08E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         SwapSelectItemList;                                // 0x08E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryItemData>             Select_Item_List;                                  // 0x08F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Warning;                                           // 0x0908(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4825[0x3];                                     // 0x0909(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StoragePageIconMaxNum;                             // 0x090C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StoragePageNum;                                    // 0x0910(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESelectItemCategoryMode                       SelectItemCategoryMode;                            // 0x0914(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WBP_StorageShop(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32 PageCurrent);
	void UpdetaPage(bool Visible, bool KeepPage);
	void UpdatefilterBox();
	void UpdateSortBox();
	void TryCreateStorageGridIcon();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent_11(const int32 InRetCode);
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimTimer();
	void CreateComboBox();
	void ResetGrid(EStorageGridType InType, bool ScrollReset);
	void Destruct();
	void Construct();
	void BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId);
	void SlotSelectRevival(class UGridPanel* Grid);
	void IconScrollVisible(class UGridPanel* Param_Slot, float Offset);
	void BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void CloseStorageMultipleSelectWindow();
	void TryEnd();
	void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData);
	void BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
	void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature();
	void OnPressRight_Storage(class UItemIconBtn_C* SelectItem);
	void OnPressRight_Inventory(class UItemIconBtn_C* SelectItem);
	void OnPressItem_Storage(class UItemIconBtn_C* SelectItem);
	void OnPressItem_Inventory(class UItemIconBtn_C* SelectItem);
	void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList);
	void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList);
	void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList);
	void BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature(const struct FInventoryData& NewParam);
	void BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature(int32 InTotalPrice, TArray<struct FInventoryItemData>& InSelectItemList);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId);
	void BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 TabId);
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters);
	void BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature(const struct FInventoryData& OnItemClick);
	void BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(EDescripionButtonType ButtonType);
	void OnPress_Cancel();
	void SetLevelAfter(int32 Value, class UWBP_ExpIncrease_C* CallerDialg);
	void WBP_ExpIncreaseEnd(ENumberInputDialogResult InResult, int32 InNumber);
	void CustomEvent_19(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void UseLeve();
	void CustomEvent_18(const EYesNoDialogResult Result);
	void CustomEvent_17(const EYesNoDialogResult Result);
	void CustomEvent_16(const EYesNoDialogResult Result);
	void CustomEvent_15(const EYesNoDialogResult Result);
	void CheckWarning(const class FString& UniqueId, int32 StorageNumber, EItemType Tipe);
	void OnOwnItemAmountChanged(const struct FSBChangeItemAmountParam& InParam);
	void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
	void DetailView();
	void DestWeaponStickerEvents();
	void BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
	void Update_LiquidMemoryActive();
	void UiInputBlock(bool Param_IsVisible);
	void ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog(const class FString& InStickerAttachedWeaponUniqueId);
	void ShowExpiredWeaponStickerSystemMessage(const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const class FString& InEquippedWeaponUniqueId, bool InActivateWeaponModelRotate);
	void EndSystemMessage();
	void OnRemoveWeaponStickerDelegateEvent(const int32 InRetCode, const class FString& InStickerRemovedWeaponUniqueId, const bool InIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas);
	void OnUseWeaponStickerDelegateEvent(const int32 InRetCode, const class FString& InStickerUsedWeaponUniqueId, const bool InIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas);
	void OnWeaponStickerRemoveWindowHideEnd();
	void OnWeaponStickerRemoveDecideEvent(bool InIsStickerDiscardSelected);
	void OnWeaponStickerWeaponSelectWindowHideEndEvent(bool InIsHideWindowCalledByDecide);
	void OnUseWeaponStickerDecideEvent(const class FString& InSelectedWeaponUniqueItemId);
	void UseWeaponSticker(const struct FAppearanceWeaponSticker& InWeaponStickerInfo, const class FString& InWeaponStickerUniqueId);
	void CustomEvent_14(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam);
	void CustomEvent_13(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void UseItemBox();
	void CustomEvent_12(const int32 InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData);
	void CustomEvent_6(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox);
	void ItemUseAfter(const int32 InRetCode);
	void UseExp(int32 Amount);
	void ItemUse();
	void RequestWeaponModelLoadFromWeaponStickerInUseButtonInput();
	void DropCheck(int32 RetCode);
	void SendSaveItemsDrop(TArray<struct FSBStorageItemData>& InputPin);
	void CustomEvent_10(const EYesNoDialogResult Result);
	void TrashItem();
	void CustomEvent_9(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void SwitchMultipleSelection();
	void MoveAfter(int32 RetCode);
	void CustomEvent_5(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void MoveItems(bool ToStorage);
	void SaveSortRule();
	void OnHideDeligate(ENumberInputDialogResult InResult, int32 InNumber);
	void CustomEvent_0(const EYesNoDialogResult Result);
	void OnSaveItemStorage(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void CustomEvent_7(const EYesNoDialogResult Result);
	void SellItemMultiSetting();
	void CustomEvent_8(int32 InRetCode);
	void CustomEvent_3(ENumberInputDialogResult InResult, int32 InNumber);
	void CustomEvent_4(EDialogResult Result);
	void OnSliderChangeTextUpdeta(int32 Value, class UNumberInputDialog_C* CallerDialg);
	void SellItemSingleSetting();
	void CustomEvent_1(ENumberInputDialogResult InResult, int32 InNumber);
	void CustomEvent_2(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void OnSaveItemLockCompleteDelegate(const bool Result, const TArray<struct FSBLockItemData>& LockItemData, const int32 InRetCode);
	void ExecutionSale();
	void MultipleSales();
	void ArrowAnimationStart(bool ToStorage);
	void SaleItem();
	void MoveItem(bool ToStorage);
	void ItemDrop();
	void ItemLock();
	void UpdetaStorageMultipleSalesaAnothe();
	void OnMultipleSelection(class UItemIconBtn_C* InputPin, EStorageGridType Param_LastClickGridType);
	void OmPressItem_Internal(class UItemIconBtn_C* SelectItem, EStorageGridType InType);
	void SetSlotSelect(bool IsSelected, class UGridPanel* InputPin);
	void IconAllSelectfalse();
	void UpdateFilterButton();
	void UpdateItemNums(bool KeepPage);
	void CloseDescription();
	void AssetLoadComplete();
	void Timeout();
	void ItemClickEnter(const struct FInventoryData& Param_InventoryData);
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
	bool IsDownMultipleSelection();
	void GetIconPtr(const struct FInventoryItemData& InventoryItemData, class UItemIconBtn_C** AsItem_Icon_Btn, bool* bInventory, bool* NotHave);
	void FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData);
	void Create_Use_Data(int32 Amount, TArray<struct FSBStorageItemData>* DataList);
	void UpdateKeyGuideText();
	void GetSortRule(ESBItemSortType* SortType);
	void Get_Sort_Mode(int32* ModeNum);
	void Storage_List_Update(bool ScrollReset);
	void SelectItemSwapData();
	void GetStorageNum(int32* Num, int32* Max);
	class FName GetCategoryModeName();
	void Updeta_Ornament_Visual();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StorageShop_C">();
	}
	static class UWBP_StorageShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StorageShop_C>();
	}
};
static_assert(alignof(UWBP_StorageShop_C) == 0x000008, "Wrong alignment on UWBP_StorageShop_C");
static_assert(sizeof(UWBP_StorageShop_C) == 0x000918, "Wrong size on UWBP_StorageShop_C");
static_assert(offsetof(UWBP_StorageShop_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_StorageShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, AnimLoopArrow) == 0x0002B8, "Member 'UWBP_StorageShop_C::AnimLoopArrow' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, AnimLight2) == 0x0002C0, "Member 'UWBP_StorageShop_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, AnimLight1) == 0x0002C8, "Member 'UWBP_StorageShop_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, AnimOut) == 0x0002D0, "Member 'UWBP_StorageShop_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, AnimIn) == 0x0002D8, "Member 'UWBP_StorageShop_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Arrow) == 0x0002E0, "Member 'UWBP_StorageShop_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Arrow1) == 0x0002E8, "Member 'UWBP_StorageShop_C::Arrow1' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Arrow2) == 0x0002F0, "Member 'UWBP_StorageShop_C::Arrow2' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, BgNum1) == 0x0002F8, "Member 'UWBP_StorageShop_C::BgNum1' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, BgStorageSwitcher) == 0x000300, "Member 'UWBP_StorageShop_C::BgStorageSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Btn_ShowHint) == 0x000308, "Member 'UWBP_StorageShop_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CaptureStudioCostume) == 0x000310, "Member 'UWBP_StorageShop_C::CaptureStudioCostume' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CaptureStudioImagine) == 0x000318, "Member 'UWBP_StorageShop_C::CaptureStudioImagine' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CaptureStudioMountImagine) == 0x000320, "Member 'UWBP_StorageShop_C::CaptureStudioMountImagine' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CaptureStudioWeapon) == 0x000328, "Member 'UWBP_StorageShop_C::CaptureStudioWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CmnAnim_LiquidMemoryActive) == 0x000330, "Member 'UWBP_StorageShop_C::CmnAnim_LiquidMemoryActive' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CmnBack) == 0x000338, "Member 'UWBP_StorageShop_C::CmnBack' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CmnImageThrobber) == 0x000340, "Member 'UWBP_StorageShop_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ComboBoxString_Filter) == 0x000348, "Member 'UWBP_StorageShop_C::ComboBoxString_Filter' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ComboBoxString_Sort) == 0x000350, "Member 'UWBP_StorageShop_C::ComboBoxString_Sort' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, CommonPagerWidget) == 0x000358, "Member 'UWBP_StorageShop_C::CommonPagerWidget' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, DateTimeTextForWeaponSticker) == 0x000360, "Member 'UWBP_StorageShop_C::DateTimeTextForWeaponSticker' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, DescriptionEmpty) == 0x000368, "Member 'UWBP_StorageShop_C::DescriptionEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, DescriptionWindow) == 0x000370, "Member 'UWBP_StorageShop_C::DescriptionWindow' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, FilterButton) == 0x000378, "Member 'UWBP_StorageShop_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, FilterWindowParent) == 0x000380, "Member 'UWBP_StorageShop_C::FilterWindowParent' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IconBagSwitcher) == 0x000388, "Member 'UWBP_StorageShop_C::IconBagSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IconShop) == 0x000390, "Member 'UWBP_StorageShop_C::IconShop' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IconStorageSwitcher) == 0x000398, "Member 'UWBP_StorageShop_C::IconStorageSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, InventoryGroup) == 0x0003A0, "Member 'UWBP_StorageShop_C::InventoryGroup' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, InventorySlot) == 0x0003A8, "Member 'UWBP_StorageShop_C::InventorySlot' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ItemDetailsGrp) == 0x0003B0, "Member 'UWBP_StorageShop_C::ItemDetailsGrp' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ItemDetailsNoneText) == 0x0003B8, "Member 'UWBP_StorageShop_C::ItemDetailsNoneText' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Line1) == 0x0003C0, "Member 'UWBP_StorageShop_C::Line1' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, LogoBG) == 0x0003C8, "Member 'UWBP_StorageShop_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, MultipleSelectionGuide) == 0x0003D0, "Member 'UWBP_StorageShop_C::MultipleSelectionGuide' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, MyWalletWidget) == 0x0003D8, "Member 'UWBP_StorageShop_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, OMITInventoryItemNum) == 0x0003E0, "Member 'UWBP_StorageShop_C::OMITInventoryItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, OMITInventoryItemNumMax) == 0x0003E8, "Member 'UWBP_StorageShop_C::OMITInventoryItemNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, OMITStorageItemNum) == 0x0003F0, "Member 'UWBP_StorageShop_C::OMITStorageItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, OMITStorageItemNumMax) == 0x0003F8, "Member 'UWBP_StorageShop_C::OMITStorageItemNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, RetainerBox_0) == 0x000400, "Member 'UWBP_StorageShop_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Root) == 0x000408, "Member 'UWBP_StorageShop_C::Root' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SBRuntimeTextBlock_232) == 0x000410, "Member 'UWBP_StorageShop_C::SBRuntimeTextBlock_232' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ScrollBox_Inventory) == 0x000418, "Member 'UWBP_StorageShop_C::ScrollBox_Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ScrollBox_Storage) == 0x000420, "Member 'UWBP_StorageShop_C::ScrollBox_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SelectProductMsgGrp) == 0x000428, "Member 'UWBP_StorageShop_C::SelectProductMsgGrp' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ShopMenu_InAnime) == 0x000430, "Member 'UWBP_StorageShop_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StorageItemNumOwner) == 0x000438, "Member 'UWBP_StorageShop_C::StorageItemNumOwner' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StorageList) == 0x000440, "Member 'UWBP_StorageShop_C::StorageList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StorageMultipleSelectWindow) == 0x000448, "Member 'UWBP_StorageShop_C::StorageMultipleSelectWindow' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StorageSlot) == 0x000450, "Member 'UWBP_StorageShop_C::StorageSlot' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TabBtn1_Item) == 0x000458, "Member 'UWBP_StorageShop_C::TabBtn1_Item' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TabBtn2_Equipment) == 0x000460, "Member 'UWBP_StorageShop_C::TabBtn2_Equipment' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TabBtn3_Ornament) == 0x000468, "Member 'UWBP_StorageShop_C::TabBtn3_Ornament' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TabGrp) == 0x000470, "Member 'UWBP_StorageShop_C::TabGrp' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Title) == 0x000478, "Member 'UWBP_StorageShop_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TxtBag) == 0x000480, "Member 'UWBP_StorageShop_C::TxtBag' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TxtSelectedTab) == 0x000488, "Member 'UWBP_StorageShop_C::TxtSelectedTab' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TxtStorage) == 0x000490, "Member 'UWBP_StorageShop_C::TxtStorage' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, UIBlocker) == 0x000498, "Member 'UWBP_StorageShop_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, UIBlockerForSystemMessage) == 0x0004A0, "Member 'UWBP_StorageShop_C::UIBlockerForSystemMessage' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, OnClose) == 0x0004A8, "Member 'UWBP_StorageShop_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StorageData) == 0x0004B8, "Member 'UWBP_StorageShop_C::StorageData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, InventoryData) == 0x0004C8, "Member 'UWBP_StorageShop_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, UpdateModelBlocker) == 0x0004D8, "Member 'UWBP_StorageShop_C::UpdateModelBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SaveBlocker) == 0x0004E0, "Member 'UWBP_StorageShop_C::SaveBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SelectItemData) == 0x0004E8, "Member 'UWBP_StorageShop_C::SelectItemData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SwapItemNum) == 0x000548, "Member 'UWBP_StorageShop_C::SwapItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, FilterList_Item) == 0x000550, "Member 'UWBP_StorageShop_C::FilterList_Item' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, FilterList_Equipment) == 0x000560, "Member 'UWBP_StorageShop_C::FilterList_Equipment' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, FilterList_Ornament) == 0x000570, "Member 'UWBP_StorageShop_C::FilterList_Ornament' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, LastClickGridType) == 0x000580, "Member 'UWBP_StorageShop_C::LastClickGridType' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Filters) == 0x000588, "Member 'UWBP_StorageShop_C::Filters' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SwapFilters) == 0x000598, "Member 'UWBP_StorageShop_C::SwapFilters' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsComboSetting) == 0x0005A8, "Member 'UWBP_StorageShop_C::IsComboSetting' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SellItemUniqueIdList) == 0x0005B0, "Member 'UWBP_StorageShop_C::SellItemUniqueIdList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SellItemAmountList) == 0x0005C0, "Member 'UWBP_StorageShop_C::SellItemAmountList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SellIBlocker) == 0x0005D0, "Member 'UWBP_StorageShop_C::SellIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, bEnd) == 0x0005D8, "Member 'UWBP_StorageShop_C::bEnd' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, RotatorParam) == 0x0005E0, "Member 'UWBP_StorageShop_C::RotatorParam' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TickCheck) == 0x0005E8, "Member 'UWBP_StorageShop_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, bDebugMode) == 0x0005E9, "Member 'UWBP_StorageShop_C::bDebugMode' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TotalPrice) == 0x0005EC, "Member 'UWBP_StorageShop_C::TotalPrice' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SwapStorageItemData) == 0x0005F0, "Member 'UWBP_StorageShop_C::SwapStorageItemData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SwapStorageItemData2) == 0x000600, "Member 'UWBP_StorageShop_C::SwapStorageItemData2' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SelectItemOnse) == 0x000610, "Member 'UWBP_StorageShop_C::SelectItemOnse' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SwapLastItem) == 0x000618, "Member 'UWBP_StorageShop_C::SwapLastItem' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, bIsWeaponSticker) == 0x0006B0, "Member 'UWBP_StorageShop_C::bIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, WeaponStickerWeaponId) == 0x0006B4, "Member 'UWBP_StorageShop_C::WeaponStickerWeaponId' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TempItemData) == 0x0006B8, "Member 'UWBP_StorageShop_C::TempItemData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, ItemType) == 0x000718, "Member 'UWBP_StorageShop_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TempNormalWeaponItemData) == 0x000720, "Member 'UWBP_StorageShop_C::TempNormalWeaponItemData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsWeaponStickerUsedWeapon) == 0x000780, "Member 'UWBP_StorageShop_C::IsWeaponStickerUsedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SwapValu) == 0x000784, "Member 'UWBP_StorageShop_C::SwapValu' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, UseBlocker) == 0x000788, "Member 'UWBP_StorageShop_C::UseBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, UseWeaponStickerInfo) == 0x000790, "Member 'UWBP_StorageShop_C::UseWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SelectedItemUniqueId) == 0x0007A0, "Member 'UWBP_StorageShop_C::SelectedItemUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, WeaponStickerWeaponSelectMenuWindow) == 0x0007B0, "Member 'UWBP_StorageShop_C::WeaponStickerWeaponSelectMenuWindow' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TempWeaponStickerName) == 0x0007B8, "Member 'UWBP_StorageShop_C::TempWeaponStickerName' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsWeaponStickerUsedToEquippedWeapon) == 0x0007C8, "Member 'UWBP_StorageShop_C::IsWeaponStickerUsedToEquippedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TempIsExpiredStickerWeapons) == 0x0007C9, "Member 'UWBP_StorageShop_C::TempIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TempStickerUsedWeaponUniqueId) == 0x0007D0, "Member 'UWBP_StorageShop_C::TempStickerUsedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TempExpiredStickerWeaponUniqueIds) == 0x0007E0, "Member 'UWBP_StorageShop_C::TempExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, TempWeaponName) == 0x0007F0, "Member 'UWBP_StorageShop_C::TempWeaponName' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, WeaponStickerRemoveWindow) == 0x000800, "Member 'UWBP_StorageShop_C::WeaponStickerRemoveWindow' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, WeaponStickerRemoveItemUniqueId) == 0x000808, "Member 'UWBP_StorageShop_C::WeaponStickerRemoveItemUniqueId' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsWeaponStickerRemovedFromEquippedWeapon) == 0x000818, "Member 'UWBP_StorageShop_C::IsWeaponStickerRemovedFromEquippedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, AuxiliaryKey) == 0x000820, "Member 'UWBP_StorageShop_C::AuxiliaryKey' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, MouseRight) == 0x000838, "Member 'UWBP_StorageShop_C::MouseRight' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StorageNum) == 0x000850, "Member 'UWBP_StorageShop_C::StorageNum' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StorageNumMax) == 0x000854, "Member 'UWBP_StorageShop_C::StorageNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, InventoryNum) == 0x000858, "Member 'UWBP_StorageShop_C::InventoryNum' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, InventoryNumMax) == 0x00085C, "Member 'UWBP_StorageShop_C::InventoryNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, MoveNow) == 0x000860, "Member 'UWBP_StorageShop_C::MoveNow' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsWeaponStickerInUse) == 0x000861, "Member 'UWBP_StorageShop_C::IsWeaponStickerInUse' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsWeaponStickerIndefinite) == 0x000862, "Member 'UWBP_StorageShop_C::IsWeaponStickerIndefinite' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsWeaponStickerDiscard) == 0x000863, "Member 'UWBP_StorageShop_C::IsWeaponStickerDiscard' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, WeaponItemData) == 0x000868, "Member 'UWBP_StorageShop_C::WeaponItemData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, WeaponStickerName) == 0x0008B8, "Member 'UWBP_StorageShop_C::WeaponStickerName' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, AttachedWeaponStickerId) == 0x0008C8, "Member 'UWBP_StorageShop_C::AttachedWeaponStickerId' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, DetailViewWidget) == 0x0008D0, "Member 'UWBP_StorageShop_C::DetailViewWidget' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsUseWeaponStickerSequence) == 0x0008D8, "Member 'UWBP_StorageShop_C::IsUseWeaponStickerSequence' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, IsRemoveWeaponStickerSequence) == 0x0008D9, "Member 'UWBP_StorageShop_C::IsRemoveWeaponStickerSequence' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, EventHandle) == 0x0008E0, "Member 'UWBP_StorageShop_C::EventHandle' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SwapSelectItemList) == 0x0008E8, "Member 'UWBP_StorageShop_C::SwapSelectItemList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Select_Item_List) == 0x0008F8, "Member 'UWBP_StorageShop_C::Select_Item_List' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, Warning) == 0x000908, "Member 'UWBP_StorageShop_C::Warning' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StoragePageIconMaxNum) == 0x00090C, "Member 'UWBP_StorageShop_C::StoragePageIconMaxNum' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, StoragePageNum) == 0x000910, "Member 'UWBP_StorageShop_C::StoragePageNum' has a wrong offset!");
static_assert(offsetof(UWBP_StorageShop_C, SelectItemCategoryMode) == 0x000914, "Member 'UWBP_StorageShop_C::SelectItemCategoryMode' has a wrong offset!");

}

