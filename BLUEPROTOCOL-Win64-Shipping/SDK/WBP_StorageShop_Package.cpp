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
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Updeta Ornament Visual
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UpdetaOrnamentVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Updeta Ornament Visual");
		
		UWBP_StorageShop_C_UpdetaOrnamentVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.GetCategoryModeName
	 * 		Flags  -> ()
	 */
	class FName UWBP_StorageShop_C::GetCategoryModeName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.GetCategoryModeName");
		
		UWBP_StorageShop_C_GetCategoryModeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.GetStorageNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::GetStorageNum(int32_t* Num, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.GetStorageNum");
		
		UWBP_StorageShop_C_GetStorageNum_Params params {};
		
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
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SelectItemSwapData
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::SelectItemSwapData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SelectItemSwapData");
		
		UWBP_StorageShop_C_SelectItemSwapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Storage List Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ScrollReset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::StorageListUpdate(bool ScrollReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Storage List Update");
		
		UWBP_StorageShop_C_StorageListUpdate_Params params {};
		params.ScrollReset = ScrollReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Get Sort Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeNum                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::GetSortMode(int32_t* ModeNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Get Sort Mode");
		
		UWBP_StorageShop_C_GetSortMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeNum != nullptr)
			*ModeNum = params.ModeNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.GetSortRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::GetSortRule(ESBItemSortType* SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.GetSortRule");
		
		UWBP_StorageShop_C_GetSortRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortType != nullptr)
			*SortType = params.SortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Update Key Guide Text
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UpdateKeyGuideText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Update Key Guide Text");
		
		UWBP_StorageShop_C_UpdateKeyGuideText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Create Use Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBStorageItemData>                  DataList                                                   (Parm, OutParm)
	 */
	void UWBP_StorageShop_C::CreateUseData(int32_t Amount, TArray<struct FSBStorageItemData>* DataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Create Use Data");
		
		UWBP_StorageShop_C_CreateUseData_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataList != nullptr)
			*DataList = params.DataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.FindInventoryDataFromUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              OutInventoryData                                           (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::FindInventoryDataFromUniqueId(const class FString& InUniqueId, struct FInventoryData* OutInventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.FindInventoryDataFromUniqueId");
		
		UWBP_StorageShop_C_FindInventoryDataFromUniqueId_Params params {};
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
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.GetIconPtr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UItemIconBtn_C*                              AsItemIconBtn                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInventory                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NotHave                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::GetIconPtr(const struct FInventoryItemData& InventoryItemData, class UItemIconBtn_C** AsItemIconBtn, bool* bInventory, bool* NotHave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.GetIconPtr");
		
		UWBP_StorageShop_C_GetIconPtr_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsItemIconBtn != nullptr)
			*AsItemIconBtn = params.AsItemIconBtn;
		if (bInventory != nullptr)
			*bInventory = params.bInventory;
		if (NotHave != nullptr)
			*NotHave = params.NotHave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.IsDownMultipleSelection
	 * 		Flags  -> ()
	 */
	bool UWBP_StorageShop_C::IsDownMultipleSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.IsDownMultipleSelection");
		
		UWBP_StorageShop_C_IsDownMultipleSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Set Icon Select Items
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAdd                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::SetIconSelectItems(class UItemIconBtn_C* InputPin, bool* bAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Set Icon Select Items");
		
		UWBP_StorageShop_C_SetIconSelectItems_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAdd != nullptr)
			*bAdd = params.bAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SearchInventoryItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStorageGridType                                   Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemIconBtn_C*                              Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              OutputPin                                                  (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::SearchInventoryItemData(EStorageGridType Index, class UItemIconBtn_C* Target, struct FInventoryData* OutputPin, bool* enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SearchInventoryItemData");
		
		UWBP_StorageShop_C_SearchInventoryItemData_Params params {};
		params.Index = Index;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
		if (enable != nullptr)
			*enable = params.enable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Filter_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UWBP_StorageShop_C::On_ComboBoxString_Filter_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Filter_GenerateWidget_1");
		
		UWBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Sort_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UWBP_StorageShop_C::On_ComboBoxString_Sort_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Sort_GenerateWidget_1");
		
		UWBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.GetItemListContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStorageGridType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBOwnItemListContainer* UWBP_StorageShop_C::GetItemListContainer(EStorageGridType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.GetItemListContainer");
		
		UWBP_StorageShop_C_GetItemListContainer_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Get Inventory Brunch
	 * 		Flags  -> ()
	 */
	class USBOwnItemListContainer* UWBP_StorageShop_C::GetInventoryBrunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Get Inventory Brunch");
		
		UWBP_StorageShop_C_GetInventoryBrunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation2
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::RandomPlayAnimation2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation2");
		
		UWBP_StorageShop_C_RandomPlayAnimation2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::RandomPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation");
		
		UWBP_StorageShop_C_RandomPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Updete Item Slot List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESelectItemCategoryMode                            SelectItemCategoryMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::UpdeteItemSlotList(ESelectItemCategoryMode SelectItemCategoryMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Updete Item Slot List");
		
		UWBP_StorageShop_C_UpdeteItemSlotList_Params params {};
		params.SelectItemCategoryMode = SelectItemCategoryMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Get Filter Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    FilterType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::GetFilterType(EItemFilterType* FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Get Filter Type");
		
		UWBP_StorageShop_C_GetFilterType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterType != nullptr)
			*FilterType = params.FilterType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ItemClickEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::ItemClickEnter(const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ItemClickEnter");
		
		UWBP_StorageShop_C_ItemClickEnter_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Timeout
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::Timeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Timeout");
		
		UWBP_StorageShop_C_Timeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.AssetLoadComplete
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::AssetLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.AssetLoadComplete");
		
		UWBP_StorageShop_C_AssetLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CloseDescription
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::CloseDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CloseDescription");
		
		UWBP_StorageShop_C_CloseDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UpdateItemNums
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KeepPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::UpdateItemNums(bool KeepPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UpdateItemNums");
		
		UWBP_StorageShop_C_UpdateItemNums_Params params {};
		params.KeepPage = KeepPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UpdateFilterButton
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UpdateFilterButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UpdateFilterButton");
		
		UWBP_StorageShop_C_UpdateFilterButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.IconAllSelectfalse
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::IconAllSelectfalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.IconAllSelectfalse");
		
		UWBP_StorageShop_C_IconAllSelectfalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SetSlotSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UGridPanel*                                  InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::SetSlotSelect(bool IsSelected, class UGridPanel* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SetSlotSelect");
		
		UWBP_StorageShop_C_SetSlotSelect_Params params {};
		params.IsSelected = IsSelected;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OmPressItem_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EStorageGridType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OmPressItem_Internal(class UItemIconBtn_C* SelectItem, EStorageGridType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OmPressItem_Internal");
		
		UWBP_StorageShop_C_OmPressItem_Internal_Params params {};
		params.SelectItem = SelectItem;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnMultipleSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EStorageGridType                                   LastClickGridType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnMultipleSelection(class UItemIconBtn_C* InputPin, EStorageGridType LastClickGridType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnMultipleSelection");
		
		UWBP_StorageShop_C_OnMultipleSelection_Params params {};
		params.InputPin = InputPin;
		params.LastClickGridType = LastClickGridType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UpdetaStorageMultipleSalesaAnothe
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UpdetaStorageMultipleSalesaAnothe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UpdetaStorageMultipleSalesaAnothe");
		
		UWBP_StorageShop_C_UpdetaStorageMultipleSalesaAnothe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ItemLock
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::ItemLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ItemLock");
		
		UWBP_StorageShop_C_ItemLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ItemDrop
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::ItemDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ItemDrop");
		
		UWBP_StorageShop_C_ItemDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.MoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToStorage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::MoveItem(bool ToStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.MoveItem");
		
		UWBP_StorageShop_C_MoveItem_Params params {};
		params.ToStorage = ToStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SaleItem
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::SaleItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SaleItem");
		
		UWBP_StorageShop_C_SaleItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ArrowAnimationStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToStorage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::ArrowAnimationStart(bool ToStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ArrowAnimationStart");
		
		UWBP_StorageShop_C_ArrowAnimationStart_Params params {};
		params.ToStorage = ToStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.MultipleSales
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::MultipleSales()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.MultipleSales");
		
		UWBP_StorageShop_C_MultipleSales_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ExecutionSale
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::ExecutionSale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ExecutionSale");
		
		UWBP_StorageShop_C_ExecutionSale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemLockCompleteDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBLockItemData>                     LockItemData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnSaveItemLockCompleteDelegate(bool Result, TArray<struct FSBLockItemData> LockItemData, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemLockCompleteDelegate");
		
		UWBP_StorageShop_C_OnSaveItemLockCompleteDelegate_Params params {};
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
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::CustomEvent_3(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_3");
		
		UWBP_StorageShop_C_CustomEvent_3_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_2(ENumberInputDialogResult InResult, int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_2");
		
		UWBP_StorageShop_C_CustomEvent_2_Params params {};
		params.InResult = InResult;
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SellItemSingleSetting
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::SellItemSingleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SellItemSingleSetting");
		
		UWBP_StorageShop_C_SellItemSingleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnSliderChangeTextUpdeta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNumberInputDialog_C*                        CallerDialg                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnSliderChangeTextUpdeta(int32_t Value, class UNumberInputDialog_C* CallerDialg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnSliderChangeTextUpdeta");
		
		UWBP_StorageShop_C_OnSliderChangeTextUpdeta_Params params {};
		params.Value = Value;
		params.CallerDialg = CallerDialg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_5(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_5");
		
		UWBP_StorageShop_C_CustomEvent_5_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_4(ENumberInputDialogResult InResult, int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_4");
		
		UWBP_StorageShop_C_CustomEvent_4_Params params {};
		params.InResult = InResult;
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_9(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_9");
		
		UWBP_StorageShop_C_CustomEvent_9_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SellItemMultiSetting
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::SellItemMultiSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SellItemMultiSetting");
		
		UWBP_StorageShop_C_SellItemMultiSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_8(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_8");
		
		UWBP_StorageShop_C_CustomEvent_8_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemStorage");
		
		UWBP_StorageShop_C_OnSaveItemStorage_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_1(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_1");
		
		UWBP_StorageShop_C_CustomEvent_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnHideDeligate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnHideDeligate(ENumberInputDialogResult InResult, int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnHideDeligate");
		
		UWBP_StorageShop_C_OnHideDeligate_Params params {};
		params.InResult = InResult;
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SaveSortRule
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::SaveSortRule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SaveSortRule");
		
		UWBP_StorageShop_C_SaveSortRule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.MoveItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToStorage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::MoveItems(bool ToStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.MoveItems");
		
		UWBP_StorageShop_C_MoveItems_Params params {};
		params.ToStorage = ToStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::CustomEvent_6(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_6");
		
		UWBP_StorageShop_C_CustomEvent_6_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.MoveAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::MoveAfter(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.MoveAfter");
		
		UWBP_StorageShop_C_MoveAfter_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SwitchMultipleSelection
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::SwitchMultipleSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SwitchMultipleSelection");
		
		UWBP_StorageShop_C_SwitchMultipleSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::CustomEvent_10(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_10");
		
		UWBP_StorageShop_C_CustomEvent_10_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.TrashItem
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::TrashItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.TrashItem");
		
		UWBP_StorageShop_C_TrashItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_11(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_11");
		
		UWBP_StorageShop_C_CustomEvent_11_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SendSaveItemsDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBStorageItemData>                  InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::SendSaveItemsDrop(TArray<struct FSBStorageItemData>* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SendSaveItemsDrop");
		
		UWBP_StorageShop_C_SendSaveItemsDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputPin != nullptr)
			*InputPin = params.InputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.DropCheck
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::DropCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.DropCheck");
		
		UWBP_StorageShop_C_DropCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.RequestWeaponModelLoadFromWeaponStickerInUseButtonInput
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::RequestWeaponModelLoadFromWeaponStickerInUseButtonInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.RequestWeaponModelLoadFromWeaponStickerInUseButtonInput");
		
		UWBP_StorageShop_C_RequestWeaponModelLoadFromWeaponStickerInUseButtonInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ItemUse
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::ItemUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ItemUse");
		
		UWBP_StorageShop_C_ItemUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UseExp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::UseExp(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UseExp");
		
		UWBP_StorageShop_C_UseExp_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ItemUseAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::ItemUseAfter(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ItemUseAfter");
		
		UWBP_StorageShop_C_ItemUseAfter_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_ItemBox_C*                              ItemBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_7(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_7");
		
		UWBP_StorageShop_C_CustomEvent_7_Params params {};
		params.NewParam = NewParam;
		params.ItemBox = ItemBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBStorageItemBoxResultData                 InItemBoxResultData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::CustomEvent_13(int32_t InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_13");
		
		UWBP_StorageShop_C_CustomEvent_13_Params params {};
		params.InRetCode = InRetCode;
		params.InItemBoxResultData = InItemBoxResultData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UseItemBox
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UseItemBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UseItemBox");
		
		UWBP_StorageShop_C_UseItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::CustomEvent_14(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_14");
		
		UWBP_StorageShop_C_CustomEvent_14_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryItemData                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_15(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_15");
		
		UWBP_StorageShop_C_CustomEvent_15_Params params {};
		params.InResult = InResult;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UseWeaponSticker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAppearanceWeaponSticker                    InWeaponStickerInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class FString                                      InWeaponStickerUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::UseWeaponSticker(const struct FAppearanceWeaponSticker& InWeaponStickerInfo, const class FString& InWeaponStickerUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UseWeaponSticker");
		
		UWBP_StorageShop_C_UseWeaponSticker_Params params {};
		params.InWeaponStickerInfo = InWeaponStickerInfo;
		params.InWeaponStickerUniqueId = InWeaponStickerUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDecideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSelectedWeaponUniqueItemId                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnUseWeaponStickerDecideEvent(const class FString& InSelectedWeaponUniqueItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDecideEvent");
		
		UWBP_StorageShop_C_OnUseWeaponStickerDecideEvent_Params params {};
		params.InSelectedWeaponUniqueItemId = InSelectedWeaponUniqueItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerWeaponSelectWindowHideEndEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHideWindowCalledByDecide                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::OnWeaponStickerWeaponSelectWindowHideEndEvent(bool InIsHideWindowCalledByDecide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerWeaponSelectWindowHideEndEvent");
		
		UWBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent_Params params {};
		params.InIsHideWindowCalledByDecide = InIsHideWindowCalledByDecide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerRemoveDecideEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStickerDiscardSelected                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::OnWeaponStickerRemoveDecideEvent(bool InIsStickerDiscardSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerRemoveDecideEvent");
		
		UWBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent_Params params {};
		params.InIsStickerDiscardSelected = InIsStickerDiscardSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerRemoveWindowHideEnd
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::OnWeaponStickerRemoveWindowHideEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerRemoveWindowHideEnd");
		
		UWBP_StorageShop_C_OnWeaponStickerRemoveWindowHideEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDelegateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InStickerUsedWeaponUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsExpiredStickerWeapons                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBWeaponItemData>                   InExpiredStickerWeaponItemDatas                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::OnUseWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerUsedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDelegateEvent");
		
		UWBP_StorageShop_C_OnUseWeaponStickerDelegateEvent_Params params {};
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
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnRemoveWeaponStickerDelegateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InStickerRemovedWeaponUniqueId                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsExpiredStickerWeapons                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBWeaponItemData>                   InExpiredStickerWeaponItemDatas                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::OnRemoveWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerRemovedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnRemoveWeaponStickerDelegateEvent");
		
		UWBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent_Params params {};
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
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.EndSystemMessage
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::EndSystemMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.EndSystemMessage");
		
		UWBP_StorageShop_C_EndSystemMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ShowExpiredWeaponStickerSystemMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      InEquippedWeaponUniqueId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InActivateWeaponModelRotate                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::ShowExpiredWeaponStickerSystemMessage(TArray<class FString> InExpiredStickerWeaponUniqueIds, const class FString& InEquippedWeaponUniqueId, bool InActivateWeaponModelRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ShowExpiredWeaponStickerSystemMessage");
		
		UWBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage_Params params {};
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
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStickerAttachedWeaponUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog(const class FString& InStickerAttachedWeaponUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog");
		
		UWBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog_Params params {};
		params.InStickerAttachedWeaponUniqueId = InStickerAttachedWeaponUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UiInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::UiInputBlock(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UiInputBlock");
		
		UWBP_StorageShop_C_UiInputBlock_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Update_LiquidMemoryActive
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::Update_LiquidMemoryActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Update_LiquidMemoryActive");
		
		UWBP_StorageShop_C_Update_LiquidMemoryActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_StorageShop_C::BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.DestWeaponStickerEvents
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::DestWeaponStickerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.DestWeaponStickerEvents");
		
		UWBP_StorageShop_C_DestWeaponStickerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.DetailView
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::DetailView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.DetailView");
		
		UWBP_StorageShop_C_DetailView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnCloseDetailMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnCloseDetailMenu");
		
		UWBP_StorageShop_C_OnCloseDetailMenu_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnOwnItemAmountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChangeItemAmountParam                    InParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::OnOwnItemAmountChanged(const struct FSBChangeItemAmountParam& InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnOwnItemAmountChanged");
		
		UWBP_StorageShop_C_OnOwnItemAmountChanged_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CheckWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNumber                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          Tipe                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CheckWarning(const class FString& UniqueId, int32_t StorageNumber, EItemType Tipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CheckWarning");
		
		UWBP_StorageShop_C_CheckWarning_Params params {};
		params.UniqueId = UniqueId;
		params.StorageNumber = StorageNumber;
		params.Tipe = Tipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_16(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_16");
		
		UWBP_StorageShop_C_CustomEvent_16_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_17
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_17(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_17");
		
		UWBP_StorageShop_C_CustomEvent_17_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_18(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_18");
		
		UWBP_StorageShop_C_CustomEvent_18_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_19
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_19(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_19");
		
		UWBP_StorageShop_C_CustomEvent_19_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UseLeve
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UseLeve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UseLeve");
		
		UWBP_StorageShop_C_UseLeve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_20
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::CustomEvent_20(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_20");
		
		UWBP_StorageShop_C_CustomEvent_20_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.WBP_ExpIncreaseEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::WBP_ExpIncreaseEnd(ENumberInputDialogResult InResult, int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.WBP_ExpIncreaseEnd");
		
		UWBP_StorageShop_C_WBP_ExpIncreaseEnd_Params params {};
		params.InResult = InResult;
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SetLevelAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_ExpIncrease_C*                          CallerDialg                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::SetLevelAfter(int32_t Value, class UWBP_ExpIncrease_C* CallerDialg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SetLevelAfter");
		
		UWBP_StorageShop_C_SetLevelAfter_Params params {};
		params.Value = Value;
		params.CallerDialg = CallerDialg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnPress_Cancel");
		
		UWBP_StorageShop_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              ButtonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(EDescripionButtonType ButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature_Params params {};
		params.ButtonType = ButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              OnItemClick                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature(const struct FInventoryData& OnItemClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature_Params params {};
		params.OnItemClick = OnItemClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShopCmnBtn1_C*                              ClickBtn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature_Params params {};
		params.ClickBtn = ClickBtn;
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShopCmnBtn1_C*                              ClickBtn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature_Params params {};
		params.ClickBtn = ClickBtn;
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2");
		
		UWBP_StorageShop_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTotalPrice                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature(int32_t InTotalPrice, TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature_Params params {};
		params.InTotalPrice = InTotalPrice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature(const struct FInventoryData& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageShop_C::BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnPressItem_Inventory(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Inventory");
		
		UWBP_StorageShop_C_OnPressItem_Inventory_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Storage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnPressItem_Storage(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Storage");
		
		UWBP_StorageShop_C_OnPressItem_Storage_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnPressRight_Inventory(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Inventory");
		
		UWBP_StorageShop_C_OnPressRight_Inventory_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Storage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::OnPressRight_Storage(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Storage");
		
		UWBP_StorageShop_C_OnPressRight_Storage_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsInUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params params {};
		params.InIsInUse = InIsInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.TryEnd
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::TryEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.TryEnd");
		
		UWBP_StorageShop_C_TryEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CloseStorageMultipleSelectWindow
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::CloseStorageMultipleSelectWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CloseStorageMultipleSelectWindow");
		
		UWBP_StorageShop_C_CloseStorageMultipleSelectWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.IconScrollVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::IconScrollVisible(class UGridPanel* Slot, float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.IconScrollVisible");
		
		UWBP_StorageShop_C_IconScrollVisible_Params params {};
		params.Slot = Slot;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.SlotSelectRevival
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::SlotSelectRevival(class UGridPanel* Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.SlotSelectRevival");
		
		UWBP_StorageShop_C_SlotSelectRevival_Params params {};
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShopCmnBtn1_C*                              ClickBtn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature_Params params {};
		params.ClickBtn = ClickBtn;
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Construct");
		
		UWBP_StorageShop_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.Destruct");
		
		UWBP_StorageShop_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ResetGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStorageGridType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ScrollReset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::ResetGrid(EStorageGridType InType, bool ScrollReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ResetGrid");
		
		UWBP_StorageShop_C_ResetGrid_Params params {};
		params.InType = InType;
		params.ScrollReset = ScrollReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CreateComboBox
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::CreateComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CreateComboBox");
		
		UWBP_StorageShop_C_CreateComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.onAnimTimer
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::onAnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.onAnimTimer");
		
		UWBP_StorageShop_C_onAnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UWBP_StorageShop_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::CustomEvent_12(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_12");
		
		UWBP_StorageShop_C_CustomEvent_12_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.TryCreateStorageGridIcon
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::TryCreateStorageGridIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.TryCreateStorageGridIcon");
		
		UWBP_StorageShop_C_TryCreateStorageGridIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UpdateSortBox
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UpdateSortBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UpdateSortBox");
		
		UWBP_StorageShop_C_UpdateSortBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UpdatefilterBox
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::UpdatefilterBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UpdatefilterBox");
		
		UWBP_StorageShop_C_UpdatefilterBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.UpdetaPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               KeepPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::UpdetaPage(bool Visible, bool KeepPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.UpdetaPage");
		
		UWBP_StorageShop_C_UpdetaPage_Params params {};
		params.Visible = Visible;
		params.KeepPage = KeepPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32_t PageCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
		
		UWBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params params {};
		params.PageCurrent = PageCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageShop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.PreConstruct");
		
		UWBP_StorageShop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.ExecuteUbergraph_WBP_StorageShop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageShop_C::ExecuteUbergraph_WBP_StorageShop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.ExecuteUbergraph_WBP_StorageShop");
		
		UWBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageShop.WBP_StorageShop_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StorageShop_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageShop.WBP_StorageShop_C.OnClose__DelegateSignature");
		
		UWBP_StorageShop_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StorageShop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StorageShop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StorageShop.WBP_StorageShop_C");
		return ptr;
	}

}


