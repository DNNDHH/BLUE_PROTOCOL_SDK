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
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ResetUiSupportKye
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::ResetUiSupportKye()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ResetUiSupportKye");
		
		UMyCharaMenu_MountImagineList_C_ResetUiSupportKye_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnRemoveEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::SetBtnRemoveEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnRemoveEnabled");
		
		UMyCharaMenu_MountImagineList_C_SetBtnRemoveEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnChangeEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::SetBtnChangeEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnChangeEnabled");
		
		UMyCharaMenu_MountImagineList_C_SetBtnChangeEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ClearSlotList
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::ClearSlotList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ClearSlotList");
		
		UMyCharaMenu_MountImagineList_C_ClearSlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.PlayFilterSelectorAnimInOrOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InPlayAnimIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.PlayFilterSelectorAnimInOrOut");
		
		UMyCharaMenu_MountImagineList_C_PlayFilterSelectorAnimInOrOut_Params params {};
		params.InPlayAnimIn = InPlayAnimIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeActiveWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsFilterSelectorWindowActive                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InDoAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeActiveWindow");
		
		UMyCharaMenu_MountImagineList_C_ChangeActiveWindow_Params params {};
		params.InIsFilterSelectorWindowActive = InIsFilterSelectorWindowActive;
		params.InDoAnimation = InDoAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideAllSlotListItem
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::HideAllSlotListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideAllSlotListItem");
		
		UMyCharaMenu_MountImagineList_C_HideAllSlotListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SortList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBOwnItemListContainer*                     InOwnItemListContainer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    InSortType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFilterGroup>                        InSortFilters                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            OutCandidateItemCnt                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>* InSortFilters, int32_t* OutCandidateItemCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SortList");
		
		UMyCharaMenu_MountImagineList_C_SortList_Params params {};
		params.InOwnItemListContainer = InOwnItemListContainer;
		params.InSortType = InSortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSortFilters != nullptr)
			*InSortFilters = params.InSortFilters;
		if (OutCandidateItemCnt != nullptr)
			*OutCandidateItemCnt = params.OutCandidateItemCnt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.InitSortBox
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::InitSortBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.InitSortBox");
		
		UMyCharaMenu_MountImagineList_C_InitSortBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::ChangeEquip(bool IsEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeEquip");
		
		UMyCharaMenu_MountImagineList_C_ChangeEquip_Params params {};
		params.IsEquip = IsEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsChangeEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::IsChangeEquip(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsChangeEquip");
		
		UMyCharaMenu_MountImagineList_C_IsChangeEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsCloseAnimePlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::IsCloseAnimePlaying(bool* IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsCloseAnimePlaying");
		
		UMyCharaMenu_MountImagineList_C_IsCloseAnimePlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlaying != nullptr)
			*IsPlaying = params.IsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIgnoreUnsusedEquipConfirm                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::ChangeMountImagine(bool IsEquip, bool InIgnoreUnsusedEquipConfirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeMountImagine");
		
		UMyCharaMenu_MountImagineList_C_ChangeMountImagine_Params params {};
		params.IsEquip = IsEquip;
		params.InIgnoreUnsusedEquipConfirm = InIgnoreUnsusedEquipConfirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_ChangeBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::Update_ChangeBtn(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_ChangeBtn");
		
		UMyCharaMenu_MountImagineList_C_Update_ChangeBtn_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_RemoveBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::Update_RemoveBtn(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_RemoveBtn");
		
		UMyCharaMenu_MountImagineList_C_Update_RemoveBtn_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateInventoryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InItemInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FInventoryData                              OutInventryData                                            (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               OutIsAdd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::CreateInventoryData(const struct FOwnItemInfo& InItemInfo, struct FInventoryData* OutInventryData, bool* OutIsAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateInventoryData");
		
		UMyCharaMenu_MountImagineList_C_CreateInventoryData_Params params {};
		params.InItemInfo = InItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInventryData != nullptr)
			*OutInventryData = params.OutInventryData;
		if (OutIsAdd != nullptr)
			*OutIsAdd = params.OutIsAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetItemIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InInventoryData                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            InSlotItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsIconSet                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::SetItemIconBtn(const struct FInventoryData& InInventoryData, int32_t InSlotItemId, bool* OutIsIconSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetItemIconBtn");
		
		UMyCharaMenu_MountImagineList_C_SetItemIconBtn_Params params {};
		params.InInventoryData = InInventoryData;
		params.InSlotItemId = InSlotItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsIconSet != nullptr)
			*OutIsIconSet = params.OutIsIconSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsAddMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InInventoryData                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               IsAdd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::IsAddMountImagine(const struct FInventoryData& InInventoryData, bool* IsAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsAddMountImagine");
		
		UMyCharaMenu_MountImagineList_C_IsAddMountImagine_Params params {};
		params.InInventoryData = InInventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAdd != nullptr)
			*IsAdd = params.IsAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBOwnItemListContainer*                     InInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    InSortType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFilterGroup>                        InSortFilters                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_MountImagineList_C::CreateItemList(class USBOwnItemListContainer* InInventory, ESBItemSortType InSortType, TArray<struct FFilterGroup>* InSortFilters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateItemList");
		
		UMyCharaMenu_MountImagineList_C_CreateItemList_Params params {};
		params.InInventory = InInventory;
		params.InSortType = InSortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSortFilters != nullptr)
			*InSortFilters = params.InSortFilters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SelectAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InDoToAllCreatedItems                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::SelectAll(bool InIsSelected, bool InDoToAllCreatedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SelectAll");
		
		UMyCharaMenu_MountImagineList_C_SelectAll_Params params {};
		params.InIsSelected = InIsSelected;
		params.InDoToAllCreatedItems = InDoToAllCreatedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateSlotList
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::CreateSlotList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateSlotList");
		
		UMyCharaMenu_MountImagineList_C_CreateSlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideWindow");
		
		UMyCharaMenu_MountImagineList_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::ShowWindow(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowWindow");
		
		UMyCharaMenu_MountImagineList_C_ShowWindow_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowImagineUnchangeableMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::ShowImagineUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowImagineUnchangeableMessageDialog");
		
		UMyCharaMenu_MountImagineList_C_ShowImagineUnchangeableMessageDialog_Params params {};
		params.InUnchangeableRetValue = InUnchangeableRetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::ShowUsingUnusedEquipConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowUsingUnusedEquipConfirmDialog");
		
		UMyCharaMenu_MountImagineList_C_ShowUsingUnusedEquipConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Construct");
		
		UMyCharaMenu_MountImagineList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UMyCharaMenu_MountImagineList_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnSelect_ItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::OnSelect_ItemIcon(class UItemIconBtn_C* SelectIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnSelect_ItemIcon");
		
		UMyCharaMenu_MountImagineList_C_OnSelect_ItemIcon_Params params {};
		params.SelectIcon = SelectIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnPress_Cancel");
		
		UMyCharaMenu_MountImagineList_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.EndUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 InYesNoResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.EndUsingUnusedEquipConfirmDialog");
		
		UMyCharaMenu_MountImagineList_C_EndUsingUnusedEquipConfirmDialog_Params params {};
		params.InYesNoResult = InYesNoResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Destruct");
		
		UMyCharaMenu_MountImagineList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ExecuteUbergraph_MyCharaMenu_MountImagineList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::ExecuteUbergraph_MyCharaMenu_MountImagineList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ExecuteUbergraph_MyCharaMenu_MountImagineList");
		
		UMyCharaMenu_MountImagineList_C_ExecuteUbergraph_MyCharaMenu_MountImagineList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnMountImagineSelectReleased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::OnMountImagineSelectReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnMountImagineSelectReleased__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_OnMountImagineSelectReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChangeRequest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_MountImagineList_C::OnHideFinished__DelegateSignature(bool IsChangeRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideFinished__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_OnHideFinished__DelegateSignature_Params params {};
		params.IsChangeRequest = IsChangeRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideWindow__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_MountImagineList_C::OnHideWindow__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideWindow__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_OnHideWindow__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::MountImagineChangeRequest__DelegateSignature(const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeRequest__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_MountImagineChangeRequest__DelegateSignature_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUEquipniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_MountImagineList_C::MountImagineChangeClicked__DelegateSignature(const class FString& InUEquipniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeClicked__DelegateSignature");
		
		UMyCharaMenu_MountImagineList_C_MountImagineChangeClicked__DelegateSignature_Params params {};
		params.InUEquipniqueId = InUEquipniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_MountImagineList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_MountImagineList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C");
		return ptr;
	}

}


