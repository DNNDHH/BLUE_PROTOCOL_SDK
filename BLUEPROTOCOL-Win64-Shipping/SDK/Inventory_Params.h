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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Inventory.Inventory_C.TermRequest
	 */
	struct UInventory_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.Update New Button
	 */
	struct UInventory_C_UpdateNewButton_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.Initialize Open Menu Type
	 */
	struct UInventory_C_InitializeOpenMenuType_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.Create Capture Studio
	 */
	struct UInventory_C_CreateCaptureStudio_Params
	{
	public:
		EInventoryType                                             InventoryType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.Enable Capture Studios
	 */
	struct UInventory_C_EnableCaptureStudios_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.GetCostumePartsLocationFromCostumeEquipType
	 */
	struct UInventory_C_GetCostumePartsLocationFromCostumeEquipType_Params
	{
	public:
		ESBCharaEquipType                                          InCostumeType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECharaPartsLocation                                        OutPartsLocation;                                        // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.GetEquipItemCharaCreateInfoFromEquipItemInfo
	 */
	struct UInventory_C_GetEquipItemCharaCreateInfoFromEquipItemInfo_Params
	{
	public:
		struct FCharaEquipItemInfo                                 InEquipItemInfo;                                         // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MWYA[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCharaEquipItemCharaCreateInfo                      OutEquipItemCharaCreateInfo;                             // 0x0030(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function Inventory.Inventory_C.RefreshOnRegister
	 */
	struct UInventory_C_RefreshOnRegister_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.FindInventoryItem
	 */
	struct UInventory_C_FindInventoryItem_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C2NN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FInventoryItemData>                          InventoryItemList;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FInventoryItemData                                  InventoryItem;                                           // 0x0018(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.SortItemList
	 */
	struct UInventory_C_SortItemList_Params
	{
	public:
		TArray<struct FInventoryItemData>                          ItemList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.OnParentTerm
	 */
	struct UInventory_C_OnParentTerm_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnRMShopClosed
	 */
	struct UInventory_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnSubMenuUpdate
	 */
	struct UInventory_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct UInventory_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnSaveItemStorageDelegate_Event_1
	 */
	struct UInventory_C_OnSaveItemStorageDelegate_Event_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LWT9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.QueryTrashItem
	 */
	struct UInventory_C_QueryTrashItem_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_1
	 */
	struct UInventory_C_CustomEvent_1_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.TrashItem
	 */
	struct UInventory_C_TrashItem_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnHideDeligate
	 */
	struct UInventory_C_OnHideDeligate_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZPTL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_8
	 */
	struct UInventory_C_CustomEvent_8_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UpdateModelStudio
	 */
	struct UInventory_C_UpdateModelStudio_Params
	{
	public:
		struct FInventoryItemData                                  InInventoryItemData;                                     // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.AssetLoadComplete
	 */
	struct UInventory_C_AssetLoadComplete_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.Timeout
	 */
	struct UInventory_C_Timeout_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnClickedItemButton_Event
	 */
	struct UInventory_C_OnClickedItemButton_Event_Params
	{
	public:
		struct FInventoryData                                      InventoryData;                                           // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.Init BaseInventories
	 */
	struct UInventory_C_InitBaseInventories_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnClickedButton_Type
	 */
	struct UInventory_C_OnClickedButton_Type_Params
	{
	public:
		EDescripionButtonType                                      Button;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.Item Equipment Weapon
	 */
	struct UInventory_C_ItemEquipmentWeapon_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.UiInputBlock
	 */
	struct UInventory_C_UiInputBlock_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.OnWeaponEquipDelegate_イベント_1
	 */
	struct UInventory_C_OnWeaponEquipDelegate__1_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1YAJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.WeaponEquipmented
	 */
	struct UInventory_C_WeaponEquipmented_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.Equipment
	 */
	struct UInventory_C_Equipment_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.Item Equipment Costume
	 */
	struct UInventory_C_ItemEquipmentCostume_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnSaveEquipInfo
	 */
	struct UInventory_C_OnSaveEquipInfo_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UploadEquipment
	 */
	struct UInventory_C_UploadEquipment_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnUploded Costume Data
	 */
	struct UInventory_C_OnUplodedCostumeData_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.OnEndRegister
	 */
	struct UInventory_C_OnEndRegister_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnClick_MenuButton
	 */
	struct UInventory_C_OnClick_MenuButton_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.ItemLock
	 */
	struct UInventory_C_ItemLock_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnPressItemButton
	 */
	struct UInventory_C_OnPressItemButton_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInventoryData                                      InventoryData;                                           // 0x0008(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.OnSaveCharaCostumeEquipDelegate_イベント
	 */
	struct UInventory_C_OnSaveCharaCostumeEquipDelegate__Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XRHX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0008(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.DestroyNewInventory
	 */
	struct UInventory_C_DestroyNewInventory_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UInventory_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UpdateCommandMenuBgHelp
	 */
	struct UInventory_C_UpdateCommandMenuBgHelp_Params
	{
	public:
		EInventoryType                                             InInventoryType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.SetSubMenuVisiblity
	 */
	struct UInventory_C_SetSubMenuVisiblity_Params
	{
	public:
		class UCanvasPanel*                                        SubMenu;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCommandMenuCommonSubButtonList_C*                   Tab;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StorageFlag;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InventoryFlag;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UInventory_C_BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.OnSaveItemLockCompleteDelegate
	 */
	struct UInventory_C_OnSaveItemLockCompleteDelegate_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SEDY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLockItemData>                             LockItemData;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InRetCode;                                               // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UpdateSubMenuGrp
	 */
	struct UInventory_C_UpdateSubMenuGrp_Params
	{
	public:
		EInventoryType                                             InputPin;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UseItem
	 */
	struct UInventory_C_UseItem_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.ItemUseAfter
	 */
	struct UInventory_C_ItemUseAfter_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KKW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.UseItem_Internal
	 */
	struct UInventory_C_UseItem_Internal_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UseItemAfter
	 */
	struct UInventory_C_UseItemAfter_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_2
	 */
	struct UInventory_C_CustomEvent_2_Params
	{
	public:
		ENumberInputDialogResult                                   NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3QWS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_ItemBox_C*                                      ItemBox;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.IQStartCheck
	 */
	struct UInventory_C_IQStartCheck_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.NowBookmarkUpdate
	 */
	struct UInventory_C_NowBookmarkUpdate_Params
	{
	public:
		EInventoryType                                             Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UseExp
	 */
	struct UInventory_C_UseExp_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_6
	 */
	struct UInventory_C_CustomEvent_6_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EKH9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStorageItemBoxResultData                         InItemBoxResultData;                                     // 0x0008(0x0118)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.UseItemBox
	 */
	struct UInventory_C_UseItemBox_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.UseWeaponSticker
	 */
	struct UInventory_C_UseWeaponSticker_Params
	{
	public:
		struct FAppearanceWeaponSticker                            InWeaponStickerInfo;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class FString                                              InWeaponStickerUniqueId;                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.OnUseWeaponStickerDecideEvent
	 */
	struct UInventory_C_OnUseWeaponStickerDecideEvent_Params
	{
	public:
		class FString                                              InSelectedWeaponUniqueItemId;                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.OnWeaponStickerWeaponSelectWindowHideEndEvent
	 */
	struct UInventory_C_OnWeaponStickerWeaponSelectWindowHideEndEvent_Params
	{
	public:
		bool                                                       InIsHideWindowCalledByDecide;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature
	 */
	struct UInventory_C_BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBWeaponItemData                                   InWeaponItemData;                                        // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Inventory.Inventory_C.OnWeaponStickerRemoveDecideEvent
	 */
	struct UInventory_C_OnWeaponStickerRemoveDecideEvent_Params
	{
	public:
		bool                                                       InIsStickerDiscardSelected;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.OnWeaponStickerRemoveWindowHideEnd
	 */
	struct UInventory_C_OnWeaponStickerRemoveWindowHideEnd_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnUseWeaponStickerDelegateEvent
	 */
	struct UInventory_C_OnUseWeaponStickerDelegateEvent_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7N1I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InStickerUsedWeaponUniqueId;                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsExpiredStickerWeapons;                               // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_525F[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBWeaponItemData>                           InExpiredStickerWeaponItemDatas;                         // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.OnRemoveWeaponStickerDelegateEvent
	 */
	struct UInventory_C_OnRemoveWeaponStickerDelegateEvent_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YUXJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InStickerRemovedWeaponUniqueId;                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsExpiredStickerWeapons;                               // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XTDS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBWeaponItemData>                           InExpiredStickerWeaponItemDatas;                         // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature
	 */
	struct UInventory_C_BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsInUse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.EndSystemMessage
	 */
	struct UInventory_C_EndSystemMessage_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.ShowExpiredWeaponStickerSystemMessage
	 */
	struct UInventory_C_ShowExpiredWeaponStickerSystemMessage_Params
	{
	public:
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              InEquippedWeaponUniqueId;                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InActivateWeaponModelRotate;                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Inventory.Inventory_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog
	 */
	struct UInventory_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog_Params
	{
	public:
		class FString                                              InStickerAttachedWeaponUniqueId;                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_5
	 */
	struct UInventory_C_CustomEvent_5_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FIN9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryItemData                                  NewParam;                                                // 0x0008(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.DetailView
	 */
	struct UInventory_C_DetailView_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnCloseDetailMenu
	 */
	struct UInventory_C_OnCloseDetailMenu_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.UseLeve
	 */
	struct UInventory_C_UseLeve_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_3
	 */
	struct UInventory_C_CustomEvent_3_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VNV1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.SetLevelAfter
	 */
	struct UInventory_C_SetLevelAfter_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ARJC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_ExpIncrease_C*                                  CallerDialg;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.Construct
	 */
	struct UInventory_C_Construct_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnAnimationFinished
	 */
	struct UInventory_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.OnShortcutIconSelected
	 */
	struct UInventory_C_OnShortcutIconSelected_Params
	{
	public:
		EShortcutIconType                                          InShortcutKey;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.Destruct
	 */
	struct UInventory_C_Destruct_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.ShowErrorMessageDialog
	 */
	struct UInventory_C_ShowErrorMessageDialog_Params
	{
	public:
		EInventoryMessageType                                      InMessageType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NYPC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.BookmarkUpdateRequest
	 */
	struct UInventory_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.UpdateBookmarkStatusButton
	 */
	struct UInventory_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.UnbindWeaponStickerEventDelegates
	 */
	struct UInventory_C_UnbindWeaponStickerEventDelegates_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.OnSameMenuBookmarkAccessNew
	 */
	struct UInventory_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_4
	 */
	struct UInventory_C_CustomEvent_4_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.CustomEvent_7
	 */
	struct UInventory_C_CustomEvent_7_Params
	{	};

	/**
	 * Function Inventory.Inventory_C.ExecuteUbergraph_Inventory
	 */
	struct UInventory_C_ExecuteUbergraph_Inventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Inventory.Inventory_C.OnClose__DelegateSignature
	 */
	struct UInventory_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
