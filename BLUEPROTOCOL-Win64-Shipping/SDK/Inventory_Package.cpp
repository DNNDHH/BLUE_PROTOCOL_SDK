/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply UInventory_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.TermRequest");
		
		UInventory_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Update New Button
	 * 		Flags  -> ()
	 */
	void UInventory_C::UpdateNewButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Update New Button");
		
		UInventory_C_UpdateNewButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Initialize Open Menu Type
	 * 		Flags  -> ()
	 */
	void UInventory_C::InitializeOpenMenuType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Initialize Open Menu Type");
		
		UInventory_C_InitializeOpenMenuType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Create Capture Studio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryType                                     InventoryType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::CreateCaptureStudio(EInventoryType InventoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Create Capture Studio");
		
		UInventory_C_CreateCaptureStudio_Params params {};
		params.InventoryType = InventoryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Enable Capture Studios
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::EnableCaptureStudios(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Enable Capture Studios");
		
		UInventory_C_EnableCaptureStudios_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.GetCostumePartsLocationFromCostumeEquipType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InCostumeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECharaPartsLocation                                OutPartsLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::GetCostumePartsLocationFromCostumeEquipType(ESBCharaEquipType InCostumeType, bool* IsValid, ECharaPartsLocation* OutPartsLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.GetCostumePartsLocationFromCostumeEquipType");
		
		UInventory_C_GetCostumePartsLocationFromCostumeEquipType_Params params {};
		params.InCostumeType = InCostumeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutPartsLocation != nullptr)
			*OutPartsLocation = params.OutPartsLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.GetEquipItemCharaCreateInfoFromEquipItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipItemInfo                         InEquipItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCharaEquipItemCharaCreateInfo              OutEquipItemCharaCreateInfo                                (Parm, OutParm)
	 */
	void UInventory_C::GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, ESBCharaEquipType InEquipType, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.GetEquipItemCharaCreateInfoFromEquipItemInfo");
		
		UInventory_C_GetEquipItemCharaCreateInfoFromEquipItemInfo_Params params {};
		params.InEquipItemInfo = InEquipItemInfo;
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutEquipItemCharaCreateInfo != nullptr)
			*OutEquipItemCharaCreateInfo = params.OutEquipItemCharaCreateInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.RefreshOnRegister
	 * 		Flags  -> ()
	 */
	void UInventory_C::RefreshOnRegister()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.RefreshOnRegister");
		
		UInventory_C_RefreshOnRegister_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.FindInventoryItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FInventoryItemData>                  InventoryItemList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FInventoryItemData                          InventoryItem                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UInventory_C::FindInventoryItem(int32_t ItemIndex, TArray<struct FInventoryItemData>* InventoryItemList, struct FInventoryItemData* InventoryItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.FindInventoryItem");
		
		UInventory_C_FindInventoryItem_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryItemList != nullptr)
			*InventoryItemList = params.InventoryItemList;
		if (InventoryItem != nullptr)
			*InventoryItem = params.InventoryItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.SortItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::SortItemList(TArray<struct FInventoryItemData>* ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.SortItemList");
		
		UInventory_C_SortItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void UInventory_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnParentTerm");
		
		UInventory_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void UInventory_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnRMShopClosed");
		
		UInventory_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnSubMenuUpdate");
		
		UInventory_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void UInventory_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ResetMouseCursorTypeToDefaultRequest");
		
		UInventory_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnSaveItemStorageDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::OnSaveItemStorageDelegate_Event_1(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnSaveItemStorageDelegate_Event_1");
		
		UInventory_C_OnSaveItemStorageDelegate_Event_1_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.QueryTrashItem
	 * 		Flags  -> ()
	 */
	void UInventory_C::QueryTrashItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.QueryTrashItem");
		
		UInventory_C_QueryTrashItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::CustomEvent_1(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_1");
		
		UInventory_C_CustomEvent_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.TrashItem
	 * 		Flags  -> ()
	 */
	void UInventory_C::TrashItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.TrashItem");
		
		UInventory_C_TrashItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnHideDeligate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnHideDeligate(ENumberInputDialogResult InResult, int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnHideDeligate");
		
		UInventory_C_OnHideDeligate_Params params {};
		params.InResult = InResult;
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::CustomEvent_8(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_8");
		
		UInventory_C_CustomEvent_8_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UpdateModelStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InInventoryItemData                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UInventory_C::UpdateModelStudio(const struct FInventoryItemData& InInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UpdateModelStudio");
		
		UInventory_C_UpdateModelStudio_Params params {};
		params.InInventoryItemData = InInventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.AssetLoadComplete
	 * 		Flags  -> ()
	 */
	void UInventory_C::AssetLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.AssetLoadComplete");
		
		UInventory_C_AssetLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Timeout
	 * 		Flags  -> ()
	 */
	void UInventory_C::Timeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Timeout");
		
		UInventory_C_Timeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnClickedItemButton_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UInventory_C::OnClickedItemButton_Event(const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnClickedItemButton_Event");
		
		UInventory_C_OnClickedItemButton_Event_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Init BaseInventories
	 * 		Flags  -> ()
	 */
	void UInventory_C::InitBaseInventories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Init BaseInventories");
		
		UInventory_C_InitBaseInventories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnClickedButton_Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnClickedButton_Type(EDescripionButtonType Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnClickedButton_Type");
		
		UInventory_C_OnClickedButton_Type_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Item Equipment Weapon
	 * 		Flags  -> ()
	 */
	void UInventory_C::ItemEquipmentWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Item Equipment Weapon");
		
		UInventory_C_ItemEquipmentWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UiInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::UiInputBlock(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UiInputBlock");
		
		UInventory_C_UiInputBlock_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnWeaponEquipDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::OnWeaponEquipDelegate__1(int32_t RetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnWeaponEquipDelegate_イベント_1");
		
		UInventory_C_OnWeaponEquipDelegate__1_Params params {};
		params.RetCode = RetCode;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.WeaponEquipmented
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::WeaponEquipmented(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.WeaponEquipmented");
		
		UInventory_C_WeaponEquipmented_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Equipment
	 * 		Flags  -> ()
	 */
	void UInventory_C::Equipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Equipment");
		
		UInventory_C_Equipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Item Equipment Costume
	 * 		Flags  -> ()
	 */
	void UInventory_C::ItemEquipmentCostume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Item Equipment Costume");
		
		UInventory_C_ItemEquipmentCostume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnSaveEquipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnSaveEquipInfo(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnSaveEquipInfo");
		
		UInventory_C_OnSaveEquipInfo_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UploadEquipment
	 * 		Flags  -> ()
	 */
	void UInventory_C::UploadEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UploadEquipment");
		
		UInventory_C_UploadEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnUploded Costume Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::OnUplodedCostumeData(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnUploded Costume Data");
		
		UInventory_C_OnUplodedCostumeData_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnEndRegister
	 * 		Flags  -> ()
	 */
	void UInventory_C::OnEndRegister()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnEndRegister");
		
		UInventory_C_OnEndRegister_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnClick_MenuButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnClick_MenuButton(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnClick_MenuButton");
		
		UInventory_C_OnClick_MenuButton_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.ItemLock
	 * 		Flags  -> ()
	 */
	void UInventory_C::ItemLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ItemLock");
		
		UInventory_C_ItemLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnPressItemButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UInventory_C::OnPressItemButton(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnPressItemButton");
		
		UInventory_C_OnPressItemButton_Params params {};
		params.SelectButton = SelectButton;
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnSaveCharaCostumeEquipDelegate_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::OnSaveCharaCostumeEquipDelegate_(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnSaveCharaCostumeEquipDelegate_イベント");
		
		UInventory_C_OnSaveCharaCostumeEquipDelegate__Params params {};
		params.RetCode = RetCode;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.DestroyNewInventory
	 * 		Flags  -> ()
	 */
	void UInventory_C::DestroyNewInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.DestroyNewInventory");
		
		UInventory_C_DestroyNewInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UInventory_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UpdateCommandMenuBgHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryType                                     InInventoryType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::UpdateCommandMenuBgHelp(EInventoryType InInventoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UpdateCommandMenuBgHelp");
		
		UInventory_C_UpdateCommandMenuBgHelp_Params params {};
		params.InInventoryType = InInventoryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.SetSubMenuVisiblity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                SubMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommandMenuCommonSubButtonList_C*           Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StorageFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InventoryFlag                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::SetSubMenuVisiblity(class UCanvasPanel* SubMenu, class UCommandMenuCommonSubButtonList_C* Tab, bool StorageFlag, bool InventoryFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.SetSubMenuVisiblity");
		
		UInventory_C_SetSubMenuVisiblity_Params params {};
		params.SubMenu = SubMenu;
		params.Tab = Tab;
		params.StorageFlag = StorageFlag;
		params.InventoryFlag = InventoryFlag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UInventory_C_BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnSaveItemLockCompleteDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBLockItemData>                     LockItemData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnSaveItemLockCompleteDelegate(bool Result, TArray<struct FSBLockItemData> LockItemData, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnSaveItemLockCompleteDelegate");
		
		UInventory_C_OnSaveItemLockCompleteDelegate_Params params {};
		params.Result = Result;
		params.LockItemData = LockItemData;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UpdateSubMenuGrp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryType                                     InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::UpdateSubMenuGrp(EInventoryType InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UpdateSubMenuGrp");
		
		UInventory_C_UpdateSubMenuGrp_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UseItem
	 * 		Flags  -> ()
	 */
	void UInventory_C::UseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UseItem");
		
		UInventory_C_UseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.ItemUseAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::ItemUseAfter(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ItemUseAfter");
		
		UInventory_C_ItemUseAfter_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UseItem_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::UseItem_Internal(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UseItem_Internal");
		
		UInventory_C_UseItem_Internal_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UseItemAfter
	 * 		Flags  -> ()
	 */
	void UInventory_C::UseItemAfter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UseItemAfter");
		
		UInventory_C_UseItemAfter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_ItemBox_C*                              ItemBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::CustomEvent_2(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_2");
		
		UInventory_C_CustomEvent_2_Params params {};
		params.NewParam = NewParam;
		params.ItemBox = ItemBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.IQStartCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::IQStartCheck(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.IQStartCheck");
		
		UInventory_C_IQStartCheck_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.NowBookmarkUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryType                                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::NowBookmarkUpdate(EInventoryType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.NowBookmarkUpdate");
		
		UInventory_C_NowBookmarkUpdate_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UseExp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::UseExp(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UseExp");
		
		UInventory_C_UseExp_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBStorageItemBoxResultData                 InItemBoxResultData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::CustomEvent_6(int32_t InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_6");
		
		UInventory_C_CustomEvent_6_Params params {};
		params.InRetCode = InRetCode;
		params.InItemBoxResultData = InItemBoxResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UseItemBox
	 * 		Flags  -> ()
	 */
	void UInventory_C::UseItemBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UseItemBox");
		
		UInventory_C_UseItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UseWeaponSticker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAppearanceWeaponSticker                    InWeaponStickerInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class FString                                      InWeaponStickerUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInventory_C::UseWeaponSticker(const struct FAppearanceWeaponSticker& InWeaponStickerInfo, const class FString& InWeaponStickerUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UseWeaponSticker");
		
		UInventory_C_UseWeaponSticker_Params params {};
		params.InWeaponStickerInfo = InWeaponStickerInfo;
		params.InWeaponStickerUniqueId = InWeaponStickerUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnUseWeaponStickerDecideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSelectedWeaponUniqueItemId                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnUseWeaponStickerDecideEvent(const class FString& InSelectedWeaponUniqueItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnUseWeaponStickerDecideEvent");
		
		UInventory_C_OnUseWeaponStickerDecideEvent_Params params {};
		params.InSelectedWeaponUniqueItemId = InSelectedWeaponUniqueItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnWeaponStickerWeaponSelectWindowHideEndEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHideWindowCalledByDecide                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::OnWeaponStickerWeaponSelectWindowHideEndEvent(bool InIsHideWindowCalledByDecide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnWeaponStickerWeaponSelectWindowHideEndEvent");
		
		UInventory_C_OnWeaponStickerWeaponSelectWindowHideEndEvent_Params params {};
		params.InIsHideWindowCalledByDecide = InIsHideWindowCalledByDecide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInventory_C::BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature");
		
		UInventory_C_BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnWeaponStickerRemoveDecideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStickerDiscardSelected                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::OnWeaponStickerRemoveDecideEvent(bool InIsStickerDiscardSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnWeaponStickerRemoveDecideEvent");
		
		UInventory_C_OnWeaponStickerRemoveDecideEvent_Params params {};
		params.InIsStickerDiscardSelected = InIsStickerDiscardSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnWeaponStickerRemoveWindowHideEnd
	 * 		Flags  -> ()
	 */
	void UInventory_C::OnWeaponStickerRemoveWindowHideEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnWeaponStickerRemoveWindowHideEnd");
		
		UInventory_C_OnWeaponStickerRemoveWindowHideEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnUseWeaponStickerDelegateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InStickerUsedWeaponUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsExpiredStickerWeapons                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBWeaponItemData>                   InExpiredStickerWeaponItemDatas                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::OnUseWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerUsedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnUseWeaponStickerDelegateEvent");
		
		UInventory_C_OnUseWeaponStickerDelegateEvent_Params params {};
		params.InRetCode = InRetCode;
		params.InStickerUsedWeaponUniqueId = InStickerUsedWeaponUniqueId;
		params.InIsExpiredStickerWeapons = InIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredStickerWeaponItemDatas = InExpiredStickerWeaponItemDatas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnRemoveWeaponStickerDelegateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InStickerRemovedWeaponUniqueId                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsExpiredStickerWeapons                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBWeaponItemData>                   InExpiredStickerWeaponItemDatas                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInventory_C::OnRemoveWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerRemovedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnRemoveWeaponStickerDelegateEvent");
		
		UInventory_C_OnRemoveWeaponStickerDelegateEvent_Params params {};
		params.InRetCode = InRetCode;
		params.InStickerRemovedWeaponUniqueId = InStickerRemovedWeaponUniqueId;
		params.InIsExpiredStickerWeapons = InIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredStickerWeaponItemDatas = InExpiredStickerWeaponItemDatas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsInUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature");
		
		UInventory_C_BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params params {};
		params.InIsInUse = InIsInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.EndSystemMessage
	 * 		Flags  -> ()
	 */
	void UInventory_C::EndSystemMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.EndSystemMessage");
		
		UInventory_C_EndSystemMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.ShowExpiredWeaponStickerSystemMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      InEquippedWeaponUniqueId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InActivateWeaponModelRotate                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventory_C::ShowExpiredWeaponStickerSystemMessage(TArray<class FString> InExpiredStickerWeaponUniqueIds, const class FString& InEquippedWeaponUniqueId, bool InActivateWeaponModelRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ShowExpiredWeaponStickerSystemMessage");
		
		UInventory_C_ShowExpiredWeaponStickerSystemMessage_Params params {};
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InEquippedWeaponUniqueId = InEquippedWeaponUniqueId;
		params.InActivateWeaponModelRotate = InActivateWeaponModelRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStickerAttachedWeaponUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInventory_C::ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog(const class FString& InStickerAttachedWeaponUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog");
		
		UInventory_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog_Params params {};
		params.InStickerAttachedWeaponUniqueId = InStickerAttachedWeaponUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryItemData                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UInventory_C::CustomEvent_5(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_5");
		
		UInventory_C_CustomEvent_5_Params params {};
		params.InResult = InResult;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.DetailView
	 * 		Flags  -> ()
	 */
	void UInventory_C::DetailView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.DetailView");
		
		UInventory_C_DetailView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnCloseDetailMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnCloseDetailMenu");
		
		UInventory_C_OnCloseDetailMenu_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UseLeve
	 * 		Flags  -> ()
	 */
	void UInventory_C::UseLeve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UseLeve");
		
		UInventory_C_UseLeve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::CustomEvent_3(ENumberInputDialogResult InResult, int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_3");
		
		UInventory_C_CustomEvent_3_Params params {};
		params.InResult = InResult;
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.SetLevelAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_ExpIncrease_C*                          CallerDialg                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::SetLevelAfter(int32_t Value, class UWBP_ExpIncrease_C* CallerDialg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.SetLevelAfter");
		
		UInventory_C_SetLevelAfter_Params params {};
		params.Value = Value;
		params.CallerDialg = CallerDialg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Construct
	 * 		Flags  -> ()
	 */
	void UInventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Construct");
		
		UInventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnAnimationFinished");
		
		UInventory_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnShortcutIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShortcutIconType                                  InShortcutKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnShortcutIconSelected(EShortcutIconType InShortcutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnShortcutIconSelected");
		
		UInventory_C_OnShortcutIconSelected_Params params {};
		params.InShortcutKey = InShortcutKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.Destruct
	 * 		Flags  -> ()
	 */
	void UInventory_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.Destruct");
		
		UInventory_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.ShowErrorMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryMessageType                              InMessageType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::ShowErrorMessageDialog(EInventoryMessageType InMessageType, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ShowErrorMessageDialog");
		
		UInventory_C_ShowErrorMessageDialog_Params params {};
		params.InMessageType = InMessageType;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UInventory_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.BookmarkUpdateRequest");
		
		UInventory_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void UInventory_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UpdateBookmarkStatusButton");
		
		UInventory_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.UnbindWeaponStickerEventDelegates
	 * 		Flags  -> ()
	 */
	void UInventory_C::UnbindWeaponStickerEventDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.UnbindWeaponStickerEventDelegates");
		
		UInventory_C_UnbindWeaponStickerEventDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInventory_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnSameMenuBookmarkAccessNew");
		
		UInventory_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::CustomEvent_4(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_4");
		
		UInventory_C_CustomEvent_4_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.CustomEvent_7
	 * 		Flags  -> ()
	 */
	void UInventory_C::CustomEvent_7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.CustomEvent_7");
		
		UInventory_C_CustomEvent_7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.ExecuteUbergraph_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventory_C::ExecuteUbergraph_Inventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.ExecuteUbergraph_Inventory");
		
		UInventory_C_ExecuteUbergraph_Inventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Inventory.Inventory_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInventory_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Inventory.Inventory_C.OnClose__DelegateSignature");
		
		UInventory_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Inventory.Inventory_C");
		return ptr;
	}

}


