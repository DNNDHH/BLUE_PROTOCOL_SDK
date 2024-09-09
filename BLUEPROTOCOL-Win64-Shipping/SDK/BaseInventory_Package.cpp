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
	 * 		Name   -> Function BaseInventory.BaseInventory_C.GetCategoryModeName
	 * 		Flags  -> ()
	 */
	class FName UBaseInventory_C::GetCategoryModeName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.GetCategoryModeName");
		
		UBaseInventory_C_GetCategoryModeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.GetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    FilterType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::GetFilterType(EItemFilterType* FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.GetFilterType");
		
		UBaseInventory_C_GetFilterType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterType != nullptr)
			*FilterType = params.FilterType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.GetSortMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeNum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::GetSortMode(int32_t* ModeNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.GetSortMode");
		
		UBaseInventory_C_GetSortMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeNum != nullptr)
			*ModeNum = params.ModeNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.GetSortRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::GetSortRule(ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.GetSortRule");
		
		UBaseInventory_C_GetSortRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.SetSelectBlankTextOff
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::SetSelectBlankTextOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.SetSelectBlankTextOff");
		
		UBaseInventory_C_SetSelectBlankTextOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.SetSelectBlankText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryType                                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::SetSelectBlankText(EInventoryType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.SetSelectBlankText");
		
		UBaseInventory_C_SetSelectBlankText_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.SetSelectedItemBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::SetSelectedItemBtn(const class FString& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.SetSelectedItemBtn");
		
		UBaseInventory_C_SetSelectedItemBtn_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.GetSelectItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::GetSelectItemData(struct FInventoryItemData* InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.GetSelectItemData");
		
		UBaseInventory_C_GetSelectItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryItemData != nullptr)
			*InventoryItemData = params.InventoryItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.On_ComboBoxString_Filter_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UBaseInventory_C::On_ComboBoxString_Filter_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.On_ComboBoxString_Filter_GenerateWidget_1");
		
		UBaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.IconAnimInPlay
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::IconAnimInPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.IconAnimInPlay");
		
		UBaseInventory_C_IconAnimInPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.UpdateLockInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBLockItemData>                     LockItems                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBaseInventory_C::UpdateLockInventory(TArray<struct FSBLockItemData>* LockItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.UpdateLockInventory");
		
		UBaseInventory_C_UpdateLockInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LockItems != nullptr)
			*LockItems = params.LockItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.NeedItemVisible
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::NeedItemVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.NeedItemVisible");
		
		UBaseInventory_C_NeedItemVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.CheckSlotIconTextureLoadProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsLoadFinished                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseInventory_C::CheckSlotIconTextureLoadProgress(bool* OutIsLoadFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.CheckSlotIconTextureLoadProgress");
		
		UBaseInventory_C_CheckSlotIconTextureLoadProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsLoadFinished != nullptr)
			*OutIsLoadFinished = params.OutIsLoadFinished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.FindInventoryDataFromUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              OutInventoryData                                           (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.FindInventoryDataFromUniqueId");
		
		UBaseInventory_C_FindInventoryDataFromUniqueId_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInventoryData != nullptr)
			*OutInventoryData = params.OutInventoryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.SetRegisterMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRegisterMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseInventory_C::SetRegisterMode(bool bIsRegisterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.SetRegisterMode");
		
		UBaseInventory_C_SetRegisterMode_Params params {};
		params.bIsRegisterMode = bIsRegisterMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.FindInventoryDataFromIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              ArrayElement                                               (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::FindInventoryDataFromIndex(int32_t ItemIndex, struct FInventoryData* ArrayElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.FindInventoryDataFromIndex");
		
		UBaseInventory_C_FindInventoryDataFromIndex_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayElement != nullptr)
			*ArrayElement = params.ArrayElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.SelectedAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseInventory_C::SelectedAll(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.SelectedAll");
		
		UBaseInventory_C_SelectedAll_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.AdjustItemIcons
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::AdjustItemIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.AdjustItemIcons");
		
		UBaseInventory_C_AdjustItemIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.Construct
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.Construct");
		
		UBaseInventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.Tick");
		
		UBaseInventory_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnReflesh
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::OnReflesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnReflesh");
		
		UBaseInventory_C_OnReflesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::OnSelect(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnSelect");
		
		UBaseInventory_C_OnSelect_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.ChangeCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryType                                     Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::ChangeCategory(EInventoryType Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.ChangeCategory");
		
		UBaseInventory_C_ChangeCategory_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnRefleshFromRegister
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::OnRefleshFromRegister()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnRefleshFromRegister");
		
		UBaseInventory_C_OnRefleshFromRegister_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnRefleshWithNoAnim
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::OnRefleshWithNoAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnRefleshWithNoAnim");
		
		UBaseInventory_C_OnRefleshWithNoAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.Destruct");
		
		UBaseInventory_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.UnbindDelegate
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::UnbindDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.UnbindDelegate");
		
		UBaseInventory_C_UnbindDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UBaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UBaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.RecastTimeIconUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRecastTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseInventory_C::RecastTimeIconUpdate(bool bIsRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.RecastTimeIconUpdate");
		
		UBaseInventory_C_RecastTimeIconUpdate_Params params {};
		params.bIsRecastTime = bIsRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.Event_PressItemEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::Event_PressItemEnable(class UItemIconBtn_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.Event_PressItemEnable");
		
		UBaseInventory_C_Event_PressItemEnable_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              OnItemClick                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::CustomEvent_1(const struct FInventoryData& OnItemClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.CustomEvent_1");
		
		UBaseInventory_C_CustomEvent_1_Params params {};
		params.OnItemClick = OnItemClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBaseInventory_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
		
		UBaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.UpdateFilterButton
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::UpdateFilterButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.UpdateFilterButton");
		
		UBaseInventory_C_UpdateFilterButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.UpdateFilterComboBox
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::UpdateFilterComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.UpdateFilterComboBox");
		
		UBaseInventory_C_UpdateFilterComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.UpdateSortComboBox
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::UpdateSortComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.UpdateSortComboBox");
		
		UBaseInventory_C_UpdateSortComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature");
		
		UBaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.InventoryScrollStart
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::InventoryScrollStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.InventoryScrollStart");
		
		UBaseInventory_C_InventoryScrollStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.ScrollVisibleUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::ScrollVisibleUpdate(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.ScrollVisibleUpdate");
		
		UBaseInventory_C_ScrollVisibleUpdate_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.CustomEvent_2");
		
		UBaseInventory_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32_t PageCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
		
		UBaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params params {};
		params.PageCurrent = PageCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.ExecuteUbergraph_BaseInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::ExecuteUbergraph_BaseInventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.ExecuteUbergraph_BaseInventory");
		
		UBaseInventory_C_ExecuteUbergraph_BaseInventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnRefreshRegisterRequest__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::OnRefreshRegisterRequest__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnRefreshRegisterRequest__DelegateSignature");
		
		UBaseInventory_C_OnRefreshRegisterRequest__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnComboChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBaseInventory_C::OnComboChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnComboChanged__DelegateSignature");
		
		UBaseInventory_C_OnComboChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnPressItemButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::OnPressItemButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnPressItemButton__DelegateSignature");
		
		UBaseInventory_C_OnPressItemButton__DelegateSignature_Params params {};
		params.SelectButton = SelectButton;
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnClickedItemRightButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::OnClickedItemRightButton__DelegateSignature(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnClickedItemRightButton__DelegateSignature");
		
		UBaseInventory_C_OnClickedItemRightButton__DelegateSignature_Params params {};
		params.SelectButton = SelectButton;
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnClickedItemButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::OnClickedItemButton__DelegateSignature(const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnClickedItemButton__DelegateSignature");
		
		UBaseInventory_C_OnClickedItemButton__DelegateSignature_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseInventory.BaseInventory_C.OnClickedButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseInventory_C::OnClickedButton__DelegateSignature(EDescripionButtonType Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventory.BaseInventory_C.OnClickedButton__DelegateSignature");
		
		UBaseInventory_C_OnClickedButton__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseInventory.BaseInventory_C");
		return ptr;
	}

}


