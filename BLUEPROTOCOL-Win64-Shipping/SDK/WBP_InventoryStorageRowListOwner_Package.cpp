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
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::GetSortRule(ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortRule");
		
		UWBP_InventoryStorageRowListOwner_C_GetSortRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    FilterType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::GetFilterType(EItemFilterType* FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetFilterType");
		
		UWBP_InventoryStorageRowListOwner_C_GetFilterType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterType != nullptr)
			*FilterType = params.FilterType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeNum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::GetSortMode(int32_t* ModeNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.GetSortMode");
		
		UWBP_InventoryStorageRowListOwner_C_GetSortMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeNum != nullptr)
			*ModeNum = params.ModeNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Create List
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::CreateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Create List");
		
		UWBP_InventoryStorageRowListOwner_C_CreateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetInventoryUpdeta
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::SetInventoryUpdeta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetInventoryUpdeta");
		
		UWBP_InventoryStorageRowListOwner_C_SetInventoryUpdeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.On_ComboBoxString_Sort_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UWBP_InventoryStorageRowListOwner_C::On_ComboBoxString_Sort_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.On_ComboBoxString_Sort_GenerateWidget_1");
		
		UWBP_InventoryStorageRowListOwner_C_On_ComboBoxString_Sort_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.RemoveSelectListItems
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::RemoveSelectListItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.RemoveSelectListItems");
		
		UWBP_InventoryStorageRowListOwner_C_RemoveSelectListItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetScrollBoxSizeX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::SetScrollBoxSizeX(float SizeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.SetScrollBoxSizeX");
		
		UWBP_InventoryStorageRowListOwner_C_SetScrollBoxSizeX_Params params {};
		params.SizeX = SizeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InventoryStorageRowListOwner_C_BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ResettingStorageListItem
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::ResettingStorageListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ResettingStorageListItem");
		
		UWBP_InventoryStorageRowListOwner_C_ResettingStorageListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdetaItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    InSortType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemFilterType                                    FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::UpdetaItemList(ESBItemSortType InSortType, EItemFilterType FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdetaItemList");
		
		UWBP_InventoryStorageRowListOwner_C_UpdetaItemList_Params params {};
		params.InSortType = InSortType;
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.LockIconUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryStorageRowListOwner_C::LockIconUpdate(const class FString& UniqueId, bool bLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.LockIconUpdate");
		
		UWBP_InventoryStorageRowListOwner_C_LockIconUpdate_Params params {};
		params.UniqueId = UniqueId;
		params.bLock = bLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.StorageItemGet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    InSortType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemFilterType                                    InFilter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::StorageItemGet(ESBItemSortType InSortType, EItemFilterType InFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.StorageItemGet");
		
		UWBP_InventoryStorageRowListOwner_C_StorageItemGet_Params params {};
		params.InSortType = InSortType;
		params.InFilter = InFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Construct");
		
		UWBP_InventoryStorageRowListOwner_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.AddStorageListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CreateDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::AddStorageListItem(float CreateDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.AddStorageListItem");
		
		UWBP_InventoryStorageRowListOwner_C_AddStorageListItem_Params params {};
		params.CreateDelay = CreateDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.IconAllSelectfalse
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::IconAllSelectfalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.IconAllSelectfalse");
		
		UWBP_InventoryStorageRowListOwner_C_IconAllSelectfalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.MultiStart
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::MultiStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.MultiStart");
		
		UWBP_InventoryStorageRowListOwner_C_MultiStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_InventoryStorageRowListItem_C*          UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::CustomEvent_3(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_3");
		
		UWBP_InventoryStorageRowListOwner_C_CustomEvent_3_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_InventoryStorageRowListItem_C*          UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::CustomEvent_4(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.CustomEvent_4");
		
		UWBP_InventoryStorageRowListOwner_C_CustomEvent_4_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.InitializeComboBox
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::InitializeComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.InitializeComboBox");
		
		UWBP_InventoryStorageRowListOwner_C_InitializeComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_InventoryStorageRowListOwner_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_InventoryStorageRowListOwner_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Open
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Open");
		
		UWBP_InventoryStorageRowListOwner_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.Update");
		
		UWBP_InventoryStorageRowListOwner_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_InventoryStorageRowListOwner_C::BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature");
		
		UWBP_InventoryStorageRowListOwner_C_BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateSortCombo
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::UpdateSortCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateSortCombo");
		
		UWBP_InventoryStorageRowListOwner_C_UpdateSortCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterCombo
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::UpdateFilterCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterCombo");
		
		UWBP_InventoryStorageRowListOwner_C_UpdateFilterCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterButton
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::UpdateFilterButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.UpdateFilterButton");
		
		UWBP_InventoryStorageRowListOwner_C_UpdateFilterButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_InventoryStorageRowListOwner_C_BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ScrollVisibleUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::ScrollVisibleUpdate(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ScrollVisibleUpdate");
		
		UWBP_InventoryStorageRowListOwner_C_ScrollVisibleUpdate_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ExecuteUbergraph_WBP_InventoryStorageRowListOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::ExecuteUbergraph_WBP_InventoryStorageRowListOwner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.ExecuteUbergraph_WBP_InventoryStorageRowListOwner");
		
		UWBP_InventoryStorageRowListOwner_C_ExecuteUbergraph_WBP_InventoryStorageRowListOwner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClickRight__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListOwner_C::OnItemClickRight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClickRight__DelegateSignature");
		
		UWBP_InventoryStorageRowListOwner_C_OnItemClickRight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              OnItemClick                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListOwner_C::OnItemClick__DelegateSignature(const struct FInventoryData& OnItemClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C.OnItemClick__DelegateSignature");
		
		UWBP_InventoryStorageRowListOwner_C_OnItemClick__DelegateSignature_Params params {};
		params.OnItemClick = OnItemClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryStorageRowListOwner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryStorageRowListOwner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C");
		return ptr;
	}

}


