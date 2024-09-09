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
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.SetCraftButtonIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::SetCraftButtonIsEnabled(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.SetCraftButtonIsEnabled");
		
		UImagineCraft_C_SetCraftButtonIsEnabled_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.InitializeFilter
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::InitializeFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.InitializeFilter");
		
		UImagineCraft_C_InitializeFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.UpdateTimeLimited
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::UpdateTimeLimited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.UpdateTimeLimited");
		
		UImagineCraft_C_UpdateTimeLimited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.UpdateSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URecepiListItemBtn_C*                        SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::UpdateSelectedItem(class URecepiListItemBtn_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.UpdateSelectedItem");
		
		UImagineCraft_C_UpdateSelectedItem_Params params {};
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.IsAnyLiquidMemoryActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::IsAnyLiquidMemoryActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.IsAnyLiquidMemoryActive");
		
		UImagineCraft_C_IsAnyLiquidMemoryActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.ConvertCraftSort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECraftRecepiSortType                               CraftSortType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::ConvertCraftSort(ECraftRecepiSortType CraftSortType, ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.ConvertCraftSort");
		
		UImagineCraft_C_ConvertCraftSort_Params params {};
		params.CraftSortType = CraftSortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.ConvertSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECraftRecepiSortType                               CraftSort                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::ConvertSortType(ESBItemSortType SortType, ECraftRecepiSortType* CraftSort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.ConvertSortType");
		
		UImagineCraft_C_ConvertSortType_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CraftSort != nullptr)
			*CraftSort = params.CraftSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.On_Cmb_Sort_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UImagineCraft_C::On_Cmb_Sort_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.On_Cmb_Sort_GenerateWidget_1");
		
		UImagineCraft_C_On_Cmb_Sort_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.CheckMaterialsAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isLack                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::CheckMaterialsAmount(bool* isLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.CheckMaterialsAmount");
		
		UImagineCraft_C_CheckMaterialsAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isLack != nullptr)
			*isLack = params.isLack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.MasterContainsLists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            Master                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFilterGroup                                Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               isContains                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::MasterContainsLists(const struct FSBMasterImagine& Master, const struct FFilterGroup& Group, bool* isContains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.MasterContainsLists");
		
		UImagineCraft_C_MasterContainsLists_Params params {};
		params.Master = Master;
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isContains != nullptr)
			*isContains = params.isContains;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.GenerateSortBox
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::GenerateSortBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.GenerateSortBox");
		
		UImagineCraft_C_GenerateSortBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Filter
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::Filter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Filter");
		
		UImagineCraft_C_Filter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.CheckMaterialLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLocked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::CheckMaterialLock(bool* IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.CheckMaterialLock");
		
		UImagineCraft_C_CheckMaterialLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLocked != nullptr)
			*IsLocked = params.IsLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Generate ListBox
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::GenerateListBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Generate ListBox");
		
		UImagineCraft_C_GenerateListBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UImagineCraft_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
		
		UImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
		
		UImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature");
		
		UImagineCraft_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.OnPress_Cancel");
		
		UImagineCraft_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.OnSelectDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::OnSelectDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.OnSelectDialog");
		
		UImagineCraft_C_OnSelectDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.OnLimitSerlected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::OnLimitSerlected(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.OnLimitSerlected");
		
		UImagineCraft_C_OnLimitSerlected_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Construct");
		
		UImagineCraft_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.OnSelectRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        Recepi                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class URecepiListItemBtn_C*                        SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::OnSelectRecepi(const struct FMasterImagineRecepi& Recepi, class URecepiListItemBtn_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.OnSelectRecepi");
		
		UImagineCraft_C_OnSelectRecepi_Params params {};
		params.Recepi = Recepi;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Open
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Open");
		
		UImagineCraft_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Close
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Close");
		
		UImagineCraft_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Initialize
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Initialize");
		
		UImagineCraft_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Terminate
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Terminate");
		
		UImagineCraft_C_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.OnFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MakedUID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::OnFinished(int32_t RetCode, const class FString& MakedUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.OnFinished");
		
		UImagineCraft_C_OnFinished_Params params {};
		params.RetCode = RetCode;
		params.MakedUID = MakedUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.RegenerateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::RegenerateList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.RegenerateList");
		
		UImagineCraft_C_RegenerateList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.Destruct
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.Destruct");
		
		UImagineCraft_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCloseAll                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature(bool isCloseAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature");
		
		UImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature_Params params {};
		params.isCloseAll = isCloseAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature");
		
		UImagineCraft_C_BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.ShowHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::ShowHelp(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.ShowHelp");
		
		UImagineCraft_C_ShowHelp_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.ChgHelpMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isLackAdvRank                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::ChgHelpMode(bool isLackAdvRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.ChgHelpMode");
		
		UImagineCraft_C_ChgHelpMode_Params params {};
		params.isLackAdvRank = isLackAdvRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.CheckSelectRecepi
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::CheckSelectRecepi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.CheckSelectRecepi");
		
		UImagineCraft_C_CheckSelectRecepi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature");
		
		UImagineCraft_C_BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UImagineCraft_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.UpdateLiquidMemoryDisp
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::UpdateLiquidMemoryDisp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.UpdateLiquidMemoryDisp");
		
		UImagineCraft_C_UpdateLiquidMemoryDisp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.OnRequest_GetRewaedBoost_cmpl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::OnRequest_GetRewaedBoost_cmpl(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.OnRequest_GetRewaedBoost_cmpl");
		
		UImagineCraft_C_OnRequest_GetRewaedBoost_cmpl_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UImagineCraft_C_BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraft_C::BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.ExecuteUbergraph_ImagineCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraft_C::ExecuteUbergraph_ImagineCraft(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.ExecuteUbergraph_ImagineCraft");
		
		UImagineCraft_C_ExecuteUbergraph_ImagineCraft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraft.ImagineCraft_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineCraft_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraft.ImagineCraft_C.OnClose__DelegateSignature");
		
		UImagineCraft_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineCraft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineCraft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineCraft.ImagineCraft_C");
		return ptr;
	}

}


