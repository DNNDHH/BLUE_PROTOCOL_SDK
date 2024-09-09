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
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SortIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FilterIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    ArrayElement                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetSortType(int32_t SortIndex, const class FName& RowName, int32_t FilterIndex, class UObject* __WorldContext, ESBItemSortType* ArrayElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortType");
		
		UInventoryFunctionLibrary_C_GetSortType_Params params {};
		params.SortIndex = SortIndex;
		params.RowName = RowName;
		params.FilterIndex = FilterIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayElement != nullptr)
			*ArrayElement = params.ArrayElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    Sort                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FilterIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetSortIndex(ESBItemSortType Sort, const class FName& RowName, int32_t FilterIndex, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortIndex");
		
		UInventoryFunctionLibrary_C_GetSortIndex_Params params {};
		params.Sort = Sort;
		params.RowName = RowName;
		params.FilterIndex = FilterIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    Sort                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UInventoryFunctionLibrary_C::GetSortText(ESBItemSortType Sort, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortText");
		
		UInventoryFunctionLibrary_C_GetSortText_Params params {};
		params.Sort = Sort;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSortComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FilterIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    Select                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::SetSortComboBox(class UComboBoxString* Target, const class FName& RowName, int32_t FilterIndex, ESBItemSortType Select, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSortComboBox");
		
		UInventoryFunctionLibrary_C_SetSortComboBox_Params params {};
		params.Target = Target;
		params.RowName = RowName;
		params.FilterIndex = FilterIndex;
		params.Select = Select;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterBtnType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemFilterType                                    Filter                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetFilterBtnType(const class FName& RowName, int32_t Index, class UObject* __WorldContext, EItemFilterType* Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterBtnType");
		
		UInventoryFunctionLibrary_C_GetFilterBtnType_Params params {};
		params.RowName = RowName;
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterBtnType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFilterButton_C*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::SetFilterBtnType(class UFilterButton_C* Target, const class FName& RowName, int32_t Index, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterBtnType");
		
		UInventoryFunctionLibrary_C_SetFilterBtnType_Params params {};
		params.Target = Target;
		params.RowName = RowName;
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::SetFilterComboBox(class UComboBoxString* Target, const class FName& RowName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterComboBox");
		
		UInventoryFunctionLibrary_C_SetFilterComboBox_Params params {};
		params.Target = Target;
		params.RowName = RowName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UInventoryFunctionLibrary_C::GetFilterText(EItemFilterType Filter, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterText");
		
		UInventoryFunctionLibrary_C_GetFilterText_Params params {};
		params.Filter = Filter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CalcPageIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            IconIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageIconMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::CalcPageIndex(bool Use, int32_t IconIndex, int32_t CurrentPage, int32_t PageIconMax, class UObject* __WorldContext, bool* Active, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CalcPageIndex");
		
		UInventoryFunctionLibrary_C_CalcPageIndex_Params params {};
		params.Use = Use;
		params.IconIndex = IconIndex;
		params.CurrentPage = CurrentPage;
		params.PageIconMax = PageIconMax;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsWeaponStickerAttachd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAttach                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::IsWeaponStickerAttachd(const class FString& UniqueId, int32_t StorageNumber, class UObject* __WorldContext, bool* IsAttach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsWeaponStickerAttachd");
		
		UInventoryFunctionLibrary_C_IsWeaponStickerAttachd_Params params {};
		params.UniqueId = UniqueId;
		params.StorageNumber = StorageNumber;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAttach != nullptr)
			*IsAttach = params.IsAttach;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusTextOneItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTextBlock*                                  Ap                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Cp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  STR                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  VIT                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  DEX                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  INT                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  MND                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Attribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Special                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::SetWeaponStatusTextOneItem(const struct FOwnItemInfo& OwnItemInfo, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusTextOneItem");
		
		UInventoryFunctionLibrary_C_SetWeaponStatusTextOneItem_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		params.Ap = Ap;
		params.Cp = Cp;
		params.STR = STR;
		params.VIT = VIT;
		params.DEX = DEX;
		params.INT = INT;
		params.MND = MND;
		params.Attribute = Attribute;
		params.Special = Special;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Mode Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsItemMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NotBStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModeNum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortModeNum(EItemFilterType Filter, bool IsItemMode, bool NotBStack, class UObject* __WorldContext, int32_t* ModeNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Mode Num");
		
		UInventoryFunctionLibrary_C_GetInventorySortModeNum_Params params {};
		params.Filter = Filter;
		params.IsItemMode = IsItemMode;
		params.NotBStack = NotBStack;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeNum != nullptr)
			*ModeNum = params.ModeNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index1                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortIndex(int32_t Index, ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex");
		
		UInventoryFunctionLibrary_C_GetInventorySortIndex_Params params {};
		params.Index = Index;
		params.SortType = SortType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index1 != nullptr)
			*Index1 = params.Index1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                SortList1                                                  (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortName(int32_t Index, class UObject* __WorldContext, TArray<class FName>* SortList1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName");
		
		UInventoryFunctionLibrary_C_GetInventorySortName_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortList1 != nullptr)
			*SortList1 = params.SortList1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortIndex_Weapon(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Weapon");
		
		UInventoryFunctionLibrary_C_GetInventorySortIndex_Weapon_Params params {};
		params.SortType = SortType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Equipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortIndex_Equipment(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Equipment");
		
		UInventoryFunctionLibrary_C_GetInventorySortIndex_Equipment_Params params {};
		params.SortType = SortType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_NoLv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortIndex_NoLv(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_NoLv");
		
		UInventoryFunctionLibrary_C_GetInventorySortIndex_NoLv_Params params {};
		params.SortType = SortType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Plug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortIndex_Plug(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Plug");
		
		UInventoryFunctionLibrary_C_GetInventorySortIndex_Plug_Params params {};
		params.SortType = SortType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortIndex_Item(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Item");
		
		UInventoryFunctionLibrary_C_GetInventorySortIndex_Item_Params params {};
		params.SortType = SortType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                SortList1                                                  (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortName_Weapon(class UObject* __WorldContext, TArray<class FName>* SortList1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Weapon");
		
		UInventoryFunctionLibrary_C_GetInventorySortName_Weapon_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortList1 != nullptr)
			*SortList1 = params.SortList1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Equipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                SortList1                                                  (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortName_Equipment(class UObject* __WorldContext, TArray<class FName>* SortList1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Equipment");
		
		UInventoryFunctionLibrary_C_GetInventorySortName_Equipment_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortList1 != nullptr)
			*SortList1 = params.SortList1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_NoLv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                SortList1                                                  (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortName_NoLv(class UObject* __WorldContext, TArray<class FName>* SortList1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_NoLv");
		
		UInventoryFunctionLibrary_C_GetInventorySortName_NoLv_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortList1 != nullptr)
			*SortList1 = params.SortList1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Plug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                SortList1                                                  (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortName_Plug(class UObject* __WorldContext, TArray<class FName>* SortList1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Plug");
		
		UInventoryFunctionLibrary_C_GetInventorySortName_Plug_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortList1 != nullptr)
			*SortList1 = params.SortList1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                SortList1                                                  (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortName_Item(class UObject* __WorldContext, TArray<class FName>* SortList1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Item");
		
		UInventoryFunctionLibrary_C_GetInventorySortName_Item_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortList1 != nullptr)
			*SortList1 = params.SortList1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModeNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortRule(int32_t SelectIndex, int32_t ModeNum, class UObject* __WorldContext, ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule");
		
		UInventoryFunctionLibrary_C_GetInventorySortRule_Params params {};
		params.SelectIndex = SelectIndex;
		params.ModeNum = ModeNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortRuleWeapon(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Weapon");
		
		UInventoryFunctionLibrary_C_GetInventorySortRuleWeapon_Params params {};
		params.SelectIndex = SelectIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Equipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortRuleEquipment(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Equipment");
		
		UInventoryFunctionLibrary_C_GetInventorySortRuleEquipment_Params params {};
		params.SelectIndex = SelectIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortRuleNoLv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortRuleNoLv(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortRuleNoLv");
		
		UInventoryFunctionLibrary_C_GetInventorySortRuleNoLv_Params params {};
		params.SelectIndex = SelectIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Plug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortRulePlug(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Plug");
		
		UInventoryFunctionLibrary_C_GetInventorySortRulePlug_Params params {};
		params.SelectIndex = SelectIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetInventorySortRuleItem(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Item");
		
		UInventoryFunctionLibrary_C_GetInventorySortRuleItem_Params params {};
		params.SelectIndex = SelectIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetWeaponStickerRemoveItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutItemName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetWeaponStickerRemoveItemName(class UObject* __WorldContext, class FString* OutItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetWeaponStickerRemoveItemName");
		
		UInventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemName != nullptr)
			*OutItemName = params.OutItemName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.FindWeaponDataInEquipmentBagOrCharacterStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBWeaponItemData                           WeaponData                                                 (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::FindWeaponDataInEquipmentBagOrCharacterStorage(const class FString& InWeaponUniqueId, class UObject* __WorldContext, bool* IsValid, struct FSBWeaponItemData* WeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.FindWeaponDataInEquipmentBagOrCharacterStorage");
		
		UInventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (WeaponData != nullptr)
			*WeaponData = params.WeaponData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CollapsedGridSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  GridPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::CollapsedGridSlot(class UGridPanel* GridPanel, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CollapsedGridSlot");
		
		UInventoryFunctionLibrary_C_CollapsedGridSlot_Params params {};
		params.GridPanel = GridPanel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsItemNotSale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NotSale                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::IsItemNotSale(int32_t ItemIndex, EItemType ItemType, class UObject* __WorldContext, bool* NotSale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsItemNotSale");
		
		UInventoryFunctionLibrary_C_IsItemNotSale_Params params {};
		params.ItemIndex = ItemIndex;
		params.ItemType = ItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotSale != nullptr)
			*NotSale = params.NotSale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateDelayAddGridItemIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  ParentGridPanel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CreateNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MatricesNam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MagineintervalTop                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MagineintervalLeft                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsImagineSimpleTooltip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsToolTipEnable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRightClickAccept                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::CreateDelayAddGridItemIconBtn(class UGridPanel* ParentGridPanel, int32_t CreateNum, int32_t MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateDelayAddGridItemIconBtn");
		
		UInventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn_Params params {};
		params.ParentGridPanel = ParentGridPanel;
		params.CreateNum = CreateNum;
		params.MatricesNam = MatricesNam;
		params.MagineintervalTop = MagineintervalTop;
		params.MagineintervalLeft = MagineintervalLeft;
		params.IsImagineSimpleTooltip = IsImagineSimpleTooltip;
		params.IsToolTipEnable = IsToolTipEnable;
		params.bIsRightClickAccept = bIsRightClickAccept;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CheckAllowUseOtherItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemMasterData                             TargetMasterData1                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanUseItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::CheckAllowUseOtherItem(const struct FItemMasterData& TargetMasterData1, class UObject* __WorldContext, bool* CanUseItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CheckAllowUseOtherItem");
		
		UInventoryFunctionLibrary_C_CheckAllowUseOtherItem_Params params {};
		params.TargetMasterData1 = TargetMasterData1;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUseItem != nullptr)
			*CanUseItem = params.CanUseItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUseCheckOutBuffItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NeedToCheck                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::IsUseCheckOutBuffItem(int32_t ItemId, class UObject* __WorldContext, bool* NeedToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUseCheckOutBuffItem");
		
		UInventoryFunctionLibrary_C_IsUseCheckOutBuffItem_Params params {};
		params.ItemId = ItemId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedToCheck != nullptr)
			*NeedToCheck = params.NeedToCheck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is BPPChange Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bChange                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::IsBPPChangeItem(int32_t ItemId, EItemType InItemType, class UObject* __WorldContext, bool* bChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is BPPChange Item");
		
		UInventoryFunctionLibrary_C_IsBPPChangeItem_Params params {};
		params.ItemId = ItemId;
		params.InItemType = InItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bChange != nullptr)
			*bChange = params.bChange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUsedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUse                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::IsUsedItem(const class FString& InUniqueId, int32_t InStorageNumber, EItemType InItemType, class UObject* __WorldContext, bool* bUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUsedItem");
		
		UInventoryFunctionLibrary_C_IsUsedItem_Params params {};
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		params.InItemType = InItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUse != nullptr)
			*bUse = params.bUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSellItemUpRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rare                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetSellItemUpRate(class UObject* __WorldContext, float* Rare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSellItemUpRate");
		
		UInventoryFunctionLibrary_C_GetSellItemUpRate_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rare != nullptr)
			*Rare = params.Rare;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Imagine Park Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ParkName                                                   (Parm, OutParm)
	 * 		class FText                                        EffectValue                                                (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetImagineParkData(int32_t PerkId, class UObject* __WorldContext, bool* Result, class FText* ParkName, class FText* EffectValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Imagine Park Data");
		
		UInventoryFunctionLibrary_C_GetImagineParkData_Params params {};
		params.PerkId = PerkId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (ParkName != nullptr)
			*ParkName = params.ParkName;
		if (EffectValue != nullptr)
			*EffectValue = params.EffectValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Use Item Window Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUseItemWindowType                                 WindowType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Valu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetUseItemWindowType(int32_t ItemIndex, class UObject* __WorldContext, EUseItemWindowType* WindowType, int32_t* Valu, int32_t* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Use Item Window Type");
		
		UInventoryFunctionLibrary_C_GetUseItemWindowType_Params params {};
		params.ItemIndex = ItemIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WindowType != nullptr)
			*WindowType = params.WindowType;
		if (Valu != nullptr)
			*Valu = params.Valu;
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is Lock Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLock                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::IsLockItem(const class FString& InItemUniqueId, int32_t StorageNumber, EItemType InItemType, class UObject* __WorldContext, bool* bLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is Lock Item");
		
		UInventoryFunctionLibrary_C_IsLockItem_Params params {};
		params.InItemUniqueId = InItemUniqueId;
		params.StorageNumber = StorageNumber;
		params.InItemType = InItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLock != nullptr)
			*bLock = params.bLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.StorageSortRuleToItemSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      StorageSortRule                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    ItemSortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::StorageSortRuleToItemSortType(unsigned char StorageSortRule, class UObject* __WorldContext, ESBItemSortType* ItemSortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.StorageSortRuleToItemSortType");
		
		UInventoryFunctionLibrary_C_StorageSortRuleToItemSortType_Params params {};
		params.StorageSortRule = StorageSortRule;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemSortType != nullptr)
			*ItemSortType = params.ItemSortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.ItemSortTypeToStorageSortRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    ItemSortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      StorageSortRule                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::ItemSortTypeToStorageSortRule(ESBItemSortType ItemSortType, class UObject* __WorldContext, unsigned char* StorageSortRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.ItemSortTypeToStorageSortRule");
		
		UInventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule_Params params {};
		params.ItemSortType = ItemSortType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StorageSortRule != nullptr)
			*StorageSortRule = params.StorageSortRule;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Item Player Sale Price 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUseLiquidMemory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetItemPlayerSalePrice(int32_t ItemIndex, EItemType ItemType, bool IsUseLiquidMemory, class UObject* __WorldContext, int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Item Player Sale Price ");
		
		UInventoryFunctionLibrary_C_GetItemPlayerSalePrice_Params params {};
		params.ItemIndex = ItemIndex;
		params.ItemType = ItemType;
		params.IsUseLiquidMemory = IsUseLiquidMemory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSpecialEffectText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SpecialParkID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SpecialPerkValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SpecialName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        SpecialValue                                               (Parm, OutParm)
	 * 		int32_t                                            SpecialIntValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Dest                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PerkName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::SetSpecialEffectText(int32_t WeaponID, int32_t Level, int32_t SpecialParkID, int32_t SpecialPerkValue, class UObject* __WorldContext, class FString* SpecialName, class FText* SpecialValue, int32_t* SpecialIntValue, class FString* Dest, class FString* PerkName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSpecialEffectText");
		
		UInventoryFunctionLibrary_C_SetSpecialEffectText_Params params {};
		params.WeaponID = WeaponID;
		params.Level = Level;
		params.SpecialParkID = SpecialParkID;
		params.SpecialPerkValue = SpecialPerkValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecialName != nullptr)
			*SpecialName = params.SpecialName;
		if (SpecialValue != nullptr)
			*SpecialValue = params.SpecialValue;
		if (SpecialIntValue != nullptr)
			*SpecialIntValue = params.SpecialIntValue;
		if (Dest != nullptr)
			*Dest = params.Dest;
		if (PerkName != nullptr)
			*PerkName = params.PerkName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLevel                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Ap                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Cp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  STR                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  VIT                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  DEX                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  INT                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  MND                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Attribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Special                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::SetWeaponStatusText(int32_t InWeaponID, int32_t InLevel, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusText");
		
		UInventoryFunctionLibrary_C_SetWeaponStatusText_Params params {};
		params.InWeaponID = InWeaponID;
		params.InLevel = InLevel;
		params.Ap = Ap;
		params.Cp = Cp;
		params.STR = STR;
		params.VIT = VIT;
		params.DEX = DEX;
		params.INT = INT;
		params.MND = MND;
		params.Attribute = Attribute;
		params.Special = Special;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFindWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBWeaponItemData                           WeaponData                                                 (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::GetFindWeaponData(const class FString& UniqueId, int32_t StorageNumber, class UObject* __WorldContext, struct FSBWeaponItemData* WeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFindWeaponData");
		
		UInventoryFunctionLibrary_C_GetFindWeaponData_Params params {};
		params.UniqueId = UniqueId;
		params.StorageNumber = StorageNumber;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponData != nullptr)
			*WeaponData = params.WeaponData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetImagineSlotNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::GetImagineSlotNumber(const struct FSBMasterImagine& MasterImagine, class UObject* __WorldContext, int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetImagineSlotNumber");
		
		UInventoryFunctionLibrary_C_GetImagineSlotNumber_Params params {};
		params.MasterImagine = MasterImagine;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Add Plus Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Return                                                     (Parm, OutParm)
	 */
	void UInventoryFunctionLibrary_C::AddPlusText(int32_t Num, class UObject* __WorldContext, class FText* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Add Plus Text");
		
		UInventoryFunctionLibrary_C_AddPlusText_Params params {};
		params.Num = Num;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindSaveItemMoveToStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::UnbindSaveItemMoveToStorage(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindSaveItemMoveToStorage");
		
		UInventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemMoveToStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FInventoryItemData                          InventoryItemData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::RequestSaveItemMoveToStorage(const class FScriptDelegate& Event, const struct FInventoryItemData& InventoryItemData, int32_t StorageNumber, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemMoveToStorage");
		
		UInventoryFunctionLibrary_C_RequestSaveItemMoveToStorage_Params params {};
		params.Event = Event;
		params.InventoryItemData = InventoryItemData;
		params.StorageNumber = StorageNumber;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindRequestSaveItemDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::UnbindRequestSaveItemDrop(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindRequestSaveItemDrop");
		
		UInventoryFunctionLibrary_C_UnbindRequestSaveItemDrop_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FInventoryItemData                          InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            DumpNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::RequestSaveItemDrop(const class FScriptDelegate& Event, const struct FInventoryItemData& InventoryItem, int32_t DumpNum, class UObject* __WorldContext, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemDrop");
		
		UInventoryFunctionLibrary_C_RequestSaveItemDrop_Params params {};
		params.Event = Event;
		params.InventoryItem = InventoryItem;
		params.DumpNum = DumpNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UpdateItemLockaVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::UpdateItemLockaVisibility(class UGridPanel* InventorySlot, const class FString& UniqueId, bool bIsVisibility, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UpdateItemLockaVisibility");
		
		UInventoryFunctionLibrary_C_UpdateItemLockaVisibility_Params params {};
		params.InventorySlot = InventorySlot;
		params.UniqueId = UniqueId;
		params.bIsVisibility = bIsVisibility;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindItemLockDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::UnbindItemLockDelegate(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindItemLockDelegate");
		
		UInventoryFunctionLibrary_C_UnbindItemLockDelegate_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Set Item Lock Save
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBLockItemData                             LockItemData                                               (Parm, OutParm)
	 * 		bool                                               bIsItemLock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::SetItemLockSave(const class FScriptDelegate& InputPin, const class FString& UniqueId, int32_t StorageNumber, EItemType InItemType, class UObject* __WorldContext, struct FSBLockItemData* LockItemData, bool* bIsItemLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Set Item Lock Save");
		
		UInventoryFunctionLibrary_C_SetItemLockSave_Params params {};
		params.InputPin = InputPin;
		params.UniqueId = UniqueId;
		params.StorageNumber = StorageNumber;
		params.InItemType = InItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LockItemData != nullptr)
			*LockItemData = params.LockItemData;
		if (bIsItemLock != nullptr)
			*bIsItemLock = params.bIsItemLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetCaptureStudioEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_CaptureStudio_C*                        CaptureStudioWeapon                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_CaptureStudio_C*                        CaptureStudioCostume                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_CaptureStudio_C*                        CaptureStudioImagine                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_CaptureStudio_C*                        CaptureStudioMountImagine                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_CaptureStudio_C*                        CaptureStudioOrnament                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::SetCaptureStudioEnable(class UUMG_CaptureStudio_C* CaptureStudioWeapon, class UUMG_CaptureStudio_C* CaptureStudioCostume, class UUMG_CaptureStudio_C* CaptureStudioImagine, class UUMG_CaptureStudio_C* CaptureStudioMountImagine, class UUMG_CaptureStudio_C* CaptureStudioOrnament, EItemType ItemType, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetCaptureStudioEnable");
		
		UInventoryFunctionLibrary_C_SetCaptureStudioEnable_Params params {};
		params.CaptureStudioWeapon = CaptureStudioWeapon;
		params.CaptureStudioCostume = CaptureStudioCostume;
		params.CaptureStudioImagine = CaptureStudioImagine;
		params.CaptureStudioMountImagine = CaptureStudioMountImagine;
		params.CaptureStudioOrnament = CaptureStudioOrnament;
		params.ItemType = ItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.EmptyGridSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  GridPanel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::EmptyGridSlot(class UGridPanel* GridPanel, int32_t SlotNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.EmptyGridSlot");
		
		UInventoryFunctionLibrary_C_EmptyGridSlot_Params params {};
		params.GridPanel = GridPanel;
		params.SlotNum = SlotNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Create Add Grid Item Icon Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  ParentGridPanel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FirstIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CreateNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MatricesNam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MagineintervalTop                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MagineintervalLeft                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsImagineSimpleTooltip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsToolTipEnable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsRightClickAccept                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BaseSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OverSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryFunctionLibrary_C::CreateAddGridItemIconBtn(class UGridPanel* ParentGridPanel, int32_t FirstIndex, int32_t CreateNum, int32_t MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, float BaseSize, float OverSize, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Create Add Grid Item Icon Btn");
		
		UInventoryFunctionLibrary_C_CreateAddGridItemIconBtn_Params params {};
		params.ParentGridPanel = ParentGridPanel;
		params.FirstIndex = FirstIndex;
		params.CreateNum = CreateNum;
		params.MatricesNam = MatricesNam;
		params.MagineintervalTop = MagineintervalTop;
		params.MagineintervalLeft = MagineintervalLeft;
		params.IsImagineSimpleTooltip = IsImagineSimpleTooltip;
		params.IsToolTipEnable = IsToolTipEnable;
		params.bIsRightClickAccept = bIsRightClickAccept;
		params.BaseSize = BaseSize;
		params.OverSize = OverSize;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateInventoryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              InventoryData                                              (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               IsSuccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryFunctionLibrary_C::CreateInventoryData(const struct FOwnItemInfo& OwnItemInfo, class UObject* __WorldContext, struct FInventoryData* InventoryData, bool* IsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateInventoryData");
		
		UInventoryFunctionLibrary_C_CreateInventoryData_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryData != nullptr)
			*InventoryData = params.InventoryData;
		if (IsSuccess != nullptr)
			*IsSuccess = params.IsSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InventoryFunctionLibrary.InventoryFunctionLibrary_C");
		return ptr;
	}

}


