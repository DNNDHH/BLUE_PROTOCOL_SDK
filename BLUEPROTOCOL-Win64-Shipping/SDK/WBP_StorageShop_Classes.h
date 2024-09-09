#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_StorageShop.WBP_StorageShop_C
	 * Size -> 0x0695 (FullSize[0x0945] - InheritedSize[0x02B0])
	 */
	class UWBP_StorageShop_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimLoopArrow;                                           // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimLight2;                                              // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimLight1;                                              // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        Arrow;                                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Arrow1;                                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Arrow2;                                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgNum1;                                                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     BgStorageSwitcher;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_ShowHint;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioCostume;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioImagine;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioMountImagine;                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioOrnament;                                   // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioWeapon;                                     // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnAnim_LiquidMemoryActive_C*                       CmnAnim_LiquidMemoryActive;                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack;                                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 CmnImageThrobber;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  ComboBoxString_Filter;                                   // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  ComboBoxString_Sort;                                     // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonPagerWidget_C*                                CommonPagerWidget;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                DateTimeTextForWeaponSticker;                            // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DescriptionEmpty;                                        // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDescriptionWindow_C*                                DescriptionWindow;                                       // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterButton_C*                                     FilterButton;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FilterWindowParent;                                      // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     IconBagSwitcher;                                         // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconShop;                                                // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     IconStorageSwitcher;                                     // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        InventoryGroup;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          InventorySlot;                                           // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ItemDetailsGrp;                                          // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 ItemDetailsNoneText;                                     // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line1;                                                   // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LogoBG;                                                  // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MultipleSelectionGuide;                                  // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OMITInventoryItemNum;                                    // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OMITInventoryItemNumMax;                                 // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OMITStorageItemNum;                                      // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OMITStorageItemNumMax;                                   // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Root;                                                    // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_233;                                  // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Inventory;                                     // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Storage;                                       // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SelectProductMsgGrp;                                     // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopMenu_InAnime_C*                                 ShopMenu_InAnime;                                        // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      StorageItemNumOwner;                                     // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_StorageRowListOwner_C*                          StorageList;                                             // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MultiDescription_C*                             StorageMultipleSelectWindow;                             // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          StorageSlot;                                             // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopCmnBtn1_C*                                      TabBtn1_Item;                                            // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopCmnBtn1_C*                                      TabBtn2_Equipment;                                       // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopCmnBtn1_C*                                      TabBtn3_Ornament;                                        // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TabGrp;                                                  // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Title;                                                   // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtBag;                                                  // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtSelectedTab;                                          // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtStorage;                                              // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerForSystemMessage;                               // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FInventoryData>                              StorageData;                                             // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FInventoryData>                              InventoryData;                                           // 0x04D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UUIBlocker_C*                                        UpdateModelBlocker;                                      // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        SaveBlocker;                                             // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryItemData                                  SelectItemData;                                          // 0x04F0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    SwapItemNum;                                             // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8LI5[0x4];                                   // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FilterList_Item;                                         // 0x0558(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        FilterList_Equipment;                                    // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        FilterList_Ornament;                                     // 0x0578(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		EStorageGridType                                           LastClickGridType;                                       // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2DJ8[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0590(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FFilterGroup>                                SwapFilters;                                             // 0x05A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsComboSetting;                                          // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GLFW[0x7];                                   // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      SellItemUniqueIdList;                                    // 0x05B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            SellItemAmountList;                                      // 0x05C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UUIBlocker_C*                                        SellIBlocker;                                            // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnd;                                                    // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VHE2[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            RotatorParam;                                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TickCheck;                                               // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugMode;                                              // 0x05F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZCJO[0x2];                                   // 0x05F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalPrice;                                              // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSBStorageItemData>                          SwapStorageItemData;                                     // 0x05F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBStorageItemData>                          SwapStorageItemData2;                                    // 0x0608(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UItemIconBtn_C*                                      SelectItemOnse;                                          // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryData                                      SwapLastItem;                                            // 0x0620(0x0098) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsWeaponSticker;                                        // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_STCI[0x3];                                   // 0x06B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponStickerWeaponId;                                   // 0x06BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryItemData                                  TempItemData;                                            // 0x06C0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		EItemType                                                  ItemType;                                                // 0x0720(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_014X[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryItemData                                  TempNormalWeaponItemData;                                // 0x0728(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsWeaponStickerUsedWeapon;                               // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UWOQ[0x3];                                   // 0x0789(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SwapValu;                                                // 0x078C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        UseBlocker;                                              // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAppearanceWeaponSticker                            UseWeaponStickerInfo;                                    // 0x0798(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FString                                              SelectedItemUniqueId;                                    // 0x07A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UAppearanceWeaponStickerWeaponSelectMenuWindow_C*    WeaponStickerWeaponSelectMenuWindow;                     // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              TempWeaponStickerName;                                   // 0x07C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsWeaponStickerUsedToEquippedWeapon;                     // 0x07D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TempIsExpiredStickerWeapons;                             // 0x07D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QDG8[0x6];                                   // 0x07D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TempStickerUsedWeaponUniqueId;                           // 0x07D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      TempExpiredStickerWeaponUniqueIds;                       // 0x07E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              TempWeaponName;                                          // 0x07F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UAppearanceWeaponStickerRemoveWindow_C*              WeaponStickerRemoveWindow;                               // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              WeaponStickerRemoveItemUniqueId;                         // 0x0810(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsWeaponStickerRemovedFromEquippedWeapon;                // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DKK6[0x7];                                   // 0x0821(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                AuxiliaryKey;                                            // 0x0828(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                MouseRight;                                              // 0x0840(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    StorageNum;                                              // 0x0858(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StorageNumMax;                                           // 0x085C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InventoryNum;                                            // 0x0860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InventoryNumMax;                                         // 0x0864(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MoveNow;                                                 // 0x0868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWeaponStickerInUse;                                    // 0x0869(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWeaponStickerIndefinite;                               // 0x086A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWeaponStickerDiscard;                                  // 0x086B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7PK6[0x4];                                   // 0x086C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBWeaponItemData                                   WeaponItemData;                                          // 0x0870(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              WeaponStickerName;                                       // 0x08E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    AttachedWeaponStickerId;                                 // 0x08F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ANW5[0x4];                                   // 0x08FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_ProductDetailMenu_C*                            DetailViewWidget;                                        // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUseWeaponStickerSequence;                              // 0x0908(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRemoveWeaponStickerSequence;                           // 0x0909(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TALJ[0x6];                                   // 0x090A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        EventHandle;                                             // 0x0910(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      SwapSelectItemList;                                      // 0x0918(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FInventoryItemData>                          SelectItemList;                                          // 0x0928(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Warning;                                                 // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P1EZ[0x3];                                   // 0x0939(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StoragePageIconMaxNum;                                   // 0x093C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StoragePageNum;                                          // 0x0940(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESelectItemCategoryMode                                    SelectItemCategoryMode;                                  // 0x0944(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdetaOrnamentVisual();
		class FName GetCategoryModeName();
		void GetStorageNum(int32_t* Num, int32_t* Max);
		void SelectItemSwapData();
		void StorageListUpdate(bool ScrollReset);
		void GetSortMode(int32_t* ModeNum);
		void GetSortRule(ESBItemSortType* SortType);
		void UpdateKeyGuideText();
		void CreateUseData(int32_t Amount, TArray<struct FSBStorageItemData>* DataList);
		void FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData);
		void GetIconPtr(const struct FInventoryItemData& InventoryItemData, class UItemIconBtn_C** AsItemIconBtn, bool* bInventory, bool* NotHave);
		bool IsDownMultipleSelection();
		void SetIconSelectItems(class UItemIconBtn_C* InputPin, bool* bAdd);
		void SearchInventoryItemData(EStorageGridType Index, class UItemIconBtn_C* Target, struct FInventoryData* OutputPin, bool* enable);
		class UWidget* On_ComboBoxString_Filter_GenerateWidget_1(const class FString& item);
		class UWidget* On_ComboBoxString_Sort_GenerateWidget_1(const class FString& item);
		class USBOwnItemListContainer* GetItemListContainer(EStorageGridType InType);
		class USBOwnItemListContainer* GetInventoryBrunch();
		void RandomPlayAnimation2();
		void RandomPlayAnimation();
		void UpdeteItemSlotList(ESelectItemCategoryMode SelectItemCategoryMode);
		void GetFilterType(EItemFilterType* FilterType);
		void ItemClickEnter(const struct FInventoryData& InventoryData);
		void Timeout();
		void AssetLoadComplete();
		void CloseDescription();
		void UpdateItemNums(bool KeepPage);
		void UpdateFilterButton();
		void IconAllSelectfalse();
		void SetSlotSelect(bool IsSelected, class UGridPanel* InputPin);
		void OmPressItem_Internal(class UItemIconBtn_C* SelectItem, EStorageGridType InType);
		void OnMultipleSelection(class UItemIconBtn_C* InputPin, EStorageGridType LastClickGridType);
		void UpdetaStorageMultipleSalesaAnothe();
		void ItemLock();
		void ItemDrop();
		void MoveItem(bool ToStorage);
		void SaleItem();
		void ArrowAnimationStart(bool ToStorage);
		void MultipleSales();
		void ExecutionSale();
		void OnSaveItemLockCompleteDelegate(bool Result, TArray<struct FSBLockItemData> LockItemData, int32_t InRetCode);
		void CustomEvent_3(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void CustomEvent_2(ENumberInputDialogResult InResult, int32_t InNumber);
		void SellItemSingleSetting();
		void OnSliderChangeTextUpdeta(int32_t Value, class UNumberInputDialog_C* CallerDialg);
		void CustomEvent_5(EDialogResult Result);
		void CustomEvent_4(ENumberInputDialogResult InResult, int32_t InNumber);
		void CustomEvent_9(int32_t InRetCode);
		void SellItemMultiSetting();
		void CustomEvent_8(EYesNoDialogResult Result);
		void OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void CustomEvent_1(EYesNoDialogResult Result);
		void OnHideDeligate(ENumberInputDialogResult InResult, int32_t InNumber);
		void SaveSortRule();
		void MoveItems(bool ToStorage);
		void CustomEvent_6(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void MoveAfter(int32_t RetCode);
		void SwitchMultipleSelection();
		void CustomEvent_10(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void TrashItem();
		void CustomEvent_11(EYesNoDialogResult Result);
		void SendSaveItemsDrop(TArray<struct FSBStorageItemData>* InputPin);
		void DropCheck();
		void RequestWeaponModelLoadFromWeaponStickerInUseButtonInput();
		void ItemUse();
		void UseExp(int32_t Amount);
		void ItemUseAfter(int32_t InRetCode);
		void CustomEvent_7(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox);
		void CustomEvent_13(int32_t InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData);
		void UseItemBox();
		void CustomEvent_14(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void CustomEvent_15(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam);
		void UseWeaponSticker(const struct FAppearanceWeaponSticker& InWeaponStickerInfo, const class FString& InWeaponStickerUniqueId);
		void OnUseWeaponStickerDecideEvent(const class FString& InSelectedWeaponUniqueItemId);
		void OnWeaponStickerWeaponSelectWindowHideEndEvent(bool InIsHideWindowCalledByDecide);
		void OnWeaponStickerRemoveDecideEvent(bool InIsStickerDiscardSelected);
		void OnWeaponStickerRemoveWindowHideEnd();
		void OnUseWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerUsedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas);
		void OnRemoveWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerRemovedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas);
		void EndSystemMessage();
		void ShowExpiredWeaponStickerSystemMessage(TArray<class FString> InExpiredStickerWeaponUniqueIds, const class FString& InEquippedWeaponUniqueId, bool InActivateWeaponModelRotate);
		void ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog(const class FString& InStickerAttachedWeaponUniqueId);
		void UiInputBlock(bool IsVisible);
		void Update_LiquidMemoryActive();
		void BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
		void DestWeaponStickerEvents();
		void DetailView();
		void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
		void OnOwnItemAmountChanged(const struct FSBChangeItemAmountParam& InParam);
		void CheckWarning(const class FString& UniqueId, int32_t StorageNumber, EItemType Tipe);
		void CustomEvent_16(EYesNoDialogResult Result);
		void CustomEvent_17(EYesNoDialogResult Result);
		void CustomEvent_18(EYesNoDialogResult Result);
		void CustomEvent_19(EYesNoDialogResult Result);
		void UseLeve();
		void CustomEvent_20(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void WBP_ExpIncreaseEnd(ENumberInputDialogResult InResult, int32_t InNumber);
		void SetLevelAfter(int32_t Value, class UWBP_ExpIncrease_C* CallerDialg);
		void OnPress_Cancel();
		void BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(EDescripionButtonType ButtonType);
		void BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature(const struct FInventoryData& OnItemClick);
		void BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId);
		void BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId);
		void BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2();
		void BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature(int32_t InTotalPrice, TArray<struct FInventoryItemData>* InSelectItemList);
		void BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature(const struct FInventoryData& NewParam);
		void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList);
		void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList);
		void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList);
		void OnPressItem_Inventory(class UItemIconBtn_C* SelectItem);
		void OnPressItem_Storage(class UItemIconBtn_C* SelectItem);
		void OnPressRight_Inventory(class UItemIconBtn_C* SelectItem);
		void OnPressRight_Storage(class UItemIconBtn_C* SelectItem);
		void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature();
		void BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
		void BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData);
		void TryEnd();
		void CloseStorageMultipleSelectWindow();
		void BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void IconScrollVisible(class UGridPanel* Slot, float Offset);
		void SlotSelectRevival(class UGridPanel* Grid);
		void BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId);
		void Construct();
		void Destruct();
		void ResetGrid(EStorageGridType InType, bool ScrollReset);
		void CreateComboBox();
		void onAnimTimer();
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
		void CustomEvent_12(int32_t InRetCode);
		void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void TryCreateStorageGridIcon();
		void UpdateSortBox();
		void UpdatefilterBox();
		void UpdetaPage(bool Visible, bool KeepPage);
		void BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32_t PageCurrent);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_StorageShop(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
