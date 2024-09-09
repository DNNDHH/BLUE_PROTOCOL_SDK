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
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.UpdateIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipInfo                             EquipInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::UpdateIconSelected(const struct FCharaEquipInfo& EquipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.UpdateIconSelected");
		
		UMyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected_Params params {};
		params.EquipInfo = EquipInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategoryTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_CostumeCategory                      InCostumeCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_MyCharaMenu_AccessoryCategory                    InAccessoryCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::SetSelectedCostumeCategoryTitleText(E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategoryTitleText");
		
		UMyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText_Params params {};
		params.InCostumeCategory = InCostumeCategory;
		params.InAccessoryCategory = InAccessoryCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetAccessoryCostumeTypeFromAccessoryCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_AccessoryCategory                    InAccessoryCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBCharaEquipType                                  OutCostumeType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::GetAccessoryCostumeTypeFromAccessoryCategory(E_MyCharaMenu_AccessoryCategory InAccessoryCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetAccessoryCostumeTypeFromAccessoryCategory");
		
		UMyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory_Params params {};
		params.InAccessoryCategory = InAccessoryCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutCostumeType != nullptr)
			*OutCostumeType = params.OutCostumeType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCostumeTypeFromProtectorCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBCharaEquipType                                  OutCostumeType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::GetCostumeTypeFromProtectorCategory(EProtectorCategory InProtectorCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCostumeTypeFromProtectorCategory");
		
		UMyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory_Params params {};
		params.InProtectorCategory = InProtectorCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutCostumeType != nullptr)
			*OutCostumeType = params.OutCostumeType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetSelectedCostumeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_CostumeCategory                      OutCostumeCategory                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::GetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetSelectedCostumeCategory");
		
		UMyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCostumeCategory != nullptr)
			*OutCostumeCategory = params.OutCostumeCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_CostumeCategory                      InCostumeCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::SetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategory");
		
		UMyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory_Params params {};
		params.InCostumeCategory = InCostumeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ChangeActiveWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsFilterSelectorWindowActive                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InDoAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ChangeActiveWindow");
		
		UMyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow_Params params {};
		params.InIsFilterSelectorWindowActive = InIsFilterSelectorWindowActive;
		params.InDoAnimation = InDoAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.InitSortBox
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::InitSortBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.InitSortBox");
		
		UMyCharaMenu_CostumeChangeMenu_C_InitSortBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Get Filter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InCostumeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFilterGroup>                        OutSortFilter                                              (Parm, OutParm)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::GetFilter(ESBCharaEquipType InCostumeType, TArray<struct FFilterGroup>* OutSortFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Get Filter");
		
		UMyCharaMenu_CostumeChangeMenu_C_GetFilter_Params params {};
		params.InCostumeType = InCostumeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSortFilter != nullptr)
			*OutSortFilter = params.OutSortFilter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCurrentSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    OutSortType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::GetCurrentSortType(ESBItemSortType* OutSortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCurrentSortType");
		
		UMyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSortType != nullptr)
			*OutSortType = params.OutSortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBOwnItemListContainer*                     InOwnItemListContainer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::SetInventory(class USBOwnItemListContainer* InOwnItemListContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetInventory");
		
		UMyCharaMenu_CostumeChangeMenu_C_SetInventory_Params params {};
		params.InOwnItemListContainer = InOwnItemListContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.IsCostumeTypeAccessory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsAccessory                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::IsCostumeTypeAccessory(ESBCharaEquipType InEquipType, bool* OutIsAccessory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.IsCostumeTypeAccessory");
		
		UMyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory_Params params {};
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsAccessory != nullptr)
			*OutIsAccessory = params.OutIsAccessory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.HideAllSlotListItem
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::HideAllSlotListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.HideAllSlotListItem");
		
		UMyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateInventoryItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FInventoryItemData                          OutInventoryItemData                                       (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::CreateInventoryItemData(const struct FOwnItemInfo& InOwnItemInfo, struct FInventoryItemData* OutInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateInventoryItemData");
		
		UMyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInventoryItemData != nullptr)
			*OutInventoryItemData = params.OutInventoryItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Setup List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    InSortType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 InGenderType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFilterGroup>                        InSortFilters                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		E_MyCharaMenu_CostumeCategory                      InCostumeCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_MyCharaMenu_AccessoryCategory                    InAccessoryCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::SetupList(ESBItemSortType InSortType, ESBCharaEquipType InEquipType, ESBCharacterGender InGenderType, ESBClassType InClassType, TArray<struct FFilterGroup>* InSortFilters, E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Setup List");
		
		UMyCharaMenu_CostumeChangeMenu_C_SetupList_Params params {};
		params.InSortType = InSortType;
		params.InEquipType = InEquipType;
		params.InGenderType = InGenderType;
		params.InClassType = InClassType;
		params.InCostumeCategory = InCostumeCategory;
		params.InAccessoryCategory = InAccessoryCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSortFilters != nullptr)
			*InSortFilters = params.InSortFilters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateEmptySlotList
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::CreateEmptySlotList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateEmptySlotList");
		
		UMyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Close
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Close");
		
		UMyCharaMenu_CostumeChangeMenu_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUnchangeableMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsAccessory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, bool InIsAccessory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUnchangeableMessageDialog");
		
		UMyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog_Params params {};
		params.InUnchangeableRetValue = InUnchangeableRetValue;
		params.InIsAccessory = InIsAccessory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::ShowUsingUnusedEquipConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUsingUnusedEquipConfirmDialog");
		
		UMyCharaMenu_CostumeChangeMenu_C_ShowUsingUnusedEquipConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Construct");
		
		UMyCharaMenu_CostumeChangeMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Destruct");
		
		UMyCharaMenu_CostumeChangeMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelect_CandidateItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InSelectedIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::OnSelect_CandidateItemIcon(class UItemIconBtn_C* InSelectedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelect_CandidateItemIcon");
		
		UMyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon_Params params {};
		params.InSelectedIcon = InSelectedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.PreConstruct");
		
		UMyCharaMenu_CostumeChangeMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_CostumeCategory                      InCostumeCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature_Params params {};
		params.InCostumeCategory = InCostumeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnPress_Cancel");
		
		UMyCharaMenu_CostumeChangeMenu_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MyCharaMenu_AccessoryCategory                    InAccessoryCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature_Params params {};
		params.InAccessoryCategory = InAccessoryCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.EndUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 InYesNoResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.EndUsingUnusedEquipConfirmDialog");
		
		UMyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog_Params params {};
		params.InYesNoResult = InYesNoResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu");
		
		UMyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnEndUsingUnusedEquipConfirmDialog__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::OnEndUsingUnusedEquipConfirmDialog__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnEndUsingUnusedEquipConfirmDialog__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenEquipRingHandSelectDialog__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRingUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenEquipRingHandSelectDialog__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature_Params params {};
		params.InRingUniqueId = InRingUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_CostumeChangeMenu_C::OnSelected__DelegateSignature(const class FString& InItemUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelected__DelegateSignature");
		
		UMyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature_Params params {};
		params.InItemUniqueId = InItemUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_CostumeChangeMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_CostumeChangeMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C");
		return ptr;
	}

}


