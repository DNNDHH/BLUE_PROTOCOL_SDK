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
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Set Craft BGMode
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::SetCraftBGMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Set Craft BGMode");
		
		UWBP_T_ApartShop_C_SetCraftBGMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetRequestItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBStorageItemData>                  List                                                       (Parm, OutParm)
	 */
	void UWBP_T_ApartShop_C::GetRequestItemData(TArray<struct FSBStorageItemData>* List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetRequestItemData");
		
		UWBP_T_ApartShop_C_GetRequestItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (List != nullptr)
			*List = params.List;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Update Select
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::UpdateSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Update Select");
		
		UWBP_T_ApartShop_C_UpdateSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetCategoryModeName
	 * 		Flags  -> ()
	 */
	class FName UWBP_T_ApartShop_C::GetCategoryModeName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetCategoryModeName");
		
		UWBP_T_ApartShop_C_GetCategoryModeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetStorageNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::GetStorageNum(int32_t* Num, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetStorageNum");
		
		UWBP_T_ApartShop_C_GetStorageNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Sort Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeNum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::GetSortMode(int32_t* ModeNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Sort Mode");
		
		UWBP_T_ApartShop_C_GetSortMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeNum != nullptr)
			*ModeNum = params.ModeNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetSortRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::GetSortRule(ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetSortRule");
		
		UWBP_T_ApartShop_C_GetSortRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Set Icon Select Items
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EStorageMultipleSalesWindowType                    Result1                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::SetIconSelectItems(class UItemIconBtn_C* InputPin, EStorageMultipleSalesWindowType* Result1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Set Icon Select Items");
		
		UWBP_T_ApartShop_C_SetIconSelectItems_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result1 != nullptr)
			*Result1 = params.Result1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Filter_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UWBP_T_ApartShop_C::On_ComboBoxString_Filter_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Filter_GenerateWidget_1");
		
		UWBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Sort_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UWBP_T_ApartShop_C::On_ComboBoxString_Sort_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Sort_GenerateWidget_1");
		
		UWBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetItemListContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStorageGridType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBOwnItemListContainer* UWBP_T_ApartShop_C::GetItemListContainer(EStorageGridType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetItemListContainer");
		
		UWBP_T_ApartShop_C_GetItemListContainer_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Inventory Brunch
	 * 		Flags  -> ()
	 */
	class USBOwnItemListContainer* UWBP_T_ApartShop_C::GetInventoryBrunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Inventory Brunch");
		
		UWBP_T_ApartShop_C_GetInventoryBrunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation2
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::RandomPlayAnimation2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation2");
		
		UWBP_T_ApartShop_C_RandomPlayAnimation2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::RandomPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation");
		
		UWBP_T_ApartShop_C_RandomPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Updete Item Slot List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESelectItemCategoryMode                            SelectItemCategoryMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::UpdeteItemSlotList(ESelectItemCategoryMode SelectItemCategoryMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Updete Item Slot List");
		
		UWBP_T_ApartShop_C_UpdeteItemSlotList_Params params {};
		params.SelectItemCategoryMode = SelectItemCategoryMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Filter Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    FilterType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::GetFilterType(EItemFilterType* FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Filter Type");
		
		UWBP_T_ApartShop_C_GetFilterType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterType != nullptr)
			*FilterType = params.FilterType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateItemNums
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KeepPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartShop_C::UpdateItemNums(bool KeepPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateItemNums");
		
		UWBP_T_ApartShop_C_UpdateItemNums_Params params {};
		params.KeepPage = KeepPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateFilterButton
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::UpdateFilterButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateFilterButton");
		
		UWBP_T_ApartShop_C_UpdateFilterButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconAllSelectfalse
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::IconAllSelectfalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconAllSelectfalse");
		
		UWBP_T_ApartShop_C_IconAllSelectfalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.SetSlotSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UGridPanel*                                  InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::SetSlotSelect(bool IsSelected, class UGridPanel* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.SetSlotSelect");
		
		UWBP_T_ApartShop_C_SetSlotSelect_Params params {};
		params.IsSelected = IsSelected;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnMultipleSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EStorageGridType                                   LastClickGridType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::OnMultipleSelection(class UItemIconBtn_C* InputPin, EStorageGridType LastClickGridType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnMultipleSelection");
		
		UWBP_T_ApartShop_C_OnMultipleSelection_Params params {};
		params.InputPin = InputPin;
		params.LastClickGridType = LastClickGridType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.SaveSortRule
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::SaveSortRule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.SaveSortRule");
		
		UWBP_T_ApartShop_C_SaveSortRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.UiInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartShop_C::UiInputBlock(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.UiInputBlock");
		
		UWBP_T_ApartShop_C_UiInputBlock_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconAllGrayMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartShop_C::IconAllGrayMode(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconAllGrayMode");
		
		UWBP_T_ApartShop_C_IconAllGrayMode_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconGrayMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartShop_C::IconGrayMode(class UPanelWidget* Target, bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconGrayMode");
		
		UWBP_T_ApartShop_C_IconGrayMode_Params params {};
		params.Target = Target;
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPress_Cancel");
		
		UWBP_T_ApartShop_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_T_ApartShop_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShopCmnBtn1_C*                              ClickBtn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature_Params params {};
		params.ClickBtn = ClickBtn;
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2");
		
		UWBP_T_ApartShop_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::OnPressItem_Inventory(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Inventory");
		
		UWBP_T_ApartShop_C_OnPressItem_Inventory_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Storage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::OnPressItem_Storage(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Storage");
		
		UWBP_T_ApartShop_C_OnPressItem_Storage_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::OnPressRight_Inventory(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Inventory");
		
		UWBP_T_ApartShop_C_OnPressRight_Inventory_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Storage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::OnPressRight_Storage(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Storage");
		
		UWBP_T_ApartShop_C_OnPressRight_Storage_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.TryEnd
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::TryEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.TryEnd");
		
		UWBP_T_ApartShop_C_TryEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconScrollVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::IconScrollVisible(class UGridPanel* Slot, float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconScrollVisible");
		
		UWBP_T_ApartShop_C_IconScrollVisible_Params params {};
		params.Slot = Slot;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.SlotSelectRevival
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::SlotSelectRevival(class UGridPanel* Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.SlotSelectRevival");
		
		UWBP_T_ApartShop_C_SlotSelectRevival_Params params {};
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnApartAnimationPlayed
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::OnApartAnimationPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnApartAnimationPlayed");
		
		UWBP_T_ApartShop_C_OnApartAnimationPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_T_ApartShop_WBP_T_ApartItemList_K2Node_ComponentBoundEvent_0_OnApart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::BndEvt__WBP_T_ApartShop_WBP_T_ApartItemList_K2Node_ComponentBoundEvent_0_OnApart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_T_ApartShop_WBP_T_ApartItemList_K2Node_ComponentBoundEvent_0_OnApart__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__WBP_T_ApartShop_WBP_T_ApartItemList_K2Node_ComponentBoundEvent_0_OnApart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBStorageItemBoxResultData                 InItemBoxResultData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_T_ApartShop_C::CustomEvent_1(int32_t InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.CustomEvent_1");
		
		UWBP_T_ApartShop_C_CustomEvent_1_Params params {};
		params.InRetCode = InRetCode;
		params.InItemBoxResultData = InItemBoxResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.AnimationApiEnd
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::AnimationApiEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.AnimationApiEnd");
		
		UWBP_T_ApartShop_C_AnimationApiEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_T_ApartShop_WBP_CheckBoxText_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartShop_C::BndEvt__WBP_T_ApartShop_WBP_CheckBoxText_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_T_ApartShop_WBP_CheckBoxText_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__WBP_T_ApartShop_WBP_CheckBoxText_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.ApartBlockEnd
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::ApartBlockEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.ApartBlockEnd");
		
		UWBP_T_ApartShop_C_ApartBlockEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Construct");
		
		UWBP_T_ApartShop_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.Destruct");
		
		UWBP_T_ApartShop_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.ResetGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStorageGridType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ScrollReset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartShop_C::ResetGrid(EStorageGridType InType, bool ScrollReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.ResetGrid");
		
		UWBP_T_ApartShop_C_ResetGrid_Params params {};
		params.InType = InType;
		params.ScrollReset = ScrollReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.CreateComboBox
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::CreateComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.CreateComboBox");
		
		UWBP_T_ApartShop_C_CreateComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.onAnimTimer
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::onAnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.onAnimTimer");
		
		UWBP_T_ApartShop_C_onAnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UWBP_T_ApartShop_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.TryCreateStorageGridIcon
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::TryCreateStorageGridIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.TryCreateStorageGridIcon");
		
		UWBP_T_ApartShop_C_TryCreateStorageGridIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateSortBox
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::UpdateSortBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateSortBox");
		
		UWBP_T_ApartShop_C_UpdateSortBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdatefilterBox
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::UpdatefilterBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdatefilterBox");
		
		UWBP_T_ApartShop_C_UpdatefilterBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdetaPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               KeepPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartShop_C::UpdetaPage(bool Visible, bool KeepPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdetaPage");
		
		UWBP_T_ApartShop_C_UpdetaPage_Params params {};
		params.Visible = Visible;
		params.KeepPage = KeepPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32_t PageCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
		
		UWBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params params {};
		params.PageCurrent = PageCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.ExecuteUbergraph_WBP_T_ApartShop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartShop_C::ExecuteUbergraph_WBP_T_ApartShop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.ExecuteUbergraph_WBP_T_ApartShop");
		
		UWBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartShop_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnClose__DelegateSignature");
		
		UWBP_T_ApartShop_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_T_ApartShop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_T_ApartShop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_T_ApartShop.WBP_T_ApartShop_C");
		return ptr;
	}

}


